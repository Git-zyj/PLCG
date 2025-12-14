/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_7;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((((arr_2 [i_0 - 1] [i_0 + 2]) ? (arr_3 [i_0 + 3]) : 1)) >> (((((arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 2]) >> (arr_3 [i_0 + 3]))) - 1154396)))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_14 = arr_12 [i_0] [i_2] [5] [i_1 - 3] [i_4] [i_1];
                            arr_15 [i_0] [i_1 - 3] [i_2] [i_2] [i_3] [i_4] [i_4] = (arr_0 [i_4] [i_0]);
                            var_15 = var_7;
                            arr_16 [i_0 - 2] [i_0] [i_2] [i_2] [i_2] [i_3] [i_4] = var_1;
                            var_16 = (min(var_16, ((1 / (arr_4 [i_1 + 1] [i_1] [i_0 - 2])))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_17 = var_11;
                            var_18 = (!((!(arr_1 [i_2]))));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_19 += (((arr_22 [i_1 - 3] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0 + 3]) ? (arr_22 [i_1 + 1] [i_1] [i_1] [4] [i_1] [4] [i_0 - 2]) : (arr_22 [i_1 - 2] [i_1 - 4] [i_0 - 1] [i_0] [i_0] [2] [i_0 - 2])));
                            var_20 = ((var_5 && 528482304) >= ((var_11 ? (arr_18 [i_0] [i_1] [i_2] [i_1] [i_6]) : (arr_21 [i_0] [i_1] [i_2] [i_2] [i_2] [i_6 - 1]))));
                            var_21 *= (((arr_18 [i_0 + 1] [i_0 + 1] [i_0] [20] [i_6 - 1]) >= (arr_18 [i_0] [i_0 - 4] [i_0] [i_0 - 1] [1])));
                        }
                        var_22 = (min(var_22, ((((arr_19 [i_0 + 2] [i_0 - 2]) ? 2813138700 : (arr_19 [i_0 - 4] [i_0 - 1]))))));
                    }
                    arr_23 [i_0] [i_0] [i_2] = (((((var_6 ? var_8 : var_2))) ? (arr_3 [i_0 + 1]) : (arr_13 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2])));

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_2] [1] = (arr_4 [1] [i_1] [i_2]);
                        var_23 = (((arr_14 [i_0] [i_1 - 4] [i_2] [i_7] [i_0 - 3]) >= var_8));
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_0 - 3] [i_2] [i_2] [i_2] [i_0] = (arr_7 [i_2]);
                        var_24 = ((var_7 + 1) - ((-(arr_6 [i_8 - 1] [i_0] [i_1] [i_0]))));
                        var_25 = (min(var_25, (((1 ? ((((arr_6 [i_0 - 4] [i_0] [i_0] [i_0]) * var_4))) : (arr_14 [i_0 - 3] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_26 = (max(var_26, (((arr_19 [i_1 - 2] [i_1]) ? -2147483646 : var_0))));
                        arr_34 [i_0] [i_2] = -99;
                        var_27 -= ((-(arr_2 [i_0] [i_1])));
                    }
                    arr_35 [i_2] [i_2] = (arr_20 [i_0] [i_2] [i_1] [i_2]);
                }
                arr_36 [i_0] [i_0] [i_0] = (((!-35393) ? (((var_1 ? (min(4294967295, var_10)) : (arr_31 [i_0] [i_1 + 1] [i_1] [19])))) : 1460759020));
            }
        }
    }
    #pragma endscop
}
