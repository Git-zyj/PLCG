/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((var_7 ? (arr_1 [i_0]) : var_0));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_14 = (-var_10 % var_6);
            arr_4 [i_0] = (((!var_11) ? var_0 : (((arr_0 [i_0] [i_0]) - (arr_2 [i_0] [i_0])))));
            var_15 = (~((((arr_1 [i_0]) && var_4))));
            var_16 = (((15 <= -15) ? ((((arr_1 [i_0]) != var_11))) : var_2));
        }
        for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] = (((var_11 <= var_2) << ((((var_12 ? 219 : (arr_0 [i_0] [i_0]))) - 210))));
            var_17 = (((var_7 ? (arr_6 [i_0] [i_0]) : var_0)) % (arr_0 [i_2 - 1] [i_0]));
            arr_8 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
            var_18 = ((var_12 * (var_2 == var_5)));

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_19 = var_4;
                var_20 = var_11;
                arr_11 [i_0] [i_2 + 1] [i_2] [i_0] = ((!(arr_3 [i_2 - 2] [i_2 - 1])));
                var_21 = ((~(arr_9 [i_0] [i_2 + 3] [i_2 + 2])));
            }
        }
        for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_0] = var_10;
            arr_16 [i_0] = (((((arr_6 [i_0] [i_0]) ? var_1 : (arr_0 [i_0] [i_0]))) * ((var_7 ? 1 : var_3))));
        }
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            arr_20 [i_0] [i_0] [i_0] = ((((var_7 + (arr_2 [i_0] [i_0])))) || var_12);
            arr_21 [i_0] = (~var_1);
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            arr_36 [i_6] [i_7] [i_7] [i_8] [i_9] [i_10 - 1] = (var_4 || -var_1);
                            arr_37 [i_6] [i_6 - 1] [i_6] [i_6] [i_6] = (var_11 % var_12);
                            var_22 = ((!(((var_0 ^ (arr_33 [i_6] [i_9] [i_8] [i_6]))))));
                            var_23 = (arr_6 [i_6] [i_6]);
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_24 = (((arr_30 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1]) ? var_9 : ((var_10 ? -15 : var_9))));
                            arr_40 [i_6] [i_7] [i_7] [i_7] [i_11] [i_11] = ((arr_24 [i_6]) ? var_1 : (-1 * var_2));
                            var_25 = (((var_4 >> (var_2 + 138))));
                            var_26 = var_6;
                            var_27 = ((((var_7 ? var_1 : var_12)) - (1 >> 29)));
                        }
                        for (int i_12 = 1; i_12 < 17;i_12 += 1)
                        {
                            arr_43 [i_6] [i_6] = (((arr_32 [i_6] [i_8] [i_6] [i_12 - 1] [i_12]) + (-32767 - 1)));
                            var_28 = 1;
                            var_29 = (arr_14 [i_12 - 1] [i_7] [i_8]);
                        }

                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            arr_46 [i_6] [i_7] [i_8] [i_7] [i_6] = ((-var_9 ? ((((arr_42 [i_8] [i_7] [i_6 - 1] [i_9] [i_6]) & var_1))) : (((arr_31 [i_7] [i_8] [i_9] [i_9]) ? (arr_23 [i_6]) : var_10))));
                            var_30 = var_5;
                        }
                    }
                }
            }
        }
        arr_47 [i_6] = ((var_8 >= (((var_2 + 2147483647) << (((((arr_19 [i_6] [i_6]) + 1598347970)) - 29))))));
        var_31 = ((var_6 ? var_5 : ((((!(arr_1 [i_6])))))));
        arr_48 [i_6] [i_6] = ((-((-122 ? var_4 : var_10))));
    }
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        var_32 = ((((~((((arr_32 [i_14] [i_14] [i_14] [i_14] [i_14]) < var_9))))) / ((-(arr_18 [i_14] [i_14])))));
        arr_51 [i_14] [i_14] = ((((max((((arr_31 [i_14] [i_14] [i_14] [i_14]) ? (arr_9 [i_14] [i_14] [i_14]) : var_5)), -var_2))) && (((((((arr_23 [i_14]) ? var_10 : 6401949446557737257))) ? ((var_7 ? -28 : var_9)) : ((((arr_34 [i_14] [i_14] [i_14] [i_14]) != (arr_33 [i_14] [i_14] [i_14] [i_14])))))))));
    }
    var_33 = (max((((var_2 == (!var_0)))), (((((var_4 ? var_5 : -71))) | (max(var_7, var_10))))));
    var_34 = (var_6 % ((-var_7 / (var_2 || var_6))));
    var_35 = (((min(var_5, var_1))));
    #pragma endscop
}
