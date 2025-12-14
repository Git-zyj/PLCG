/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 + 2] = -68;
        arr_4 [i_0] = (min(var_0, (((-1489501558074051134 ? ((~(arr_1 [i_0]))) : 104)))));
    }
    var_11 = ((-(max(68, ((var_0 ? var_7 : 60))))));
    var_12 = 197;
    #pragma endscop
}
