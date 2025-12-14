/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~(((((var_11 ? var_10 : var_10))) ? ((var_4 ? var_7 : var_4)) : var_9)));
    var_13 = ((var_11 != ((((var_4 ? var_2 : var_3)) << ((((min(var_5, var_11))) - 52))))));
    var_14 |= (min((min(var_7, ((var_9 ? var_4 : var_10)))), (((var_6 || var_8) ? ((var_6 ? var_1 : var_0)) : ((min(var_9, var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [0] |= (((((((min((arr_1 [i_0] [i_2]), (arr_2 [i_0 - 2]))) + 9223372036854775807)) >> (((arr_5 [i_0 - 2]) - 525933764))))) ? (((arr_5 [i_1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]))) : (((arr_3 [i_0 + 1] [i_0 - 1]) ? (arr_3 [i_0 + 1] [i_0 - 2]) : (arr_3 [i_0 - 2] [i_0 - 2]))));
                    arr_9 [i_1] [i_1] [i_0] [i_0] = (arr_7 [4] [i_1] [i_1]);
                    var_15 = ((((min((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 2]), (arr_4 [i_0 - 2])))) * ((((((arr_3 [i_2] [i_0]) / (arr_0 [i_1])))) ? (((arr_7 [i_0] [i_1] [i_2]) / (arr_0 [i_0]))) : (arr_0 [i_0 - 2])))));
                    var_16 = (min(((((arr_6 [i_0 - 1] [i_0 - 2]) > (arr_6 [10] [i_0 - 1])))), ((((((arr_3 [6] [i_0]) >> (arr_2 [i_0 - 2])))) ^ (((arr_0 [21]) << (((arr_0 [8]) - 18278395753574817671))))))));
                }
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
