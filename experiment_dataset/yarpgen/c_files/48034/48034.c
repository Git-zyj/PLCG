/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_15));
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_18 |= (arr_0 [0]);
                    arr_10 [i_2] [i_0] [i_0] [i_0] = var_2;
                    var_19 = ((+(((arr_5 [i_1] [2]) | (((arr_2 [i_0]) ? var_7 : (arr_6 [i_2] [i_1] [i_0])))))));
                    arr_11 [i_0 + 1] [i_1] [i_2] [i_0] = var_7;
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, var_14));
                    var_21 = var_4;
                    arr_15 [i_0] [i_1] [i_3] = ((!((-var_0 < (arr_7 [i_0] [i_0 + 1] [i_0])))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_4] = ((var_1 ? (arr_7 [i_0 - 1] [4] [i_0 - 2]) : ((var_13 ? var_6 : -29))));
                        var_22 = (i_0 % 2 == 0) ? (((((28 ? 27 : 27)) / (arr_3 [i_0 + 1] [i_0])))) : (((((28 ? 27 : 27)) * (arr_3 [i_0 + 1] [i_0]))));
                        var_23 = (!-45);

                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_24 = ((var_7 ? (arr_0 [i_0]) : (arr_0 [i_0])));
                            var_25 &= (((arr_13 [i_5] [i_5 - 1] [i_5 - 1] [i_5]) ? ((9451650733749629575 ? (arr_14 [i_1] [i_3] [10] [i_5]) : var_2)) : (0 == 27)));
                            var_26 = (min(var_26, (arr_2 [i_0])));
                            var_27 = ((229 ? 218 : 211));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_28 = (min(var_28, (var_4 && var_15)));
                            var_29 = (((arr_3 [i_0] [i_0]) ? var_8 : 280));
                            arr_25 [i_0] [i_1] [i_3] [i_4] [0] = (((var_4 ^ var_3) & (((arr_21 [i_0] [i_1] [i_3] [i_4] [i_6]) ? var_15 : var_8))));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_30 += (((arr_16 [i_7] [i_0]) ? (arr_27 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 2]) : (arr_16 [i_7] [i_0 - 2])));
                            var_31 = (arr_27 [16] [i_1] [5] [i_4] [i_0 - 1] [i_0] [i_1]);
                        }
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_32 = (max(var_32, (((var_11 * ((max(var_3, var_7))))))));
                        var_33 = (28 < 1037275846);
                        var_34 = (max(var_34, ((min(((-(arr_16 [0] [i_0 - 1]))), var_5)))));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_9] [i_3] [i_0] [i_0] [i_0 + 1] [i_0] = ((var_10 ? (((arr_29 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_9]) + (arr_29 [i_0 + 1] [i_0 - 2] [i_9] [i_9]))) : var_7));
                        var_35 = (max(var_35, (((((((var_5 ? 3257691434 : var_14)) - (arr_12 [i_0] [i_0 + 1] [i_0]))))))));
                        var_36 = (arr_24 [i_0 - 2] [i_0] [i_0] [i_0 + 1] [10] [i_0] [9]);
                        arr_35 [i_0] [i_0] = -1;
                    }
                }
                arr_36 [i_0] [i_1] = (((arr_17 [i_0 + 1]) | ((max(169, 14)))));
                var_37 = var_6;
            }
        }
    }
    #pragma endscop
}
