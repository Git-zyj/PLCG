/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((0 ? (min(((0 ? -8796 : 1)), ((30916 ? var_0 : var_9)))) : (((-32 / var_8) << ((((var_7 ? 18446744073709551596 : -8766)) - 18446744073709551568)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = 1;
                var_15 = 1;
            }
        }
    }
    #pragma endscop
}
