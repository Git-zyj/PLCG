/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (!var_6);
    var_13 = ((-(min((56751 / 56), var_6))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (!1);
                var_14 = (max(var_14, ((((arr_4 [i_1] [i_1]) ? (((!(arr_5 [i_0 - 2] [i_0 + 2])))) : var_7)))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_15 = ((max((arr_9 [i_3 - 1] [i_2 - 1] [i_2 - 1]), (arr_6 [i_3 - 1] [i_3 + 2] [i_2 + 1]))));

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            var_16 = (arr_13 [i_0] [i_1] [i_2] [i_2] [i_4 - 1] [i_0 - 2] [i_3 + 1]);
                            arr_15 [i_2] = (((var_3 >> 31) < (83 || var_9)));
                            var_17 += ((4 << (((arr_12 [i_0] [i_4 + 1] [i_2 - 1] [i_3 - 1]) >> ((((2780857899170217403 + (arr_2 [18]))) - 2780857899170217400))))));
                            var_18 = (min((((+(min((arr_2 [i_1]), (arr_1 [i_2])))))), ((var_6 - ((((arr_12 [i_1] [i_1] [i_3 + 2] [10]) << (((arr_1 [i_0 + 1]) - 1352373563)))))))));
                        }
                    }
                    for (int i_5 = 4; i_5 < 18;i_5 += 1)
                    {
                        var_19 -= var_3;
                        var_20 ^= (min((((arr_6 [i_0] [i_0 - 2] [i_5 - 2]) < (arr_6 [i_0] [i_0 - 2] [i_5 - 1]))), ((!(var_5 || var_8)))));
                        arr_18 [i_5] [i_2] [i_2] [i_0] = var_7;
                    }
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        var_21 = (min((var_11 + var_3), (min((arr_17 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2]), (((arr_13 [14] [15] [14] [i_1] [14] [i_0] [i_0]) ? var_8 : 118))))));
                        arr_21 [i_2] = ((((arr_4 [i_0] [i_1]) - (arr_4 [i_1] [i_2]))));
                    }
                    var_22 = var_4;
                    var_23 = (max(var_23, var_6));
                    var_24 = (max(var_24, var_5));
                }
                arr_22 [i_0 - 2] [i_0 - 2] [i_0 - 2] = (min((((!((min(var_6, (arr_2 [i_0]))))))), ((~(arr_16 [i_0] [i_0 - 3] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
