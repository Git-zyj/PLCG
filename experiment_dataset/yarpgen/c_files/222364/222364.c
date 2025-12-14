/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((var_7 ? (arr_2 [i_0]) : (max((var_9 * 1), (((!(arr_0 [12] [i_0]))))))));
        var_14 = (((((arr_0 [i_0 - 1] [i_0 - 2]) + -1)) << (var_1 - 46)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = var_3;
            var_16 = (min(var_16, ((((arr_4 [i_2]) ? (arr_5 [i_1]) : (arr_7 [i_1]))))));
            var_17 += (1 | 1);
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_13 [i_1] [i_1] = (arr_10 [i_1]);
            var_18 = (((((var_4 ? 0 : (arr_8 [i_1] [i_1] [i_1])))) ? (arr_8 [i_1] [12] [i_3]) : ((max((arr_10 [i_3]), (arr_11 [i_1] [i_1]))))));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            var_19 -= -6200796843196009817;
            var_20 = ((var_12 ? (((((arr_10 [i_1]) ? (arr_8 [i_4] [i_4] [i_4]) : (arr_12 [i_1] [18] [i_4]))) + (1 | 1))) : var_6));

            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                arr_19 [i_4] [4] [4] = var_10;

                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    var_21 = (max(var_21, 6291580957993667939));

                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        var_22 = (((((((arr_20 [i_4] [i_4] [i_5] [i_4]) || (arr_21 [i_1] [i_1] [i_5] [i_5]))) ? -52 : 959)) > var_0));
                        arr_25 [0] [i_4] [i_5 + 2] [i_6] [i_5 + 2] = var_0;
                    }
                }
                var_23 = (max((arr_9 [i_5 - 3]), 1));
                var_24 = (max(var_24, (!3039562136)));
                var_25 = ((var_2 ? (arr_16 [i_1] [i_1]) : ((~((((arr_8 [13] [13] [i_5 + 1]) <= var_5)))))));
            }
        }

        /* vectorizable */
        for (int i_8 = 2; i_8 < 24;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 3; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_26 = (!-3700862623206005963);
                            var_27 = ((-947 ? (arr_22 [i_11 + 1] [i_11 - 1]) : var_3));
                            arr_42 [i_1] [i_1] [i_10 + 1] [i_10 + 1] [i_11 + 1] [i_9] = (((arr_16 [i_8] [i_8]) ? ((var_1 ? -947 : (arr_33 [i_1] [i_9] [i_1] [16]))) : var_9));
                            var_28 += 10667;
                        }
                    }
                }
            }
            var_29 = var_13;
        }
        arr_43 [24] = -1;
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        var_30 ^= var_7;
        var_31 = (arr_45 [i_12] [i_12]);
        var_32 -= var_13;

        for (int i_13 = 3; i_13 < 11;i_13 += 1)
        {

            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                var_33 = var_1;
                var_34 = ((-952 ? (arr_50 [4] [i_13]) : ((-(53 < var_2)))));
                var_35 = var_9;
                arr_52 [i_13] [i_13] [i_13 - 2] = (((arr_1 [1]) ? (arr_34 [i_13 - 2] [i_13 + 1] [i_13 + 2] [i_13]) : (arr_34 [i_13 - 2] [i_13] [i_14 - 1] [i_14 - 1])));
            }
            var_36 = (max(65535, var_8));
        }
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            arr_56 [i_12] = (max((arr_27 [i_15]), 12));
            arr_57 [1] = 1;

            for (int i_16 = 1; i_16 < 12;i_16 += 1)
            {
                arr_60 [i_12] [i_12] [i_12] [i_12] = ((((1 & (((arr_26 [i_12] [i_15]) ? 5974238235217998900 : 1)))) <= ((((arr_15 [i_15] [i_15]) ? 1 : 1)))));
                var_37 ^= var_8;
            }
            var_38 ^= ((~(arr_41 [i_12] [i_12])));
            var_39 = var_10;
        }
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            var_40 = (min(var_40, (arr_26 [i_12] [i_12])));
            var_41 = 255;
        }
        for (int i_18 = 4; i_18 < 10;i_18 += 1)
        {
            var_42 = (arr_20 [4] [i_12] [10] [i_12]);
            arr_66 [i_12] = 85;
            var_43 = (((219 ? 36 : 1725)));
        }
    }
    var_44 = 1;
    #pragma endscop
}
