/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min((!10676), var_1)));
    var_14 = (1 ? var_1 : ((var_3 ? ((max(145, var_7))) : (~1))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_15 += 1;
        var_16 = ((+(((arr_1 [i_0 + 1] [i_0 - 1]) & (arr_1 [i_0 + 2] [i_0 + 2])))));
        var_17 = (max(var_17, (((((var_9 == ((((arr_0 [i_0]) == var_9))))) ? -6834507866109527761 : 1)))));
        var_18 &= (min((((((var_0 ? var_12 : var_10))) ? var_9 : (18028 == var_7))), (min(((var_9 ? var_10 : var_0)), var_8))));
        arr_2 [i_0] = var_11;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [0] [i_1] = (max((min(var_2, -66)), (arr_4 [i_1] [i_1])));
        arr_6 [i_1] = (((((((var_6 ? -454418047 : var_9))) ? (var_0 == 47508) : (max(var_5, (arr_3 [i_1] [7])))))) ? (max((arr_0 [i_1]), -1466373783)) : ((min((arr_1 [i_1] [10]), 1))));
        var_19 = ((var_7 ? 18028 : (~1)));
    }
    #pragma endscop
}
