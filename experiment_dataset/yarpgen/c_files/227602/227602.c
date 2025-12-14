/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_16 ? ((((min(17235901824128842706, var_17))) ? 1210842249580708910 : ((var_3 ? 1048574 : 1210842249580708909)))) : var_14));
    var_21 = (max((!var_7), (((var_1 & var_9) ? -var_13 : ((17235901824128842705 ? var_18 : var_16))))));
    var_22 = 17235901824128842683;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_23 = (-(max((min(975682672, (arr_3 [i_0] [i_0] [i_0]))), (arr_3 [3] [3] [i_0]))));
                var_24 = -2485256053046981839;
                var_25 ^= ((((((7743 ? 4294967295 : 18446744073709551615)) - (arr_2 [i_0] [i_0]))) - var_18));
            }
        }
    }
    var_26 = var_2;
    #pragma endscop
}
