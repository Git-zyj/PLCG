/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (max(((-1 ? var_17 : var_17)), ((20 ? -1284031790 : 236))));
        var_18 = (((~0) && 250));
    }
    var_19 = (~70951042);
    var_20 = var_5;
    #pragma endscop
}
