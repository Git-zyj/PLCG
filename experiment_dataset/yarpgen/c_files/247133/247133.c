/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-((1 ^ (1 & 1))));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_1] = ((((!3184054419) ? (min((arr_5 [i_0 + 4] [i_0]), 1)) : 165)));
            var_15 = ((var_1 || (1 / 16)));
        }
        var_16 = (((1 + -var_1) * ((((arr_5 [i_0 - 4] [i_0 + 3]) >= (((1 + (arr_1 [i_0 + 2])))))))));
    }
    #pragma endscop
}
