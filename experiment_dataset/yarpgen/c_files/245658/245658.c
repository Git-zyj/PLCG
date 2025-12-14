/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (((((~((0 ? (arr_3 [12] [12] [i_0]) : (arr_1 [i_0])))))) ? (((-(arr_2 [i_1] [i_0] [i_0])))) : (((((0 ? 1 : var_6))) - var_8))));
                var_14 = 28;
            }
        }
    }
    var_15 = var_7;
    var_16 = (min((((((max(var_0, 27))) || -28))), (min((var_2 >= 18446744073709551615), (min(var_10, var_4))))));
    var_17 &= ((~(((~36) ? ((28 ? var_9 : var_4)) : (((max(var_6, 0))))))));
    #pragma endscop
}
