/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((min(var_2, (~var_7)))) ? 5403531057109971403 : ((((var_8 ^ var_1) ? (~0) : var_7)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 ^= var_1;
        var_13 *= ((((((~28137) | (arr_0 [1])))) ? (((((arr_1 [i_0] [i_0]) != var_5)))) : (min((arr_0 [1]), (arr_1 [i_0] [i_0])))));
    }
    var_14 += (var_2 || -643618529);
    #pragma endscop
}
