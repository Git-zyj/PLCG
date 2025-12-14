/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = (min(var_13, (((((var_9 || var_8) - ((var_9 ? var_6 : var_1))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (min(var_14, (((~(max(((var_4 | (arr_2 [2] [12]))), var_4)))))));
        var_15 = (max(var_15, ((((((27194 ^ -7306) * (!1))) + var_8)))));
    }
    #pragma endscop
}
