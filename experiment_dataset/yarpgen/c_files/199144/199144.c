/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (min((((var_14 / (arr_0 [i_0])))), (max((arr_0 [i_0]), 0))));
        arr_3 [i_0] [i_0] = var_4;
        arr_4 [i_0] [i_0] = (max(2373336784, var_1));
    }
    var_15 = var_4;
    var_16 = ((var_5 ? var_4 : (!var_9)));
    #pragma endscop
}
