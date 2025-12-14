/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (((max(((((var_3 + 2147483647) << (249 - 249)))), ((var_8 ? var_0 : var_9)))) >> (((((var_4 | var_4) ? -var_11 : (3508771788024350201 & 239))) + 223))));
    var_14 = (!6);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 ^= ((-(((max((arr_0 [20]), 2092805888))))));
        var_16 = ((-(min((arr_0 [i_0]), ((max(1052095183, 1052095182)))))));
        var_17 = (((((((arr_0 [i_0]) ? 1052095183 : 9))) ? (arr_0 [i_0]) : (!-21580))));
        arr_2 [14] = ((((((arr_0 [i_0]) ? (max(18446744073709551614, 18)) : (~0)))) ? (arr_1 [i_0]) : (((((arr_0 [i_0]) ^ (arr_0 [i_0]))) ^ (arr_1 [19])))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_1] = (max(var_8, (max((69 - var_12), ((var_11 ? 1 : (arr_5 [i_0])))))));
            var_18 = (max(var_18, (((52108 ? (((1 ? -803452909 : 6))) : var_7)))));
        }
    }
    var_19 = var_1;
    #pragma endscop
}
