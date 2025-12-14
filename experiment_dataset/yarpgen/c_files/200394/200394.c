/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 2001373176;
    var_12 = ((((((4294967295 ? 56 : 4294967295)) ? ((17510 ? 48051 : var_6)) : 48018))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_0 [i_0])));
        var_14 = (max(var_14, (((((!(arr_0 [i_0]))) ? 11 : (arr_1 [i_0] [i_0]))))));
    }
    #pragma endscop
}
