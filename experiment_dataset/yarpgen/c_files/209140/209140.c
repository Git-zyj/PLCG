/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 |= -4086;
        var_17 = var_11;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_18 = (min(var_18, var_6));
        var_19 = (min(var_9, var_9));
        var_20 = var_5;
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_21 -= var_5;
        var_22 = var_0;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_23 += (min(4, 19));
        arr_9 [i_3] [i_3] = 1;
    }
    #pragma endscop
}
