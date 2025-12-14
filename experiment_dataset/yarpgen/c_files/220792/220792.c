/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_17;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (min((((max(2253232532317338579, (arr_0 [i_0]))))), (max(((-2253232532317338568 ? (arr_1 [i_0]) : var_8)), ((max(-58, (arr_0 [i_0]))))))));
        arr_2 [i_0] = (max((0 / 2253232532317338591), var_0));
    }
    var_21 = var_16;
    var_22 = (min(19564, ((2147483643 ? 127 : -414839964429249842))));
    #pragma endscop
}
