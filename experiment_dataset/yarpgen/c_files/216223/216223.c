/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~640167798);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (max(var_8, (max(((max((arr_0 [i_0]), var_14))), (max(3728899997, var_4))))));
        arr_3 [i_0] &= (((((((min(var_11, (arr_1 [i_0])))) ? (max(3728899997, (arr_2 [i_0]))) : ((max(var_1, var_3)))))) ? (max(((((arr_1 [i_0]) ? var_9 : 566067296))), ((var_1 ? var_7 : var_4)))) : 3728899966));
        var_18 = (min(var_18, ((((((var_12 ? -1151 : ((566067307 >> (var_10 - 89)))))) ? -566067319 : var_4)))));
    }
    #pragma endscop
}
