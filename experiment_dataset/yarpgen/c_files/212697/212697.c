/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1758995206;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 += (max(-1758995206, ((var_9 ? (arr_3 [12] [i_0]) : var_7))));
        var_15 += ((-1928780530 ? 1758995206 : 65535));
        var_16 = ((((~(arr_1 [i_0])))) ? (arr_0 [i_0]) : (((!(arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_17 = (max(((62 * (((arr_0 [i_1]) ? (arr_6 [i_1]) : (arr_3 [i_1] [i_1]))))), (((((-(arr_2 [i_1]))) > (arr_4 [i_1]))))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    {
                        var_18 = (((arr_7 [6] [i_2]) != ((1 ? 0 : var_1))));
                        var_19 = (arr_4 [i_4 + 1]);
                    }
                }
            }
            var_20 += ((((((arr_6 [i_2]) ? 2849380236 : 16902))) ? ((var_9 ? 65535 : (arr_6 [i_1]))) : (arr_6 [i_1])));
            /* LoopNest 3 */
            for (int i_5 = 4; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_21 [1] = (((~(!var_6))));
                            var_21 = (arr_17 [i_5] [i_5 + 1] [i_5 + 4] [i_5 - 1]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    {
                        arr_28 [7] [i_2] [i_8] [i_8] = -1;
                        var_22 = 1;
                        arr_29 [0] [i_8] [i_8] [i_9] = ((((arr_18 [i_1] [i_1] [0] [i_9 - 2] [i_9]) ? (arr_18 [i_2] [i_8] [i_2] [i_2] [i_1]) : 28816)));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_23 = ((~(max(184, -310749964))));
                            var_24 = (max(var_24, 52695));
                            var_25 = ((((((max((arr_13 [i_10] [i_10] [i_11 - 1] [i_12]), var_0)) != ((((arr_6 [i_12]) ? var_11 : 1)))))) * ((var_9 ? var_2 : 1))));
                            var_26 = ((1 - ((var_12 ? 2887 : (arr_3 [i_13 + 1] [i_11 + 1])))));
                            var_27 += (arr_3 [i_10] [i_13 + 1]);
                        }
                    }
                }
            }
            var_28 ^= (max((((arr_0 [i_1]) ? (((arr_33 [i_1] [i_1] [0] [i_10]) ? var_3 : (arr_18 [3] [i_10] [i_10] [i_1] [i_1]))) : (arr_39 [i_1] [i_1] [i_1] [i_1] [0] [i_10] [i_10]))), var_12));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 4; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        {
                            var_29 = ((-119 ? 41 : 8));
                            var_30 = (max(var_30, (arr_45 [i_1] [i_14] [i_15] [i_16] [i_1] [i_17])));
                            var_31 = (max(var_31, (-6621210289999933566 > 1)));
                            arr_49 [i_1] [i_1] [i_14] [i_15] [i_16] [i_16] [i_17] = (~var_2);
                        }
                    }
                }
            }
            var_32 = (((arr_18 [i_1] [i_14] [i_14] [i_14] [i_14]) ? (!1) : ((65535 ? (arr_0 [i_1]) : var_4))));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    {
                        var_33 = (min(var_33, (((((((arr_41 [i_14] [i_14]) + -106))) ? (arr_41 [i_1] [i_18]) : 9774094107917053763)))));

                        for (int i_20 = 0; i_20 < 13;i_20 += 1)
                        {
                            arr_59 [i_20] [i_14] [i_14] [i_14] [i_1] = (((0 ? 31 : (arr_15 [i_19] [i_18] [9] [i_1]))));
                            var_34 = (min(var_34, ((((arr_45 [i_1] [i_1] [i_14] [1] [i_1] [i_20]) == ((var_2 ? var_2 : 1)))))));
                        }
                        for (int i_21 = 0; i_21 < 13;i_21 += 1)
                        {
                            arr_64 [i_14] = (~10);
                            var_35 &= ((((((arr_58 [i_1] [i_19] [i_1] [i_19] [i_21] [i_21]) >> (var_0 - 2939928323)))) > ((23915 ? 7679873705920648396 : -1336906469))));
                        }
                        var_36 = ((((((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_13 [1] [i_14] [8] [i_19]) : var_11))) ? ((255 & (arr_2 [i_19]))) : (arr_58 [i_19] [i_18] [1] [i_14] [1] [i_1])));
                        var_37 = ((255 ? 8672649965792497846 : 67));
                    }
                }
            }
        }
    }
    #pragma endscop
}
