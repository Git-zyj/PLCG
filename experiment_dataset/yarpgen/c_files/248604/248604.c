/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_3 * 90);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [2];
        arr_3 [i_0] = (~var_11);
    }
    #pragma endscop
}
