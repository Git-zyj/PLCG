/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_8 | 127) ? (((max((!var_2), var_4)))) : var_2);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 += ((65176 & (((((var_11 ? (arr_4 [10] [i_1]) : (arr_0 [i_1])))) ? (arr_2 [14]) : (min(16383, var_0))))));
                var_21 = (max(var_21, ((((((((((arr_3 [i_0]) | -1))) ? var_18 : 25266))) ? (min((1140244604 != 65156), (arr_1 [i_0 + 2]))) : var_0)))));
                arr_6 [i_0] [i_1] [i_1] = (arr_2 [i_0]);
            }
        }
    }
    var_22 = (((!((min(1140244599, var_9))))) ? var_17 : (18068 % var_4));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 16;i_4 += 1)
            {
                {

                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        var_23 = ((((((arr_8 [i_2 + 1] [i_2 - 2]) | var_13))) ? (arr_3 [i_2 - 2]) : (arr_1 [i_2])));
                        var_24 = var_17;
                        var_25 = (max(var_25, ((min(((min(52959514793856272, (((~(arr_9 [i_2] [12] [i_2]))))))), (arr_16 [i_5 + 4] [i_5 + 2] [i_5] [i_5 - 1] [i_5]))))));
                        arr_17 [i_2] [i_3] [i_4] = ((9223372036854775806 ? ((+(max((arr_9 [i_2] [i_3] [i_4]), (arr_0 [i_2]))))) : (((arr_3 [i_2 - 2]) ? (((((arr_5 [i_3] [6] [i_3]) == 4866352761060889049)))) : (arr_10 [i_4] [6])))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_26 = (arr_0 [i_2]);
                            arr_22 [i_2] [i_2] [i_2] [1] [i_6] [i_7] = (min((min((arr_5 [i_4 - 4] [i_4 - 4] [i_4 - 3]), (arr_5 [i_4 + 2] [i_4 + 2] [i_4 - 4]))), (arr_15 [i_4 - 2] [i_4 - 1] [i_4 - 1])));
                            var_27 = ((((28227 >= (arr_5 [i_2 + 1] [i_2 - 2] [i_4 - 3]))) ? (((!(arr_5 [i_2 - 1] [i_2 - 1] [i_4 - 4])))) : (((!(arr_5 [i_2 - 1] [i_2 + 1] [i_4 - 2]))))));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            arr_25 [i_2] [9] [i_2] [i_3] [i_4 + 1] [i_6] [i_3] = (((arr_23 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_2]) | var_1));
                            var_28 *= ((var_14 ? ((max((arr_18 [i_2 + 1] [i_4] [i_2 - 1] [i_2] [i_2 - 2] [i_2 + 1]), (arr_18 [i_2 - 1] [i_3] [i_4 - 3] [i_6] [i_8] [i_8])))) : ((((arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) != var_8)))));
                        }
                        arr_26 [i_2] [i_3] [i_3] [i_3] = ((28229 == (arr_24 [i_2] [i_2 - 2] [i_2])));
                    }
                    var_29 &= (arr_12 [i_2]);
                    arr_27 [i_4] [i_2] [i_2] [i_2] = (max((min(((var_0 * (arr_20 [7] [i_3] [i_2] [i_3] [i_4]))), (((arr_9 [i_4] [8] [8]) - var_7)))), (var_6 - var_11)));
                    var_30 = (max(var_30, ((max(((((arr_16 [i_4] [i_3] [i_3] [i_2] [i_2 - 2]) ? (arr_12 [i_2 + 1]) : var_1))), ((-(((arr_5 [i_4 - 4] [i_3] [i_2]) ? var_3 : (arr_19 [i_2]))))))))));
                }
            }
        }
    }
    var_31 = var_17;
    #pragma endscop
}
