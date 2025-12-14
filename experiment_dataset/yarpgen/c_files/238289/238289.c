/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        var_12 = (min(((-(max(-1254925802, (arr_0 [i_0]))))), -1672624037));
    }
    var_13 = 4194303;
    var_14 = var_1;
    var_15 = var_5;
    #pragma endscop
}
