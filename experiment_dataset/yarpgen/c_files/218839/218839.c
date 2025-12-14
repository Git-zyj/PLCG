/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (min(4133592565, var_6));
        arr_5 [i_0] = (min((arr_2 [8] [i_0]), 7));
    }
    var_18 = var_12;
    #pragma endscop
}
