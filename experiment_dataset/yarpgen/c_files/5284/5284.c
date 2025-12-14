/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [7] [7] = (arr_1 [i_0]);
        var_13 = (arr_0 [6] [6]);
        var_14 *= var_11;
    }
    var_15 = max(var_1, (24 / 40));
    #pragma endscop
}
