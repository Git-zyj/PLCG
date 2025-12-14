/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((((8523 * var_12) + var_2))), var_0));
    var_18 &= (min(((((min(var_4, var_5))) ? var_10 : var_12)), var_4));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [2] = (((((((((arr_1 [8]) - (arr_1 [0])))) ? ((-(arr_2 [8]))) : (8523 - -62)))) ? (((-48 ? 14543 : -60))) : ((+(max((arr_0 [10] [10]), var_9))))));
        arr_4 [i_0] = ((819000502 ? (arr_0 [i_0] [i_0]) : ((-(((arr_2 [i_0]) - var_0))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = 8523;
        arr_8 [i_1] [i_1] = ((((min(((var_5 ? var_3 : var_4)), var_11))) ? ((max(((var_7 << (47 - 34))), (498594402 | 122)))) : (max((var_16 << var_5), ((max(-819000520, 54041)))))));
        arr_9 [2] &= (((min((arr_5 [8]), (((arr_6 [10]) - (arr_5 [16]))))) == ((((((!(arr_5 [10])))) & ((min((arr_6 [1]), (arr_6 [0])))))))));
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        arr_12 [i_2] = (((arr_10 [i_2]) ? (arr_11 [i_2 - 1]) : ((((var_4 ? var_0 : (arr_11 [i_2]))) % (((((arr_11 [i_2 + 1]) > 61))))))));
        arr_13 [i_2] |= (((arr_10 [i_2]) ? (min((((arr_10 [i_2]) ? 48557 : (arr_11 [i_2 - 2]))), ((75 & (arr_10 [5]))))) : ((((((arr_11 [i_2 - 1]) || var_7)) || ((max((arr_11 [i_2 - 2]), 31744))))))));
        arr_14 [i_2] [i_2] = (((((((max(-60, 178))) * ((min((arr_11 [21]), var_14)))))) ? (arr_10 [i_2]) : ((((max(9223372036854775808, (arr_10 [i_2])))) ? (((38967 ? (arr_11 [i_2 - 2]) : (arr_11 [14])))) : var_16))));
        arr_15 [i_2] = (max(((max(((min(-20855, (arr_10 [20])))), 14542))), ((((max(1, var_1))) ? ((var_1 ? var_1 : var_7)) : (((var_13 / (arr_11 [i_2 - 2]))))))));
    }
    #pragma endscop
}
