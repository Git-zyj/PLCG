/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(-4294967295, (min(461302966, 2412421925673996346))));
        var_11 |= ((-(max(1, 2412421925673996354))));
        arr_3 [i_0] [i_0] = (max(-144115188075847680, (((-(-127 - 1))))));
    }
    #pragma endscop
}
