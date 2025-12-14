/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 18843;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (((((~((18843 >> (arr_1 [i_0] [i_0])))))) ? (((min((arr_0 [i_0] [i_0]), 479933650)) * (arr_2 [i_0]))) : (arr_0 [i_0] [i_0])));
        var_15 = ((18823 ? 1867115050 : 165));
    }
    var_16 = (-(min(-var_9, var_8)));
    #pragma endscop
}
