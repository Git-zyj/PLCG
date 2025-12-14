/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = ((!((((arr_0 [i_0]) >> (((arr_3 [i_0] [i_1]) % 536870911)))))));
                var_13 = (arr_0 [i_0]);
            }
        }
    }

    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_14 = ((((((~(arr_9 [i_2 - 1] [i_2 - 1]))) + 2147483647)) << (((((arr_2 [i_2 + 2] [i_2 + 1]) ? (arr_9 [i_2 - 1] [i_2 - 1]) : (arr_9 [i_2 + 1] [i_2 + 1]))) - 37))));
        arr_10 [i_2] = ((~(~var_6)));
        arr_11 [i_2] [15] = (((((!24318) || ((((arr_9 [i_2] [i_2]) ? var_1 : (arr_5 [i_2] [i_2] [i_2])))))) ? var_10 : ((((arr_6 [i_2 + 1] [i_2 + 1] [i_2]) == (max(var_4, 4272659175979007939)))))));
    }
    var_15 = ((((var_9 ? (var_8 >= var_11) : 145)) - (~60932)));
    var_16 = var_7;
    #pragma endscop
}
