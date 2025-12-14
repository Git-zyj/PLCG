/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = ((~((var_12 + ((var_0 ? var_6 : var_6))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = 4194303;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_16 = var_1;
            arr_6 [i_1] = 17;
        }
    }
    #pragma endscop
}
