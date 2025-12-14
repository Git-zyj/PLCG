/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((!(((14 ? var_1 : var_14)))))));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_16 = (max(var_16, (arr_1 [16])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (min(var_17, (((var_12 ? (arr_5 [18]) : (((~var_1) ? 16384 : var_4)))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_18 = ((~(arr_1 [i_0])));
                            var_19 -= ((~(~var_9)));
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_18 [i_0] [12] |= (((((-(arr_16 [i_0 - 1] [i_2] [i_0 - 1] [i_2] [16])))) ? ((var_7 - (arr_16 [i_0 - 3] [i_5] [i_5] [i_0 - 3] [i_5]))) : var_0));
                            var_20 = ((!(((var_10 ? (arr_16 [i_3] [i_3] [i_2] [i_3] [i_0 - 3]) : (arr_13 [i_0 + 1] [0] [i_0] [i_0] [i_0]))))));
                            var_21 -= ((-(((!var_1) + -var_1))));
                            var_22 = (arr_3 [i_0]);
                            var_23 = (~var_5);
                        }
                        var_24 = var_7;
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, ((max((min((var_1 + -108), (!1))), ((((var_2 % 1) && 1))))))));
                            var_26 -= (((min((min(var_5, (arr_5 [i_7]))), -1)) / (((!((!(arr_14 [i_7] [i_6] [i_2] [i_1] [i_7]))))))));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_27 -= ((((var_3 ? ((var_13 ? var_2 : var_6)) : (arr_5 [i_8])))) ? 1 : (((arr_7 [i_0 + 1] [i_0 + 1] [18]) ? var_5 : (arr_7 [i_0 - 3] [i_0] [i_2]))));
                            arr_25 [i_0] [i_0] [i_1] [i_2] [i_6] [i_8] = var_7;
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_28 -= ((((~(~var_14))) == var_14));
                            var_29 = (min(var_29, ((((((((arr_10 [i_0] [i_1] [i_1] [i_9]) ? (arr_12 [i_9] [i_1] [i_9]) : (arr_7 [i_2] [i_0] [i_0]))))) ? (arr_1 [i_9]) : (min((((arr_1 [i_9]) ? var_11 : -8192)), (((var_6 ? var_12 : (arr_12 [i_0] [i_1] [i_9])))))))))));
                            var_30 = (((~var_4) | (max(var_10, var_11))));
                            var_31 = (32736 ? ((((arr_27 [i_1] [i_0 - 4]) || (arr_27 [i_0] [i_0 - 4])))) : (var_5 - var_13));
                        }
                        var_32 = (!((!(arr_3 [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_33 |= ((129 ? -1 : ((((arr_14 [8] [i_2] [i_0 - 3] [i_1] [8]) < -4)))));

                        for (int i_11 = 2; i_11 < 18;i_11 += 1)
                        {
                            arr_35 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((var_1 % (var_5 | var_5)));
                            arr_36 [i_0] = (arr_20 [i_0 + 1] [i_0] [i_0 - 3]);
                        }
                        var_34 ^= (var_2 | var_14);
                    }
                    arr_37 [i_0 - 1] [1] &= var_9;
                    var_35 = (min((~1), (arr_31 [1] [i_1] [i_2] [i_0] [i_2])));
                }
            }
        }
        var_36 = -var_1;
    }
    var_37 = 130;
    var_38 = 210;
    #pragma endscop
}
