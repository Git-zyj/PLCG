/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 -= var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (min(((max(((1847827474 ? (arr_0 [i_0]) : -1)), ((max((arr_3 [i_0] [i_1]), var_2)))))), (((arr_1 [i_0] [i_1]) ? (arr_1 [i_0 + 4] [i_1]) : ((17799731196105651679 ? 40402 : var_11))))));
                arr_4 [i_0] = (((((arr_3 [i_0] [i_0 - 1]) <= (arr_3 [i_0] [i_0 - 1]))) ? (arr_3 [i_0] [i_0 - 1]) : (arr_3 [i_0] [i_0 - 1])));
                var_19 -= ((!((((((40423 ? 4362862139015168 : var_1))) ? (((((arr_3 [i_1] [i_1]) && var_1)))) : 4362862139015168)))));
            }
        }
    }
    var_20 = var_5;
    var_21 = var_9;
    #pragma endscop
}
