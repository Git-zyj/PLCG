/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [14] = (arr_0 [i_0]);
        arr_3 [i_0] = (min(((-(arr_0 [i_0]))), (((-(!var_8))))));
        arr_4 [i_0] [i_0] = ((((-(((arr_1 [i_0] [i_0]) / (arr_0 [i_0]))))) - ((max((~var_8), var_4)))));
        arr_5 [i_0] = min((arr_0 [i_0]), 18081543077337737918);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_12 += (min(var_1, (arr_6 [i_1] [i_1])));
        var_13 = (min(var_13, ((max((((((arr_6 [i_1] [i_1]) * (arr_9 [1]))))), (!var_9))))));
        arr_10 [2] = ((((min(((-(arr_6 [i_1] [i_1]))), ((var_7 ? -8101839854359733020 : 192))))) ? ((min(var_1, -29442))) : ((+(max((arr_8 [i_1]), 18446744073709551603))))));
        arr_11 [9] [i_1] = 18081543077337737921;
        var_14 = (((2147483646 ? -6270030286328056759 : 43)));
    }
    var_15 = (var_6 ? var_5 : var_3);
    #pragma endscop
}
