/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] = (arr_8 [i_1] [i_2] [i_3]);
                            var_14 = (max(-27884, (max(79, 5344976101548121411))));
                            var_15 = ((-5344976101548121416 ? (max((arr_9 [23] [i_0 + 1]), (arr_5 [i_0 - 1] [i_0 + 2]))) : 65526));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_17 [i_0 + 2] [i_0] [i_0 + 1] = (arr_5 [i_0] [i_1]);
                            arr_18 [i_0 + 2] [i_0 + 2] = 65516;
                        }
                    }
                }
                arr_19 [i_0] [i_1] = (-((max(var_3, (arr_14 [15] [20] [i_0 + 2] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 7;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    arr_27 [9] [2] [i_8] = (((arr_0 [i_8]) ? (min(var_7, (min(-5344976101548121411, 27883)))) : ((max((arr_1 [i_6] [24]), (max((arr_22 [i_8] [i_7] [i_6]), (-2147483647 - 1))))))));
                    var_16 = 63783;
                    arr_28 [0] [i_7] [i_7] [i_6 + 1] = -27884;
                }
                for (int i_9 = 1; i_9 < 9;i_9 += 1) /* same iter space */
                {
                    var_17 = 41705;
                    arr_33 [i_6] [i_7] [6] [i_9] = 5344976101548121413;
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_41 [i_10] [i_9 + 1] [3] = 1;
                                var_18 = (arr_22 [i_6] [i_9 + 1] [i_9]);
                                var_19 = (max(65535, 189));
                            }
                        }
                    }
                }
                for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
                {
                    var_20 = ((min((arr_22 [3] [i_12 - 1] [i_12]), (arr_22 [i_6] [i_12 + 1] [3]))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 8;i_14 += 1)
                        {
                            {
                                var_21 = (min((arr_16 [7] [i_13] [i_6]), (((!(arr_30 [i_6 + 1]))))));
                                arr_51 [i_6 - 1] [i_7] [i_7] [i_12] [i_13] [i_14] = (arr_9 [i_12] [i_13]);
                                arr_52 [i_6] [i_6] [2] [4] [4] = 4294967290;
                                var_22 -= (arr_7 [i_6]);
                            }
                        }
                    }
                    var_23 = (arr_5 [i_12 - 1] [i_6 - 2]);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 9;i_16 += 1)
                        {
                            {
                                var_24 = 1953098492;
                                var_25 = (min(var_25, (arr_7 [i_12 - 1])));
                            }
                        }
                    }
                }
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    arr_63 [i_17] [i_7] [i_7] [i_6 + 3] |= ((13618 ? 13310421750146939043 : ((max(-2147483647, ((851 ? 2147483647 : 18127)))))));
                    var_26 = (min((arr_40 [2] [i_6 + 1] [i_17] [i_7] [i_17] [i_17]), (((min(23181, (arr_50 [i_6] [i_7] [8] [i_6] [1] [i_6] [i_17])))))));
                    var_27 = -2147483647;
                }
                arr_64 [1] [i_7] = (arr_42 [i_6 + 3] [i_7]);
                /* LoopNest 3 */
                for (int i_18 = 3; i_18 < 8;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 7;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 6;i_20 += 1)
                        {
                            {
                                var_28 = (min((arr_69 [i_18] [i_18 + 2] [i_19 + 1] [i_20 + 3]), (arr_69 [i_6] [i_18 - 1] [i_19 + 3] [i_20 + 1])));
                                arr_74 [2] [1] [i_7] [i_7] [i_7] = (((arr_1 [i_6 + 1] [i_6 - 1]) ? ((((arr_30 [i_6 + 1]) ? 65520 : (~var_1)))) : -5011139813115367683));
                                arr_75 [1] [i_7] = (min((((arr_71 [i_6] [i_7] [i_18] [i_19] [i_20]) ? ((var_3 ? (arr_53 [1] [i_19 + 2] [5] [i_6] [i_6]) : 5011139813115367683)) : 33)), var_2));
                                var_29 = ((2147483647 ? (arr_55 [i_6 + 2] [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1]) : ((~((var_5 ? -5011139813115367676 : -9223372036854775799))))));
                                arr_76 [i_6] [i_6] [i_18] [9] [i_20 + 4] = 2147483647;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_21 = 3; i_21 < 7;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 10;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 10;i_23 += 1)
                        {
                            {
                                var_30 = (min(var_30, (~250)));
                                var_31 = ((!((((arr_70 [i_23] [2] [7] [6]) ? (min(56491, -5016703425423534820)) : 40129)))));
                                var_32 = (max(var_32, -5344976101548121416));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = var_5;
    #pragma endscop
}
