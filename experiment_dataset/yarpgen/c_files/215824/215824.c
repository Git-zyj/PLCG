/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((-44 & ((((arr_1 [i_0]) <= ((-1862368024 ? (arr_1 [i_0]) : (arr_0 [i_0]))))))));
        arr_3 [i_0 + 1] = (((((!(arr_1 [i_0 + 1])))) < var_9));
        var_13 -= ((~(((arr_1 [i_0 + 1]) ? ((((arr_0 [i_0]) >= var_1))) : ((((arr_0 [i_0 + 1]) < (arr_0 [10]))))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0 - 1] = (max((~-1998049982973101778), ((((!-78) << (((arr_6 [i_0 + 1]) - 47)))))));
            var_14 = 34;
        }
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (((!(((+(max((arr_9 [4] [i_2 + 1]), (arr_9 [11] [i_2 + 1])))))))))));
        arr_11 [i_2 + 1] |= (((~-55) ? (((var_2 >> (113 - 77)))) : ((max(var_11, (arr_4 [i_2] [i_2 + 1] [i_2 - 1]))))));
        arr_12 [i_2] = max(((-1862368011 ? (max(var_4, (arr_0 [i_2 - 1]))) : (arr_0 [i_2]))), (((-(min(118, 1862368003))))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_16 = (min(var_16, ((max((((((max((arr_8 [i_3]), var_9))) >= (min((arr_1 [i_3]), 17533634548935581035))))), (max(var_4, ((((arr_15 [i_3] [i_3]) ? var_11 : (arr_14 [i_3])))))))))));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_18 [i_4] [1] [1] = ((((((var_6 ? var_8 : 11804340446700605560)))) ? ((((((arr_10 [i_3]) | var_0))) ? ((min(8, var_8))) : ((~(arr_10 [i_3]))))) : ((var_10 & (arr_15 [i_3] [i_4])))));
            var_17 = -4911439436523843681;
        }
        var_18 = (min(var_18, var_6));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        var_19 = (((arr_21 [i_5 + 3]) ? (arr_20 [i_5 - 1]) : -10));
        arr_22 [5] = ((-(arr_19 [i_5 + 2])));
        var_20 = (!-var_6);
        var_21 = ((19310 ? (arr_21 [i_5 + 2]) : (arr_19 [i_5 + 2])));
    }
    #pragma endscop
}
