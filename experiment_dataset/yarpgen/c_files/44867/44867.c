/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 -= ((((min(var_8, var_0))) & ((max((arr_1 [i_0]), 1)))));
        var_19 = (max(var_19, ((min((((!((((arr_0 [i_0]) ? var_7 : var_15)))))), (min(var_1, var_4)))))));
        arr_2 [i_0] = (max(((14995501645208559227 ? 120 : 69)), (min((arr_1 [i_0]), var_3))));
        arr_3 [21] [i_0] = var_14;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 += (max(((var_4 ? (arr_6 [i_1] [18] [i_1]) : 69)), (max((arr_6 [i_1] [20] [i_1]), 1555837363))));
            var_21 = (min(var_21, (((!(arr_7 [i_2] [i_2] [16]))))));
            var_22 = ((~(((arr_0 [i_1]) ? (max((arr_8 [i_1] [i_2]), var_11)) : (((~(arr_0 [i_1]))))))));
            var_23 = ((1 ? (((~127) & 20763)) : 1));
            arr_9 [i_1] [i_2] = (((max(var_8, (arr_5 [i_1])))));
        }

        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            var_24 = var_3;
            var_25 = ((~(arr_12 [i_1])));
        }
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            var_26 = ((-((+(((arr_14 [i_1] [i_1]) ? (arr_15 [i_1] [i_4] [i_4]) : (arr_1 [2])))))));
            var_27 += ((((max((arr_4 [i_1]), (arr_14 [i_1] [i_1])))) ? ((((min(var_3, var_17))) ? ((-118 ? var_11 : (arr_6 [i_1] [14] [i_1]))) : (((!(arr_5 [i_1])))))) : ((((arr_10 [i_4 - 1] [i_4 + 2] [i_4 - 1]) || (arr_10 [i_4 - 1] [i_4 + 2] [i_4 - 1]))))));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_28 -= (-(min((arr_10 [i_1] [i_1] [i_1]), (arr_10 [i_5] [i_5] [i_1]))));
            var_29 = (min(var_29, ((((((((97 ? -106 : -17))) ? 114 : ((min(1, 233))))) & ((min(var_15, 118))))))));
            var_30 = 96;
        }
        arr_19 [i_1] [i_1] = min((min((arr_14 [i_1] [i_1]), var_2)), (arr_17 [i_1] [i_1] [i_1]));
    }
    var_31 = (var_9 & -662420806991206862);
    var_32 = (((64 & var_1) ? 1 : (min(((var_7 ? var_6 : 9223372036854775807)), (var_13 & var_11)))));
    var_33 = (min((~var_8), ((var_10 ? var_13 : var_2))));
    #pragma endscop
}
