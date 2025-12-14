/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 = (min(var_12, -45));
        arr_2 [i_0] = (max((~var_2), ((var_5 ? (arr_1 [i_0] [i_0]) : -var_8))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 = (min(var_13, (((((((max(var_9, 44))) ? var_0 : var_4)) - ((+(((arr_4 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : var_4)))))))));
        var_14 += (max(((var_1 - ((5530278543780274339 - (arr_4 [i_1] [i_1]))))), (((-(arr_4 [i_1] [i_1]))))));
    }
    var_15 = var_8;
    #pragma endscop
}
