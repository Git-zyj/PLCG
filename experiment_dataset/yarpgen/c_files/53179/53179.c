/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((50 / (min(var_9, var_3)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [11] = (((-19107 == 12104) ? ((min((arr_1 [i_0] [i_0]), 75))) : var_7));
        var_12 = (arr_0 [i_0]);
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (max(var_13, (arr_5 [1] [i_1])));
        arr_6 [i_1] = ((!((max(48637, var_7)))));
    }
    #pragma endscop
}
