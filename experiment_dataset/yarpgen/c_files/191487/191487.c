/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 = 222;
        var_11 *= (arr_1 [i_0]);
        arr_3 [i_0] = ((-(arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        var_12 -= (max((!1), 1));
        arr_6 [i_1] = (((arr_5 [i_1]) ? (max(((2147483647 ? var_5 : -1)), -3457023677)) : (arr_4 [i_1 - 4])));
        arr_7 [i_1] = (-4033961827 / -1);
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        var_13 -= (!0);

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_12 [i_3] = 0;
            var_14 += (((arr_8 [i_2 + 1]) | (arr_8 [i_3])));
            var_15 = var_2;
            var_16 = (arr_8 [i_3]);
            var_17 = (min(var_17, var_7));
        }
    }

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            var_18 = -62;
            arr_19 [i_4] [i_4] [i_5] = ((!(arr_11 [i_5] [i_5 - 1])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_23 [i_4] |= -var_2;
            var_19 = (arr_21 [i_6] [i_4] [13]);
        }
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            var_20 *= (max(((2060086118 ? 0 : 174)), (max(-2147483647, -127))));
            arr_26 [i_4] [i_7] = (arr_8 [i_4]);

            /* vectorizable */
            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
            {
                arr_30 [i_4] [i_7 - 1] [5] = (1 ? (arr_15 [i_7 - 2]) : (arr_28 [i_7 + 1]));

                for (int i_9 = 2; i_9 < 15;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        arr_37 [i_4] [i_4] [i_4] [i_9] = (((arr_27 [i_10 - 1] [i_9 + 1] [i_7 - 2]) ? (var_1 % var_8) : 226));
                        arr_38 [i_4] [i_4] [i_9] [i_9] [i_4] = (((arr_33 [i_9 - 1] [i_10] [i_10] [i_10] [i_9 - 1]) ? -31 : 2147483647));
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_41 [i_8] [i_8] [i_9] [i_8] = (((arr_10 [10] [i_4]) / (arr_40 [i_4] [i_7])));
                        arr_42 [i_9] [i_9] [i_8] [i_8] [i_11] [i_8] = ((-(arr_18 [i_9] [i_9])));
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_21 -= 193;
                        var_22 = (min(var_22, var_8));
                        arr_46 [7] [4] [4] [i_9] [i_9] = (((arr_24 [i_4]) ? 20 : (arr_44 [i_12] [i_9] [i_8] [i_7 - 1] [i_4])));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_23 = (((arr_20 [i_7 - 2]) > (var_7 | var_3)));
                        arr_51 [i_4] [i_9] [i_4] [i_4] [i_4] [i_4] [i_4] = (215 < 40);
                        var_24 = (!-127);
                    }

                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        arr_55 [i_9] [i_9] [i_8] [i_7] [i_9] = ((~(arr_45 [i_4] [i_7 - 1])));
                        arr_56 [i_9] [i_4] [i_7] [i_8] [i_9 - 1] [i_8] [3] = (((arr_44 [i_9 + 1] [i_9 - 2] [i_9 - 1] [i_9] [i_9 - 2]) ? 20 : (arr_44 [i_9] [i_9 + 1] [i_9 - 2] [i_9] [i_9])));
                    }
                    for (int i_15 = 2; i_15 < 12;i_15 += 1)
                    {
                        var_25 = -var_0;
                        var_26 = (arr_10 [i_9 + 1] [i_15 + 1]);
                        arr_60 [i_9] [i_7] [i_9] [i_9] [i_7] = ((!(arr_31 [i_9 - 1] [i_7 - 2])));
                        var_27 = (((arr_34 [i_7 + 2] [i_7] [i_4] [i_9]) | (arr_34 [i_7 + 2] [i_7 - 1] [i_8] [i_7 + 2])));
                    }
                    for (int i_16 = 1; i_16 < 13;i_16 += 1)
                    {
                        var_28 = (min(var_28, (((+(((arr_43 [i_4] [i_4] [i_4]) ? var_0 : (arr_49 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))))));
                        arr_65 [1] [13] [i_8] [i_8] [i_9] = (arr_31 [14] [i_7 - 1]);
                    }
                }
                var_29 = 255;

                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    var_30 = ((23 ? (arr_53 [i_4] [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_4] [i_7 - 1] [i_17]) : 0));
                    arr_68 [i_17] [i_8] [i_8] [i_7] [i_4] = (arr_28 [i_4]);
                    var_31 = (min(var_31, ((((arr_44 [i_7] [i_7] [9] [i_17] [i_7 + 2]) ? 0 : (arr_53 [2] [2] [i_8] [2] [12] [i_4] [i_17]))))));
                    var_32 += -4294967287;
                    arr_69 [i_4] [2] [i_8] [i_17] = (((((8 ? (arr_24 [i_7]) : (arr_62 [i_4] [i_4] [i_7] [i_7] [i_8] [i_17] [i_17])))) ? 230764728 : 9223372036854775807));
                }
            }
            for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
            {
                arr_72 [i_18] = (max(220, (((arr_43 [i_7 - 2] [i_7] [i_7 - 2]) ? (arr_43 [i_7 + 1] [i_7 + 2] [i_7 + 2]) : (arr_43 [i_7 + 1] [6] [i_7 + 1])))));
                arr_73 [i_4] = (((max((((var_6 ? -48 : 2047))), (((arr_70 [i_4] [i_4]) ? 3462378202 : -6599627173351283608)))) & var_6));
                arr_74 [i_4] = ((((max((arr_36 [i_4] [i_7 + 2] [i_7] [i_7 - 1] [i_4] [1]), var_1))) ? 11130865882531641718 : (((max(63, 152))))));
                var_33 = (min(var_33, (((~((-(!-116))))))));
            }
        }
        var_34 = max(1, 8305500169429676839);
        var_35 *= (((((~(((arr_9 [i_4] [1]) ? var_5 : (arr_24 [i_4])))))) ? (88 > 8) : ((-0 ? 48 : (arr_45 [i_4] [i_4])))));
    }
    #pragma endscop
}
