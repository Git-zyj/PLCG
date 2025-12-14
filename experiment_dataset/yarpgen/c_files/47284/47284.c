/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min(((var_9 ? var_11 : 11403670501063237168)), (max(7043073572646314431, 1)))), var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_1] [i_1] [i_0] [i_3] = (min((arr_6 [i_0 - 1] [i_3 + 1] [i_2] [i_2]), 11403670501063237169));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                var_20 = (((((11403670501063237165 ? 7043073572646314454 : 11403670501063237170)) % (arr_12 [i_4] [i_4] [i_4]))));
                                var_21 = (((!(arr_8 [i_0] [i_2] [i_2] [i_2]))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                arr_17 [i_0] [i_0] [i_0] = (arr_11 [6] [i_0] [i_0] [i_3 + 2]);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = 694331538;
                                var_22 = (((!11403670501063237180) ? (arr_10 [i_0] [i_1 + 2] [i_5]) : 53293));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_23 = (arr_1 [i_0 + 2]);
                            var_24 = (min(var_24, (arr_0 [4])));
                        }
                    }
                }
                var_25 = (min((arr_7 [i_0] [i_0]), ((max((!694331547), (arr_8 [i_0] [12] [i_1 + 1] [i_1]))))));

                /* vectorizable */
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_26 *= var_5;
                                var_27 = (47461 < 11403670501063237152);
                                var_28 = var_0;
                                arr_30 [i_0] [1] [i_8] [3] [4] = ((8250474864212953534 ? -1 : 8704164435874622334));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_29 = (arr_3 [i_12 + 1] [i_0 + 1]);
                                var_30 = (arr_21 [i_8] [i_1 - 2] [i_8] [i_8 - 1] [i_12]);
                                var_31 += (arr_23 [i_11] [i_1 + 1] [i_1 - 3] [i_1 + 2]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 12;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            {
                                var_32 = (((arr_14 [i_0] [i_14 + 1] [i_14 - 1] [i_14 + 2] [i_14 - 1]) ? (((((arr_21 [1] [1] [i_13] [i_14 - 2] [1]) >= 2147483647)))) : (((arr_31 [i_1 - 2] [i_13] [i_14] [i_0]) ? (arr_37 [12] [i_1 - 3] [6] [0]) : var_16))));
                                arr_46 [i_0] [i_1] [i_1] = var_6;
                                var_33 = (((var_11 ? (arr_37 [i_0 - 1] [i_0] [i_0] [i_0]) : 7043073572646314433)));
                            }
                        }
                    }
                    arr_47 [12] [i_1 + 2] [12] [i_0] = (arr_22 [i_0 + 1] [1] [1]);
                    var_34 += var_11;
                }
            }
        }
    }
    var_35 = ((((min(11403670501063237197, var_18))) ? 7043073572646314436 : (((min(36589, var_2))))));
    #pragma endscop
}
