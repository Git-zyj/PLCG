/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0] [i_0]) ? var_13 : (arr_1 [i_0]))) | (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))));
        arr_3 [1] = (max(((~(arr_1 [i_0]))), (((arr_0 [i_0] [i_0]) ? var_11 : var_2))));
    }
    var_16 = (max(var_16, var_6));
    var_17 = ((((max((min(990447161, var_9)), var_11))) ^ var_4));
    var_18 = ((var_13 ? ((~(max(990447161, 990447149)))) : var_13));
    #pragma endscop
}
