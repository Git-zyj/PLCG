/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~((var_5 ? var_12 : (min(var_11, 1)))));
    var_15 = var_3;
    var_16 = var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        var_17 = arr_0 [i_0];
    }
    #pragma endscop
}
