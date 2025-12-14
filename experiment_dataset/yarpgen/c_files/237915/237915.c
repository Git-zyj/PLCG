/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~var_2) || (!var_4))) ? 1247166325 : var_1));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((var_7 ^ ((max((arr_1 [i_0 + 1]), var_11)))));
        arr_5 [i_0] = ((((var_9 + (arr_1 [i_0 + 1]))) * (var_2 + var_1)));
    }
    #pragma endscop
}
