/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_7, var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] = ((((arr_2 [i_0]) * 0)));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        var_21 = (arr_5 [i_1]);
        arr_7 [i_1] = (arr_5 [i_1]);
    }
    var_22 = (max(var_22, (((-1 ? 4 : -3)))));
    var_23 = -0;
    #pragma endscop
}
