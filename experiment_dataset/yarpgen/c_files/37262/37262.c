/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (var_3 ? ((max(var_8, ((var_7 >> (9223372036854775807 - 9223372036854775779)))))) : var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (-var_10 * -var_1)));
                var_15 *= ((-(((arr_5 [i_1 + 2]) ? var_9 : 3072))));
            }
        }
    }
    var_16 = ((var_0 << ((((9223372036854775788 ? 32767 : ((48 ? var_12 : -32765)))) - 32748))));
    var_17 = 9223372036854775779;
    #pragma endscop
}
