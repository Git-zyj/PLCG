/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_7, 12064));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 += (arr_1 [i_0]);
        arr_3 [i_0] = ((((((arr_0 [i_0]) & (arr_0 [i_0])))) ? (max(-940340130, (arr_0 [i_0]))) : (((arr_0 [i_0]) + (arr_0 [i_0])))));
    }
    #pragma endscop
}
