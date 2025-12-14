/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_18, var_7));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0 + 1] = (arr_3 [i_0]);
        var_21 *= (((~-11221) ^ 3609690297381237541));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_22 = ((!(((13868968122257674570 ^ (((var_4 ? var_8 : (arr_6 [i_1])))))))));
        var_23 = (min(var_23, (arr_3 [i_1])));
        var_24 ^= (min(var_15, (min((arr_1 [i_1 + 1]), ((7581802449069274137 ? 0 : (arr_7 [i_1])))))));
    }
    var_25 ^= var_17;
    #pragma endscop
}
