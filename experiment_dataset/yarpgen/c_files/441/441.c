/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 |= -74;
        var_18 = (((~(arr_3 [i_0]))));
        var_19 = (min(var_19, (arr_0 [14] [14])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 = (+((var_13 ? (arr_5 [i_1] [i_1]) : (arr_2 [i_1]))));
        var_21 += max(((((arr_2 [i_1]) + (arr_2 [i_1])))), var_3);
    }
    var_22 = (max(var_22, var_7));
    var_23 |= ((min(638604165, var_6)));
    var_24 |= (~var_9);
    var_25 = var_12;
    #pragma endscop
}
