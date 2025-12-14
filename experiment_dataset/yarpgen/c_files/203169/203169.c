/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (min(((6472474876223086758 ? 192 : 6472474876223086734)), (((-(arr_0 [i_0]))))));
        var_20 *= (1969248204 + 905866875);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = var_0;
        var_21 = (max(var_21, (((+(max((arr_2 [i_1]), ((((arr_0 [i_1]) > (arr_5 [i_1])))))))))));
        var_22 = (max(var_22, (((((~(arr_1 [i_1] [i_1]))) + ((((arr_6 [i_1]) ? (arr_5 [i_1]) : (arr_0 [i_1])))))))));
    }
    var_23 = var_4;
    var_24 = var_3;
    var_25 *= (((var_0 || var_9) >> (var_14 - 108)));
    var_26 = ((-(~var_8)));
    #pragma endscop
}
