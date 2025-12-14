/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0 + 1] = (~18);
        var_19 = ((1 ? -19 : 7799618259470792850));
    }
    var_20 = (min(var_20, var_6));
    var_21 = var_6;
    #pragma endscop
}
