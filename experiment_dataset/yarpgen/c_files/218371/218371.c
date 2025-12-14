/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [0] = (((((78 ? ((var_10 ? var_12 : 0)) : (arr_0 [i_0])))) ? ((var_0 ? 18 : ((var_1 ? 95 : (arr_0 [1]))))) : 9223372036854775807));
        arr_4 [i_0] = var_10;
    }
    var_13 = (((((4155108811 ? -92 : -27360))) ? var_1 : ((2824511168722585489 ? 101 : var_12))));
    var_14 -= var_10;
    var_15 = ((((((4663889521849160572 | -1428002637) ? var_9 : ((1 ? var_1 : var_4))))) ? 16384 : (((((var_6 ? var_4 : var_11))) ? ((var_1 ? var_1 : var_8)) : var_5))));
    var_16 = ((-16385 ? 20 : 0));
    #pragma endscop
}
