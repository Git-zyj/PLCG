/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((((max(((max(var_7, var_4))), ((var_5 ? var_0 : var_4))))) ? ((var_9 ? (max(var_10, var_9)) : ((max(var_7, var_9))))) : var_3));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_15 = (min(var_15, 1073737728));

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_6 [i_0] [11] [i_2] = (((arr_4 [i_1] [i_1 - 1] [i_1 + 2]) ? ((((var_9 < (arr_0 [i_0]))))) : (arr_1 [i_0 - 1] [i_1 + 2])));
                arr_7 [i_0] [i_2] = ((0 == (arr_0 [i_1 - 2])));
                arr_8 [i_0] [i_1] [i_2] = 1;
                var_16 = (min(var_16, (arr_4 [i_1 - 2] [i_1] [i_1])));
            }
            arr_9 [i_0] [1] = (((((arr_3 [i_0] [i_1]) && (arr_0 [6]))) || (arr_4 [i_1] [i_0] [i_0])));
            var_17 = var_6;
            arr_10 [i_0 + 2] [i_1 - 2] = 32767;
            arr_11 [i_0] = ((-(arr_2 [i_0 + 1])));
        }
        var_18 = (min(var_18, ((((arr_1 [i_0] [i_0 - 2]) / ((1915973919 ? 241 : (arr_2 [i_0]))))))));
        var_19 = var_11;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = (min((((arr_12 [i_3]) * (arr_12 [i_3]))), (((((min(29005, (arr_14 [i_3])))) >= 255)))));
        var_20 = ((((min((arr_14 [i_3]), (arr_14 [i_3])))) <= ((3221229568 ? (max(var_5, (arr_14 [i_3]))) : ((max((arr_14 [i_3]), -108)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_21 *= (arr_18 [i_4] [i_4]);
        var_22 += (((arr_14 [i_4]) ? (arr_17 [i_4]) : 245));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_24 [i_5] [i_5] = (((arr_19 [8]) ? (arr_22 [i_5] [0] [9]) : var_12));
            var_23 = ((241 ? (arr_19 [i_5]) : (arr_19 [i_5])));
        }
        var_24 = (max(var_24, (arr_23 [i_5])));
        arr_25 [11] = -var_2;
    }
    var_25 = ((((var_0 ? (max(var_9, var_12)) : var_4)) % 60));
    var_26 = (min((min(((var_1 ? var_7 : var_1)), var_8)), var_8));
    #pragma endscop
}
