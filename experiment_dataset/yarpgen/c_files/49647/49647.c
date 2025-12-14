/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = ((((((((var_4 ? (arr_1 [i_0]) : 2883524411))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_5)) : ((var_5 / (arr_1 [i_0])))))) && (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = (((((arr_0 [i_0] [i_0]) + var_8)) - 32));
        var_19 = (arr_1 [i_0]);
    }
    var_20 |= (((-515137345 / 535822336) * (var_16 || var_8)));
    var_21 -= 64;
    var_22 = 402653184;
    #pragma endscop
}
