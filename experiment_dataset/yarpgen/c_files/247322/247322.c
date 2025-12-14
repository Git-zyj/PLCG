/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (var_19 - (arr_0 [14] [i_0]));
        arr_3 [i_0] [i_0] = 32767;
    }
    var_20 = (max((min(var_10, var_15)), (~var_9)));
    var_21 = (min(((var_10 ? var_0 : ((32767 ? var_3 : var_0)))), ((min(var_12, var_6)))));
    var_22 |= var_16;
    var_23 = ((((max(64, ((32767 ? var_8 : var_5))))) ? var_2 : (!65535)));
    #pragma endscop
}
