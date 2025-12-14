/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((var_7 ? ((max((arr_1 [i_0]), var_0))) : var_0));
        var_17 = (max(((((arr_0 [i_0] [i_0]) && (arr_0 [i_0] [i_0])))), (max(2931159994, (arr_0 [i_0] [i_0])))));
        var_18 = 1;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_19 = (arr_5 [i_1] [i_1]);
        var_20 = (max(var_20, ((((min(1, (((arr_5 [i_1] [i_1]) & var_3)))) << ((((~(((((arr_1 [i_1]) + 2147483647)) << (var_7 - 17684767215083977752))))) + 2147483619)))))));
    }
    var_21 = var_15;
    var_22 = var_7;
    var_23 = ((-(min((var_2 + var_15), ((min(var_11, var_10)))))));
    #pragma endscop
}
