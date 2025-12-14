/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((var_10 ? (((26597 * ((max(38947, 1)))))) : (min(((min(1840924672, var_10))), (max(var_5, var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = 65535;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (max((((arr_13 [i_0] [7] [i_2] [i_3] [i_0] [i_0] [i_3]) ? 127 : var_11)), (1840924672 && 26589)));
                                var_15 = (((((((var_2 / (arr_3 [i_0] [1]))) && (((26594 ? var_11 : -10026))))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] [i_5] &= (arr_15 [i_1]);
                        var_16 = var_11;

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_17 = 3567090379718946951;
                            arr_20 [i_0] [i_2] [i_2] [i_2] [i_2] = (1982617588 && var_10);
                            var_18 = 2454042626;
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_19 ^= var_2;
                            var_20 = (!var_10);
                            var_21 = var_11;
                            var_22 = ((43665 & (arr_18 [i_0] [i_1] [i_0] [i_7] [i_0])));
                        }

                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_0] [2] [i_5] [i_8 - 1] = (((arr_9 [i_8 + 1] [i_1] [1] [i_8] [i_0]) ? (arr_9 [i_8 + 2] [i_1] [i_2] [9] [i_0]) : var_0));
                            var_23 = (((2454042621 && 112) && (!var_2)));
                            var_24 = 0;
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_25 = (((arr_13 [i_9] [3] [i_2] [i_9] [i_2] [i_0] [i_1]) || (arr_13 [i_5] [i_1] [i_2] [i_5] [2] [i_0] [i_2])));
                            arr_30 [i_0] [9] [i_0] [i_0] [10] = ((12075710382588045063 << (14813 - 14756)));
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_26 = var_0;
                            arr_35 [i_0] [i_5] [i_2] [i_1] [i_0] = (arr_21 [7] [i_1] [5] [i_5] [i_0] [i_10]);
                            var_27 = var_7;
                            arr_36 [i_0] [i_1] [i_0] [i_5] [i_1] = -var_4;
                        }
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        arr_40 [i_0] [i_11] [i_1] [i_2] [i_11] |= (min(((var_7 ? (arr_19 [i_0] [4] [i_11] [10]) : 12893)), 112));
                        var_28 = (max(var_28, (((var_9 ? ((6371033691121506553 | (((13186955984725032366 ? (arr_34 [i_11] [i_2] [i_2]) : var_4))))) : (max((((26597 ? (arr_4 [i_1]) : 536870911))), var_3)))))));
                    }
                    for (int i_12 = 4; i_12 < 10;i_12 += 1)
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_2] [i_2] [i_12] [8] = -9172354300986543083;
                            arr_49 [i_0] = ((-(arr_43 [i_12 + 1] [i_0] [i_12 - 4] [i_13] [i_13])));
                            var_29 = ((var_4 ? var_6 : var_11));
                            var_30 = (min(var_30, ((((63 && 0) * ((79 ? (arr_0 [i_13]) : 1)))))));
                            var_31 = ((6931497771674961365 ? (-59 / 2450523843) : 6371033691121506543));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            var_32 = (((arr_23 [i_0] [i_0] [i_2] [5] [i_12 + 1]) ? 12075710382588045072 : -1));
                            var_33 = (arr_9 [i_0] [i_1] [i_0] [i_12] [i_0]);
                        }
                        var_34 = (((min(-10041, 6371033691121506545)) | var_7));
                    }
                }
            }
        }
    }
    #pragma endscop
}
