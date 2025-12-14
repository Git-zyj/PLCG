/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (~var_14);
        arr_4 [i_0 + 2] [i_0] = (max((min((((~(arr_2 [i_0])))), (min(0, 4294967295)))), (max((((arr_2 [i_0]) ? var_10 : 1)), var_6))));
        arr_5 [i_0] = (min(((max((arr_2 [i_0 + 2]), var_3))), (((arr_2 [i_0 - 1]) ? var_1 : var_7))));
        var_17 = ((-(max(var_6, var_2))));
        var_18 = (((arr_2 [i_0 + 2]) ? ((min((arr_2 [i_0 - 1]), var_7))) : (!57)));
    }
    var_19 = var_12;
    #pragma endscop
}
