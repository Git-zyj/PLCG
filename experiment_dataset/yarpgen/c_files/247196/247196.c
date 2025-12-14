/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((max((var_2 % 66571993088), (((-3464371456501416851 ? var_5 : var_8))))) & (((((min(22214, var_10))) ? (16777200 + 19) : ((max(1, -14557)))))));
    var_12 = var_5;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 += (~var_10);
        var_14 = var_1;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_1] = var_3;
            var_15 = (((max(((min(var_0, var_9))), (arr_5 [i_1] [1] [i_0 + 1]))) == (((1 & ((1 ? -34 : var_0)))))));
            var_16 = ((!(arr_4 [i_0 - 1] [i_1] [i_0 + 1])));
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_17 = (arr_7 [15] [1]);
            var_18 = (((4294967295 ? (arr_7 [i_2 + 1] [i_0 + 1]) : (arr_7 [i_2 + 1] [i_0 + 1]))));
        }
        for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_19 |= var_7;
            arr_13 [i_0] = (+(((1 / var_7) ? (arr_5 [i_0 - 1] [i_3 - 1] [i_3 + 1]) : 23086)));
        }
        arr_14 [14] = var_5;

        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            var_20 = ((+(((arr_5 [i_4] [i_4] [i_4 + 2]) - (arr_11 [i_4] [i_4])))));
            var_21 = var_1;
            var_22 = ((-(var_10 & var_1)));

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        {
                            var_23 = ((var_9 ? (min(var_7, (((arr_19 [i_0] [i_4] [i_7]) >> (3577464415802254982 - 3577464415802254957))))) : ((-(arr_11 [i_6] [i_7 + 1])))));
                            arr_27 [i_4] [i_4] [i_5] [i_5] [6] [i_6] [i_7] = (2550549898583105609 % (((-847502515 ? var_7 : 30))));
                            arr_28 [13] [i_4] [i_4] [i_6] [i_7] = arr_9 [15];
                        }
                    }
                }
                var_24 = (35 & 130);
            }
        }
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            var_25 = var_5;
            arr_31 [i_0 - 1] [i_8] [14] = ((!(-8231 + -1141177237)));
            var_26 = 185;
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_27 = var_10;
            var_28 = max(-847502506, 240);
        }
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            var_29 = ((((((arr_36 [i_10]) ? 255 : var_0))) + var_7));

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_30 = var_4;
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        {
                            var_31 = ((((min(((min((-127 - 1), 32767))), (arr_43 [1] [i_13 - 3] [i_14] [i_13 - 3] [i_13] [i_13])))) ? ((((arr_43 [i_13 - 2] [i_13 - 1] [i_13 - 3] [i_13 - 3] [i_13 - 1] [i_13 - 1]) > (-127 - 1)))) : (((22214 == (150 ^ 5236584004303309912))))));
                            var_32 = (!var_8);
                            arr_48 [i_10] [i_10] [i_11] [15] [i_13 - 1] [i_14] = (arr_44 [i_10] [6] [i_10]);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                arr_51 [i_10] [i_10] [i_15] = var_0;
                var_33 = 18446744073709551615;
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                var_34 = (((arr_46 [i_10] [i_11] [i_16] [i_10] [i_11]) ? (arr_44 [i_10] [i_11] [4]) : (arr_36 [i_10])));
                var_35 = ((252 << (((arr_36 [19]) + 659361824))));
            }
            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                var_36 |= (((max((arr_55 [i_17] [i_17] [i_17] [i_11]), (max(var_5, 258)))) & (((1 + (arr_46 [i_10] [10] [i_17] [i_10] [i_10]))))));
                var_37 = (min((arr_45 [i_10] [i_10] [9] [i_10]), -2248382326687031468));
                arr_58 [i_10] = (35 < -279210688);
                var_38 = (((~(arr_41 [i_10] [0] [i_17]))));
            }
            var_39 = -8483324322923163650;
        }
        for (int i_18 = 1; i_18 < 18;i_18 += 1)
        {
            var_40 = 1701485119;
            arr_63 [i_10] [i_10] [i_18] = (arr_60 [i_18] [i_10] [i_10]);
        }
        arr_64 [i_10] [i_10] = var_1;
    }
    for (int i_19 = 0; i_19 < 25;i_19 += 1)
    {
        var_41 = 150;
        var_42 += (arr_67 [i_19]);
    }
    #pragma endscop
}
