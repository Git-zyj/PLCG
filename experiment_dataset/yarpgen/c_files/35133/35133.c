/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = ((-1 & 0) ? ((0 ? (18446744073709551615 && 18157007194019826220) : 128723677)) : 1671504323);
        var_20 = (max(var_20, ((((((((-(arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (var_13 - 624176021118057457))) < ((-1 ? (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 = ((max((max((arr_3 [i_1]), var_0)), (arr_2 [i_1] [i_1]))));
        var_22 = ((((((((arr_3 [i_1]) & (arr_2 [i_1] [i_1])))))) != (((arr_2 [i_1] [i_1]) ? ((var_8 ? (arr_2 [i_1] [i_1]) : var_3)) : (((var_9 ? var_4 : (arr_3 [i_1]))))))));
        arr_4 [i_1] = ((((!((min(var_12, -119))))) ? ((((!(arr_3 [i_1]))))) : (((((~(arr_3 [i_1])))) ? ((18446744073709551615 ? 1125886118 : var_8)) : (arr_3 [i_1])))));
        var_23 = arr_2 [i_1] [i_1];
    }
    var_24 ^= ((511 ? 143167187 : 947449495));
    var_25 = (max(var_25, var_11));
    var_26 = (var_15 + var_15);
    var_27 = (max(var_27, var_3));
    #pragma endscop
}
