/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((max(var_15, var_9))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 ^= (min((max(((max((arr_0 [i_0]), 0))), (-9223372036854775807 - 1))), (max(9223372036854775807, (-9223372036854775807 - 1)))));
                var_18 = ((((((var_3 ? (-2147483647 - 1) : 4))) && (arr_1 [i_1]))));
                var_19 = (((~1039546915) ? (arr_3 [i_1]) : (((((~(-9223372036854775807 - 1)))) ? (min(2147483647, 2357248879018937763)) : (-1937555001 ^ 1419031693)))));
                var_20 = var_6;
            }
        }
    }
    var_21 = var_14;
    var_22 = var_14;
    #pragma endscop
}
