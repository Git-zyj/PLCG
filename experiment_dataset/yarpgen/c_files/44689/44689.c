/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 += var_4;
        var_21 = ((~((((-(arr_0 [i_0] [i_0]))) / 75))));
        var_22 = (max(var_22, (((var_9 / ((min(-1, 9236))))))));
        arr_2 [18] = 1;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] [8] = var_7;
        var_23 = (((~63) & (~65527)));
    }
    var_24 += var_12;
    #pragma endscop
}
