/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = var_17;
        var_19 = ((((((((~(arr_1 [i_0] [i_0])))) ? (((3101916746 ? 26007 : (arr_1 [i_0] [i_0])))) : (((arr_1 [i_0] [i_0]) & (arr_0 [i_0])))))) ? (((((arr_0 [i_0]) >= (arr_1 [i_0] [i_0]))))) : ((39529 ? -var_7 : -var_3))));
        var_20 = ((~((~(var_4 + var_11)))));
    }
    var_21 = (((((((var_13 >= 161) ^ var_8)) + 2147483647)) << ((((var_17 ? (((1193050550 ? 743137269 : var_5))) : (var_11 & 3101916755))) - 743137269))));
    var_22 = (var_8 * var_15);
    #pragma endscop
}
