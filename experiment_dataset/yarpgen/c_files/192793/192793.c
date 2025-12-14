/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_1] [i_2] [1] = var_3;

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_13 [i_4] [i_2] [i_0] = (max(9223372036854775807, -20219));
                            var_19 = (((min((max(-9223372036854775807, 20218)), (arr_2 [i_4 - 1]))) - ((0 ? 5 : 9223372036854775806))));
                        }
                        arr_14 [i_0] [i_1] [0] [i_2] [12] [9] = (((((~(max(1, (arr_6 [i_0] [i_2] [i_1] [i_0])))))) ? (max(1, (arr_1 [i_0 - 1] [i_0 - 1]))) : var_1));
                        var_20 = (((-9223372036854775807 - 1) ? (arr_1 [i_2] [i_0]) : 20215));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_18 [i_5] [i_1] [i_2 + 1] [i_5] |= (max((~42906), ((23447 ? 0 : -20221))));
                        arr_19 [i_0 + 1] [i_0 + 1] [0] [i_5] [i_2] [11] = (!0);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_21 -= ((20208 * ((-20208 ? 0 : 22873))));
                        var_22 = ((-((126 ? 18446744073709551614 : 14795101968562427969))));
                        var_23 ^= var_3;
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            var_24 = var_7;
                            var_25 = (1084553726 + -878698732);
                            var_26 = ((((1016 ? var_7 : 3911257150)) & -20219));
                        }

                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            arr_30 [i_0] [i_1 - 2] [i_2] = (~6711067170316166632);
                            var_27 = (max(var_27, (!32767)));
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_33 [17] [i_7] [i_2] [i_1] [i_0] = ((0 ? -17604 : 4294967287));
                            var_28 = -2099110023;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            arr_36 [19] [i_1] [i_2] [20] [i_11] [i_11] = ((var_16 ? var_3 : var_14));
                            var_29 = (arr_29 [i_0] [i_2] [i_2 - 1] [19] [i_2]);
                            var_30 = (max(var_30, var_10));
                            var_31 = (249 || 3611824651);
                        }
                    }
                    var_32 = (max(var_32, (!-9223372036854775807)));
                    var_33 *= (min((min(var_14, (arr_20 [i_0] [6] [14]))), ((min(118, -93)))));
                }
            }
        }
    }
    var_34 = (1 | 9);
    #pragma endscop
}
