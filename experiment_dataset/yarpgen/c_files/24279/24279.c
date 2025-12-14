/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = (min(var_17, var_10));
    var_18 = (!var_13);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = ((+(max(-var_3, ((((arr_1 [12] [i_0]) * (arr_0 [1] [1]))))))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
        {
            var_20 = (arr_2 [i_1]);
            var_21 = (min(var_21, (max(var_1, (min(var_13, (arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
            var_22 -= max(var_14, (max((2133978084 >= var_13), 2747754435)));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
        {
            var_23 = var_8;
            var_24 = (min(-var_3, ((max(var_6, var_9)))));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_25 = (arr_5 [i_3] [i_3]);
        var_26 = (arr_8 [i_3]);
        arr_9 [i_3] = (arr_8 [5]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_27 = var_7;
        var_28 ^= (((arr_8 [i_4]) ? (arr_8 [i_4]) : var_2));
        var_29 -= var_3;
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_30 = (max((((min((arr_1 [i_5] [3]), (arr_6 [1]))))), var_12));
        var_31 = (((var_15 * (max(var_3, var_9)))));
        var_32 = (min((arr_13 [i_5]), (((-(((var_7 || (arr_11 [i_5])))))))));
    }
    var_33 = ((min((min(var_7, var_7)), var_4)) ? var_1 : ((~(var_13 / var_15))));
    #pragma endscop
}
