/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (1 > var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((((~((8188 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))) <= var_10)))));
                arr_5 [i_1] [i_1] = (min((min(var_3, 42)), (arr_1 [i_0])));
                var_16 = (arr_0 [i_0] [i_1 - 1]);
                var_17 = (min(var_17, ((min((arr_3 [i_0] [i_0] [i_0]), (((!var_9) ? (max((arr_0 [i_1] [i_0]), (arr_0 [i_0] [i_1]))) : var_13)))))));
            }
        }
    }
    #pragma endscop
}
