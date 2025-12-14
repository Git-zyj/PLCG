/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_14 ^= ((((max(12615806212303144149, (arr_1 [i_0 + 1])))) ? (((arr_0 [i_0 + 3]) ? var_8 : 0)) : (!var_0)));
        var_15 -= var_12;
        var_16 = (min(var_16, (((!((min(var_6, var_9))))))));
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 = var_5;
        var_18 *= ((((min(21, 12615806212303144149))) ? (arr_1 [i_1]) : (!1)));
        arr_5 [i_1] [i_1] = (~5830937861406407468);
        var_19 = ((((min(17, ((((arr_2 [i_1]) == (arr_0 [i_1]))))))) ? (((min((arr_1 [i_1]), -77)))) : (((((var_11 ? (arr_1 [i_1]) : 0))) ? (min(var_1, var_2)) : 196))));
        var_20 = (min(var_20, (arr_0 [13])));
    }
    #pragma endscop
}
