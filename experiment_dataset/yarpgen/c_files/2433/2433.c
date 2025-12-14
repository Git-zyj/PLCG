/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (max(var_13, var_12));
                arr_5 [i_1] = (((0 ? var_10 : (113 - var_7))));
                arr_6 [i_1 + 1] [4] [i_0] |= (((((~((9223372036854775798 ? -114 : var_5))))) | (((1 ^ 1) ? (((arr_4 [i_1] [i_0]) | var_8)) : (arr_3 [14])))));
            }
        }
    }
    var_14 &= var_3;
    var_15 = (min(var_15, 25467));
    var_16 ^= var_4;
    var_17 = ((20 ? ((1 ? 4294967295 : 33)) : var_9));
    #pragma endscop
}
