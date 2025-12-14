/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0 - 1] = var_5;
        var_19 += (max(((min(var_0, var_5))), (max(var_13, var_15))));

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = max(var_6, ((max(var_0, var_8))));
            arr_7 [i_1] = (min(((max(var_8, (min(var_1, var_8))))), var_14));
        }
    }
    var_20 = var_13;
    var_21 = var_6;
    var_22 = var_17;
    #pragma endscop
}
