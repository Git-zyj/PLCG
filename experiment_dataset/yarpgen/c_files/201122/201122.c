/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_15;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 -= (max((~var_12), (min((arr_0 [i_0 + 1]), var_10))));
        var_19 -= (((max((((arr_1 [i_0]) ? 96 : var_6)), (((18383 ? var_3 : (arr_1 [i_0])))))) & (((max((arr_1 [i_0 + 1]), 96))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (((arr_2 [i_0] [i_0]) ? (((min((arr_0 [i_1]), (arr_4 [i_0]))) + (arr_5 [i_0] [i_0]))) : var_8));
                    arr_6 [i_0] [i_0] [i_0] = ((~(min(var_0, var_13))));
                }
            }
        }
        var_21 = (max(18392, 2052812940));
        arr_7 [i_0] = min(((((arr_2 [i_0] [i_0 + 2]) ? (!255) : (((arr_1 [i_0]) * var_11))))), (arr_5 [i_0] [i_0]));
    }
    #pragma endscop
}
