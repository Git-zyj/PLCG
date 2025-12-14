/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!var_3) / var_6));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = (max(var_13, (arr_4 [i_0] [i_0])));
            var_14 = var_10;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_15 |= (arr_2 [i_0] [i_0 + 2]);
                        var_16 = ((arr_8 [i_2] [i_3]) == (arr_8 [i_2] [i_2]));

                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            var_17 = var_11;
                            var_18 ^= ((~(arr_8 [i_1] [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_19 += (5509 > 7038237935913675644);
                            var_20 = (arr_7 [i_2] [i_1] [i_2] [i_3]);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_21 = var_9;
                            var_22 = (((arr_12 [i_0 - 1] [i_0 + 4] [i_0] [i_0] [i_0 - 1] [i_0 + 3] [18]) ? (arr_12 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [18] [i_0 + 2] [i_0 + 4]) : (arr_22 [i_2] [i_0 + 4] [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 + 4])));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_23 ^= (~var_8);
                            var_24 = -6;
                            var_25 = ((2878088381 ? -106360561 : 0));
                        }

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_29 [i_8] [i_8] [i_3] [i_2] [i_1] [i_1] [i_0] = (arr_22 [i_0] [i_1] [i_8] [i_8] [i_8] [i_0]);
                            arr_30 [i_1] [i_0] |= ((!(arr_18 [i_1] [i_8])));
                            var_26 = var_4;
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_27 = (-6 * 0);
                            var_28 = (min(var_28, (((0 >> (((4294967295 ^ 9223372036854775801) - 9223372032559808498)))))));
                            var_29 = (~0);
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_30 &= (((arr_13 [1] [i_1] [i_2] [11] [i_10]) / var_10));
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_3] = 0;
                        }
                        var_31 ^= (arr_10 [i_1] [i_1] [i_0 + 3] [i_0 + 4]);
                    }
                }
            }
            var_32 = var_0;
        }
        arr_36 [i_0] = var_11;
        arr_37 [i_0] = ((-6 ? -760173217887655063 : -22553));
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        arr_41 [i_11] = -var_1;
        var_33 ^= (((arr_11 [i_11] [10] [i_11] [i_11] [i_11] [i_11]) - (min((arr_15 [i_11] [10] [i_11] [i_11]), (arr_34 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
        var_34 = ((var_6 * ((min((min(0, var_0)), (((!(arr_5 [i_11] [i_11])))))))));
        arr_42 [i_11] = (-127 - 1);
        var_35 = ((((((arr_22 [i_11] [i_11] [i_11] [i_11] [20] [i_11]) ? (arr_6 [i_11]) : ((var_10 & (arr_14 [0] [i_11])))))) ? ((min(var_9, (arr_26 [i_11] [i_11] [i_11])))) : (((var_7 > (arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))));
    }
    #pragma endscop
}
