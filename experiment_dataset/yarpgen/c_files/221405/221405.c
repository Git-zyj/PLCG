/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1 ? (((min(var_19, -1752641623)))) : var_19));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_21 = ((var_18 ? (((!((min((arr_3 [i_0]), 0)))))) : ((~((min((arr_1 [i_0]), 1)))))));
        var_22 = (max(var_22, ((min(var_0, (arr_3 [18]))))));
        var_23 -= ((min((arr_2 [i_0 + 1]), (arr_0 [i_0] [i_0]))));
        var_24 = (max(var_24, ((min(((var_8 ? (arr_3 [0]) : (arr_3 [4]))), ((min((arr_3 [12]), (arr_3 [1])))))))));
        arr_4 [i_0] = (min((arr_1 [i_0]), ((~(arr_2 [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_25 = (min(var_25, ((min((max((arr_5 [i_1]), (arr_1 [18]))), (arr_6 [i_1] [i_1]))))));

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            var_26 = ((1 ? 0 : (((max(1, (arr_2 [i_1])))))));
            arr_9 [i_1] [i_1] = (arr_5 [i_1]);
            arr_10 [i_1] = ((max((max(var_12, var_8)), (arr_3 [i_1]))));
            arr_11 [i_1] = (min((((arr_0 [i_2] [i_1]) | (arr_8 [i_1] [i_1] [i_2]))), (arr_0 [i_2] [i_2 + 1])));
        }
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_27 = 1;
        var_28 = (min(((min(((((arr_8 [i_3] [i_3] [i_3]) ? (arr_1 [8]) : (arr_2 [i_3])))), (((arr_3 [20]) ? (arr_7 [4] [4] [4]) : (arr_7 [8] [0] [i_3])))))), (min(var_10, (max((arr_1 [14]), 18446744073709551615))))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_16 [i_4] &= (min(((max((arr_13 [i_4]), 1))), (((arr_6 [i_3 - 1] [i_3 - 1]) ? (arr_14 [i_3]) : (((min(-70, (arr_6 [i_3] [6])))))))));
            arr_17 [i_3 - 1] = 62611;
            arr_18 [i_3 + 1] = ((((-1 && (arr_5 [i_3])))));
            arr_19 [i_3] [8] [i_3] = (min((arr_1 [0]), (min(var_7, (max(var_10, 3602837553))))));
        }
        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            arr_22 [i_3 - 1] [i_5] = (max(((min((min(1288566698, (arr_12 [i_3]))), (arr_3 [i_5])))), ((1 ? var_15 : (((arr_2 [i_5 - 1]) ? 1 : 641370036092934456))))));
            var_29 -= 18037953892962522753;
            var_30 = (arr_13 [i_3]);
        }
        var_31 &= var_18;
    }
    #pragma endscop
}
