/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_19 = ((!(var_18 <= var_2)));
            var_20 |= -24044;
        }
        for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_2] = (max(var_16, ((((max(var_1, -24044))) < var_15))));

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_21 = ((((-var_8 ? ((var_14 ? var_14 : var_9)) : (arr_3 [i_2] [1] [i_3])))) ? ((max((arr_5 [i_2 + 1]), var_7))) : ((((((((arr_2 [i_0] [10]) != (arr_8 [i_3])))) <= ((-(arr_9 [i_0] [i_0] [i_3]))))))));
                var_22 = (min(var_22, ((((((arr_5 [i_0 + 1]) << (var_8 - 842462596))) > var_10)))));
                arr_11 [i_0] [i_3] [12] [i_0] = (((arr_4 [i_0] [i_2]) ? (!-24044) : ((var_0 ? var_10 : -var_7))));
            }
            var_23 = 30627;

            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                var_24 = (max(var_24, (((var_17 ? (arr_5 [i_2 - 1]) : (((arr_5 [i_2 - 1]) ? (arr_3 [i_2 - 1] [i_2] [8]) : (arr_3 [i_2 - 1] [i_2 + 1] [14]))))))));
                var_25 = (min(var_25, (((((min(var_3, var_0))) >> ((var_11 ? 22 : var_4)))))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                var_26 -= (var_0 ? var_5 : 4987437466025254434);

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_23 [i_0] [i_2] [i_5] [i_5] = (!var_15);
                        var_27 -= ((var_12 ? 27 : ((4987437466025254434 ? var_2 : (arr_18 [i_5])))));
                    }

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_8] |= (arr_8 [i_8]);
                        var_28 -= (!var_14);
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_29 = (~var_4);
                        var_30 = ((!(var_16 % var_10)));
                        arr_31 [i_5] [i_0] [i_5] [i_5] [i_5] [1] [i_0] = ((arr_6 [i_0] [i_9]) ? var_14 : (arr_1 [i_0 - 2] [i_2 + 1]));
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_31 &= ((((var_4 >> (var_8 - 842462577))) < ((var_1 ? var_2 : 27))));
                        arr_34 [i_5] [i_5] [3] [i_6] [i_6] = (((var_0 < 102) * (var_7 == -11)));
                    }
                }
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    arr_38 [i_0] [i_5] [5] = ((~(arr_22 [i_11] [i_11 + 1] [i_5] [i_11] [i_11 + 2])));

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_43 [i_0] [i_5] [i_5] [i_11] [i_12] = var_14;
                        arr_44 [i_5] = (((arr_27 [i_0] [6] [i_0] [6] [5] [8]) ? ((((arr_25 [i_5] [15] [i_5]) <= var_7))) : (arr_33 [i_0] [i_11 + 2] [i_2 - 1] [i_11 + 2] [i_0] [i_5] [i_5])));
                    }
                }
                var_32 = (((arr_1 [i_0 - 2] [i_2 - 1]) || var_10));
            }
            arr_45 [i_0 - 3] [i_0] [0] = ((((var_2 ? var_2 : var_15)) << (((var_12 > ((var_1 ? var_18 : (arr_1 [i_0] [i_0]))))))));
        }
        var_33 = (((arr_3 [1] [1] [8]) ? (((arr_8 [1]) ? (arr_3 [i_0] [2] [16]) : var_17)) : ((((arr_3 [i_0] [14] [16]) ? -28 : (arr_29 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [4]))))));
    }
    for (int i_13 = 1; i_13 < 13;i_13 += 1)
    {
        var_34 = (((arr_10 [i_13] [1] [i_13]) + ((-(arr_27 [i_13 + 1] [i_13] [12] [i_13] [i_13] [i_13])))));
        var_35 |= ((((!(((arr_27 [i_13] [i_13] [11] [i_13 + 2] [1] [i_13]) || var_9)))) ? (((-22 % (~var_8)))) : (((var_16 | 2081509831) << (((~var_1) - 9069))))));

        for (int i_14 = 3; i_14 < 14;i_14 += 1)
        {
            arr_53 [i_13] = (max((arr_17 [i_13] [i_13 + 2] [i_13] [i_14 + 1]), ((var_9 ? (arr_17 [i_13] [i_13 + 2] [i_14 - 3] [i_14 + 1]) : (arr_17 [i_13] [i_13 + 2] [i_14] [i_14 + 1])))));
            var_36 = (((((1 & var_4) ? var_6 : (min(var_6, 21158)))) << (var_17 - 7032366434309652260)));
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            arr_56 [i_15] = (((((~(((var_2 > (arr_30 [i_13] [i_13] [i_13] [i_13] [i_13]))))))) ? 66 : (max(-var_9, (arr_13 [i_13 - 1] [i_13 - 1])))));
            var_37 = (arr_39 [i_15]);
        }
        var_38 = (((~var_3) * (var_9 | 1088127312)));
        var_39 = ((!(~-26)));
    }
    var_40 -= (var_9 % 15162);
    #pragma endscop
}
