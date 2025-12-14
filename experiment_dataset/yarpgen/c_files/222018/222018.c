/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        var_15 -= var_5;
        arr_5 [i_0] = var_0;
        arr_6 [9] [9] = var_10;
    }
    #pragma endscop
}
