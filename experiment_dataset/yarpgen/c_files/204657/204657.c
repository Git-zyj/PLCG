/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_7 | ((((var_1 || (((var_13 ? var_16 : 131071))))))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = var_0;
        arr_2 [16] = (min((-131074 + 5433), -5433));
        arr_3 [i_0] = (((var_10 / ((var_16 ? 14726832176015669692 : 14726832176015669692)))));
    }
    #pragma endscop
}
