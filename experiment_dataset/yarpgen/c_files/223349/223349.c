/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(var_11, (max(var_11, var_5))))) ? (((-((var_1 ? var_11 : var_9))))) : (((((6811597204601647611 ? 7855734032837589075 : var_3))) ? var_0 : -var_1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [8] = ((arr_2 [i_0]) ? (((var_4 ? (arr_2 [i_0]) : (arr_2 [i_0])))) : (arr_1 [i_0] [i_0]));
        var_14 -= ((-((~(arr_0 [i_0] [i_0])))));
    }
    var_15 = (max(var_15, var_3));
    #pragma endscop
}
