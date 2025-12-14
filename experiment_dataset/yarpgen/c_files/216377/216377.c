/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(-var_11, var_13));

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_21 = (min(-1, ((((arr_0 [i_0 - 4]) || (arr_0 [i_0 + 1]))))));
        var_22 = ((!(arr_0 [1])));
    }
    #pragma endscop
}
