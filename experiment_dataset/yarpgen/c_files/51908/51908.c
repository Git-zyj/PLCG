/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        arr_4 [5] = ((((((((arr_1 [5] [1]) ? (arr_1 [i_0] [8]) : var_15))) < ((~(arr_0 [i_0]))))) ? -var_13 : (arr_1 [i_0] [i_0])));
        arr_5 [10] = -7793720920846817372;
        var_21 = ((((max((arr_3 [i_0] [i_0]), -7793720920846817374))) ? ((((((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) < ((1 ? var_4 : (arr_3 [i_0] [i_0]))))))) : (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_22 *= 29;

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_23 = (arr_8 [i_2 + 1] [i_2]);
            var_24 -= (arr_6 [8]);
            var_25 = ((-(arr_8 [i_2 + 1] [i_2])));
            var_26 = ((var_3 ? var_7 : -12799));
        }
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            arr_16 [i_3] = (((arr_10 [i_1] [14]) || (((-(arr_8 [i_3] [i_3]))))));
            var_27 = (((-(arr_14 [i_3] [i_3]))));
            var_28 = (~6172431401628958493);
            var_29 = ((var_0 | ((var_13 ? (arr_8 [7] [i_3]) : -1))));
            var_30 = arr_12 [i_3];
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_31 = ((var_5 ? ((var_19 ? 27 : (arr_10 [i_1] [1]))) : (arr_8 [i_1 + 1] [i_4])));
            var_32 = (arr_8 [12] [i_4]);
            arr_19 [i_1] [i_4] = (arr_11 [i_1] [i_4] [i_4]);
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
        {
            var_33 = (((arr_14 [i_5] [10]) ? (arr_15 [4] [i_5]) : ((-(arr_20 [i_1] [0] [i_1])))));
            var_34 = (max(var_34, ((((arr_15 [i_1 + 1] [i_5]) ? (arr_15 [i_1 + 1] [i_5]) : (arr_15 [i_1 + 1] [i_5]))))));
        }
        var_35 = (arr_12 [0]);
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_36 = (max(65, -6581719078415864784));
        var_37 = ((((6172431401628958498 >> (-31 + 77))) >> (((max(((((arr_17 [i_6] [i_6]) == var_3))), (max((arr_13 [i_6] [6]), var_14)))) - 14105370821213685871))));
    }
    var_38 = ((55994 ? 33 : 49));
    var_39 = ((((max((var_18 * var_11), (31810 * var_15)))) ? ((var_14 ? ((var_14 ? 6095371307948985079 : -6172431401628958498)) : (var_6 | var_8))) : ((((!(!var_12)))))));
    #pragma endscop
}
