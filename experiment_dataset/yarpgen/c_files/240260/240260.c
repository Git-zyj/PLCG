/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = var_7;
                    var_18 = (((-3444 ? var_2 : (arr_4 [14]))));
                }
            }
        }
    }
    var_19 = var_3;

    /* vectorizable */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_20 = (((arr_12 [i_3]) << (arr_12 [i_3])));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_21 = ((-2030265917 ? 824311311216249269 : (arr_14 [i_6 - 3] [i_6 - 3] [i_3 - 1])));
                                var_22 = var_15;
                                var_23 = ((((-(arr_21 [i_6] [i_6] [11])))) / (arr_17 [i_6] [i_6 - 2] [i_6 - 3] [i_6] [i_6]));
                                var_24 = (((((var_2 | (arr_10 [i_7])))) ? (686592964 < 67043328) : 1));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_25 = ((((2238279112 ? var_16 : (arr_15 [i_3 - 1] [i_3] [i_3 - 1] [6]))) > var_3));
                        arr_25 [i_8] [i_4] [i_4] [i_4] = 2429562141;
                    }
                    var_26 *= ((-2147483647 - 1) + var_14);
                    var_27 = (((((2147483647 ? 9004278826892010849 : var_10))) ? 9 : (arr_19 [i_4] [i_3 + 2] [22] [i_4] [i_3] [i_4])));
                }
            }
        }

        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_28 = (((((1606614033599219128 >> (36982 - 36982)))) ? 192 : -531274575));

            for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    arr_33 [i_9] = (((arr_14 [i_3] [i_3] [i_11]) ? (arr_30 [i_3] [i_9] [i_10 + 1] [i_11]) : (arr_14 [i_11] [i_10 - 1] [i_9])));
                    var_29 -= ((var_11 * (arr_12 [i_3])));
                    var_30 = ((var_11 ? var_16 : (arr_9 [i_10 + 2])));
                }
                var_31 = (1 + var_7);
                arr_34 [i_3] [i_9] [i_9] = ((var_10 ? (arr_19 [i_9] [i_9] [i_9] [i_9] [i_3 - 1] [1]) : (arr_20 [i_3] [i_9])));
                var_32 = (min(var_32, (arr_18 [i_10] [i_3] [i_3] [i_9] [i_3] [i_3])));
            }
            for (int i_12 = 2; i_12 < 20;i_12 += 1) /* same iter space */
            {
                arr_37 [i_3 - 1] [i_9] [i_9] = (((arr_22 [i_3] [i_9] [1] [i_12 + 2] [i_12 + 3]) ? var_10 : 2506901418));
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            arr_42 [i_9] = (((arr_35 [i_13 - 1] [i_13 - 1] [i_12 - 1] [i_3 + 1]) >> (var_1 - 3292430152)));
                            arr_43 [i_3 + 2] [i_9] [i_12 + 3] [i_13] [i_13] = (((arr_13 [2] [i_13] [i_13 + 2] [i_3 + 1]) <= (arr_13 [i_13 + 2] [i_14] [i_13 + 2] [i_3 + 1])));
                            var_33 += (((arr_18 [i_13 - 1] [i_13 - 2] [9] [i_13 - 2] [i_13] [20]) && (arr_16 [i_13] [i_13 - 2] [i_13 - 1] [i_13 - 2] [i_13 + 2] [i_13 - 1])));
                        }
                    }
                }
                var_34 = 7088142656441632946;
            }
        }
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            var_35 = 2249483790;
            arr_48 [i_15] = (((arr_15 [i_15] [1] [i_3 - 1] [i_3]) ? 26926 : (arr_15 [i_3] [i_3 + 2] [i_3] [i_15])));
            var_36 = (((((var_9 ? (arr_10 [i_3]) : 2045483486))) ? var_13 : var_15));
            var_37 = (-50 + 2045483473);
        }
    }
    #pragma endscop
}
