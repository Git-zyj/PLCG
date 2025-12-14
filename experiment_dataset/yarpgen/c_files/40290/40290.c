/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((max(58799, 2302657080)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1 + 1] = arr_0 [1];
                var_14 = (((arr_4 [i_1 - 1]) || ((min(((min(var_9, 65535))), (min(2302657098, var_2)))))));
                var_15 |= ((((max(var_11, (((2302657092 ? var_6 : 1)))))) ? (((((1 ? 65535 : var_6))) ? ((1806 - (arr_1 [i_1]))) : 1)) : ((var_0 ? 65526 : (1 || -1150591500)))));
                var_16 = var_7;
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
