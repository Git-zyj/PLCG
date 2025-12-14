/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) / (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0]) : ((((arr_0 [i_0] [i_0]) != 2)))));
        arr_3 [4] = (((((((arr_0 [i_0] [i_0]) || ((min(var_10, (arr_0 [i_0] [12])))))))) >= (arr_0 [8] [i_0])));
        var_17 = ((-((min((arr_1 [i_0]), ((((-9223372036854775807 - 1) || 9223372036854775807))))))));
        arr_4 [0] [0] = (max((((~((min(var_7, (arr_1 [0]))))))), ((~(max(var_16, (arr_0 [i_0] [1])))))));
        arr_5 [6] [6] = (min((arr_1 [i_0]), (arr_0 [7] [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_18 = (((max(34618, 9223372036854775807)) << (((((((arr_1 [11]) ? (arr_1 [5]) : var_3)) ^ (arr_7 [i_1] [6]))) - 61))));
        var_19 = (((arr_6 [3]) || (4294967294 != 34635)));
    }
    var_20 = ((+(((var_14 & var_2) ? (max(var_1, var_6)) : var_5))));
    var_21 = (min((min((max(var_14, var_11)), var_15)), var_12));
    var_22 = ((((var_0 + var_13) ? (max(var_14, var_8)) : (var_2 >= var_5))));
    #pragma endscop
}
