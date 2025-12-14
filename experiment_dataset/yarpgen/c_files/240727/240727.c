/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 ^= (max(-200220554890893894, (max(var_1, var_7))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_20 = ((!(((((((arr_1 [i_0]) ? (arr_1 [1]) : var_9))) ? ((2742248558 ? var_13 : var_5)) : (var_0 ^ 127))))));

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_21 += (((((max(105, (arr_4 [i_0])))) ? var_9 : ((-8774502822925321586 ? (arr_0 [i_1]) : (arr_1 [5]))))) ^ ((~((var_2 ? var_15 : (arr_0 [i_0]))))));
            var_22 = ((((((arr_3 [i_0] [i_0]) ? ((((arr_0 [1]) ? (arr_4 [6]) : (arr_4 [i_0])))) : 8774502822925321574))) ? (((((max(var_17, -4236312827508884356))) ? (((arr_1 [4]) ? -120 : (arr_1 [i_1]))) : ((5536099895539742327 ? (arr_4 [9]) : (arr_4 [i_0])))))) : (((arr_0 [i_0 + 2]) ? (((arr_4 [i_1 + 1]) ? (arr_4 [i_0]) : 4294967295)) : (arr_2 [i_0] [i_0 - 1] [i_0 - 1])))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            arr_7 [i_0] [i_0] = (((arr_0 [i_0 + 2]) || (arr_0 [i_0 + 1])));
            var_23 *= ((-105 ? ((8188 ? var_9 : (arr_1 [i_0]))) : (~var_13)));
        }
        var_24 ^= (+(((var_3 | 3217016318201054094) - (((arr_3 [i_0] [i_0]) - var_5)))));
        var_25 = (max(((var_16 ? (max(8774502822925321586, 4238281373)) : (max((arr_0 [i_0]), (arr_1 [i_0]))))), ((((max(127, 1))) ? ((max(105, 56685911))) : -var_1))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        arr_10 [i_3] = (var_16 != 1);
        var_26 ^= ((((!(arr_6 [7] [i_3] [7]))) ? var_2 : ((((!(arr_2 [i_3 + 1] [i_3 - 2] [i_3 - 2])))))));
        arr_11 [i_3] = (arr_9 [i_3] [i_3]);
    }
    #pragma endscop
}
