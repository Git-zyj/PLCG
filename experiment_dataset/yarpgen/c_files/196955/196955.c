/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 ? (min(var_3, -38)) : ((((((-38 ? -19 : 4519700414281343714))) ? -19 : (var_4 % var_4))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_11 = (min((arr_0 [i_0] [i_0]), ((9958373315814217802 ? (var_0 & var_3) : var_9))));

        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            var_12 &= ((+((((arr_1 [i_1] [i_1]) || ((((arr_4 [i_0]) - -34))))))));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_13 = var_1;
                            var_14 = (max(var_14, ((min((((arr_6 [i_2 + 3] [i_2 - 2] [i_1]) ? (((arr_4 [i_0]) ? var_4 : (arr_2 [i_0] [i_2] [i_4]))) : 15)), (arr_2 [i_0] [i_1] [i_3]))))));
                            arr_11 [i_2] [i_1] = ((((max((arr_2 [i_0] [i_1] [i_0 - 1]), 21))) ? var_3 : (((min((arr_2 [i_0] [i_1] [i_0 + 1]), (arr_2 [i_3] [i_0] [i_0 - 2])))))));
                        }
                    }
                }
            }
            var_15 = (arr_10 [i_0] [i_1] [i_0] [i_1] [i_1]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_16 = (arr_4 [i_5]);
            var_17 = ((-((~(-2147483647 - 1)))));
        }
    }
    #pragma endscop
}
