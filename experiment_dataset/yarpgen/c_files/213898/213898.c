/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~144);
    var_17 = ((min(((var_1 ? var_1 : 3189)), ((21801 ? var_7 : 0)))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_18 = (((min(27639, (arr_1 [i_0])))));
        arr_2 [i_0] = ((!((min((arr_0 [i_0 - 1]), ((var_12 ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
    }
    var_19 -= var_6;
    #pragma endscop
}
