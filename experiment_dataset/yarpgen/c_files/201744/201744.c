/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 *= (((((var_2 ? var_1 : 84))) & (((var_2 > (arr_1 [i_0] [i_0]))))));
        var_13 = ((-1626555830 ? 8508995315566870262 : 1626555823));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        arr_4 [i_1] [i_1 + 1] = -1626555844;
        var_14 = (min(49368, (((!((min((arr_2 [i_1]), 1626555823))))))));
    }
    var_15 = var_0;
    #pragma endscop
}
