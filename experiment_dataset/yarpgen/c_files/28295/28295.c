/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max((!var_19), var_12))) ? 1958 : ((((max(20, 2047))) ? ((-1958 ? 67108863 : var_11)) : (~15)))));
    var_21 = (min(var_21, (max((min(((var_1 ? 28 : -766947204467801762)), (var_7 <= 1958))), var_0))));
    var_22 = var_5;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_23 = (max(var_23, ((((arr_1 [i_0 - 3] [i_0 - 3]) ? (24237 < 0) : (arr_0 [i_0 + 1]))))));
        arr_2 [i_0] = (var_2 ? 0 : (arr_1 [15] [i_0 - 3]));
        var_24 *= (((~234417799) ? (61651 && 14154) : (arr_1 [i_0 - 1] [11])));
        var_25 = (min(var_25, ((((((9223372036854775807 ? var_17 : (arr_1 [i_0 + 1] [i_0 + 1])))) ? (arr_1 [i_0] [i_0 - 3]) : (((-21 <= (arr_0 [i_0 + 1])))))))));
    }
    #pragma endscop
}
