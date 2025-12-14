/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = ((-((-((var_1 ? -67 : 1))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_1 - 3] [i_1] [i_1 + 2] [i_1] = ((-84 ? 8767183799185460390 : 340199396265396574));

                        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            arr_16 [i_0 - 1] [i_0 - 1] [i_2] [1] [i_4 + 3] = 23719;
                            arr_17 [i_0] [i_1] [i_2] = (((((-91 ? (arr_14 [i_0 + 3] [i_1 - 3] [i_2] [i_3] [11]) : var_3))) ? var_3 : (~27028)));
                            arr_18 [i_4] [i_2] [i_0] [i_0] = (-96 ? ((var_3 ? (arr_9 [10] [i_1] [i_1 + 2] [i_1]) : var_2)) : 42);
                        }
                        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_2] [i_3] [i_2] = ((arr_6 [i_0] [i_1] [i_0] [i_3]) ? (arr_9 [i_1 + 1] [i_2] [i_5] [i_1 + 1]) : (arr_21 [i_5 + 3] [0] [0] [i_5 - 1] [i_5 + 1]));
                            var_11 -= ((!(~var_5)));
                        }
                        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_12 ^= 1676126952;
                            var_13 ^= (((arr_5 [i_6 + 1] [7] [i_2] [i_0 + 1]) ? (arr_4 [i_6 - 1]) : var_5));
                        }
                        arr_25 [i_0 + 2] [i_1] [i_2] [5] [i_3] [i_3] = (arr_14 [i_0 - 1] [i_0] [i_0] [i_0] [3]);
                        var_14 = 87;
                        var_15 = (max(var_15, ((((arr_24 [i_1 - 2] [i_1 - 1] [i_0 + 2] [3] [i_0 + 3]) ? (((!(arr_3 [i_3] [i_1 - 3] [i_2])))) : (arr_4 [i_0]))))));
                    }
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        arr_28 [i_0] = var_1;

                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_2] [i_0] [13] = ((!(arr_9 [i_0] [i_1] [i_2] [i_7])));
                            var_16 = ((-(arr_8 [i_0 + 1] [i_1 + 2] [i_7] [1])));
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_35 [i_0 - 1] [i_1 + 2] [i_1 + 2] [i_0] = 3335939435016071274;
                            var_17 = (max(var_17, 28934));
                        }
                        var_18 ^= (!var_3);
                        var_19 -= (arr_32 [0] [i_0 - 1] [i_1] [i_1 + 2] [i_1 - 2] [i_1 - 1] [i_7 - 1]);
                    }

                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        arr_38 [i_0] [i_1] [i_2] [i_10] = ((95 ? 1068852101 : 1339664026880035928));
                        arr_39 [7] [i_1 - 2] [i_2] [i_10 + 1] = -var_7;
                        var_20 ^= ((-(arr_29 [5] [i_10] [i_0] [i_10 + 1] [i_10 + 1] [i_1] [i_0])));
                    }
                    var_21 = (arr_14 [1] [i_1] [11] [i_2] [i_2]);
                    var_22 *= ((-((var_1 ? (arr_26 [i_0] [i_1 - 2] [i_2] [i_2]) : 59241))));
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_23 -= max(((max((arr_8 [i_1 - 1] [i_0 + 2] [i_0 + 2] [i_12]), 1))), (((arr_40 [i_1 + 2] [i_0 - 1] [i_11]) ? (arr_40 [i_1 + 2] [i_0 + 1] [i_0]) : (arr_8 [i_1 + 1] [i_0 + 3] [i_0] [2]))));
                            var_24 = (min(var_24, (((+(((arr_21 [i_0] [i_1] [1] [i_0 + 2] [i_1 - 2]) ? ((max((arr_21 [i_0 - 1] [i_0] [i_1 - 2] [i_11] [i_11]), 24375))) : var_9)))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, -106));
    var_26 = ((((max((((var_4 ? var_0 : var_3))), var_6))) ? var_5 : (((var_0 ? var_2 : 20)))));
    #pragma endscop
}
