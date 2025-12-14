/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = ((var_8 ? (max(var_7, var_5)) : var_7));
    var_12 = (var_6 < 252);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((((arr_1 [i_0]) == (arr_0 [i_0]))));
        arr_3 [i_0] = (max((((65535 ? var_2 : (arr_1 [i_0])))), -31744));
        arr_4 [4] = 4153256676;
        arr_5 [i_0] [i_0] = (max(-8102118886623939209, var_0));
        arr_6 [4] [4] = (arr_0 [i_0]);
    }
    var_13 = (max((max(var_3, (1 % 13694396672951129982))), var_8));
    #pragma endscop
}
