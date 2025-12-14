/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = var_1;
    var_17 += (-(var_12 != var_13));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = ((((14378395592443452828 ? -8 : 1)) == (!var_1)));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_8 [i_1 + 1] [i_1] [i_1 + 3] [i_1] = (((arr_1 [i_2 + 2]) ? (arr_0 [i_2 - 1]) : (arr_3 [i_0] [i_0] [i_1])));
                        var_19 = (~4294967295);
                    }
                }
            }
            var_20 = (max(var_20, (((14378395592443452840 % (arr_2 [0]))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_16 [i_0] [i_5] |= (((arr_11 [i_0] [i_1] [i_6] [i_6] [i_1 - 2]) | (arr_4 [i_1 + 2] [i_1] [i_1] [i_1 - 1])));
                            var_21 = (!var_10);
                            var_22 = (max(var_22, (((var_12 - (((var_0 ? (arr_2 [i_6]) : var_8))))))));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_23 = (arr_5 [i_1] [i_5]);
                            var_24 = (arr_2 [i_1]);
                        }
                        var_25 -= (14378395592443452840 | 14378395592443452845);
                        var_26 = 127;
                        var_27 = var_0;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                {
                    var_28 = -8982772458172124643;
                    var_29 = (max(var_29, (((!(arr_14 [2] [i_9] [i_10 + 1] [i_10] [10] [2] [i_10]))))));
                    arr_28 [i_8] [i_9] [i_10 + 2] [i_8] = (18446744073709551614 ? 4068348481266098801 : (arr_4 [i_8] [i_9] [i_9] [i_10 + 1]));
                    var_30 -= (((arr_12 [i_8] [1] [i_8]) << (((~4068348481266098787) - 14378395592443452823))));
                }
            }
        }
        var_31 = (max(var_31, (arr_25 [i_8] [i_8] [i_8])));
        var_32 = (arr_2 [i_8]);
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    {
                        arr_38 [i_14] = (((max((min((arr_17 [11] [i_11] [0] [i_13] [i_13] [i_14] [i_14]), 4068348481266098787)), (max((arr_30 [4] [4]), 7)))) | (((-(~var_5))))));
                        var_33 -= (arr_35 [i_14] [i_12] [i_12]);
                    }
                }
            }
            arr_39 [i_12] [i_11] = arr_12 [i_11] [i_12] [i_12];
            var_34 -= (max((((~(((arr_20 [i_12]) * var_4))))), ((-var_0 ? (arr_20 [i_12]) : 3205258107))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            arr_43 [i_11] [12] [i_15] |= ((~(13548124777239022796 && 4898619296470528827)));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 12;i_18 += 1)
                    {
                        {
                            arr_52 [i_11] [i_11] [i_15] [i_15] = ((-var_0 * (arr_46 [i_15] [i_15] [i_18 - 1] [i_17])));
                            arr_53 [i_15] [i_15] [i_16] [i_17] [i_17] = var_11;
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            var_35 -= (min((arr_2 [6]), (((arr_2 [14]) + (arr_2 [0])))));
            var_36 |= (((~14378395592443452837) ? (((min(var_1, (arr_4 [i_19] [i_19] [i_11] [i_11]))))) : 4898619296470528819));
        }
        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {
            var_37 = ((((~(arr_26 [i_20] [4] [i_20] [i_20]))) & ((((arr_5 [4] [4]) >= ((((arr_31 [i_11] [i_20]) || (arr_20 [4])))))))));
            var_38 = (min(-4096, 128));
            var_39 = (~var_1);
        }
        var_40 = (max(var_40, ((~((~(arr_55 [i_11])))))));
    }
    var_41 = (~var_2);
    #pragma endscop
}
