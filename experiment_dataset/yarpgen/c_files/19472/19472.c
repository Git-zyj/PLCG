/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = ((((((arr_1 [i_1 + 1] [i_0 + 1]) ? (arr_1 [i_1 + 1] [i_0 - 1]) : 1))) ? (((arr_1 [i_1 - 1] [i_0 - 1]) ? 22064 : (arr_1 [i_1 - 2] [i_0 + 1]))) : ((var_6 ? -37 : (arr_1 [i_1 - 2] [i_0 + 1])))));
                var_13 = ((((((arr_4 [i_1 - 2]) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 + 1])))) ? (((arr_4 [i_1 - 2]) ? var_10 : 43471)) : (((arr_4 [i_1 + 1]) ? (arr_4 [i_1 - 2]) : (arr_4 [i_1 - 1])))));
                arr_5 [i_0] [i_1 + 1] [i_1] |= (((((arr_0 [i_0 + 1] [i_1 - 1]) ? -28477 : (arr_2 [i_0 + 1] [i_1 - 1])))) ? (((((39 ? 60 : (arr_1 [i_0] [i_0])))) ? ((39 ? (arr_2 [i_0 - 1] [2]) : 781706315)) : (arr_0 [1] [i_1 + 1]))) : (((((((arr_2 [i_0] [i_1]) ? 1 : var_10))) ? var_2 : 12789))));
                arr_6 [i_0] = (((((((((arr_2 [i_1] [i_1 + 1]) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0] [i_1])))) ? (((3161266834 ? (arr_2 [i_0] [i_0]) : (arr_4 [i_1])))) : var_1))) ? ((62 ? var_3 : 8)) : ((((arr_4 [i_0 - 1]) ? ((var_5 ? 14 : 3161266834)) : (arr_3 [i_1 - 2]))))));
            }
        }
    }
    var_14 = var_8;
    var_15 = (((((var_11 ? (((var_2 ? var_0 : 3450904082))) : var_8))) ? var_11 : (((((var_11 ? var_10 : var_11))) ? var_5 : ((var_5 ? 1092518476 : 93))))));
    #pragma endscop
}
