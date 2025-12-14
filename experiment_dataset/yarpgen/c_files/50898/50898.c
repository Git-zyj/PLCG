/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (min(var_16, (((((max(var_14, (arr_1 [i_0])))) / (arr_0 [i_0]))))));
        var_17 = ((~((-(arr_2 [i_0])))));
        arr_3 [i_0] = var_8;
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_18 = var_11;
        var_19 = min(var_3, (((arr_4 [i_1 - 1] [i_1]) / (arr_5 [i_1]))));
    }
    var_20 = 213;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] = (arr_4 [i_2] [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [i_4] = ((!(arr_11 [i_2] [i_3] [5])));
                    var_21 = (~var_14);

                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_22 = (((~(arr_11 [i_3 + 1] [i_3 + 1] [i_5]))));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_23 -= (((arr_4 [i_3 - 1] [i_3 + 1]) | (arr_4 [i_3 + 1] [i_3 + 2])));
                            var_24 = (arr_18 [i_2] [i_3 - 1] [8]);
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            var_25 = (min(var_25, (arr_7 [0])));
                            var_26 &= (arr_4 [i_3 - 1] [i_3]);
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_26 [i_2] [i_3 - 1] [i_4] [i_3] [i_8] [i_3 - 1] [i_8] = ((-(arr_12 [i_3] [i_3 + 2])));
                            var_27 = (min(var_27, var_9));
                            var_28 = (min(var_28, var_5));
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_29 [i_3] [11] [i_3] [11] [i_5] [10] = ((var_5 >> (((arr_11 [i_3 - 1] [1] [i_3 + 3]) - 6750097231502096747))));
                            arr_30 [i_2] [i_3] [9] [9] [i_9] = ((-(!var_6)));
                            var_29 += (arr_4 [i_2] [i_2]);
                            var_30 = var_11;
                        }
                        var_31 = (((var_5 | var_12) ? var_9 : (-16812 && var_3)));
                        arr_31 [i_2] [1] [i_2] [i_3] [i_3] [i_3] = -498398855;
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_3] [i_3] [9] [i_10] [i_10] [9] = var_3;
                        var_32 += arr_10 [i_3 + 1] [10] [i_3 + 1];
                        var_33 = ((((((arr_28 [i_2] [i_4] [i_4] [i_10] [i_2]) ? var_6 : var_12))) ? ((((arr_18 [10] [i_3] [i_10]) ? var_13 : (arr_18 [i_4] [i_3] [i_4])))) : var_7));
                    }
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        arr_37 [i_2] [i_3 + 3] [i_4] [i_4] [i_3] = ((-((-9146 ? (arr_15 [i_4] [i_11]) : (arr_32 [10] [i_3] [10] [i_11])))));
                        arr_38 [i_3] [i_3] [i_4] [i_4] [i_4] = -var_10;
                    }
                    var_34 = (arr_19 [i_2] [12] [i_4] [i_2] [1]);
                }
            }
        }
        arr_39 [i_2] = (arr_22 [i_2] [i_2] [i_2] [i_2]);
    }
    var_35 = (761274725 >> var_5);
    #pragma endscop
}
