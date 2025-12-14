/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((-((min(32757, var_2)))))));
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (max(((!(arr_0 [i_0] [i_0]))), ((var_0 < (((!(arr_1 [i_0] [i_0]))))))));
        var_15 = var_3;
    }
    var_16 = (max(var_16, 32757));
    #pragma endscop
}
