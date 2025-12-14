/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= 8070450532247928832;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_0 [i_0]) ? ((8070450532247928832 ? 10376293541461622783 : var_13)) : 1));
        var_15 = ((var_13 ? (arr_1 [i_0]) : -28508));
        arr_5 [i_0] [i_0] = (((arr_3 [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_0])));
    }
    #pragma endscop
}
