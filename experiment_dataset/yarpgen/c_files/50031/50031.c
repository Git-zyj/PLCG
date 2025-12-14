/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 16862;
    var_21 = 1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_22 = 0;
        arr_3 [i_0] = 2147450880;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = 1;
        arr_8 [i_1] = 18446744073709551598;
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = 1;

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    {
                        var_23 = 8720544587468203679;
                        var_24 = (max(var_24, 22463));
                        arr_19 [8] [i_3] [i_3] [i_3] [i_3] [i_2] = 7;
                    }
                }
            }

            for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_25 = 3;
                            var_26 = -2147450880;
                        }
                    }
                }
                arr_28 [i_2 + 1] [i_3 - 1] [i_6] |= 253;
                var_27 -= 0;
                var_28 = (max(var_28, 8720544587468203679));
                arr_29 [i_2] [i_3] [i_6] &= 4;
            }
            for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
            {
                var_29 = 9223372036854775803;
                arr_32 [9] [9] [i_9] = 0;
            }
            var_30 = (max(var_30, 225));
        }
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            var_31 = 4026531840;
            var_32 = -2147450879;
        }
        for (int i_11 = 1; i_11 < 12;i_11 += 1)
        {
            arr_38 [i_2] [i_11] = 2147450882;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 10;i_13 += 1)
                {
                    {
                        var_33 = 0;
                        var_34 += 0;
                    }
                }
            }
        }
    }
    for (int i_14 = 3; i_14 < 17;i_14 += 1)
    {
        var_35 = 0;
        var_36 = 0;
        var_37 = -1666423524;
        var_38 = 155;
    }
    var_39 = 1073741808;
    #pragma endscop
}
