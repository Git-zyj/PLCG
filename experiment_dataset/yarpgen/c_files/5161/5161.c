/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_15 ? ((1973437344 ? 155 : var_11)) : (((var_13 ? 267171631 : 0)))))) ? (7900 == var_10) : var_12));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0 + 2]);
        arr_3 [i_0] = ((-((-(2321529951 <= 177)))));
    }
    var_20 = 7525948308689858170;
    #pragma endscop
}
