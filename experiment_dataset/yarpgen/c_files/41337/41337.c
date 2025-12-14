/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((max(((var_0 ? var_1 : var_5)), (var_3 < var_0))) * ((((!(((var_4 ? var_7 : var_5))))))))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] [18] = ((var_5 ? (-var_4 + -var_5) : (((((max(31656, 3230385889))) ? (arr_4 [i_0]) : var_0)))));
                        var_11 = (((((var_7 || (821527451 && 150)))) << (((((var_9 | (arr_2 [i_0] [9]))) != var_8)))));
                        var_12 = (~var_7);
                        arr_12 [i_0] [i_1] [i_1] [i_3 + 3] [i_2] [i_0] = ((((((~var_7) != (var_1 != var_3)))) << (var_5 - 140)));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_13 = (((((((var_8 ? var_4 : var_0)) | ((max((arr_10 [i_0] [i_1] [i_1] [i_2] [i_2]), var_3)))))) ? ((var_6 ^ (max(var_9, var_1)))) : ((((arr_2 [i_0] [i_0]) ? (var_7 <= var_6) : (arr_1 [i_2 + 2]))))));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_14 = (min(var_14, ((((((((arr_2 [i_2 - 1] [i_5]) | (arr_2 [i_2 + 3] [i_2 + 3]))) + 2147483647)) << ((((-(arr_6 [i_0] [i_0] [i_0]))) - 6832336101003778621)))))));
                            var_15 = (((((arr_4 [i_2 + 3]) ? var_9 : ((((arr_9 [i_2] [i_2] [i_1] [i_0]) ? var_8 : (arr_15 [i_1])))))) + (arr_4 [i_4])));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_16 = (max(var_16, ((max((~var_2), ((~(arr_14 [1] [i_1] [i_1] [i_2 - 1] [i_2 - 1]))))))));
                            arr_24 [i_6] [i_4] [i_4] [20] [i_1] [i_6] |= (max((((var_9 != (var_8 && var_7)))), ((~(arr_18 [i_6] [i_1] [i_6] [i_2 + 1] [i_6] [i_2 + 2] [i_2])))));
                            var_17 = var_9;
                            var_18 = (((var_0 + (arr_14 [i_2 + 4] [i_6] [i_6] [i_6] [i_6]))));
                            var_19 = var_2;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_20 = ((((((~(arr_25 [i_0] [14] [i_2 - 1] [i_4] [i_4] [i_4])))) ? (arr_25 [1] [i_1] [5] [i_2 + 1] [i_4] [i_7]) : ((-(arr_15 [i_1]))))));
                            var_21 = ((~((((!(arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))) ? var_8 : (arr_23 [i_2] [i_2 + 2] [i_2 - 1] [i_1] [i_2 + 3])))));
                        }
                    }
                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {
                        var_22 = (arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                        arr_30 [i_0] [i_1] [i_2 - 1] [i_8 + 3] [i_8 + 3] [i_1] = ((((((((var_9 ? var_3 : var_0))) ? (((arr_7 [i_8] [i_2 + 4] [16] [16]) & var_7)) : (max((arr_5 [i_0] [7] [i_2] [i_8 - 3]), var_2))))) ? (((~(arr_0 [i_0] [i_1])))) : (((~var_1) >> ((((~(arr_14 [i_0] [i_2] [i_2] [i_1] [i_0]))) + 35))))));
                        var_23 = ((((arr_8 [i_8 + 3] [i_2 + 1]) ? ((var_5 ? var_1 : (arr_5 [i_0] [i_0] [i_0] [i_0]))) : (arr_20 [i_0] [1] [i_0] [10] [i_0] [i_2 + 4] [i_8 + 4]))));
                        arr_31 [i_1] [i_2] [i_2 + 3] [12] = var_4;
                    }
                    var_24 = (((arr_5 [i_0] [i_1] [i_1] [17]) < (((var_0 <= (!var_0))))));
                }
            }
        }

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_25 = (arr_4 [i_0]);
            arr_34 [i_0] = var_3;
            var_26 = (max(var_26, (((!(((!var_1) <= (arr_16 [i_9] [i_9] [i_9] [i_0] [i_9]))))))));
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            arr_37 [i_0] [i_0] = ((-(((((((arr_5 [i_0] [i_10] [i_0] [i_10]) ? var_2 : (arr_1 [i_10])))) == var_3)))));
            arr_38 [i_0] = (((((arr_25 [i_0] [i_0] [i_10] [i_10] [i_0] [i_10]) + 2147483647)) << ((((var_7 || (arr_8 [i_0] [i_0])))))));
        }
    }
    var_27 = (var_6 ? var_0 : var_0);
    #pragma endscop
}
