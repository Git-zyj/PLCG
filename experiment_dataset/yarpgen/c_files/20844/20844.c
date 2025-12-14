/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((!(arr_1 [i_0]))) ? ((((arr_3 [i_0]) ? (arr_0 [i_0] [i_0]) : var_17))) : ((((min(var_0, (arr_1 [i_0])))) ? (((var_14 ? (arr_1 [i_0]) : (arr_1 [i_0])))) : (((arr_2 [i_0] [i_0]) / var_16))))));
        var_19 = (min(var_19, ((((((arr_1 [i_0]) ? (arr_3 [i_0]) : var_15)) % ((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_3))))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((((var_3 >> (((arr_1 [i_1]) + 27850))))) % ((((var_16 ? var_3 : (arr_5 [i_1]))) + (((((arr_3 [i_1]) && var_13))))))))));
        arr_7 [i_1] [i_1] = ((((min((arr_0 [i_1] [i_1]), (arr_6 [i_1])))) ? (min((arr_6 [i_1]), (arr_2 [i_1] [i_1]))) : (arr_5 [i_1])));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_21 = (((-9223372036854775807 - 1) ? (min(var_6, var_13)) : ((((var_0 ? (arr_11 [i_3] [i_3] [i_2]) : var_11))))));
            var_22 = (255 ? 4294967041 : -2);
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            var_23 = (~var_4);
            var_24 = (arr_12 [i_2] [i_2]);
            var_25 = (((arr_10 [i_4 + 2] [i_4] [i_4]) << (((arr_10 [i_4 + 2] [i_4] [i_4]) - 2047126178304952012))));
            arr_14 [i_2] [i_2] [i_2] = (((arr_11 [i_4 + 1] [i_4 - 1] [i_4 - 1]) ? var_11 : (arr_11 [i_4 + 2] [i_4 + 2] [i_4 + 2])));
        }
        arr_15 [i_2] = (((var_10 / var_2) ? (arr_8 [i_2]) : (min(var_15, (arr_13 [i_2] [i_2] [i_2])))));
        var_26 = (min(((((arr_9 [i_2]) ? ((var_7 >> (((arr_8 [i_2]) - 28269)))) : var_5))), (((arr_11 [i_2] [i_2] [i_2]) ? (arr_11 [i_2] [i_2] [i_2]) : (arr_11 [i_2] [i_2] [i_2])))));
    }
    for (int i_5 = 4; i_5 < 21;i_5 += 1)
    {
        var_27 = ((((arr_16 [i_5 - 1]) ? (arr_16 [i_5 - 3]) : (arr_17 [i_5 - 4] [i_5 + 2]))));
        var_28 = ((((min((arr_17 [i_5 - 1] [i_5]), (arr_16 [i_5 + 2])))) ? (((arr_17 [i_5 - 3] [i_5]) ? (arr_17 [i_5 + 1] [i_5]) : (arr_16 [i_5 - 2]))) : var_7));
    }
    var_29 += (((var_4 & ((var_13 ? var_18 : var_1)))));
    #pragma endscop
}
