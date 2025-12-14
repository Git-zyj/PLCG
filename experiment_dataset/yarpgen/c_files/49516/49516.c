/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ? (max(var_2, (!var_4))) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = ((~((~(-127 - 1)))));
                var_13 = (max((((-127 - 1) ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1]) : 927156889)), ((min(4294967292, var_9)))));
            }
        }
    }
    var_14 ^= ((((!(((0 ? var_1 : -25))))) ? (((((var_7 | -2415673657218187403) + 9223372036854775807)) << (((var_10 != -25) - 1)))) : -var_1));
    #pragma endscop
}
