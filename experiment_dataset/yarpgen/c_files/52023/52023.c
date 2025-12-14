/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((var_9 ? ((((var_12 != (var_1 - 35270))))) : ((-((var_9 ? var_1 : (-9223372036854775807 - 1))))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (((min((((arr_1 [i_0] [i_0]) << (((arr_1 [11] [i_0]) - 1218294827226057041)))), -20826)) >> ((((((0 ^ (arr_0 [i_0] [i_0]))) ^ (((arr_1 [i_0] [6]) ? -14975 : 20825)))) + 14990))));
        var_17 = ((((max((((2147483647 ? 48 : (arr_0 [i_0] [i_0])))), ((~(arr_1 [i_0] [i_0])))))) ? (((arr_1 [4] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : ((((10085 && (((6894790797603013573 ? (arr_0 [i_0] [5]) : (arr_1 [i_0] [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_18 = ((!(((-(~262136))))));
        var_19 = (~3225671357881472203);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_20 = ((!(((-17639553102868194311 ? (((-10085 ? (arr_2 [i_2] [0]) : (arr_4 [i_2])))) : (max((arr_5 [i_2]), (-9223372036854775807 - 1))))))));
        var_21 |= (arr_6 [i_2]);
    }
    #pragma endscop
}
