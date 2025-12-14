/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = arr_3 [i_0];
        arr_5 [i_0] = ((((((arr_2 [i_0]) ? var_13 : (arr_2 [i_0])))) ? (arr_2 [i_0]) : ((-(arr_2 [i_0])))));
    }
    var_15 = var_5;
    var_16 = 1;
    #pragma endscop
}
