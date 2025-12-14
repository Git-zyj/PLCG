/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (1 < 1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = var_1;
                                var_12 = ((-(!var_8)));
                                var_13 = (min(1, 120));
                                arr_14 [2] [2] [i_2 + 2] [i_3] [i_4] &= arr_0 [i_0 + 1];
                            }
                        }
                    }
                }
                arr_15 [7] [i_1] [1] = (!4);
                arr_16 [i_0] [i_0] [i_1 - 1] = 8620;
                arr_17 [i_0] = (min(var_2, ((((min(-732090832, 61440))) ? (arr_9 [i_0] [3] [3] [i_1]) : (((arr_7 [i_0 + 1] [i_0 + 1] [i_1]) * (arr_11 [i_0 + 1] [i_1 + 1])))))));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_14 = ((((81 ? 97 : (arr_19 [i_5]))) | (57766 || -1)));

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_15 = 2336939149;
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_16 = (((-12 == var_0) / -31));
                        arr_27 [i_5] [i_8] [8] [8] &= var_9;
                        arr_28 [i_7] [i_7] [i_7] [i_8] = ((((((arr_26 [11] [i_6] [2] [i_6]) ? var_8 : var_1))) ? (((arr_20 [i_5]) ? (arr_22 [i_6] [i_6]) : (arr_18 [i_5] [i_5]))) : (183 || 81)));
                    }
                }
            }
            arr_29 [i_6] = (207 ? 81 : 8985658405382874610);
        }
        var_17 = -1255635154;
        var_18 = (arr_20 [i_5]);
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        var_19 *= var_1;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {
                    var_20 = (((((-12 + 2147483647) << (196 - 196))) < ((min(1, 0)))));
                    arr_40 [i_9] [i_9] [i_9] = ((976687069 ? ((min(7769, (arr_20 [i_10])))) : -2073095144));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                {
                    var_21 *= ((((127 ? 2064537934 : -5860373030969509615))) ? var_1 : var_1);
                    var_22 *= ((!((((arr_18 [i_9] [i_13]) | (max(var_9, var_8)))))));
                    var_23 &= min((arr_41 [i_9] [i_12] [11]), -14523);
                    var_24 -= (((~var_8) ? (((1 == (arr_21 [i_13] [i_13] [i_13])))) : (arr_20 [i_9])));
                    var_25 = ((((((arr_43 [i_9] [i_12] [i_9]) ? -122 : 24968)) | (arr_41 [i_12] [i_13] [i_12]))));
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 20;i_17 += 1)
                {
                    {
                        arr_57 [i_14] [i_14] [14] [2] = ((-(((arr_53 [i_14] [i_15] [7] [i_17]) ? 1 : 18217459454630805786))));

                        for (int i_18 = 0; i_18 < 21;i_18 += 1)
                        {
                            arr_61 [i_14] [i_15] [17] [i_17] [13] [i_17] [i_17] = (((1 && 8620995010509655960) == 248));
                            arr_62 [i_14] [i_14] [11] [i_17 + 1] [i_18] &= ((3821626982655326957 & ((((((-(arr_44 [1] [11] [1] [i_17 - 2])))) ? (arr_51 [i_14] [0] [i_16] [i_17 + 1]) : 6756)))));
                        }
                    }
                }
            }
        }
        var_26 *= (arr_45 [i_14] [15]);
    }
    #pragma endscop
}
