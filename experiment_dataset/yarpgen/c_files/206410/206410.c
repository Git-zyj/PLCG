/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_5, ((var_2 ? (min(var_2, var_9)) : (((max(65531, var_0))))))));
    var_12 = (max(var_5, 65531));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 - 1] = ((max((((arr_0 [i_0]) ? -1203770190171833687 : (arr_1 [i_0 - 1]))), ((min(65533, var_3))))));
        var_13 = ((((arr_1 [i_0 + 1]) > (-74 < var_2))));
    }
    var_14 &= 1;
    #pragma endscop
}
