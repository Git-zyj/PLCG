/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~10214);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_14 |= -32746;
        var_15 = ((var_9 ? (((arr_0 [i_0 - 2] [i_0 - 2]) ? var_5 : (arr_2 [i_0]))) : var_11));
        var_16 = ((var_9 ? (arr_0 [i_0 - 1] [i_0]) : var_8));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_17 = (((((arr_4 [i_1 - 2]) && var_6)) ? ((max(var_0, (arr_4 [i_1 - 1])))) : (max(var_8, var_10))));
        var_18 = ((-((24576 ? -343467765852887888 : (arr_6 [i_1 - 3] [10])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_19 += (((arr_8 [i_2]) > var_12));
        var_20 ^= (~var_6);
        arr_9 [i_2] = ((((var_9 ? -21440 : var_3)) > var_12));
        arr_10 [i_2] = ((21440 ? 79 : (arr_7 [i_2] [i_2])));
        var_21 = (~var_0);
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        var_22 = min((((~(arr_0 [i_3 + 1] [9])))), var_10);
        var_23 = (max(var_23, var_12));
        arr_14 [i_3] = 61922;
    }
    var_24 = -21440;

    /* vectorizable */
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        var_25 = ((var_4 ? (((var_7 && (arr_7 [i_4 - 1] [i_4 - 1])))) : (arr_15 [i_4 - 1])));

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_20 [i_5] [i_5] = -8234197477944981308;

            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_26 = ((4781309299182793965 ? (arr_8 [i_4 + 1]) : -2033237431553945185));

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_27 *= (((arr_22 [i_4] [i_7] [i_4 - 1]) > (arr_8 [i_4])));
                    var_28 = (267386880 | 8028817603607549884);

                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        arr_28 [i_8 - 1] [i_5] [15] [i_5] [i_6] [i_5] [i_4] = 0;
                        var_29 = ((var_4 ? (arr_17 [i_4 + 1]) : var_7));
                        var_30 += -var_9;
                        var_31 = (max(var_31, var_2));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_32 &= var_8;
                        var_33 = ((36859 ? (!var_11) : -93));
                        arr_31 [i_7] [i_5] [i_6] [i_5] [i_9] [i_7] [i_6] = (i_5 % 2 == zero) ? ((((var_5 > var_12) << (((((arr_27 [i_4] [i_4] [i_6] [i_7] [i_5] [i_9]) + var_8)) - 400703434463111303))))) : ((((var_5 > var_12) << (((((((arr_27 [i_4] [i_4] [i_6] [i_7] [i_5] [i_9]) + var_8)) - 400703434463111303)) + 7676301583210327650)))));
                        var_34 *= ((((1 * (arr_25 [i_5] [i_5])))) ? (((2000704534 ? 0 : var_1))) : ((var_5 ? var_9 : (arr_27 [i_4] [i_4] [i_4] [18] [i_7] [i_9]))));
                    }
                }
                var_35 = (max(var_35, -2000704534));
                var_36 ^= (arr_24 [i_4] [i_5] [i_6] [i_6]);
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_37 = var_10;
                            arr_41 [i_5] [i_11 - 1] [i_5] = ((~(((arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_34 [10] [i_10] [i_5] [i_4]) : 8796093022207))));
                        }
                    }
                }
                var_38 = ((~(arr_7 [i_4] [i_4 - 1])));
            }
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            var_39 = var_9;
            var_40 = var_11;
        }
        for (int i_14 = 3; i_14 < 19;i_14 += 1)
        {
            arr_46 [i_14] = (arr_32 [18]);
            var_41 = (max(var_41, ((var_6 ? (((9691 ? 2000704534 : (-2147483647 - 1)))) : (arr_33 [2])))));
            var_42 = (min(var_42, var_10));
            var_43 = ((~(arr_33 [4])));
        }
    }
    #pragma endscop
}
