/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] = (arr_1 [i_1]);
            arr_7 [i_0] = -9748;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_15 *= (!9826);
            arr_12 [i_0] [i_2] = ((-((max((arr_4 [i_0] [i_2] [i_2]), var_6)))));
        }
        arr_13 [i_0] = (max((arr_8 [i_0] [i_0]), 9103505519844816166));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_18 [i_3] = (((((min(96, 9840))) ? var_13 : ((-5100334637639094734 ? 7510497651479477742 : (arr_10 [i_3] [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 6;i_5 += 1)
            {
                {
                    var_16 ^= ((((arr_20 [i_5 + 4]) ? (arr_20 [i_5 + 4]) : (arr_20 [i_5 + 4]))) & ((max(var_5, ((((arr_4 [i_5 + 2] [i_5] [i_5]) > (arr_10 [i_3] [i_5]))))))));
                    var_17 = (((((34806 ? (arr_20 [i_4]) : (arr_10 [i_3] [i_5]))) >> (65529 - 65519))));
                    arr_23 [0] = var_6;
                    var_18 ^= ((-(((((arr_16 [i_5]) ? 3067523599756090613 : 6050695913571190855)) / ((max(4026531840, 2098000495)))))));
                }
            }
        }
        var_19 |= 0;
    }
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        arr_27 [i_6] = var_11;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 10;i_8 += 1)
            {
                {
                    var_20 = ((-120 ^ ((5 ? var_11 : 4026531840))));
                    arr_33 [i_6] = 5268736907149583850;
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {

        /* vectorizable */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_39 [i_10] |= var_5;
            arr_40 [i_9] [i_9] [i_10] = ((-(arr_37 [i_9])));
        }
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            arr_44 [i_11] [i_9] = (arr_41 [i_11 + 2] [i_11] [i_11]);
            var_21 = ((((min(var_8, ((var_10 ? var_4 : var_12))))) ? ((((!160) || 55710))) : var_7));
            var_22 = (max(-2057154691, (!var_8)));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_23 ^= (((arr_37 [i_9]) > (arr_38 [i_9] [i_12])));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    {
                        var_24 += ((((var_10 ? (arr_34 [i_9] [18]) : (arr_50 [i_9])))) & ((var_9 >> (((arr_41 [i_12] [i_12] [i_14]) - 45)))));

                        for (int i_15 = 1; i_15 < 22;i_15 += 1)
                        {
                            var_25 = (min(var_25, (arr_46 [i_12] [i_12] [i_12])));
                            var_26 ^= ((arr_52 [i_9] [i_12] [i_12] [i_12] [i_14] [i_14] [i_12]) | var_9);
                            arr_53 [i_14] = ((var_11 ? (arr_49 [i_9] [i_9] [i_9] [i_13] [i_14] [i_15]) : -var_12));
                            var_27 = (((arr_41 [i_15 - 1] [i_14] [i_15 - 1]) ? (arr_41 [i_15 + 2] [i_14] [i_15 + 1]) : -5760427852856439022));
                        }
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            var_28 = (max(var_28, (-6159290369378691062 / 397745922)));
                            arr_58 [i_14] [i_14] [i_16] [i_14] = (((arr_41 [i_9] [i_14] [i_16]) ? (arr_41 [i_13] [i_14] [i_16]) : 1));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_17 = 1; i_17 < 22;i_17 += 1)
        {
            var_29 = (min(var_29, 3238149593689312300));
            var_30 ^= (var_9 >= 287667426198290432);
            var_31 = (arr_36 [i_17 + 3]);
        }
        var_32 = (max(-30730, (arr_56 [i_9] [i_9] [i_9] [i_9] [14])));
    }
    #pragma endscop
}
