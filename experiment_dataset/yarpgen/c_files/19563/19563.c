/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1073737728;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = var_5;
        var_11 = (min((((arr_0 [i_0]) ^ var_3)), var_8));
        var_12 = (min(var_12, ((max((-17 + 196), -1)))));
        arr_5 [i_0] = ((((var_7 ? (((arr_1 [i_0]) + var_4)) : -30693)) ^ (((-1073737725 + 2147483647) >> (var_6 - 9420)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_13 += (min((~23340), (var_2 & 32650)));
        var_14 = (max(((max(-1, 1))), ((-13928 - (arr_3 [i_1])))));
        var_15 = (max(var_15, ((min(64, -27577)))));
    }
    var_16 = var_5;
    #pragma endscop
}
