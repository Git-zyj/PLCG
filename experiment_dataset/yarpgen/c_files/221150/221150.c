/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(251658240, (((((274877906943 ? 0 : 3))) ? (((1 ? var_3 : var_3))) : var_10))));
    var_16 = ((1819146499640179875 > ((min((1 && var_6), ((-65 ? var_11 : var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (((arr_4 [i_0 - 3]) == (((arr_4 [i_0 - 4]) | (arr_5 [i_0] [i_0 - 1] [i_0])))));
                arr_6 [i_0 + 1] [i_0] [5] = ((-(((1 || (arr_5 [i_0] [i_1] [i_0 - 1]))))));
                var_18 ^= (((((((min(var_11, var_4))) ? -32107 : (min(12, var_10))))) ? ((-((65529 ? 255 : (arr_0 [8]))))) : (arr_1 [18])));
                var_19 = (min((((-1 + 224) ? ((min(var_14, var_0))) : 71)), ((42110 ? ((-(arr_5 [i_0] [i_0] [i_0]))) : ((min((arr_2 [i_0]), 62067)))))));
            }
        }
    }
    #pragma endscop
}
