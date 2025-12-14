/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((!((var_3 && (var_15 || var_10)))));
    var_19 &= (1977786889 ? (((var_13 - var_15) ? (var_12 - var_6) : (var_16 - 3570700379))) : 4294967295);

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 = (((((arr_1 [i_0]) ? ((min((arr_0 [i_0]), 334378762))) : 1432661753)) >> (-6134 / var_14)));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_21 -= (((arr_0 [i_0]) ? ((~(arr_1 [i_0]))) : (arr_1 [i_0])));
        arr_3 [i_0] &= var_3;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_22 = (((!6147) || (arr_4 [i_1] [i_1])));
        arr_6 [i_1] [i_1] = ((-(arr_1 [i_1])));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_23 &= (max(((2412773846 << (var_14 + 5297039310434272905))), 6153));
        var_24 = (((min(var_17, (arr_4 [i_2] [i_2]))) + ((var_9 + (arr_8 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_25 = (max(var_25, 1945974433));
        arr_13 [i_3] = ((var_2 != (arr_1 [i_3])));
        var_26 = ((((((!(arr_8 [i_3]))))) < (max((arr_8 [i_3]), var_5))));
        var_27 += var_5;
    }
    var_28 = ((var_4 % ((2199198193 ? var_1 : var_16))));
    var_29 = (var_8 ? -var_3 : ((var_6 >> ((((var_14 ? var_14 : var_17)) + 5297039310434272894)))));
    #pragma endscop
}
