/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((65535 >> (1893866404102643024 - 1893866404102643002)))) ? var_9 : -58));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = ((((((((var_2 ? var_12 : 58))) ? ((-58 ? -2130239122 : 65535)) : 2130239122))) ? (((1893866404102643026 / 6216645952402415225) ? (((arr_3 [i_0] [i_1 + 1] [i_2]) ? 87 : -2130239122)) : var_1)) : (((var_11 && 1893866404102643026) ? -2130239122 : 1))));
                    arr_7 [i_1] [i_1] [i_2] = var_3;
                    var_21 = (((((((-5605 | (arr_4 [i_0] [i_0] [i_2]))) & (max(173, var_4))))) ? -2130239122 : ((max((min(var_16, 113)), (min(var_7, 3968)))))));
                    var_22 = ((+((((max((arr_2 [i_0] [i_0]), 0))) ? ((min(4294967295, 33))) : (max(960, -2332609926227931157))))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0] = (arr_4 [i_3] [i_1] [i_0]);
                        var_23 = 0;
                        var_24 = (min((arr_9 [i_0] [i_2] [3] [3] [i_2]), ((-58 ? 23697 : -65535))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
