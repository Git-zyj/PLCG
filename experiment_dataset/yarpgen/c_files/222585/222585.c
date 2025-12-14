/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_10 ? (min(var_3, (~2147483647))) : ((2147483647 / ((min(var_9, var_13))))));
    var_15 = (max(2147483647, var_13));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] = (((((((arr_1 [i_1 + 3]) && -118))) & (arr_11 [i_1 + 2] [i_2]))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_2 - 3] [i_2] [i_4] = (((((1907316862 ? (arr_10 [i_2 + 1] [i_2 + 1] [i_2] [i_3]) : (arr_10 [i_2 + 1] [i_4] [i_2] [i_4])))) ? (arr_9 [i_2 - 1] [i_2 - 1] [i_2]) : (arr_8 [i_2 + 1] [i_3] [1])));
                            var_16 = -1515344254;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_17 = ((arr_2 [i_2]) ? (!var_11) : 35656);
                            var_18 = var_9;
                            arr_18 [0] [i_1 + 1] [i_2] [i_2] [i_1 + 1] [i_0] = ((var_7 / ((-(arr_4 [i_0])))));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_19 ^= (arr_5 [i_3] [8]);
                            arr_22 [i_2] [i_2] = 247;
                            var_20 = (min(var_20, (arr_11 [i_0] [i_6])));
                        }
                        var_21 = ((-(max((max((arr_19 [8] [i_0] [8] [i_1 - 1] [i_2] [i_3]), (arr_7 [i_0] [i_1]))), (min(var_8, -538832025))))));
                        var_22 = (!var_7);
                        arr_23 [i_2] [i_2] [i_1] [i_2] = (max(((((arr_20 [i_0 - 1] [i_0 - 1] [i_0] [i_2 - 3]) ? (arr_2 [1]) : var_6))), ((((((arr_5 [i_0] [i_1]) / (arr_19 [8] [i_0 + 1] [i_1 + 3] [i_2] [i_2] [i_3])))) ? (((arr_10 [i_0] [1] [i_2] [i_0 - 1]) ? var_4 : (arr_21 [i_3 - 1] [i_2] [i_1] [i_1 + 2] [i_0]))) : ((min((arr_9 [i_0] [i_1] [i_2]), (-2147483647 - 1))))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_26 [i_2] [i_1] [i_2 - 2] [i_7] [i_7] [i_2] = var_3;
                        var_23 -= (((-379418280 ? var_0 : var_3)));
                        arr_27 [i_7] [i_2 - 1] [i_2] [i_1] [i_0] = (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_1 - 1] [i_1 + 1]) ? (arr_3 [i_0]) : (-18 != -29998)));
                        var_24 ^= ((((var_13 == (arr_8 [i_7] [i_1] [i_0]))) ? ((5380232761559247098 ? (arr_21 [i_0] [i_1 - 1] [i_1 - 1] [i_2 - 2] [i_7]) : (arr_0 [i_0 + 2]))) : (~57)));
                    }
                    var_25 = ((-25210 ? 29885 : -118));
                }
            }
        }
    }
    #pragma endscop
}
