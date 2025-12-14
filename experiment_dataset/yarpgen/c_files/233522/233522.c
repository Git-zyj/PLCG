/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (max((((~(arr_1 [i_0])))), (max((arr_1 [i_0]), (max(var_12, var_2))))));
        var_15 = (max(var_15, ((min((((max(2575567523, 97)))), (min((min(914327239, var_1)), (arr_1 [i_0]))))))));
    }
    var_16 = ((-(((21078 << (var_1 - 1124549395755337084))))));
    var_17 = var_13;
    var_18 = (min((2489051252 / 2792204518908718611), (max((min(var_11, -914327240)), var_0))));
    #pragma endscop
}
