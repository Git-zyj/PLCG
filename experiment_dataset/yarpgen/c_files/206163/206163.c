/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_1 ? var_2 : ((min(4032, 0)))))) ? (((var_9 || (((var_1 ? var_8 : var_10)))))) : (var_9 > var_3)));
    var_13 = (min(((4032 ? -4033 : var_4)), (~var_2)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 += var_9;
        arr_3 [i_0] = ((((((((-2147483647 - 1) ? 0 : var_11)) >= (~var_1)))) > (arr_1 [0])));
    }
    var_15 = (max(var_1, (((((1 ? var_4 : 1))) ? var_1 : -1))));
    #pragma endscop
}
