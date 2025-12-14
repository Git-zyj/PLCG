/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1435948525538297723;
    var_15 = var_3;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_16 = (((~95) || (arr_0 [i_0 - 3])));
        arr_2 [i_0] = ((var_9 * (var_6 == -113)));
        arr_3 [6] = ((-(arr_0 [i_0 - 1])));
    }
    #pragma endscop
}
