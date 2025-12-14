/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        var_13 = (min(var_13, ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [12]) : var_10)) < (((-581 ? 1 : 1))))))));
        arr_4 [i_0] = (min(var_9, (((((1 ? 1 : var_6))) ? 1 : (~1)))));
    }
    var_14 ^= (1 ^ 532676608);
    #pragma endscop
}
