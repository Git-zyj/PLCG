/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 = arr_2 [i_0];
        var_11 = ((~(((arr_0 [i_0]) - (arr_2 [i_0])))));
        var_12 = ((((((((4073064165 ? -1 : -1))) && ((min((arr_2 [i_0]), (arr_1 [6]))))))) >> (var_4 - 37)));
        var_13 = min(((((var_6 ? var_0 : var_1)))), (min(-var_1, ((~(arr_1 [i_0]))))));
        var_14 = var_3;
    }
    var_15 = var_1;
    var_16 ^= ((!((min((var_0 || var_4), 7553238140217523510)))));
    #pragma endscop
}
