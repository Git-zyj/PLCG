/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = (min(var_10, (((((17717110351053373831 ? var_6 : var_13))) ? var_10 : (((var_18 ? 6350 : -6371)))))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_22 = -1;
        arr_4 [i_0] = 7837647742547869585;
    }
    #pragma endscop
}
