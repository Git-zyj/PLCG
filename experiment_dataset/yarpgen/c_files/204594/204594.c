/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((((max(121, 112))) ? var_9 : var_5));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [2] [2]);
        arr_4 [i_0] [i_0] = ((((((var_13 ? var_3 : -122)) ^ 121)) * ((((((arr_2 [i_0]) >= var_5)) ? (arr_0 [i_0] [i_0]) : var_6)))));
        var_15 ^= (min((arr_1 [i_0] [i_0]), (arr_2 [1])));
    }
    #pragma endscop
}
