/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_21 = ((-((((arr_0 [i_0 - 1]) || 1)))));
        var_22 = (arr_0 [i_0 - 4]);
    }
    #pragma endscop
}
