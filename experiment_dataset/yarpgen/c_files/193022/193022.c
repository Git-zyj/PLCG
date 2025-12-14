/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-20 ? (1955922308 + 3108601003577738418) : (((var_5 & var_5) & (!var_8))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((-(arr_2 [i_0]))))));
        var_14 = (((((arr_2 [i_0]) == (arr_2 [i_0]))) ? ((~(arr_2 [i_0]))) : (((arr_2 [i_0]) ^ (arr_2 [i_0])))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_15 = ((~(((arr_5 [i_0] [i_0]) ? (arr_5 [0] [i_1]) : 960079743))));
            var_16 = (min(var_16, (arr_4 [i_1])));
            var_17 = (((arr_2 [i_1]) ? (min((arr_2 [i_0]), (arr_2 [i_0]))) : var_2));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_18 = ((~((((arr_5 [i_0] [i_2]) != (arr_5 [i_0] [i_2]))))));
            var_19 = (min((arr_2 [i_2]), (((((((arr_1 [i_0]) ^ (arr_2 [8])))) ? (arr_6 [i_2] [i_2]) : (min(1468218626, (arr_8 [i_0] [i_0] [i_2]))))))));
            arr_9 [i_2] = ((((+(max((arr_8 [i_2] [i_2] [i_2]), 9587))))) ? ((-(arr_8 [i_0] [12] [i_2]))) : var_0);
        }
        var_20 |= 1152921504606846912;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_21 = arr_10 [i_3];
        arr_13 [i_3] = (18446744073709551603 ? (-9223372036854775807 - 1) : -var_7);
    }
    var_22 = var_11;
    #pragma endscop
}
