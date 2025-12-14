/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_9));
    var_17 = var_11;
    var_18 = (min(var_18, var_10));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_19 = var_8;
            var_20 = var_4;
            var_21 = var_9;
        }
        var_22 = (max(var_22, var_14));
        arr_6 [i_0] = var_12;
        var_23 = var_7;
        var_24 = var_13;
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        var_25 = var_5;
        var_26 = var_0;
    }
    var_27 = var_15;
    #pragma endscop
}
