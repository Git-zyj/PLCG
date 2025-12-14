/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = ((var_7 >> (max((9196709605436403354 > var_0), (~var_9)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = var_5;
        var_18 = ((1 ? (((((!(arr_1 [i_0] [i_0])))))) : (max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    #pragma endscop
}
