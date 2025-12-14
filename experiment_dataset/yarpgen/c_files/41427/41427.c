/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_20 = 13306;
        arr_3 [i_0] [i_0] |= -990685954063443762;
        var_21 |= 4219203959;
    }
    var_22 = var_2;
    var_23 = -1;
    var_24 |= var_9;
    #pragma endscop
}
