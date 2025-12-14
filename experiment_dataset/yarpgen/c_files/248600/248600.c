/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_4 && var_14) != var_9)) ? ((max(var_15, ((max(var_18, 1)))))) : ((var_12 >> (var_5 + 5625977303978052271)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_21 = (min(var_21, (arr_1 [i_0 + 1])));

            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                var_22 -= (((arr_6 [i_0]) >= ((var_19 ? (arr_6 [i_0]) : var_9))));
                var_23 = ((((((arr_3 [i_0]) > 1023658914))) - (arr_7 [i_0 - 1] [i_2 - 4] [i_0])));
                var_24 += ((2179779761 ^ ((var_9 ? var_1 : var_3))));
            }
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                arr_11 [i_0] [i_0] [i_0] [i_0] = var_2;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_19 [i_5] [i_3] [i_0] [i_0] [i_1] [i_0] = var_9;
                            arr_20 [i_5] [i_0] [i_3 - 2] [i_0] [i_0] = ((var_0 >= ((1700788535 ? (arr_18 [i_0 + 1] [i_1] [i_3] [i_0 + 1] [i_5]) : var_12))));
                            var_25 = (((arr_4 [i_3] [i_3 - 1] [i_3 + 1]) != 2506559251308763418));
                        }
                    }
                }
            }
        }
        for (int i_6 = 4; i_6 < 9;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_26 = (max(var_26, (arr_13 [i_6])));
                            var_27 = -var_18;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        var_28 = (arr_5 [i_0]);
                        arr_35 [i_0] [i_0] [i_0] [i_11] [i_0] = (((var_15 ? var_10 : (arr_14 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0]))) & ((~(arr_14 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                    }
                }
            }
        }
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            var_29 = arr_32 [i_0];

            for (int i_13 = 2; i_13 < 9;i_13 += 1)
            {
                var_30 = ((((((arr_17 [i_0] [i_13 + 1] [i_0 - 1] [i_0 - 1] [i_0]) ? var_9 : ((((arr_1 [i_12]) ? var_15 : 4063232))))) + 9223372036854775807)) << (arr_18 [i_13] [i_13] [i_0] [i_0] [i_0 - 1]));

                /* vectorizable */
                for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
                {
                    var_31 = (i_0 % 2 == zero) ? (((((((arr_33 [i_0] [i_0] [i_13 - 1] [i_14]) >> (46621 - 46600)))) * (arr_15 [i_0] [i_12])))) : (((((((((arr_33 [i_0] [i_0] [i_13 - 1] [i_14]) + 2147483647)) >> (46621 - 46600)))) * (arr_15 [i_0] [i_12]))));
                    var_32 -= (arr_15 [i_14] [i_13]);
                    var_33 = ((-1 == (arr_31 [i_0 + 1])));
                }
                for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
                {
                    var_34 = (min(var_34, ((((arr_38 [i_13 - 2] [i_13] [i_0 - 1] [i_15]) ? (arr_38 [i_13 + 2] [i_15] [i_0 + 1] [i_15]) : (((arr_38 [i_13 + 2] [i_15] [i_0 + 1] [i_0 + 1]) ^ var_8)))))));
                    arr_47 [i_0] [i_0] = var_8;
                    var_35 = ((+(min((!var_1), (min((arr_22 [i_0] [i_0 - 1] [i_0]), var_2))))));
                    var_36 = ((((((arr_26 [i_13 + 2]) > (arr_26 [i_12 - 2])))) < ((max((arr_26 [i_0 - 1]), var_8)))));
                    var_37 = (min((max((~var_9), 1352733346)), (((var_2 && (((arr_14 [i_0] [i_0] [i_13] [i_15]) > var_9)))))));
                }
            }
            var_38 = ((+((-var_1 + (((arr_38 [i_0] [i_0] [i_0] [i_0]) / var_12))))));
        }
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 11;i_18 += 1)
                {
                    {
                        var_39 = (max(var_39, 1223841163));
                        var_40 = (min(var_40, ((max((min(1762743761178539524, ((46621 | (arr_3 [8]))))), ((var_6 ? var_9 : (arr_33 [i_0] [2] [2] [i_0]))))))));
                        var_41 = (max(var_41, (((((min(((min((arr_48 [i_0 + 1]), var_1))), (arr_17 [i_17 - 1] [i_18 - 1] [i_18 - 1] [i_18] [0])))) ? ((max(-var_8, ((max(var_8, (arr_29 [i_0] [i_0] [i_16] [i_17 - 1] [i_0] [i_16] [i_18 - 1]))))))) : ((-((var_2 ? var_16 : var_11)))))))));
                        var_42 = var_18;
                    }
                }
            }
            arr_55 [i_0] = min((arr_42 [i_0 - 1]), (arr_46 [i_0] [i_0] [i_0 - 1] [i_0]));
            /* LoopNest 3 */
            for (int i_19 = 1; i_19 < 11;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 12;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 12;i_21 += 1)
                    {
                        {
                            arr_65 [i_21] [i_16] [i_0] [i_20] [i_21] [i_0] = (min((max(((8250350246504037275 << (var_17 - 64496))), (((~(arr_12 [i_0] [i_0] [i_20] [i_21])))))), (max((var_3 ^ var_7), (arr_5 [i_0])))));
                            var_43 &= ((max((((2179779750 == (arr_7 [i_0] [i_19] [i_21])))), (max((arr_33 [i_0 + 1] [i_21] [i_20] [i_21]), (arr_54 [i_0] [i_0] [i_0] [i_0] [i_21] [i_21]))))));
                            var_44 = (max(var_44, 1));
                            var_45 = ((-(((arr_32 [i_19 + 1]) ^ var_12))));
                            var_46 &= ((var_3 ? (((((((arr_12 [i_0 - 1] [i_0] [i_0] [i_0]) / var_10))) ? (arr_38 [i_0] [i_21] [i_21] [i_21]) : (((min(1, (arr_28 [i_0] [i_0 + 1] [i_21] [i_0 + 1])))))))) : (((((arr_34 [8] [i_21] [8] [i_19] [i_21] [8]) != (arr_28 [i_19] [i_19] [i_21] [i_19]))) ? (2078677884 && var_19) : (arr_51 [i_0] [i_16] [i_16] [i_20])))));
                        }
                    }
                }
            }
            var_47 = (var_16 ? ((max((arr_53 [7] [0] [i_0] [i_16] [i_16]), var_4))) : (((((arr_15 [i_0] [i_0]) != var_19)) ? var_9 : (((var_17 ? (arr_10 [i_16] [i_16] [i_0]) : var_2))))));
        }
        var_48 = (((min(((var_11 ^ (arr_8 [i_0] [i_0] [i_0]))), ((max((arr_10 [i_0 - 1] [i_0 - 1] [i_0]), (arr_36 [i_0]))))))) ? (arr_21 [i_0] [i_0]) : (((min((arr_14 [i_0] [i_0] [i_0] [4]), var_2)) | var_19)));
    }
    var_49 = var_19;
    #pragma endscop
}
