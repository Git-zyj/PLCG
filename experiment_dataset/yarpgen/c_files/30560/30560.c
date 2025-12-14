/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_11 ? (-488646338758117720 + var_6) : var_5));

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 = ((var_3 ? (((arr_0 [i_0 + 4] [0]) ? (arr_0 [i_0 + 1] [i_0]) : (arr_0 [i_0 + 2] [i_0]))) : (2306385782 < var_9)));

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_21 = (((((arr_3 [i_0] [i_0 - 1]) ? ((~(arr_3 [i_1] [i_1]))) : ((32 ? 0 : 1)))) < 48));
            var_22 = (((arr_4 [i_1]) ? var_10 : ((-488646338758117720 ? var_6 : var_5))));
            var_23 = 4294967294;
            var_24 = ((((min((arr_4 [i_0 + 1]), (arr_3 [i_1] [i_0 + 2])))) ^ (arr_0 [i_0 + 2] [i_1])));
            var_25 = ((var_7 ? (min(var_16, (((arr_0 [i_1] [i_0]) ? var_8 : (arr_2 [0] [0]))))) : ((max(15872, var_5)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
            {
                var_26 = 12309;
                var_27 *= (arr_0 [i_0 - 1] [i_0 - 1]);
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_28 = var_11;
                            var_29 = (max(var_29, ((((arr_15 [i_3] [i_4 - 1] [i_5]) ? 32767 : (arr_3 [12] [i_0]))))));
                        }
                    }
                }
                var_30 = (max(var_30, var_17));
                var_31 = var_9;
            }
            for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
            {
                var_32 ^= (var_0 >= var_15);

                for (int i_7 = 3; i_7 < 19;i_7 += 1)
                {
                    var_33 = (((arr_17 [i_6 + 1] [i_7] [i_7]) ? (((!(arr_14 [i_0] [22] [i_6 + 2] [i_7 - 3] [i_7 + 3])))) : var_16));
                    var_34 = (max(var_34, (((-(arr_3 [i_0 + 4] [i_2]))))));
                }
                var_35 = ((var_8 ? var_5 : 9223372036854775807));

                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    var_36 = (var_12 / var_4);
                    var_37 = var_15;
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_38 = ((-(arr_1 [i_9])));
                    var_39 = (~var_4);
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_40 += ((~(210 < 18446744073709551615)));
                    var_41 = (max(var_41, (arr_26 [i_0 + 3] [i_0 + 3] [i_0 + 4] [i_0 + 4])));
                }
            }

            for (int i_11 = 3; i_11 < 21;i_11 += 1) /* same iter space */
            {
                var_42 -= ((var_15 ? var_18 : (arr_24 [i_0 - 1] [0] [i_11])));
                var_43 = (7114848212624199006 == 496);
            }
            for (int i_12 = 3; i_12 < 21;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_44 = (min(var_44, -var_17));
                            arr_39 [i_0] = (arr_14 [i_0] [i_13] [i_12] [i_2] [i_0]);
                            arr_40 [i_0] [i_14] [i_0] &= 240;
                            var_45 = -var_4;
                            arr_41 [i_0] [i_0] [i_12] [i_13] [i_14] = -8206;
                        }
                    }
                }
                var_46 = (max(var_46, var_12));
                var_47 = -432030358;
            }
        }
    }
    for (int i_15 = 1; i_15 < 19;i_15 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_16 = 2; i_16 < 21;i_16 += 1)
        {
            var_48 = (var_11 <= var_1);
            arr_47 [i_15] [6] [i_16] |= (arr_4 [i_15 + 1]);
            var_49 = ((~(arr_30 [i_15 + 1] [i_16 + 1] [i_16 - 2])));
            var_50 ^= (arr_6 [i_15]);
            arr_48 [i_15] [20] [i_15 + 3] = var_10;
        }
        var_51 = 63103;
        arr_49 [i_15] = 1;
    }
    #pragma endscop
}
