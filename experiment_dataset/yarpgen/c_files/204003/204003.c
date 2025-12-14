/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [8] = (min(((max((max(var_16, var_10)), (~var_14)))), (max(var_3, var_4))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_20 = (max(var_20, ((~(~var_16)))));
            var_21 ^= var_12;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_16 [13] [13] [i_2] [i_4] [4] [i_2] = -var_12;
                            var_22 = (--6937061095273879148);
                            var_23 = (!(!var_8));
                            var_24 = var_17;
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            arr_23 [i_5] [i_6] = var_8;
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_25 = (min((min((max(var_17, 0)), var_18)), var_0));
                        var_26 = var_2;
                        arr_30 [i_5] = (max(var_3, ((~((max(var_9, var_14)))))));
                        var_27 = (min(var_0, (((max(var_19, var_12))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_28 = var_11;
            var_29 = (min(var_29, var_6));
            var_30 = var_9;
        }
        arr_35 [i_5] = ((!(min((!var_12), (!var_8)))));
        arr_36 [i_5] = (min((max(var_15, var_2)), var_6));
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 10;i_12 += 1)
            {
                {
                    arr_48 [i_10] [0] [0] [i_12] |= (max(var_4, var_14));
                    var_31 = (min(var_31, (~29426675)));
                }
            }
        }
    }
    var_32 = (max((max(18446744073709551615, 1)), -var_18));
    #pragma endscop
}
