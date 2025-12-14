/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min((max(var_13, -2068213140)), (((!(!var_5)))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_15 = (max(var_15, 55797));
        arr_3 [7] = ((!((max((!var_2), (min(55800, (arr_2 [i_0] [i_0]))))))));
        arr_4 [i_0] = ((max((max(79, (arr_2 [i_0 - 1] [i_0]))), (max((arr_2 [17] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    var_16 = var_5;
    var_17 = (((!var_13) ? (((var_6 ? var_1 : 51))) : ((var_10 ? ((var_4 ? var_8 : -54)) : ((var_12 ? var_5 : var_9))))));
    #pragma endscop
}
