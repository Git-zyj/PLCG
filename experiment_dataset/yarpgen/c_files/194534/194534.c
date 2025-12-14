/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((!((max(var_9, var_8))))), (!15522)));
    var_15 ^= (-783559198 >= 12760952645293469551);
    var_16 = (min(var_16, ((min((((!(-8692 / var_10)))), 146)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (var_11 == 183);
        var_18 ^= (((8924164894554189923 ? (arr_0 [10]) : -8924164894554189923)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_4 [6] [i_1] &= (32767 ? 66 : 14859);
        var_19 *= (((((min(var_11, var_13)))) + (((((max(191, (arr_2 [2] [4]))))) + (max(-1734293397492561956, 1873579889))))));
        var_20 = ((!(((min(32757, (arr_0 [i_1])))))));
        arr_5 [i_1] = ((((var_10 == 1) ? (arr_2 [i_1] [i_1]) : (arr_0 [i_1]))));
    }
    #pragma endscop
}
