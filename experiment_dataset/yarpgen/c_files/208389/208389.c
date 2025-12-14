/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(3091, var_0);

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_21 = (max(var_14, (((arr_2 [i_0] [i_0]) & (!-1)))));
        var_22 = (max(((((((arr_1 [i_0] [i_0]) - (arr_2 [i_0] [i_0])))) ? (((var_17 + (arr_0 [i_0])))) : (var_11 - -8314475346706041604))), var_0));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_23 = (((~var_5) - (((((var_8 - (arr_0 [i_1])))) ? ((max(var_7, (arr_0 [i_1])))) : (var_3 == 32758)))));
        arr_5 [i_1] [i_1] = ((((((max((arr_1 [i_1] [i_1 + 1]), 8314475346706041603))) % (~8232141206283456872))) & ((((arr_0 [3]) & (arr_2 [i_1 + 1] [i_1 + 1]))))));
    }
    var_24 *= ((25591 ? var_10 : ((5514999707436382551 | (((min(var_18, 90))))))));
    #pragma endscop
}
