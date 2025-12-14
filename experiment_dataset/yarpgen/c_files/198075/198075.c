/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_17));
    var_20 = var_12;
    var_21 = (min(var_13, (min(((var_13 ? 0 : var_0)), 128))));
    var_22 = 18446744073709551615;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_23 = var_12;
                var_24 = (max(var_24, var_10));
            }
        }
    }
    #pragma endscop
}
