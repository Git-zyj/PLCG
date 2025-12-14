/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_1 ? (var_16 & var_8) : ((var_6 ? var_0 : var_6)))) >> (var_9 - 33630)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (((0 + ((min(1, -1))))));
                var_20 ^= (var_14 <= ((((min(var_17, (arr_2 [i_0] [i_0])))) ? var_16 : var_8)));
            }
        }
    }
    #pragma endscop
}
