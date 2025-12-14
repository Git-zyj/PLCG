/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(18387884772889646049, (((!(((0 ? var_2 : var_12)))))));
    var_19 = min(((~((max(var_9, var_9))))), (1 / 35654));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [10] [i_0] = var_1;
        arr_3 [i_0] = var_7;
        arr_4 [i_0] = ((~(max(var_3, var_6))));
        arr_5 [13] = max(((0 ? -1024 : 0)), -14);
    }
    #pragma endscop
}
