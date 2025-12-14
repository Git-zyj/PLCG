/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (min((var_1 / var_9), (var_11 | var_7)));
        arr_3 [i_0] = var_11;
    }
    var_12 = (min(var_9, (((((var_4 ? var_3 : var_0))) ? ((var_7 ? 1434738646623476525 : -1)) : var_9))));
    #pragma endscop
}
