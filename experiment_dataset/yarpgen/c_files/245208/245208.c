/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min((min((min(var_5, var_3)), var_9)), ((((1 || var_0) < var_10))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (((2505085345 ? 0 : 288230376151711743)));
        arr_2 [i_0] [i_0] = var_2;
    }
    var_15 = ((var_7 - ((min(var_8, ((var_1 ? var_9 : var_9)))))));
    #pragma endscop
}
