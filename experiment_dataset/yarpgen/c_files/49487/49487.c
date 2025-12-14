/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((min(var_8, (min(var_11, var_0))))), (16383 & 42)));
    var_16 = ((((var_10 / (var_7 / var_13))) > var_12));
    var_17 = ((var_12 >> (var_1 + 98)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0]) > (arr_1 [20])))) <= (arr_0 [21])));
        arr_3 [i_0] |= (((((1061506928 & -12) | (18 < 12))) < ((((((arr_0 [i_0]) + (arr_1 [i_0]))) >> (((arr_1 [i_0]) / (arr_0 [i_0]))))))));
        var_18 = (max(var_18, (((((min(20294, -2237))) | (min((min((arr_0 [i_0]), (arr_0 [i_0]))), (arr_0 [i_0]))))))));
    }
    #pragma endscop
}
