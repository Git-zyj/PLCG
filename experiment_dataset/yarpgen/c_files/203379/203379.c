/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((var_9 + var_2) ? ((var_1 ? var_2 : 12251514807181072136)) : (min(var_0, var_2))))))));
    var_11 *= max(-1, ((((min(var_8, 1))) ? (min(var_0, var_5)) : var_5)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) || ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_12 = (max(var_12, (arr_0 [3])));
    }
    var_13 = ((var_5 ? var_3 : var_6));
    #pragma endscop
}
