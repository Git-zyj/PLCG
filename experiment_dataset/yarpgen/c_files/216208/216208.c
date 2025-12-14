/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [10] [19] = (arr_0 [11]);
        var_21 += var_12;
    }
    #pragma endscop
}
