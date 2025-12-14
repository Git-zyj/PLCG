/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (min(var_11, ((min(var_0, var_2)))));
        arr_2 [i_0] [2] = var_5;
        arr_3 [3] = (((((min((arr_1 [i_0]), (arr_0 [i_0]))) + 9223372036854775807)) >> (var_6 + 5989156935798391475)));
        var_12 = (((((~((~(arr_0 [i_0])))))) ? ((((!(var_8 | var_4))))) : (((((min(var_3, -3015137715902957742)) + 9223372036854775807)) >> (((arr_0 [i_0]) - 1716432916))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            {
                arr_10 [i_1] = ((((((arr_4 [12] [i_1]) * var_1))) ? (var_10 - var_10) : var_8));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_16 [i_1] [i_3] [i_2] [i_1] = var_8;
                            arr_17 [1] [12] [i_2] [i_2] [10] [i_1] &= ((~((~((-3015137715902957742 ? (arr_11 [i_1] [i_2] [i_4]) : (arr_7 [i_2])))))));
                            arr_18 [i_1] = (-(((arr_8 [i_1 + 1] [i_1] [i_2 + 1]) ? (arr_15 [i_2] [i_2] [i_2 + 1] [4]) : (arr_8 [i_1 - 3] [i_1 - 1] [i_2 - 3]))));
                            var_13 = (((((((((arr_8 [i_1] [i_2] [i_2]) ? var_6 : 3015137715902957742))) ? (!var_8) : (var_5 * var_3)))) ? (((arr_5 [i_2 - 1] [i_1 + 2]) ? (arr_4 [i_1 + 1] [i_1]) : (arr_12 [i_1] [i_1 - 2] [i_1 - 1] [i_1]))) : (min((arr_13 [i_2 - 1] [i_1] [i_2 - 4]), 3015137715902957742))));
                        }
                    }
                }
                var_14 = (min((((3015137715902957742 ? 3015137715902957742 : (arr_7 [i_1])))), ((1 ? -3015137715902957735 : (arr_5 [i_2 + 1] [i_1 - 2])))));
                arr_19 [i_1] [i_2] = (((((arr_13 [i_1 + 2] [i_1] [0]) ? (arr_5 [i_1 + 2] [i_1 + 2]) : (arr_5 [i_1 + 2] [i_1 + 2]))) >= ((var_7 ? (!-3015137715902957760) : ((var_0 ? -3015137715902957743 : var_7))))));
                var_15 = ((max((arr_5 [i_1 - 1] [i_2 - 3]), (arr_5 [i_2 - 1] [i_1 + 1]))));
            }
        }
    }
    var_16 = ((!((var_6 != (var_2 | var_0)))));
    #pragma endscop
}
