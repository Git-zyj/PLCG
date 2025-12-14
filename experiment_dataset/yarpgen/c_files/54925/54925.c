/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_6 ? 0 : ((var_11 ? 1 : 1))))) ? ((((1 * 0) & ((var_7 ? var_11 : var_8))))) : (min(var_6, (var_10 & 7301)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (min(var_14, 1));
        var_15 = (0 && (!1));
        var_16 = -44047;
        var_17 = ((var_10 ? 0 : var_8));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = 50;
        arr_7 [5] [i_1] = ((((max((max(var_9, 0)), (!181)))) || (!-90)));
    }
    var_18 &= var_0;
    #pragma endscop
}
