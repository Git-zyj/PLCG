/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (max((max(85, var_10)), ((((2147483647 % var_5) == ((min(var_9, var_4))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (((arr_3 [i_0]) * var_8));
        var_13 = (((arr_0 [i_0]) + (-2147483647 - 1)));
        arr_4 [i_0] &= var_6;
        var_14 = (((arr_3 [i_0]) / (arr_1 [i_0])));
    }
    var_15 -= var_3;
    #pragma endscop
}
