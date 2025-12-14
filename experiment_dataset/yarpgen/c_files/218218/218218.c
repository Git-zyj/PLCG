/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = ((2147483647 ? (arr_1 [i_0]) : 497320571));
        var_19 = (((((arr_1 [i_0]) ? (arr_2 [i_0]) : 1)) > (arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 = 2704980643360731243;
            var_21 = (min(var_21, (arr_4 [i_0])));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_22 &= (arr_6 [8] [i_2] [8]);
            var_23 = ((7746591890715814648 ? var_0 : (((!(arr_0 [i_0]))))));
            arr_7 [i_0] [i_2] [i_2] |= (arr_4 [i_0]);
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_24 = (max(var_24, (arr_4 [i_3 - 1])));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_25 = ((1 ? (arr_1 [1]) : ((var_2 ? var_7 : (arr_8 [4])))));
                            var_26 = arr_14 [i_0] [i_0] [i_6];
                            var_27 = ((-(arr_4 [i_3 - 1])));
                            var_28 = ((!(arr_1 [i_3 - 1])));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_29 = (((arr_3 [4] [9]) >> var_9));
                var_30 = ((var_8 ? var_9 : (arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                var_31 = (((arr_8 [7]) ? var_8 : (arr_19 [i_0] [i_3 - 1])));
            }
            var_32 = (arr_2 [i_0]);
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_23 [i_0] [i_0] = ((!(arr_22 [i_8 - 1] [i_8 - 1])));
            var_33 = (arr_0 [i_0]);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_30 [i_0] [i_0] [i_0] = (((arr_19 [6] [i_0]) ? (arr_19 [1] [3]) : var_4));
                        var_34 = (((arr_15 [i_0] [i_0] [i_8 - 1] [i_9] [i_10 - 4]) ? (!111) : 108));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 17;i_12 += 1)
                {
                    {
                        var_35 = arr_10 [i_0] [i_0] [1] [i_0];
                        var_36 = (((arr_34 [i_12 + 1] [i_8 - 1] [i_8 - 1] [i_12]) ? (arr_34 [i_12 + 1] [i_8 - 1] [i_12 + 1] [i_8 - 1]) : var_1));
                    }
                }
            }
        }
        var_37 = var_2;

        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            var_38 = (max(var_38, (!1)));
            var_39 = ((arr_33 [i_0] [9] [15] [16] [i_13]) ? (arr_33 [i_0] [16] [11] [i_13] [11]) : (arr_33 [i_0] [i_13] [i_0] [i_13] [15]));
            var_40 = ((var_7 * (arr_16 [i_0] [i_13])));
            var_41 = (~(arr_14 [i_0] [i_13] [i_13]));
            var_42 |= ((~(arr_10 [i_0] [i_13] [i_13] [i_13])));
        }
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
    {
        var_43 = (arr_15 [i_14] [12] [i_14] [i_14] [i_14]);

        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_44 = ((-(((var_14 ? var_2 : 1486)))));
            var_45 = ((((((arr_1 [i_14]) ? (arr_1 [i_14]) : (arr_1 [i_15])))) ? (arr_24 [i_14] [i_14] [i_14] [5]) : var_13));
            var_46 = (arr_42 [3]);
            var_47 = (((arr_21 [i_14]) < (((arr_24 [i_14] [i_14] [1] [i_14]) - (arr_24 [i_14] [i_14] [i_14] [i_14])))));
            var_48 = ((((-(((arr_8 [13]) % (arr_27 [i_14] [12] [i_14] [5] [i_14]))))) | (((((arr_1 [i_14]) < (((21 || (arr_31 [1] [i_14] [i_14] [1]))))))))));
        }
        for (int i_16 = 1; i_16 < 16;i_16 += 1)
        {
            var_49 += ((~((((var_6 || (arr_27 [4] [15] [15] [4] [i_14]))) ? (var_15 <= 30720) : -var_6))));
            var_50 = (arr_8 [i_16 - 1]);
        }
        var_51 = (arr_45 [i_14]);
        var_52 = arr_46 [i_14] [i_14] [i_14];
        var_53 = (max(var_6, ((((arr_20 [i_14]) ? (arr_4 [i_14]) : (arr_20 [i_14]))))));
    }
    for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
    {
        var_54 = ((-(!var_0)));
        var_55 = (((arr_5 [i_17] [1] [6]) ? ((((arr_10 [i_17] [i_17] [13] [13]) ? (arr_0 [i_17]) : (arr_1 [i_17])))) : (((arr_36 [i_17]) ? (arr_42 [i_17]) : ((max(1073741823, (arr_3 [i_17] [i_17]))))))));
    }
    for (int i_18 = 0; i_18 < 16;i_18 += 1)
    {
        arr_51 [i_18] = (arr_18 [i_18] [i_18]);
        var_56 += (arr_22 [i_18] [i_18]);
    }
    var_57 = var_16;
    var_58 = var_14;
    #pragma endscop
}
