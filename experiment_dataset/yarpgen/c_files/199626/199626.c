/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = ((var_1 <= ((~(arr_0 [i_0])))));
        var_11 = (max(var_11, var_7));
        arr_3 [i_0] = ((+(min((~var_9), (!var_1)))));
    }
    var_12 = ((34697 ? (-9223372036854775807 - 1) : -1667152169));
    #pragma endscop
}
