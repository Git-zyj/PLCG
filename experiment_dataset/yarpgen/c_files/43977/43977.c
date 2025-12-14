/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_13 = min(var_6, (4209553506660707352 < 233));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_8 [i_1] = (max((((~((var_10 ? var_3 : 0))))), (max(2471428005, 36334))));
            arr_9 [i_0 + 1] [i_0] [i_1] = var_9;
        }
    }
    var_14 = (min((((360270656 << (360270655 - 360270653)))), ((var_4 ? var_8 : var_7))));
    var_15 = (max(var_15, -10));
    #pragma endscop
}
