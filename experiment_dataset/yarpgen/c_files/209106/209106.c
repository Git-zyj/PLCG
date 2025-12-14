/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((min(((14163660315035506728 ? 1 : 121)), ((var_1 ? var_19 : 1))))), (((max(16, 255)) % var_18))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 = (min(var_21, ((min(((max(((var_0 || (arr_1 [i_0]))), (arr_1 [i_0 - 1])))), (((arr_1 [i_0 - 1]) ? ((7 ? var_1 : (arr_1 [i_0]))) : ((((arr_0 [1] [i_0]) / (arr_2 [i_0])))))))))));
        var_22 = (max(var_22, ((((((-var_19 ? ((-(arr_2 [i_0]))) : (((1 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0 - 1]))))))) ? ((((var_3 && (arr_3 [i_0]))))) : (arr_3 [i_0]))))));
        var_23 = var_18;
        var_24 |= (arr_0 [i_0 - 1] [5]);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_25 = (((arr_3 [i_0 - 1]) > (arr_3 [i_1 - 1])));
            var_26 = (min(var_26, ((((arr_7 [2] [2]) ? (arr_7 [i_0 - 1] [10]) : var_18)))));
            var_27 = (max(var_27, 267));
            var_28 = (max(var_28, (arr_1 [i_0])));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_29 = (max(var_29, ((max(((-(arr_9 [i_0 - 1]))), var_3)))));
            arr_10 [i_2] [i_2] [i_2] = (((((-(min(var_8, (arr_2 [i_0])))))) ? ((var_19 ? (arr_2 [i_0 - 1]) : (arr_2 [7]))) : var_6));
            var_30 = (max(var_30, 116));
        }
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_31 -= ((((max((((arr_7 [i_3] [i_3]) ? 14233983988437545871 : (arr_3 [i_3]))), (((8274130622102694810 ? (arr_9 [1]) : (arr_11 [i_3]))))))) ? 55405 : (~63)));
        var_32 -= (((~(arr_7 [i_3] [i_3]))));
        var_33 = (((4212760085272005744 ? (arr_3 [i_3]) : var_16)) ^ (arr_3 [i_3]));
    }
    #pragma endscop
}
