/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 4947;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [2] |= (max((max((((arr_0 [8]) ? (arr_0 [4]) : (arr_0 [10]))), (((!(arr_0 [12])))))), ((min((arr_1 [i_0]), 32756)))));
        arr_3 [i_0] [i_0] = (min(((max((arr_1 [i_0]), 7))), (((arr_0 [i_0]) ? 4238584988177013534 : 73))));
        var_17 = (((arr_1 [i_0]) ? ((795701657 ? 4096 : (arr_0 [i_0]))) : 9376));
    }
    #pragma endscop
}
