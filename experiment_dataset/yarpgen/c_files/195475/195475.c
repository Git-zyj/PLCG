/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((-20123 == -45), var_3));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0 + 2]) ? -54 : (arr_1 [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = (((~var_5) ? ((-59 ? -1 : (arr_7 [i_2] [i_1] [i_0]))) : 12));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] = (((arr_7 [i_0] [i_1] [i_0 + 3]) && (!47)));
                                var_12 = (((arr_7 [19] [i_1] [i_1]) <= (((arr_7 [i_1] [i_1] [i_0]) * (arr_12 [i_0] [i_0] [i_0] [i_0] [i_1])))));
                                var_13 = ((((-(arr_12 [i_1] [i_2] [i_2] [20] [i_1]))) & 21206));
                                arr_16 [i_0 - 2] [i_1] = (!var_3);
                                var_14 = (((var_9 ? -6 : -20241)));
                            }
                        }
                    }
                }
            }
        }
        arr_17 [i_0] [11] = (~32755);
        var_15 = ((var_7 ? ((-(arr_14 [10] [8] [10] [8]))) : ((-20147 ? var_9 : 120))));
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_16 *= (min(-81, (((((arr_7 [i_5] [i_8] [i_7]) + 2147483647)) >> ((((-(arr_8 [i_5] [i_5] [i_8]))) + 747))))));
                    arr_28 [i_5] [i_7] [i_7] [i_5] = (((((arr_14 [i_5] [7] [14] [12]) ? var_10 : var_7)) | (((~48) / (arr_1 [i_5 + 3])))));
                }
                for (int i_9 = 4; i_9 < 20;i_9 += 1)
                {
                    arr_32 [i_5] [i_6] [i_5] [i_5] [i_7] = (min((((arr_11 [i_9 - 2] [i_5] [i_5] [i_5]) / (arr_11 [i_9 + 1] [i_5] [i_5] [i_5]))), 12002));
                    var_17 = (((var_2 || 120) / ((var_9 ? (arr_5 [i_5]) : (arr_5 [i_5])))));
                    var_18 = 32745;
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    arr_35 [i_10] [i_6] [i_7] [6] [i_6] |= (arr_1 [i_5]);
                    var_19 = ((-19932 - ((~(!var_1)))));
                    arr_36 [i_5] = var_2;
                }
                var_20 = (((var_4 / var_0) / 113));
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                arr_39 [i_5] [i_6] [i_6] [i_6] = -127;
                var_21 *= -18766;
            }
            var_22 = (i_5 % 2 == 0) ? (((((((arr_25 [i_5 - 2]) < (arr_25 [i_5 - 2])))) << (((((arr_14 [i_5] [i_6] [i_5] [i_5]) ? (arr_5 [i_5]) : (((arr_3 [i_5] [i_5]) % (arr_6 [17] [2]))))) - 73))))) : (((((((arr_25 [i_5 - 2]) < (arr_25 [i_5 - 2])))) << (((((((arr_14 [i_5] [i_6] [i_5] [i_5]) ? (arr_5 [i_5]) : (((arr_3 [i_5] [i_5]) % (arr_6 [17] [2]))))) - 73)) + 105)))));
        }
        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            arr_43 [i_5] [i_5] [i_5] = (((arr_33 [i_5 + 2] [i_12] [i_5] [i_5] [i_12 - 1]) == (arr_33 [i_5 + 2] [i_5] [13] [i_5 + 2] [i_12 - 1])));
            var_23 = (i_5 % 2 == 0) ? (((((var_5 << ((max((arr_31 [15] [20] [i_5] [i_12]), var_3))))) & (arr_0 [i_5])))) : (((((var_5 << ((((max((arr_31 [15] [20] [i_5] [i_12]), var_3))) - 61)))) & (arr_0 [i_5]))));
            arr_44 [i_5] [i_5] = (((((arr_27 [17] [i_5 - 1]) * var_7)) & (arr_18 [i_5 - 1] [i_12])));
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 20;i_15 += 1)
                {
                    {
                        var_24 = (max(28300, ((min((max((-127 - 1), var_9)), var_10)))));
                        arr_54 [i_5] [i_13] [i_5] [i_15] = (max(-102, (arr_53 [i_5] [i_13] [4] [12] [i_14] [i_14])));
                    }
                }
            }

            for (int i_16 = 4; i_16 < 19;i_16 += 1)
            {
                arr_58 [i_5] = (arr_18 [i_5 + 3] [i_16 - 2]);
                var_25 = (min((((arr_52 [i_5 - 1]) & (arr_27 [i_16 - 1] [i_5 - 1]))), ((var_4 ? (((arr_37 [i_5] [18] [i_5]) ? -120 : 20146)) : (arr_5 [i_5])))));
                var_26 = 9;
                arr_59 [i_13] [i_13] [i_13] [i_5] &= ((-((max((max(var_5, (arr_23 [0] [20] [0] [i_13]))), (arr_38 [i_5] [10] [i_16] [i_16]))))));
            }
        }
        var_27 |= ((111 ? ((((arr_33 [i_5 - 1] [14] [i_5] [i_5 - 2] [i_5 + 1]) <= var_9))) : (((!(arr_20 [0] [i_5]))))));
    }
    #pragma endscop
}
