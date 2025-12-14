/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = min((((-(arr_8 [19] [i_2] [i_1] [i_0])))), (min((arr_1 [i_0] [i_1]), var_6)));
                    var_13 += (max((arr_7 [i_1] [i_2]), 37));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [20] [i_3] [i_4] = ((~(!3105)));
                                arr_15 [i_0] [i_1] [i_2] [4] [12] [i_3] = max(((((arr_0 [i_3] [i_4]) / (arr_0 [i_0] [i_2])))), -7014198264332628506);
                                var_14 = (min(var_6, var_0));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_15 = var_6;
                        arr_19 [12] [i_1] [i_1] [i_1] = 8;
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_22 [9] = ((48023 ? ((-(arr_0 [i_0] [i_0]))) : 22));
                        var_16 = (max(var_16, (((20 ^ (min((arr_12 [i_0] [i_0] [i_0] [i_0] [10] [i_2] [i_6]), (min(37, -5106775821116519629)))))))));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_17 = ((-(((-124 <= (arr_23 [21] [3] [i_7] [i_2] [5]))))));
                        var_18 = (min(-19, 5106775821116519629));

                        for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [i_7] [i_7] [i_7] [i_8 + 2] = 228;
                            var_19 = ((-8763713163525193720 | (arr_24 [i_7] [i_2] [i_1] [i_7])));
                            var_20 = ((~((~(!48)))));
                        }
                        for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            var_21 = max(((((-(arr_6 [2]))))), (max(11, 2380156217655693620)));
                            var_22 = (min(var_22, (((-((((arr_1 [i_0] [i_9 + 3]) != 16))))))));
                            arr_32 [i_0] [i_1] [i_2] [i_7] [3] = 41263;
                            arr_33 [i_7] [i_9 - 1] = ((((-(arr_20 [i_9 + 3]))) * (max((arr_11 [i_1] [i_1] [i_1] [i_1] [i_7] [i_1]), (~104)))));
                        }
                        for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_0] [i_1] [i_7] [8] [i_10 + 1] = (arr_4 [i_1] [i_1]);
                            var_23 = var_5;
                        }
                        for (int i_11 = 1; i_11 < 19;i_11 += 1) /* same iter space */
                        {
                            var_24 = -var_0;
                            var_25 = ((!((max((arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_38 [i_7] [14] [i_2] [i_7] [i_11]))))));
                        }

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_42 [i_0] [i_1] [i_2] [i_7] [i_7] = ((((((max(31771, -13))) << (35032 - 35032))) * ((~(arr_30 [i_7] [i_1] [17] [17])))));
                            var_26 *= 14336;
                            var_27 = ((~(((arr_37 [i_0] [i_1] [i_2] [i_0] [i_12] [i_0]) ? (arr_7 [i_0] [i_1]) : (arr_37 [i_12] [i_12] [i_7] [i_2] [10] [10])))));
                            arr_43 [i_0] [i_1] [i_0] [i_7] = ((-(~-9214291200977135717)));
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_28 = (min(var_28, (min(8710226211375443565, ((max((!19), (~71))))))));
                            var_29 = var_10;
                            var_30 += var_1;
                        }
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            var_31 = 51940;
                            var_32 = ((~((~(arr_16 [i_0] [0] [5] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_33 = ((((((min(var_3, var_4))))) ? -20 : var_0));
    #pragma endscop
}
