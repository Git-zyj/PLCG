/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 = 18446744073709551615;
        var_12 = (((7775934669229129172 != 0) ? (((arr_2 [i_0 - 2] [i_0 + 2]) ? 3 : var_3)) : ((((arr_2 [i_0 + 2] [i_0]) ? (arr_0 [i_0]) : (arr_0 [16]))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (((((!-210825192) || 4294967295)) || (arr_2 [i_1] [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_11 [i_4 + 2] [i_4] [i_3] [i_3] [i_2] [i_1] = (((((((15 ? -118 : 18446744073709551611))) ? (arr_7 [i_3 + 1] [i_2] [i_4 + 3] [9]) : (((arr_8 [i_1] [i_1] [i_3] [i_4]) ? 16365061047975562422 : (arr_7 [i_1] [i_1] [i_3] [i_3]))))) | -var_9));
                        var_14 = var_0;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 22;i_7 += 1)
                {
                    {
                        var_15 = (arr_4 [i_1]);
                        var_16 = ((-(arr_2 [i_7 - 3] [i_7])));
                        var_17 = ((arr_8 [i_1] [i_7 + 1] [i_6] [i_7]) ^ (((arr_8 [i_6] [i_7 - 3] [i_6] [i_6]) ^ (arr_8 [i_1] [i_7 + 1] [i_6] [i_7]))));
                    }
                }
            }
        }
        var_18 = (var_10 <= -11797);
    }
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        var_19 -= (max(1827519949754258412, ((17420744123849967810 ? ((max(-1827519949754258408, (arr_16 [i_8 + 2] [i_8 + 2] [i_8] [i_8 + 2])))) : var_0))));
        arr_23 [i_8] = 1827519949754258405;

        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_20 = (max(-20485, ((~(arr_14 [i_8 - 2])))));
            var_21 = ((((min((arr_20 [i_9] [i_9] [i_9] [i_9]), (!243)))) ? (((~(arr_24 [i_8 - 2] [i_9])))) : (max(((var_1 ? 9955891490627203219 : (arr_1 [i_9]))), (((2733760222310734581 == (arr_0 [i_8]))))))));
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 10;i_12 += 1)
                {
                    {
                        var_22 = (max((((((arr_5 [i_8] [11]) / 32659)) / (arr_7 [6] [i_12] [i_12 - 3] [i_12]))), var_10));

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_23 = (max(var_23, (arr_4 [i_8])));
                            var_24 = (~2733760222310734600);
                        }
                        for (int i_14 = 2; i_14 < 8;i_14 += 1)
                        {
                            var_25 = ((!((!((min(202, 7775934669229129172)))))));
                            var_26 = (arr_28 [i_14 - 2] [i_12 - 3] [i_11 + 1] [i_8 + 1]);
                        }
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            arr_41 [i_11 + 1] [i_10] [i_10] [i_11] [i_11] [1] = ((-(arr_37 [i_8] [i_10] [i_11] [i_10] [i_12 + 1] [i_15] [i_15])));
                            var_27 = (min(var_27, (arr_26 [i_8] [i_8] [i_8])));
                            var_28 = ((-((1 ? (var_5 + 0) : (max(7, -2733760222310734581))))));
                        }
                    }
                }
            }
            var_29 *= (min(-1827519949754258406, 35));
        }
        for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
        {
            arr_44 [i_8] [i_8] = ((~(arr_19 [i_8] [i_8] [i_8 - 1] [i_8] [i_16] [1])));
            var_30 = ((((((arr_31 [i_16] [i_16] [i_8 - 2] [i_16] [i_8] [i_16]) || (arr_31 [i_8 + 2] [0] [i_8 - 2] [i_16] [i_8] [i_8 - 2])))) > (arr_33 [i_8] [i_8] [i_8])));
        }
        for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
        {
            arr_47 [i_8] [i_17] = ((((arr_2 [i_8 - 2] [i_17]) ? var_2 : (arr_40 [i_17] [i_17] [i_8 + 2]))));
            var_31 -= 1322310301;
        }
    }
    var_32 = var_3;
    var_33 -= var_0;
    #pragma endscop
}
