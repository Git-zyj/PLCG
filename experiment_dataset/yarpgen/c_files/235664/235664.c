/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max(((max(57344, -1217454112))), var_9)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, (((+((15 ? (arr_0 [i_0 - 1]) : var_6)))))));
        arr_2 [i_0] = (((((arr_0 [10]) + 2147483647)) << (1217454123 - 1217454123)));
        var_17 = 3153770703853989436;
    }
    var_18 = (1 / 30720);
    var_19 = var_12;
    #pragma endscop
}
