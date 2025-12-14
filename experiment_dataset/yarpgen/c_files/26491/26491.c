/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_1;
    var_13 = var_0;
    var_14 = 1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = ((-var_7 ? (((var_11 ? (arr_0 [i_0]) : (arr_0 [i_0])))) : (var_1 / -924438350)));
        var_16 -= (min(-var_6, (arr_3 [i_0] [i_0])));
        var_17 &= (arr_3 [i_0] [i_0]);
        arr_4 [i_0] = var_10;
    }
    var_18 = (!var_8);
    #pragma endscop
}
