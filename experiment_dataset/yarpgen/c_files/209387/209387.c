/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (min(var_12, var_3));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (max(var_15, (((!(((+(min((arr_1 [i_0] [i_0]), var_6))))))))));
        var_16 = (max(var_16, (((~(arr_0 [i_0]))))));
    }
    var_17 = (max(var_17, ((((min(-1, (min(3904868529, 3904868550)))) ^ var_1)))));
    #pragma endscop
}
