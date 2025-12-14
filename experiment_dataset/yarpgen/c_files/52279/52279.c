/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((min(9608, 1576587015))), ((min(18446744073709551615, 9007199120523264)))));
    var_15 *= (max(-9007199120523265, (min((min(25959, 0)), (min(-477549809, var_10))))));
    var_16 = (min(var_0, (max((max(26228, var_12)), (min(var_12, var_12))))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_17 *= (min((((min(-25940, (arr_3 [i_0]))))), (min(7, (min(3409514443266493636, 84))))));
        var_18 = (((min((arr_3 [8]), 9530))));
    }
    #pragma endscop
}
