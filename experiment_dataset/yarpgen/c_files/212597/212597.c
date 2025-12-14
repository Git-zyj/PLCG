/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((+(((arr_0 [i_0] [i_0]) | (arr_0 [i_0] [i_0])))));
        var_20 = (min(433021164, (max(var_11, ((min(var_1, var_6)))))));
    }
    var_21 = (var_1 | var_16);

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] = min(1146207777, ((((arr_4 [i_1]) >= (arr_4 [i_1])))));
        arr_6 [i_1] = (((-var_14 - var_4) ^ ((var_5 << (arr_4 [11])))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] = var_12;
        var_22 = var_6;
        var_23 += (~var_5);
        var_24 = ((-((max((arr_3 [i_2] [i_2]), (arr_3 [i_2] [i_2]))))));
    }
    var_25 = 109;
    #pragma endscop
}
