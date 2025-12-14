/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 &= 1;
        var_18 |= ((((7857 ? ((126 ? 140 : -5)) : (arr_1 [i_0]))) * ((116 / (arr_1 [i_0])))));
        var_19 = (max(var_19, (-5 & 0)));
        var_20 ^= (4611686018427371520 / 8286905470057086512);
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_21 |= ((min((arr_6 [i_1 + 1] [i_1 + 2]), 46497)));
        var_22 = (min(var_22, ((max(var_8, (min(-113, (-7361 / 32268))))))));
        var_23 |= ((min(((-(arr_6 [i_1] [i_1]))), -11770)));
        var_24 -= ((~-6) >> (((((arr_6 [i_1 + 2] [i_1 - 1]) ? (arr_6 [i_1 - 1] [i_1 - 2]) : 115)) - 12427)));
        var_25 = (max(var_25, 7368));
    }
    var_26 &= (!var_16);
    #pragma endscop
}
