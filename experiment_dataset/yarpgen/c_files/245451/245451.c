/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_10 % var_1) ? (1 ^ var_17) : (var_17 != var_6)));
    var_21 = ((+(((0 != var_11) ? ((max(0, 1))) : (var_3 < var_7)))));
    var_22 = var_19;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(((var_4 ? 1 : (arr_0 [i_0]))), var_14))) ? (((arr_1 [i_0]) - -1)) : ((0 << ((max(var_7, (arr_1 [i_0]))))))));
        arr_3 [i_0] [i_0] = 1;
    }
    #pragma endscop
}
