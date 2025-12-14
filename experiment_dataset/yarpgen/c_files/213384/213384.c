/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 121));
    var_18 = var_14;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 *= (arr_2 [i_0]);
        var_20 = ((!(((var_14 ? 0 : 171)))));
        arr_3 [i_0] = ((((((arr_0 [i_0]) ? (((arr_0 [i_0]) ? var_12 : var_9)) : ((min(-30, 32745)))))) ? (arr_2 [i_0]) : 1380282429));
        arr_4 [i_0] = (((((182 ? -20 : 17))) ? var_12 : -22));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_21 = ((var_14 | (!15555)));
        var_22 = (max(var_22, ((min(-106, 83)))));
    }
    var_23 = var_13;
    var_24 = 1;
    #pragma endscop
}
