/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = (max(var_16, var_12));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [16] = var_10;
        arr_4 [i_0] = ((~((((min(1171694437, 11377613226055019970))) ? 0 : var_11))));
    }

    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_17 = (min(var_17, (((((((arr_6 [i_1] [i_1 - 2]) ? 2984 : 0))) ? ((-(arr_1 [i_1]))) : (arr_2 [i_1 + 2] [i_1 - 3]))))));
        var_18 = (max(var_18, -var_1));
    }
    #pragma endscop
}
