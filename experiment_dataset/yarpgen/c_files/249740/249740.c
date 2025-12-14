/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0] = var_17;
        var_20 = ((+((~((max((arr_0 [i_0]), var_7)))))));
        var_21 = 18014397435740160;
        var_22 = (((!((min((arr_1 [i_0] [i_0]), var_18))))));
        arr_3 [i_0] [i_0 - 2] |= (max((min(((max(var_17, var_6))), ((var_17 & (arr_1 [i_0] [i_0 + 1]))))), -8186905341048668759));
    }
    var_23 = 55;
    #pragma endscop
}
