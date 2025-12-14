/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((116 - (169 && 1))) + (!188));
    var_14 = (min(var_5, var_11));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = ((((((arr_0 [i_0]) ? ((~(arr_0 [i_0]))) : (((arr_0 [i_0]) ^ 157))))) ? ((((~(arr_0 [i_0]))) & ((var_5 | (arr_0 [i_0]))))) : ((84 ? 152 : 78))));
        var_16 = ((var_1 ^ ((172 | (arr_1 [i_0])))));
        var_17 = (min(((((var_6 ? var_5 : var_12)) != (arr_1 [i_0]))), (var_9 <= 178)));
    }
    #pragma endscop
}
