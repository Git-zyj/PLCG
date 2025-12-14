/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((((var_7 ? -5311755239284317422 : 0))) ? var_8 : (var_11 * var_13))), ((max(var_9, ((var_10 ? var_7 : var_1)))))));
    var_20 = var_4;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((((((((1 ? 494057023 : (arr_1 [i_0])))) ? var_16 : (((arr_1 [i_0]) * 494057023))))) ? ((((min(2079440243348237905, 168))) ? (max(16902169622477563550, 0)) : (((255 ? 2097151 : (arr_1 [i_0])))))) : (arr_1 [i_0 + 1])));
        var_21 *= (min(((var_10 ? (min(var_9, (arr_1 [i_0]))) : (arr_1 [i_0 + 1]))), 196));
    }
    #pragma endscop
}
