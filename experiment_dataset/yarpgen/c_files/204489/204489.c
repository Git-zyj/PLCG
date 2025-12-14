/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_3);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = ((((arr_0 [i_0]) ^ 150)));
        arr_2 [i_0] [i_0] = (((((min(var_4, 150)))) ? var_7 : (((var_9 + var_5) ? (((-127 - 1) - var_2)) : (arr_1 [i_0] [0])))));
    }
    #pragma endscop
}
