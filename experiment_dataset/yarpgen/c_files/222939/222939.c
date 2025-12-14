/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 = (max(-var_6, var_3));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 *= (arr_5 [i_2] [i_2 + 1] [i_2 + 1]);
                    var_18 += var_15;

                    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 = (max(-79, (arr_8 [i_4] [i_3 - 1] [i_2] [i_1] [i_0 + 2] [i_0])));
                            arr_11 [i_1] [i_3] [i_1] [i_1] = min((arr_10 [i_3 + 1] [i_1] [i_3] [i_3] [i_1] [i_3]), (var_5 > var_4));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_1] = var_6;
                            var_20 = (max(var_20, ((~((min(var_10, var_3)))))));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = (min(((max((var_0 & -32), -var_9))), var_7));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_21 = (min(var_21, (arr_7 [i_0] [i_0] [i_0] [i_0])));
                            arr_16 [i_0] [i_5] [13] [i_3 - 1] [i_1] = (((arr_14 [i_0 - 1] [i_2 + 1]) << (66 - 42)));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_1] = (arr_4 [i_0] [i_1] [i_2]);
                            arr_21 [i_1] [i_1] [i_2] [i_1] [i_0] = (~1023);
                            var_22 = (((((arr_5 [i_0] [i_1] [i_2]) * (arr_17 [i_1] [i_3 - 1] [i_2 + 1] [i_3] [i_6] [i_3]))) >= (~var_3)));
                            arr_22 [i_1] [i_3] [i_2] [i_1] [i_1] = ((((max(((max((arr_0 [i_0] [i_1]), (arr_17 [i_1] [i_1] [i_1] [i_3] [i_3] [i_3])))), (arr_14 [i_1] [12])))) / (max((var_13 / var_12), ((min(var_14, var_15)))))));
                        }
                        var_23 = (((arr_9 [i_1] [i_1] [i_2 + 1]) == (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0])));
                        arr_23 [i_0] [i_1] [i_2] [i_3] = (max((((1027 >= (arr_0 [i_2] [i_1])))), (((arr_0 [i_0 - 1] [i_1]) * (arr_0 [i_0] [i_0])))));
                    }
                    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_1] = var_10;
                        var_24 = (arr_24 [i_0] [i_0] [i_0]);
                    }
                }
            }
        }
        arr_27 [i_0] = (((((((77889616 << (var_12 - 1691))) >= var_7))) == var_5));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {

        for (int i_9 = 2; i_9 < 9;i_9 += 1)
        {
            var_25 += var_9;
            var_26 = ((!(((arr_15 [i_9 - 2] [4] [4] [i_9] [i_9] [i_9] [i_9]) && var_3))));
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            var_27 = (min(var_27, (((var_11 == ((max((arr_28 [i_10]), ((min((arr_9 [i_8] [i_10] [i_8]), var_8)))))))))));
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    {
                        arr_42 [i_11] [i_11] [i_10] [i_10] [i_11] = var_6;
                        arr_43 [i_8] [i_8] [i_8] [i_8] [i_8] &= ((((~(arr_15 [i_8] [i_11 - 1] [i_11 + 1] [i_12] [i_8] [i_12] [i_12]))) | ((max(var_10, (arr_15 [i_8] [i_11 - 1] [i_8] [i_11 - 1] [i_8] [i_8] [i_11 - 1]))))));
                    }
                }
            }
            var_28 = var_13;
        }
        var_29 = var_9;
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 7;i_13 += 1) /* same iter space */
    {
        var_30 = ((~(arr_18 [i_13 + 3] [i_13] [i_13] [i_13] [i_13 + 1])));
        var_31 = var_2;

        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            var_32 = ((var_10 << ((((255 ^ (arr_49 [i_13]))) - 243))));
            var_33 = (arr_10 [i_13] [4] [i_13] [i_13] [i_13] [i_14]);
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                var_34 += 1023;
                var_35 ^= (var_4 == 65535);
                arr_54 [i_13] [i_15] = var_2;
                var_36 = var_5;
            }
            for (int i_17 = 4; i_17 < 10;i_17 += 1)
            {
                arr_58 [i_13] [i_13] [i_13] = arr_15 [i_13] [i_13] [i_13] [i_15] [i_17] [i_17] [i_17];
                var_37 &= ((~(arr_51 [i_13 + 3])));
            }
            var_38 |= var_1;
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    {
                        arr_64 [0] [i_15] [i_15] [0] = arr_24 [i_19] [i_19] [i_19];
                        arr_65 [i_13] [i_13] [10] [i_13] [i_13 + 3] = 1033;
                    }
                }
            }
        }
        for (int i_20 = 0; i_20 < 11;i_20 += 1)
        {
            var_39 = ((((((!(arr_7 [i_13] [i_20] [i_20] [i_20]))))) | (arr_60 [i_13 + 4])));
            arr_70 [i_13] [i_13] [i_13] |= var_15;
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 11;i_22 += 1)
                {
                    {
                        arr_76 [i_13] [i_13] [i_21] [i_21] [i_21] [i_22] = (((arr_69 [i_13] [i_13] [i_13]) | (arr_25 [i_13] [i_13] [i_21] [i_22] [i_21] [8])));
                        arr_77 [i_13] [i_21] = (arr_19 [i_13] [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13] [i_13 + 4]);
                        var_40 = (min(var_40, (((arr_49 [i_13 + 4]) ^ var_11))));
                    }
                }
            }
        }
    }
    for (int i_23 = 1; i_23 < 7;i_23 += 1) /* same iter space */
    {
        arr_81 [i_23] &= ((-(arr_69 [i_23] [i_23 + 1] [i_23])));
        var_41 = var_6;
    }
    var_42 = (min(var_42, (((var_12 | (min(var_5, ((var_15 << (var_9 - 32138))))))))));
    #pragma endscop
}
