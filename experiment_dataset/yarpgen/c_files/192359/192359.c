/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_11 = (((var_7 ? 1023 : (arr_2 [i_0]))));
        arr_3 [4] &= (arr_2 [i_0 + 2]);
    }
    var_12 = ((~(((((max(var_10, var_5)))) ^ (var_0 | 62)))));
    #pragma endscop
}
