/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((1 >= -11969) >> ((-(!3857751118)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (min((((var_3 > (min(437216153, -7736203170994066065))))), ((var_1 ? (((max((arr_0 [i_0]), var_7)))) : (var_12 - var_5)))));
        var_16 = var_8;
        var_17 = 192;
    }
    var_18 = (min(-2259724336500360768, 1));
    #pragma endscop
}
