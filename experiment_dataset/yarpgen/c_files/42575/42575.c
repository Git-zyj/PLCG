/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 - 3] = var_9;
        arr_3 [15] [1] |= (max(-1594191176, (((2132453740 <= 116978576) * ((var_6 ? -1594191203 : var_11))))));
        var_12 ^= (arr_0 [i_0] [i_0 - 2]);
        arr_4 [i_0] = (max(79, 3920));
    }
    var_13 = -6964;
    #pragma endscop
}
