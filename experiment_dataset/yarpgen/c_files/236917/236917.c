/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (max(var_20, (((~((max((max((arr_0 [i_0] [i_0]), (arr_2 [i_0] [i_0]))), 0))))))));
        arr_3 [i_0] = ((var_2 & (~var_4)));
        var_21 = ((arr_1 [i_0]) * ((var_12 / (((var_18 / (arr_1 [10])))))));
    }
    var_22 = ((((min(var_11, 51073)) - var_18)));
    #pragma endscop
}
