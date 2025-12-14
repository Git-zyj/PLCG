/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, (((max(((var_0 & (arr_1 [5]))), (var_12 % var_16))) ^ (!var_15)))));
        var_18 = 255;
        var_19 = (max(var_19, ((((var_2 ? ((var_1 ? var_16 : (arr_0 [i_0]))) : (((arr_1 [8]) / var_1))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] = ((-(((min((arr_4 [7] [7]), (arr_3 [i_1] [i_1]))) + ((max(var_4, var_8)))))));
        arr_6 [4] |= (arr_3 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (((arr_4 [i_2 + 1] [i_2 + 1]) ? (((var_13 ? var_10 : var_12))) : var_13));
        arr_12 [i_2] [i_2] = (((!var_15) ? ((var_5 % (arr_10 [i_2]))) : ((((arr_4 [i_2] [i_2 + 1]) || var_0)))));

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            arr_15 [13] [i_2] [1] = (((var_6 ? var_9 : var_7)));
            arr_16 [i_2] [i_2] = (arr_8 [i_2]);
            var_20 *= (arr_14 [i_3] [i_3] [12]);
        }
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        arr_19 [i_4] = ((+(max(var_13, (((arr_2 [8]) / var_6))))));
        arr_20 [18] = ((~(((((arr_17 [1] [i_4]) - (arr_0 [i_4 + 1])))))));
    }
    var_21 = (max((((var_2 < ((var_15 ? var_11 : var_1))))), ((-var_11 ? (var_2 == var_11) : ((var_10 ? var_8 : var_2))))));
    var_22 = (min((((~((var_5 ? var_14 : var_7))))), ((var_9 ? (((var_10 ? var_2 : var_14))) : ((var_2 ? var_16 : var_10))))));
    #pragma endscop
}
