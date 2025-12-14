/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = (max(var_15, ((max((min(((~(arr_0 [i_0]))), -592213138154085477)), (arr_0 [i_0]))))));
        var_16 = (min(var_16, (((((max((arr_0 [i_0]), 31))) ? ((min(592213138154085475, 254))) : (max((arr_0 [i_0]), 30)))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = (min(var_17, (((max((arr_0 [i_1]), (arr_0 [i_1])))))));
        var_18 = (max(var_18, (arr_3 [i_1] [i_1])));
        var_19 = (min(-6913749496769139629, (!225)));
    }
    var_20 = (max(var_5, (((((var_14 ? var_12 : var_10))) ? 235 : 19932))));
    var_21 = ((((1 ? 249 : (!var_6)))) ? var_11 : ((var_11 ? (var_8 + var_3) : (max(var_2, var_0)))));
    #pragma endscop
}
