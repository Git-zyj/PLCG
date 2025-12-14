/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (~12350337345078806832);
                arr_7 [i_0] [i_0] = 35997;
            }
        }
    }
    var_19 = var_1;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, (arr_0 [i_4])));
                        arr_17 [i_2] [4] [6] [i_3] [i_2] = ((((((arr_3 [i_5 + 1] [i_2 - 1]) ? (arr_3 [i_5 + 1] [i_2 - 1]) : var_14))) || ((min(((233 ? var_5 : var_15)), -9109)))));
                        arr_18 [i_2] [i_2] = (min((arr_16 [1] [i_3] [i_4] [i_3] [i_4] [i_4]), (((-(arr_8 [i_4]))))));
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                    {
                        var_21 ^= (!(arr_12 [i_6 + 1] [i_2 - 1] [i_2 - 1]));
                        var_22 |= var_14;
                        arr_21 [i_2] [i_2] [i_2] [13] [i_2] [i_2] = ((((min((arr_11 [i_2] [i_2 - 1] [i_6 + 1]), (arr_13 [i_2] [i_2 - 1] [i_2])))) ? (((!(arr_13 [i_6] [i_6] [i_2])))) : (max((arr_10 [i_6] [i_3] [13]), (((arr_19 [i_2] [i_4] [i_2]) ? (arr_19 [i_2] [i_2] [i_2]) : var_10))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_23 ^= var_1;
                        var_24 = (max(var_24, var_3));
                    }

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_25 = ((-999630018 ? 30731173 : -1596667031));
                        var_26 = arr_8 [1];
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_32 [i_2] [i_3] [i_2] [i_9] [i_9] = (arr_26 [i_2] [i_4] [i_9]);
                            var_27 = (((var_6 | var_1) ? (((arr_26 [i_2] [i_4] [i_9]) ? var_5 : 233)) : var_8));
                            var_28 = ((var_11 <= (((arr_3 [i_2] [i_3]) ? (arr_26 [i_2] [i_3] [i_4]) : var_16))));
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_29 = (min(var_29, (arr_2 [i_2] [i_2])));
                            arr_35 [i_2] [i_2] = ((((arr_25 [i_2 - 1] [i_11] [i_11] [i_9]) || (arr_25 [i_3] [i_4] [i_9] [i_4]))));
                        }
                        var_30 = (arr_34 [i_2] [i_9] [i_4] [i_4] [i_3] [i_2]);
                        var_31 -= (min(30731174, (((((((arr_34 [i_9] [i_3] [i_3] [i_3] [i_9] [i_9]) <= 9108)))) - ((-778664875 ? (arr_27 [i_9] [i_9] [i_3]) : (arr_12 [i_9] [i_2 - 1] [i_2 - 1])))))));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_32 = (arr_12 [i_4] [i_3] [i_2 - 1]);
                        var_33 = (((max((max((arr_4 [i_2] [i_2]), var_16)), ((((arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) && var_6)))))) && ((((arr_24 [i_2]) ? (min((arr_16 [i_12] [i_2] [i_2] [i_3] [i_2] [i_2]), (arr_9 [i_3] [i_12]))) : (arr_15 [i_2] [i_2 - 1] [11] [i_12] [i_4] [10])))));
                    }
                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        arr_42 [i_13 + 1] [i_2] [i_2] = (max(159, 217));
                        arr_43 [i_2 - 1] [i_13] [i_3] [i_13 + 1] [i_3] [i_2] = (((1 / 239) ? ((~(arr_33 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_13 + 1] [i_13 - 1]))) : var_2));
                    }
                    var_34 = var_18;
                    arr_44 [1] [i_2] = (arr_34 [i_2] [1] [i_3] [i_3] [i_4] [1]);
                }
            }
        }
    }
    #pragma endscop
}
