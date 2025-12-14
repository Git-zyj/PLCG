/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 &= (min(((((12000753335344501191 ? 0 : 27816)))), (arr_1 [i_0] [i_0])));
        var_21 = (min(var_21, 26769));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1 + 1] [i_1] = 2147483640;
        var_22 = var_8;
    }
    var_23 = ((((min((((var_1 << (2147483640 - 2147483612)))), 2481648776143248582))) ? ((-(min(var_12, -4895570579891707172)))) : (((var_15 ? (1 > 546487600650287134) : var_5)))));
    #pragma endscop
}
