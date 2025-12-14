/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_9 & ((((((var_6 ? var_0 : var_6))) ? (22 % 1) : (var_5 > var_4))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_20 |= (max(13, 64));
        var_21 |= (((((~13) + 2147483647)) << ((((-(arr_1 [i_0]))) - 2525265926718945548))));
        arr_3 [i_0] |= (min(-91, ((var_11 >> (var_5 - 12789948229621046764)))));
        var_22 += var_9;
    }
    #pragma endscop
}
