/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 65535;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (min((((arr_0 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))), 0));
        arr_4 [i_0] = (min(1, ((var_12 != (arr_3 [i_0] [i_0])))));
    }
    var_17 = (((((((var_9 ? var_11 : -9121381596114825455))) || 100663296)) && (((((var_11 ? var_1 : 4194304007))) && (-288230376151711744 && var_8)))));
    #pragma endscop
}
