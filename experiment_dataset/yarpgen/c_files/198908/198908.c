/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((127 ? (min(((min(var_7, -1))), (min(-72, -2147483637)))) : 172));
    var_19 = ((5995100522423509615 ? 2097151 : 4889990258178443338));
    var_20 = var_16;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = ((-((var_16 / ((max(-1, 2147483637)))))));
        arr_2 [1] = ((134209536 ? (max((max((arr_0 [i_0]), (arr_0 [i_0]))), (((arr_0 [i_0]) / -2147483642)))) : ((((((arr_0 [i_0]) != 107))) - (arr_0 [i_0])))));
        var_22 = (max(var_22, (!var_8)));
    }
    #pragma endscop
}
