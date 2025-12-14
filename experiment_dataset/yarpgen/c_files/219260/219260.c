/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_8 ? (min((var_0 - var_4), (var_2 != var_5))) : (((((min(42018, 2463179290919798298))) || ((min(var_8, 1))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_12 = 3;
        arr_3 [i_0] = 250;
        arr_4 [i_0] = var_1;
        arr_5 [i_0] = (((arr_0 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : (arr_0 [i_0])));
    }
    #pragma endscop
}
