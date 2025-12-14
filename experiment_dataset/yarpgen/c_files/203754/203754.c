/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((((((var_14 ? var_8 : var_5)) << ((((var_3 ? var_3 : var_2)) - 214)))) ^ -91));
    var_20 = ((var_18 ? ((var_9 ? (var_5 | var_8) : ((max(221, 221))))) : ((~(235 + var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_21 = var_16;
                var_22 = ((((((-1888674767 && 203) ? ((((arr_4 [i_1] [i_0]) == var_13))) : (!var_2)))) ? (((var_17 && (((var_9 ? 0 : var_1)))))) : (((((var_15 >> (var_1 - 109))) == (var_15 ^ var_7))))));
            }
        }
    }
    var_23 = ((min(((var_14 ? var_2 : var_18)), ((var_1 ? var_5 : var_4)))));
    #pragma endscop
}
