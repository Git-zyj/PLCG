/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] = ((((((arr_3 [i_0] [i_0]) < (arr_4 [i_0] [i_1 - 1])))) | ((-(arr_3 [i_0] [i_0])))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_14 *= ((+(((arr_9 [i_1 + 2] [i_3]) ? var_9 : (arr_9 [i_1 - 2] [i_3])))));
                        arr_13 [5] [5] [i_0] = ((252 ^ (((arr_5 [i_0] [i_1 - 2] [i_1] [i_1 + 2]) ? (arr_5 [i_0] [i_1] [i_1 - 2] [i_1 + 2]) : var_1))));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        var_15 = var_7;

                        for (int i_5 = 2; i_5 < 8;i_5 += 1)
                        {
                            arr_21 [i_2] [i_0] = var_9;
                            arr_22 [i_0] [i_0] [1] = var_9;
                        }
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            arr_26 [i_0] = var_6;
                            arr_27 [i_1] [i_1 - 1] [i_1 + 2] [i_1] [i_0] = var_6;
                            var_16 = ((var_6 * (arr_7 [i_0])));
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            arr_31 [i_0] [i_0] [i_2] = (252 - -23399);
                            var_17 = (((var_1 | var_3) ? -65519 : (arr_11 [i_7 + 1] [i_2] [i_1 + 1] [i_1 + 1])));
                            arr_32 [i_7] [i_0] [i_2] [i_1 + 2] [0] [i_0] [i_0] = (((var_2 ^ var_13) ? (arr_25 [i_4 - 4] [i_4 - 4] [i_4 - 2] [i_0] [i_7 + 1] [i_0] [i_4 - 2]) : (arr_0 [i_1 + 1])));
                            var_18 *= ((((var_13 >> (var_5 + 2112090240875945787))) + -249));
                            arr_33 [i_0] [i_0] [i_0] [i_0] [5] = var_7;
                        }
                        arr_34 [i_0] [i_1] [i_2] [7] [i_2] = var_2;
                        var_19 = (((arr_5 [i_0] [i_4 - 4] [i_4 + 1] [i_4 - 2]) & var_13));
                    }
                    var_20 = (max(var_20, ((((255 - 245) >> (221 - 210))))));
                }
            }
        }
    }
    var_21 *= ((-var_13 ? (((-((var_11 ? var_11 : var_13))))) : (((!var_9) ? (-9223372036854775807 - 1) : var_11))));
    var_22 = (max(var_22, var_5));
    #pragma endscop
}
