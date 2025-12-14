/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_22 = ((~(arr_0 [i_0])));
        var_23 = (!(arr_1 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_24 = ((-(arr_3 [i_1])));
        var_25 = ((!(arr_2 [15])));
        var_26 = ((-9223372036854775796 ? 7592140015461779011 : 7592140015461779011));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_27 |= (((((-(arr_3 [i_2])))) ? (arr_4 [i_2]) : var_19));
        var_28 ^= ((-(((arr_2 [i_2]) ? (arr_0 [i_2]) : (arr_0 [i_2])))));
        var_29 = ((~((~(arr_2 [i_2])))));
        var_30 = (+-139);
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_31 = (((~(arr_6 [i_3]))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_18 [i_5] [i_4] = (arr_13 [i_3] [3] [3] [8]);
                            var_32 += (arr_2 [16]);
                            var_33 = (((((-(arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_5] [i_4 - 1])))) ? ((-(arr_15 [i_4 - 1] [i_7] [i_7] [i_7] [i_7] [i_7]))) : (!var_6)));
                            arr_19 [i_5] [9] [13] = (arr_9 [i_4 - 1]);
                        }
                    }
                }
            }
            arr_20 [i_3] [i_4] = arr_15 [i_4] [i_4 - 1] [1] [1] [i_4 - 1] [i_4 - 1];
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            var_34 &= (arr_10 [i_3] [i_3]);

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_35 *= (((arr_9 [i_8 + 1]) ? (arr_9 [i_8 + 1]) : (arr_9 [i_8 + 1])));
                            arr_34 [i_8] [i_11] = ((~(arr_32 [i_10 - 1] [i_8] [i_9] [i_8] [i_8])));
                            arr_35 [i_10] [17] [i_10] [i_10] [i_8] = ((~((~(arr_0 [7])))));
                        }
                    }
                }
                var_36 = var_19;
            }
            for (int i_12 = 3; i_12 < 21;i_12 += 1)
            {
                arr_39 [i_8] [i_3] [i_8] = ((-(arr_14 [i_3] [i_8] [i_12])));
                var_37 -= (arr_2 [i_8 + 1]);
            }
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                arr_44 [i_3] [i_13] [i_13] [i_13] |= (arr_43 [i_13] [16] [i_13]);
                var_38 = (((arr_37 [i_8] [i_3] [i_8]) ? ((((!(arr_28 [i_3] [i_8] [i_13]))))) : (arr_25 [i_8 + 1] [10] [i_8])));

                for (int i_14 = 2; i_14 < 19;i_14 += 1)
                {
                    var_39 = (arr_27 [i_3] [i_3] [i_13] [i_14]);
                    var_40 = ((!(arr_22 [i_8] [i_13] [i_8])));
                    arr_49 [i_3] [i_3] [i_8] [i_3] = ((!(arr_3 [i_3])));
                    arr_50 [i_3] [11] [i_8] [i_3] = (arr_13 [8] [i_3] [8] [i_3]);
                }
                for (int i_15 = 2; i_15 < 22;i_15 += 1) /* same iter space */
                {
                    var_41 += (((arr_26 [i_15] [i_15 - 2] [i_15] [i_15 - 2]) ? (((var_15 ? var_19 : (arr_3 [i_13])))) : var_14));
                    arr_53 [i_3] [12] [i_13] [i_15] |= (arr_40 [i_8 + 1] [i_8] [i_15] [1]);
                    arr_54 [i_8] [i_8] = (arr_12 [i_8 + 1] [i_8] [i_15 + 1] [i_15]);
                }
                for (int i_16 = 2; i_16 < 22;i_16 += 1) /* same iter space */
                {
                    var_42 = (((arr_32 [i_13] [1] [i_16] [i_8] [i_16 - 1]) ? (arr_32 [i_8] [i_13] [i_16] [i_8] [i_16 + 1]) : (arr_32 [i_13] [i_13] [i_13] [i_8] [i_16 - 2])));
                    var_43 = ((!(~-23)));
                    arr_57 [i_3] [i_8 + 1] [i_8] [i_13] [i_16] = ((!(arr_26 [i_16] [i_16] [i_16 - 1] [i_16 - 2])));
                }

                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    var_44 = (arr_36 [i_8 + 1] [i_17] [i_17] [i_8]);
                    var_45 = (((arr_47 [10] [10] [i_13]) ? (arr_28 [i_8 + 1] [i_8] [i_8]) : (arr_21 [11] [i_8] [i_8 + 1])));
                    var_46 = (max(var_46, ((((arr_31 [i_3] [i_3] [i_8] [i_3] [i_3]) ? (!var_12) : var_4)))));
                }
            }
            var_47 = (min(var_47, (arr_25 [i_8] [i_8] [i_8 + 1])));
            var_48 += (((arr_25 [i_8 + 1] [i_8] [i_8 + 1]) ? (arr_25 [i_8 + 1] [i_8] [i_8]) : (arr_25 [i_8 + 1] [i_8] [i_8])));
            var_49 -= ((~(arr_17 [19] [i_8] [19] [i_3] [i_3] [1] [19])));
        }
        var_50 = (max(var_50, (((~(((arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [1]) ? (arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (arr_43 [i_3] [i_3] [i_3]))))))));
    }
    var_51 = (!var_5);
    #pragma endscop
}
