/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = (((((4095 ? var_5 : var_5))) & 9223372036854775807));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_22 ^= var_12;
        var_23 = (min(var_23, (((((((arr_3 [i_0] [i_0]) ? -9223372036854775807 : ((((arr_2 [i_0]) & var_7)))))) ? ((((min(1, var_4))))) : ((((9919645071383304192 - (arr_1 [i_0]))) * ((((arr_2 [i_0]) ? var_8 : 9))))))))));
        var_24 = (598073799537077273 ? (arr_3 [i_0] [5]) : (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] &= var_8;
        var_25 = (max(250, ((-(~27028)))));
        arr_7 [i_1] [i_1] &= (arr_0 [i_1]);
    }
    #pragma endscop
}
