/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 *= (max(-1000078841834062658, (arr_1 [i_0])));
        arr_3 [23] = (min(213, 61));
    }
    #pragma endscop
}
