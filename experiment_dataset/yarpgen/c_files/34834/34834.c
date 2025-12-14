/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_0, ((2283081476 ? (((11487 ? var_10 : var_7))) : (max(343344017531005009, var_2))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 + 3] [i_0 + 3] = ((((min(6943716216767734390, (arr_1 [i_0] [1])))) ? (max(((1071644672 ? (arr_0 [i_0]) : (arr_1 [i_0 - 2] [i_0]))), ((min((arr_0 [i_0]), 11487))))) : var_5));
        var_17 = ((!((((30858010008017857 ? var_15 : 220))))));
        var_18 = (min(var_18, (((((((0 ? var_14 : (arr_1 [i_0 + 2] [i_0 - 1])) <= (min(27555, 30858010008017857))))))))));
        arr_3 [i_0] = (~var_13);
    }
    var_19 *= ((var_9 / (max(var_0, var_6))));
    var_20 = (max(127, ((18446744073709551615 ? ((var_9 ? 15 : 67108863)) : (((var_15 ? 8853128495303446508 : 74)))))));
    var_21 = var_8;
    #pragma endscop
}
