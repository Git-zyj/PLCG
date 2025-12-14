/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_9;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_13 = var_12;
            arr_6 [i_0] [i_1] &= (arr_1 [i_0]);
            var_14 ^= (((arr_0 [i_1]) ? var_12 : var_5));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_15 = -17812784654941811791;
                        var_16 *= 266099514;
                    }
                }
            }
            var_17 = (var_7 == var_1);
            var_18 = (max(var_18, ((max((((var_12 >> (((arr_10 [i_0] [i_0] [i_0] [i_2]) - 20))))), (min(-20, (max((arr_0 [i_2]), 1)))))))));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_15 [1] [i_5] [5] = var_11;
            arr_16 [i_0] [i_0] [i_5] = 266099514;
            var_19 = -266099525;

            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                arr_19 [i_0] = 50;
                var_20 = var_4;
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_23 [i_5] [i_0] [15] [i_7] = 39632;
                arr_24 [i_0] [i_5] = -266099499;
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {

                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    var_21 += ((+(((arr_0 [i_9 + 3]) ^ (arr_0 [i_9 + 1])))));
                    var_22 = 2;
                }
                for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_34 [7] [i_5] [i_8] [i_10] [i_11] [i_11] [15] = (arr_30 [i_0] [14] [i_0]);
                        var_23 = 1;
                        var_24 = (arr_14 [i_10]);
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = var_4;
                    }

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_25 = var_12;
                        var_26 |= 113;
                        arr_40 [14] [12] [i_8] [i_8] [15] [i_8] = (17765 ^ 3423012229);
                        var_27 |= (arr_9 [i_10] [5] [i_10] [i_10]);
                        arr_41 [8] [i_10] = (((((var_0 >= var_10) + ((min(var_7, 5406))))) != (((!(arr_17 [i_5] [i_10] [i_12]))))));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_28 = (max(var_28, ((((arr_9 [i_0] [i_5] [i_8] [i_10]) | (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                        arr_45 [i_13] [i_10] [i_8] [i_8] [9] [i_0] = (arr_42 [i_5] [i_13]);
                        var_29 ^= 226;
                        var_30 = var_4;
                    }
                }
                for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                {
                    arr_48 [i_0] [i_14] [i_8] [i_14] [i_14] [10] = 0;
                    arr_49 [i_0] [i_5] [i_8] [i_14] [i_8] [13] = (((arr_5 [i_5] [i_14]) ? var_6 : ((max((arr_5 [i_0] [i_5]), var_12)))));
                    var_31 &= ((!((min((arr_13 [i_8]), var_10)))));
                    var_32 = (~var_4);

                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        arr_54 [7] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = 266099524;
                        var_33 ^= -2556896747172476830;
                    }
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        var_34 = (arr_42 [i_8] [i_16]);
                        arr_59 [i_0] [i_5] [i_8] = (max(29, (((arr_1 [i_8]) + var_3))));
                        var_35 = ((+(((arr_7 [i_0]) ? 11156247113091638649 : (arr_7 [i_16])))));
                        var_36 -= 266099498;
                        var_37 = var_11;
                    }
                }
                arr_60 [i_8] = (arr_4 [i_0] [0]);
                arr_61 [i_0] = (arr_26 [i_0] [15] [i_0]);
            }
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                arr_64 [12] [i_5] [i_0] = var_11;
                arr_65 [i_5] = ((((arr_7 [i_0]) | var_2)));
                var_38 = var_7;
            }
        }
        /* LoopNest 2 */
        for (int i_18 = 2; i_18 < 14;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                {
                    var_39 = var_3;
                    var_40 += 3;
                }
            }
        }
        arr_72 [i_0] = var_9;
        arr_73 [0] [6] = ((16773120 & ((((var_2 ? var_10 : 5010))))));
    }
    var_41 ^= (max((var_6 * var_10), (((var_8 ? 11681 : 1)))));
    var_42 = (var_7 - ((((var_11 ? var_9 : var_5)))));
    #pragma endscop
}
