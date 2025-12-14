/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-32767 - 1);
    var_11 = 32767;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [10] [i_0] = (!91);
        var_12 = 13631091893978218970;
        var_13 ^= (((((((((arr_0 [i_0] [i_0]) / var_6))) ? ((-4647850488600815372 / (arr_1 [i_0]))) : var_5))) ? (arr_0 [i_0] [i_0]) : ((((arr_0 [i_0] [i_0]) ? (var_6 / var_2) : (((arr_0 [0] [i_0]) ? var_5 : 233)))))));
        var_14 = (((((32744 * (((!(arr_1 [i_0]))))))) ? var_7 : (arr_0 [1] [1])));
    }
    #pragma endscop
}
