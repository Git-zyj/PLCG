/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~((~((65515 ? (arr_0 [2]) : var_9))))));
        var_20 = (min(((var_3 ? 4503599627370496 : (arr_0 [i_0]))), (min((arr_0 [9]), 4503599627370491))));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_21 ^= (((((((arr_1 [8]) <= (arr_6 [i_0] [i_1]))))) >= (~-32185)));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_13 [i_2] [12] [i_2] |= (arr_9 [i_2] [i_2] [i_2] [i_3]);

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_22 = ((18442240474082181142 ? var_10 : (((!(((var_6 ? 18442240474082181113 : 4503599627370508))))))));
                            var_23 = (min((((!(~162)))), ((~(~-32746)))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_19 [i_0] [i_2] &= ((((1162264264 << (((arr_11 [i_2 - 1]) - 11013)))) >> (((((min((arr_16 [i_0] [6] [i_5] [i_2 - 1] [i_3] [1]), 888034744))) && (~-1162264264))))));
                            arr_20 [i_0] [i_1] [i_2 - 1] [i_1] [i_5] [i_5] = ((var_2 ? (+-58) : (max((arr_17 [i_1 + 1] [i_3] [i_2 - 2] [i_1 + 1] [i_0]), ((var_12 ? 120 : 906))))));
                        }
                    }
                }
            }
            var_24 = min(23147, ((~(~16012877023568902159))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_25 &= (arr_7 [i_0] [1] [7] [i_0]);
            var_26 = (~0);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_27 ^= (arr_24 [i_0]);
                        var_28 = -1;
                    }
                }
            }
            var_29 = ((((((!(arr_10 [i_0] [i_0] [i_0] [i_0]))))) > (arr_28 [i_0] [i_7] [i_7] [i_7])));
            /* LoopNest 2 */
            for (int i_10 = 4; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        arr_37 [5] [11] [i_11] |= 115;
                        arr_38 [i_0] [i_7] [i_7] [i_7] [i_11] = (((((arr_36 [i_10] [i_10] [i_10] [i_11]) || var_3)) ? (arr_32 [i_0] [i_7] [i_10] [i_11]) : 0));
                        var_30 = (((arr_17 [i_0] [i_10 - 3] [i_10] [i_11] [i_0]) ? (arr_29 [2] [10] [2] [i_10] [i_11]) : (arr_22 [i_10] [i_0])));
                    }
                }
            }
            var_31 = var_12;
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
        {
            var_32 = (min((arr_3 [i_0] [i_0] [i_12]), ((+((-8462095165420243792 ? (arr_29 [i_0] [13] [i_12] [i_12] [i_0]) : (arr_24 [1])))))));

            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                var_33 = (max(var_33, (((~(min((~var_2), (arr_31 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            var_34 = (((!((max((arr_32 [i_15] [i_12] [6] [i_12]), 4503599627370517))))));
                            var_35 -= ((((22900 ? 18446744073709551615 : 157))));
                        }
                    }
                }
                var_36 = ((((~(arr_41 [i_13] [i_12] [i_0]))) & (((arr_41 [i_0] [i_12] [i_13]) * (arr_41 [i_0] [i_12] [i_13])))));
            }
            arr_49 [i_12] [i_12] = var_2;
        }
        var_37 = var_19;
        arr_50 [i_0] = var_19;
    }
    var_38 = (~94);
    #pragma endscop
}
