/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((((max(1, var_10))) ? var_11 : -25596)), ((-4846224576727461686 ? 65529 : 2325))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= (max(((var_2 ? (((min(var_7, -1)))) : (arr_1 [8]))), (max((arr_1 [i_0 - 1]), 1))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                var_15 = var_2;
                arr_7 [1] [i_2] [11] [1] = -var_7;
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
            {
                arr_10 [i_0] [i_1] [i_3] = (!var_4);
                arr_11 [i_0] [16] [7] = var_8;
                arr_12 [i_0 + 2] [i_1] [15] = var_12;

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_16 += (((((var_8 ? var_4 : var_5))) ? (arr_9 [1] [i_0 + 1]) : (var_4 == var_5)));

                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        arr_19 [i_0 + 1] [4] [i_3] [0] [i_5] [i_5] = -var_10;
                        arr_20 [i_0] [i_1] [i_3] [i_4] [i_5 - 1] = var_7;
                    }
                    arr_21 [i_0] [i_1] [i_1] [i_4] = (arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 2]);
                    var_17 = var_9;
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    var_18 = var_11;
                    arr_24 [i_0] [i_1] [i_0] [i_3] [i_0] = var_1;
                }
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    arr_27 [i_7] [2] [0] = ((var_11 ? (835 * 1) : -var_2));
                    var_19 = (~7802667926746237257);
                    arr_28 [17] [i_1] [i_7] [17] = (((((var_9 ? var_8 : 18446744073709551612))) ? var_11 : ((17412027651109575303 ? var_10 : var_12))));
                }
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_20 += var_0;
                            var_21 = (min(var_21, var_8));
                            var_22 = var_1;
                        }
                    }
                }
                var_23 *= (arr_25 [i_0 + 3] [i_1] [i_0 + 3] [i_1]);
            }
            for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
            {
                var_24 = var_11;
                var_25 -= ((arr_4 [i_0 - 1] [i_1]) ? (15 < var_8) : (arr_32 [i_0]));
                var_26 ^= var_4;
                arr_41 [i_0 - 1] [i_1] [i_1] [i_11] = (var_5 < var_2);
            }
            arr_42 [i_0] [i_1] [i_0] = 40;
        }
        for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
        {
            arr_45 [9] = ((((var_4 ? -5144641771519140684 : var_13)) > var_3));

            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                var_27 = min((((var_4 ? (arr_37 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 2]) : (((min(1, 1))))))), (((((max(var_7, -24909)))) | (-92 - 5102647995928768795))));
                arr_50 [i_13] [6] [5] [i_0] = var_6;
            }
            var_28 -= -24885;
            arr_51 [i_0] = (43 > 1);
            var_29 ^= (arr_6 [i_0 + 1] [5] [i_12]);
        }
        for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
        {
            arr_55 [i_0] [i_14] [i_14] = (((var_7 ^ var_3) ? (((arr_31 [i_14] [i_0 - 1] [i_14]) | 12280198123952195243)) : (((max((arr_54 [12]), var_7))))));
            arr_56 [i_0] = var_12;
            arr_57 [i_0] [i_0] [i_0 + 1] = (((((arr_43 [i_0 + 1]) ? var_8 : var_0)) == var_13));
            arr_58 [i_14] [i_0] = var_11;
        }
        /* vectorizable */
        for (int i_15 = 2; i_15 < 15;i_15 += 1)
        {
            arr_61 [i_0] [i_15] = 24871;
            var_30 = (max(var_30, (var_11 & var_1)));
        }
        var_31 = (max(var_31, ((~(max(1, (max((arr_38 [13] [i_0 - 1] [i_0 - 1] [i_0 - 1] [13] [i_0] [17]), var_5))))))));
    }
    for (int i_16 = 1; i_16 < 16;i_16 += 1) /* same iter space */
    {
        arr_64 [i_16] = (min(1, -1));
        arr_65 [5] [i_16] = ((var_11 ? ((var_4 + (min(var_8, var_9)))) : var_6));
        arr_66 [i_16] = min(205, 5604244442240988315);
    }
    #pragma endscop
}
