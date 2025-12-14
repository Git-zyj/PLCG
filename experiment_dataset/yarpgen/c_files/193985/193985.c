/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = var_5;
    var_12 = -var_4;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_13 = var_3;
            arr_5 [i_0] [i_1] [i_1] = (((arr_3 [i_1 - 2]) <= ((var_9 ? var_3 : var_2))));
        }
        arr_6 [i_0] [7] = (min((((((var_9 ? (arr_4 [20] [20] [i_0]) : var_9))) ? var_2 : var_1)), (!var_8)));
        arr_7 [i_0] [i_0] = var_5;
        var_14 = var_9;
    }
    #pragma endscop
}
