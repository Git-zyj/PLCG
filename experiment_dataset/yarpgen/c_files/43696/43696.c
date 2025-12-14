/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 - 1] = var_15;
        arr_3 [i_0 + 2] [3] = ((arr_1 [i_0 + 1]) ? (((max((arr_1 [i_0 - 1]), (arr_0 [i_0 - 1]))))) : var_17);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (arr_0 [i_1]);
        arr_7 [i_1] = 4;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = -3828;

        for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_18 = var_11;
                arr_15 [i_2] = var_0;
                arr_16 [i_4] = ((-1 ? ((((var_16 <= (arr_5 [i_4]))) ? (arr_12 [i_4] [4] [i_2]) : var_3)) : ((((7436507046304552232 < (arr_4 [i_3 - 1])))))));

                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    var_19 = (min(var_19, 9));
                    arr_20 [i_2] [i_3 + 1] [i_4] [6] [i_5 - 1] = 1446974761957472824;
                    arr_21 [i_2] [i_2] [i_2] [i_5] = ((!(((13980703987770892454 ? (arr_18 [i_3] [i_3] [i_3 + 1]) : -4)))));
                }
                for (int i_6 = 1; i_6 < 6;i_6 += 1)
                {
                    arr_26 [i_2] [i_2] = (max((((var_15 ? var_7 : var_8))), var_14));

                    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_7] [i_7] [i_4] [i_6] [i_7] = ((-14 == 0) ? (((((~(arr_8 [i_2 - 1] [i_2])))) ? var_0 : var_0)) : ((((((arr_27 [i_7] [0] [i_4] [i_3] [i_2]) << (var_7 - 11732)))) ? 1 : (((-32767 - 1) ? var_5 : var_4)))));
                        arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_1 [i_2]);
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_35 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2] = (255 ? (~0) : var_13);
                        var_20 = var_1;
                        arr_36 [i_2] [i_2] [i_2] = (arr_31 [i_6] [i_6 - 1] [i_6] [i_6] [i_6] [9] [i_6]);
                    }
                    arr_37 [i_2 - 1] [i_4] [i_6 + 4] = (!var_13);
                }
            }
            for (int i_9 = 3; i_9 < 8;i_9 += 1)
            {
                var_21 = (max((((((arr_13 [i_2] [i_3] [i_3 - 1] [i_2]) || (arr_38 [i_9] [i_2 - 1] [i_3 - 2] [i_2 - 1]))))), (((((var_14 ? var_11 : var_15))) ? var_14 : var_9))));
                arr_41 [i_9 - 3] [i_9 - 3] [i_3 - 2] [i_2] = (arr_28 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
            }
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 7;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_51 [i_11] [i_3 + 1] [i_11] [i_11] [i_12] [i_12] = var_1;
                            var_22 -= (min(((min((arr_42 [i_10]), (var_14 == var_9)))), (arr_48 [i_3] [i_11] [i_10] [i_3] [i_3])));
                            var_23 = (min(var_23, (arr_18 [i_2] [i_2] [1])));
                        }
                    }
                }
            }
            arr_52 [i_2 - 1] = (((((arr_11 [i_2]) ? ((min(var_7, var_16))) : ((var_1 ? (arr_27 [2] [i_3] [i_3] [6] [9]) : (arr_49 [8] [8] [i_2] [i_2 - 1] [i_2] [9] [i_2]))))) & (((!(((1258704888 ? 2 : 0))))))));
            var_24 -= var_9;
        }
        for (int i_13 = 2; i_13 < 9;i_13 += 1) /* same iter space */
        {
            arr_55 [i_2 - 1] = (max((arr_8 [i_2] [1]), ((min(-var_4, (arr_0 [i_13]))))));
            var_25 = var_15;
        }
        for (int i_14 = 2; i_14 < 9;i_14 += 1) /* same iter space */
        {
            arr_58 [2] [1] = var_10;
            arr_59 [i_2] [i_2] [i_14] = (min((arr_43 [i_14 - 2] [9]), ((max((arr_1 [i_14]), (!-643500251))))));
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 24;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 21;i_16 += 1)
        {
            {
                var_26 = -9363;

                for (int i_17 = 2; i_17 < 23;i_17 += 1)
                {
                    arr_69 [i_17] [i_16] [i_15] [i_15] = var_4;
                    arr_70 [i_15] [i_16] = (arr_62 [i_16 + 2]);
                    arr_71 [14] [i_15] [i_15] = ((-(((~var_14) ? (arr_64 [i_16]) : var_13))));
                    arr_72 [i_17] = (-var_6 ? ((min((arr_61 [i_17 + 1]), (arr_63 [i_15] [i_16] [i_17 + 1])))) : (max(((0 ? 36 : 3802)), ((min(var_14, var_16))))));
                    arr_73 [i_15] [i_15] [i_15] [i_15] = (((((var_5 ? var_2 : 13980703987770892455))) ? (arr_66 [i_15]) : (((-(var_16 || var_15))))));
                }
            }
        }
    }
    var_27 = (!var_6);
    var_28 = ((var_11 ? -var_3 : var_11));
    var_29 = var_11;
    #pragma endscop
}
