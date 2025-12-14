/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_16 = (((((arr_1 [i_0] [i_1 + 1]) ? (arr_1 [8] [i_1 + 1]) : (arr_4 [i_0] [i_1 + 1]))) == ((+(((arr_2 [i_1 + 1]) ? var_2 : var_11))))));
                var_17 = (min(var_17, ((((((arr_3 [i_0]) == 1)) ? (((arr_1 [i_1 + 1] [0]) - 3707016922)) : (arr_1 [i_1 + 1] [i_1 + 1]))))));
                var_18 *= (((((1 ? ((min(1, var_10))) : 1))) ? (((-(arr_1 [i_1 + 1] [i_1 + 1])))) : ((1 | (((min(1, 1))))))));
                var_19 = (((arr_4 [i_0] [15]) - ((((((arr_3 [12]) ? 0 : 1))) - (min(var_0, var_15))))));
            }
        }
    }
    var_20 ^= (((((var_6 ? 1 : var_1)) >> (((~-6876686687577420279) - 6876686687577420274)))) ^ ((((195 >> (2147483647 - 2147483635))) << 3)));
    var_21 = ((((((min(var_9, -2147483647)) - var_1))) ? (min(((min(var_15, var_3))), -1)) : 8));
    #pragma endscop
}
