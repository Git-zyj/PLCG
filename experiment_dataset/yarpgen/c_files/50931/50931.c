/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        var_15 = (max((min((min(var_6, 21)), var_11)), var_12));
        arr_2 [i_0] = ((((min(var_8, 1439177757))) ? (((((170 > (arr_0 [i_0] [i_0]))) || (((30341 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))) : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = var_9;
    }
    var_16 = (max(var_16, (((var_8 ? var_1 : (((var_0 ? var_6 : var_2))))))));
    var_17 = ((var_4 ? ((122 ? var_5 : var_5)) : (~var_6)));
    var_18 = ((var_12 ? (((((var_9 ? 1 : 1713518818))) | ((var_11 ? var_2 : 17711338629309688173)))) : ((min(((max(122, var_4))), -2350315871737402958)))));
    #pragma endscop
}
