/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 ^= (max((((arr_2 [20]) >> (arr_2 [1]))), ((1523688820 ? (arr_2 [2]) : 1))));
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
        var_17 = var_6;
    }
    var_18 = 1;
    var_19 -= 1;
    var_20 = var_10;
    #pragma endscop
}
