/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (!var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    var_12 = 11;
                    var_13 = (~232);
                    var_14 = 8;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_15 = (arr_2 [i_0] [i_1]);
                    var_16 = (~var_2);
                    var_17 *= 3844036780;
                }
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    arr_11 [i_0] [i_0] [14] [i_0] = (~-12328);
                    var_18 = var_10;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [1] [0] [i_6] = (~-32763);
                                var_19 *= (~-12348);
                                var_20 &= 244;
                                arr_19 [8] [i_1] [i_1] [i_1] [i_1] &= 1881433099;
                                var_21 |= -1;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_22 = -160;
                    var_23 = 22383;
                    var_24 += (!-56);
                    arr_22 [i_0] = (~var_4);
                    arr_23 [7] [i_0 + 1] [i_0] [i_7] = ((~(arr_13 [i_0] [i_1] [i_1] [1] [i_1] [i_1])));
                }
                var_25 = ((!(!-2059528400)));
                var_26 = (arr_0 [i_0 - 1] [i_1]);
                var_27 = var_2;
            }
        }
    }

    for (int i_8 = 4; i_8 < 16;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_28 [i_8] [i_8] = (arr_24 [i_9] [i_8 - 4]);
            var_28 *= (~12327);
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        var_29 = (!2097151);
                        var_30 = (!var_4);
                    }
                }
            }
            arr_35 [i_8] [i_10] [i_8] = (~104);
            var_31 |= (((!(arr_27 [16] [i_10]))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            var_32 = (!-115);
            var_33 ^= var_1;
        }
        var_34 = var_10;
        var_35 += ((!(~1915430645)));
        var_36 = (~1915430660);
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        var_37 |= (!50331648);
        var_38 *= var_9;
    }
    #pragma endscop
}
