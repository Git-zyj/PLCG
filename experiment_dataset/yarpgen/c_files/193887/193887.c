/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((min(((3 ? 252 : 14)), 202267007)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = var_2;
        arr_4 [i_0] [i_0] = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : var_6))) && 33171));
    }
    #pragma endscop
}
