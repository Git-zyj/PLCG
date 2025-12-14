/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_3));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [9] [0] = (arr_0 [i_0 + 1]);
        var_16 *= (max(var_12, var_11));
        var_17 |= (max(((((arr_1 [i_0 - 1]) > (arr_1 [i_0 + 1])))), 1639381779088069680));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_18 = ((((min(((var_2 ? 29597 : var_6)), 6))) ? var_6 : (arr_3 [i_1 - 2])));
        arr_7 [i_1] = (arr_4 [i_1 - 2]);
        var_19 = (((arr_6 [i_1 + 1]) ? (arr_6 [i_1 - 3]) : var_7));
        var_20 = (max(var_20, ((max((arr_6 [i_1]), 712)))));
    }
    var_21 = var_2;
    #pragma endscop
}
