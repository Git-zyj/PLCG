/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (max(var_14, ((((((-(arr_0 [i_0] [i_0])))) ? ((min(160, -21929))) : ((~(arr_0 [i_0] [i_0]))))))));
        var_15 = ((!((var_1 || (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = (((max(11281, (arr_1 [i_0] [i_0])))));
    }
    var_16 = var_7;
    #pragma endscop
}
