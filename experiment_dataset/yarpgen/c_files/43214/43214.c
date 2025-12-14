/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((!-5422985821743835772), (max(1, (var_6 + -69)))));
    var_14 = (((((max((-9223372036854775807 - 1), var_7)) >= (var_0 * var_7))) ? ((((((var_3 ? var_1 : var_11))) ? ((var_10 ? var_5 : var_9)) : ((max(var_12, var_12)))))) : ((3486094563 ? 32278 : (~var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((-9223372036854775807 - 1), -1));
                var_15 -= (min(((max(68, (!var_8)))), var_12));
                arr_5 [i_0] = ((((max(var_8, ((var_0 ? 69 : var_7))))) ? ((((var_11 ? (arr_3 [i_0] [2]) : var_5)) >> (21738 - 21725))) : var_8));
                var_16 = (((((!38) && (((33 ? var_6 : 87))))) ? (((((!(arr_2 [i_0] [i_0]))) || 3560952532484512112))) : (((!(!-39))))));
            }
        }
    }
    #pragma endscop
}
