/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_8 ? ((~(var_12 - var_9))) : var_3));
    var_16 = var_8;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_17 = (max(var_17, ((min(((max((arr_0 [i_0] [i_0]), (arr_2 [i_0 - 1] [i_0 - 1])))), ((((min(1, (arr_2 [1] [11])))) ? -118 : var_9)))))));
        arr_3 [i_0] = (min((arr_0 [i_0 - 4] [i_0 + 1]), ((min(var_7, 117)))));
    }
    #pragma endscop
}
