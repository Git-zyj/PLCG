/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((((max(var_7, ((min(var_4, var_5)))))) ? (((var_14 < ((24576 ? var_7 : var_2))))) : var_1));
    var_17 = 2678244189;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = ((!((((~var_6) ? (var_9 != var_5) : (!1616723107))))));
                arr_6 [i_0] [1] = (max((arr_2 [i_1]), ((((!var_14) && (((17590038560768 ? -59 : var_14))))))));
            }
        }
    }
    #pragma endscop
}
