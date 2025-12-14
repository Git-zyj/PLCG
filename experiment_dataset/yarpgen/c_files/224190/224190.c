/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] |= (((((((var_12 ? var_0 : (arr_0 [i_0] [i_0])))) || (arr_0 [i_0] [3]))) ? (max(((min(var_7, var_5))), (min(var_0, (arr_0 [i_0] [8]))))) : -1752));
        arr_3 [i_0] [i_0] = (min(((((arr_0 [i_0] [i_0]) ? var_4 : var_11))), (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_15 = (max((arr_1 [i_1]), (((arr_1 [i_1]) ? (arr_1 [8]) : (arr_1 [i_1])))));
        var_16 ^= (max(var_6, (max((((arr_1 [i_1]) ? var_12 : var_6)), ((var_3 ? (arr_1 [7]) : var_14))))));
        var_17 = (min(var_17, (((((((((max(var_10, var_10)))) - ((var_11 ? var_9 : (arr_0 [i_1] [i_1])))))) ? (((((var_1 ? (arr_0 [i_1] [i_1]) : var_9))) ? (((arr_4 [7]) ? (arr_1 [i_1]) : (arr_4 [i_1]))) : ((((arr_0 [4] [i_1]) < var_14))))) : (((arr_0 [i_1] [i_1]) ? ((min(51741, (arr_1 [i_1])))) : ((var_1 ? (arr_4 [i_1]) : var_6)))))))));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_18 ^= ((((((arr_6 [i_2] [i_2 + 3]) ? (arr_6 [i_2] [i_2 - 1]) : var_11))) ? ((max((arr_9 [i_2 + 1]), var_14))) : (((arr_9 [2]) ? var_6 : (arr_9 [i_2 + 1])))));
        var_19 = ((((min((arr_8 [1] [1]), ((var_2 ? var_5 : var_4))))) ? ((((arr_9 [i_2 + 2]) ? (((arr_7 [7]) ? var_10 : (arr_9 [i_2 + 2]))) : var_13))) : (min((((arr_9 [i_2]) ? var_8 : var_14)), (arr_9 [i_2 + 1])))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_20 = (((((((((arr_11 [i_3] [6]) ? (arr_0 [i_3] [i_3]) : var_9))) ? (var_2 > var_11) : (((arr_0 [i_3] [9]) ? var_12 : var_13))))) ? (((arr_11 [i_3] [i_3]) ? (((var_11 ? (arr_4 [i_3]) : (arr_9 [i_3])))) : (arr_10 [i_3] [5]))) : (((((min((arr_1 [i_3]), var_2))) / ((((arr_11 [i_3] [i_3]) || var_10))))))));
        var_21 *= (((arr_8 [i_3] [i_3]) <= var_13));
    }
    var_22 = (min((((((20208 ? -14597 : 14597))) ? 1760 : 242)), ((var_8 ? var_11 : 8))));
    var_23 = var_5;
    var_24 = var_0;
    var_25 = (max(var_25, (((((var_0 ? ((var_8 ? var_9 : var_2)) : (((var_12 + 2147483647) >> (var_3 - 12771))))) < ((((((var_0 ? var_12 : var_6))) || (var_1 < var_9)))))))));
    #pragma endscop
}
