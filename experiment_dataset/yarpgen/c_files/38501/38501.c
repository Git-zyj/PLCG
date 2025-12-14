/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((((((((arr_2 [i_0]) == (arr_0 [i_0]))))) <= (arr_1 [i_0]))) || ((((!var_1) ? (max((arr_2 [i_0]), var_13)) : (arr_0 [i_0 - 2]))))));
        var_16 = (0 & var_0);
    }
    var_17 = ((!((((((var_13 ? 1191032743 : var_9))) ? ((var_11 ? var_15 : 72)) : ((min(72, 2107602667))))))));
    var_18 = ((var_6 & ((min(var_0, (~var_4))))));
    #pragma endscop
}
