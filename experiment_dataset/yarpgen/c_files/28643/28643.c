/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-((-((0 ? var_2 : var_3)))));
    var_17 = ((var_5 ? var_4 : ((min(((var_14 >> (var_0 - 854450026345818453))), (var_12 == var_14))))));
    var_18 = ((~((((max(var_6, var_11))) ? var_0 : -196832074))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_19 = ((((max(((max(var_3, 0))), ((var_5 ? (arr_0 [i_0]) : -4546148004574823667))))) ? 18446744073709551613 : (((((!var_1) && (((arr_3 [i_0] [i_0]) || (arr_3 [i_0] [i_0])))))))));
        arr_4 [i_0 - 2] = ((~(arr_1 [i_0] [i_0])));
        arr_5 [20] = (((((var_2 ? 8 : ((~(arr_0 [6])))))) ? (max(3, 252)) : (((((((arr_1 [i_0] [1]) ? 15079917900274001070 : (arr_3 [i_0 + 2] [i_0]))) != (((min((arr_1 [i_0 + 1] [i_0]), (arr_2 [i_0 + 2] [i_0])))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = (-((-(((arr_6 [i_2] [13] [13]) / (arr_9 [i_2] [7]))))));
                    var_21 = (~(arr_0 [i_0]));
                }
            }
        }
    }
    #pragma endscop
}
