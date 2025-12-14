/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = -var_8;
        arr_3 [i_0] [i_0] = (min(((max((arr_2 [i_0]), (arr_0 [i_0])))), ((1239809343 ? var_4 : var_8))));
        var_12 = (((min(var_5, -52))) + -1);
        arr_4 [i_0] [3] = (arr_1 [i_0]);
        var_13 = (min(var_13, (min((((!((max(var_2, var_8)))))), 65535))));
    }
    var_14 = 46728;
    #pragma endscop
}
