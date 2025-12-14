/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((87 <= 1) ^ (~1)));
    var_16 = (max(var_16, var_7));
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (min(var_18, (((17995902178310936444 > (-9223372036854775807 - 1))))));
        var_19 += (min((((~(var_3 > var_5)))), (min(var_14, (arr_1 [i_0])))));
        var_20 = 32764;
    }
    var_21 |= (var_10 && -6639082338315426158);
    #pragma endscop
}
