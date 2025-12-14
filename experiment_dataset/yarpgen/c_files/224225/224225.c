/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = ((((((69 ? -61 : 3537438488)) * -10744))) ? (arr_0 [i_0]) : (arr_0 [i_0 + 2]));
        arr_3 [i_0] = var_3;
    }
    var_13 = ((6364229083916937280 ? var_1 : (((((var_8 ? var_7 : 17574)) <= (((108 ? 66 : -63))))))));
    #pragma endscop
}
