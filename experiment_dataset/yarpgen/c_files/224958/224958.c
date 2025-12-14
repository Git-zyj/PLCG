/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_8;
    var_16 = var_14;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] = var_9;
                                arr_14 [i_0] [i_1] [i_3] [i_3] [i_4] = ((var_6 ? (min(var_12, var_10)) : (min((arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]), var_8))));
                                var_17 = (min(var_17, ((min(3251, 32767)))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_1] [i_2 - 1] = (arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                }
            }
        }
        arr_16 [i_0] = (((!1) ? var_13 : (arr_3 [i_0] [i_0])));
        var_18 -= (min(((var_1 ? (arr_2 [i_0]) : 172)), ((+((max((arr_10 [i_0] [i_0] [i_0] [i_0]), (arr_8 [12] [i_0] [i_0] [i_0]))))))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 11;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_5] [i_6] [i_7] = (max((min((arr_21 [i_5] [i_6] [i_7]), (arr_21 [i_5] [i_6] [i_7 - 3]))), ((max((((arr_21 [i_5] [i_6] [i_6]) ? var_12 : (arr_6 [i_5] [i_6] [i_7]))), var_4)))));
                    arr_27 [i_5] = (((((arr_10 [i_6] [i_6] [i_7] [i_7 - 3]) ? (arr_10 [i_5] [9] [i_7 - 2] [i_7 - 3]) : (arr_17 [i_5]))) != (arr_10 [21] [i_6] [i_7 + 1] [i_7 - 3])));

                    for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_5] [i_6] [i_6] [i_6] [i_7] [i_8] = ((!(!var_7)));
                        arr_33 [i_5] [i_7] = ((((min(var_6, var_14))) ? ((~(arr_25 [i_7 - 2]))) : (min((arr_25 [i_7 - 1]), (arr_30 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8])))));
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        arr_38 [i_7] [i_6] [i_5] [i_9] [i_6] = (~(var_5 | var_10));
                        arr_39 [i_5] [i_6] [i_7] [i_9] = (arr_8 [i_5] [i_9 - 1] [5] [i_9 - 1]);
                        var_19 *= (min((~var_14), ((min((arr_37 [i_7 - 3] [10] [10] [i_7]), var_3)))));
                    }
                }
            }
        }
        var_20 = (min(var_20, ((min((((min((arr_7 [12] [i_5] [i_5]), (arr_22 [i_5] [i_5] [i_5]))) + (arr_37 [i_5] [6] [6] [i_5]))), (((-(arr_2 [i_5])))))))));
    }
    var_21 = (min(var_10, -var_10));
    #pragma endscop
}
