/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((((-95 ? (!0) : 247))) ? ((var_9 ? ((min(var_9, 0))) : -126)) : var_7)))));
    var_12 = (~var_6);
    var_13 = var_9;
    var_14 = 247;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 += min((9 != -14852), (max((arr_1 [i_0]), 726836915)));
        arr_2 [i_0] = 244;
    }
    #pragma endscop
}
