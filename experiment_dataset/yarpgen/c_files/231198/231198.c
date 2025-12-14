/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 ^= var_1;
        var_11 = ((((var_5 << (((arr_2 [i_0]) - 7467647441854402614))))) ? (~var_3) : (((arr_2 [i_0]) ? var_9 : var_0)));
        var_12 += (((~0) & (max((~1), var_0))));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_13 = (min(var_13, (--1023)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, (arr_9 [1] [i_2] [i_2] [i_1 - 1] [1] [i_0])));
                        var_15 ^= (arr_6 [10] [i_1 + 3]);
                    }
                }
            }
            var_16 = max(var_1, (max(var_7, (arr_9 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1]))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_17 += ((var_9 / ((var_1 * (arr_0 [10] [i_5])))));
                        arr_15 [12] [12] [9] = (max(((min((min(var_7, (arr_6 [i_0] [i_0]))), (arr_12 [5] [i_1] [i_1 + 1])))), (((((var_3 ? var_9 : 8191))) ? var_9 : var_2))));
                        arr_16 [i_1] [i_1] [i_1] [i_1] = (min(4219271205, (arr_10 [i_1 + 1] [i_4 - 2])));
                        var_18 = var_3;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_19 = (max(var_19, -1));
        var_20 += (max((var_4 * var_4), (7719 - 35184372088831)));
        arr_19 [i_6] = ((8032626804136169487 >> (var_1 - 20776)));
    }

    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
        {
            var_21 ^= (~((((max(29918, var_5))) ^ var_3)));
            var_22 = (max(var_9, (min(var_9, var_0))));
            var_23 ^= min(-18446744073709551593, var_5);

            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_24 ^= (((-(arr_25 [i_8 - 1] [i_8 - 1] [i_8]))));
                            var_25 = (max(((-((var_4 ? 9761875771251248984 : (arr_17 [i_10]))))), var_9));
                            var_26 = var_3;
                            var_27 += (((((arr_22 [i_8 + 3] [i_8 + 3]) ? var_9 : (arr_22 [i_8 + 3] [i_8 + 2]))) * (((arr_22 [i_8 + 2] [i_8 + 3]) / (arr_22 [i_8 + 1] [i_8 + 4])))));
                        }
                    }
                }
                arr_32 [i_7] [i_7] [14] |= ((18197380576998843912 ? var_1 : ((var_5 >> (var_6 - 14255505130750884975)))));
            }
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                var_28 = ((~((((min((arr_21 [1]), var_1))) | var_0))));

                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    var_29 = (((arr_33 [i_7] [i_7] [i_12] [1]) + (arr_35 [5] [i_8] [i_12])));
                    var_30 += ((((max((arr_27 [i_7] [i_8 - 1] [i_7]), var_3))) ^ (min((max(-1282825095, (arr_38 [0]))), (arr_35 [i_8 + 4] [i_8 + 3] [i_8 + 1])))));
                    var_31 = (((((var_2 ? ((~(arr_25 [i_7] [i_7] [i_7]))) : var_5))) ? ((((~var_7) ? (((arr_29 [i_12] [i_12] [i_13] [i_13]) ^ 56)) : (arr_30 [i_8 + 1] [i_8 + 1] [16] [i_8 + 4] [i_8 + 1] [i_8 + 4] [i_8])))) : (((arr_35 [i_7] [i_8 + 3] [i_12]) ^ (arr_24 [i_7] [i_8 + 3])))));
                    arr_40 [i_13] [i_8] [i_13] = ((~(((((arr_24 [i_7] [i_8 + 3]) + 9223372036854775807)) >> (1420903312 - 1420903305)))));
                    var_32 ^= 18446708889337462764;
                }
                var_33 = ((-((-(1415 / -22160)))));
            }
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                var_34 = var_7;
                var_35 = ((~var_6) << (((((((var_9 << (var_5 - 103)))) ? var_6 : (var_1 | var_6))) - 14255505130750884940)));
            }
        }
        for (int i_15 = 1; i_15 < 14;i_15 += 1) /* same iter space */
        {
            var_36 = var_2;
            var_37 = (((((arr_33 [2] [10] [i_7] [i_15 + 1]) - (max((arr_37 [i_7] [0] [i_7] [i_7] [i_15]), 14336)))) - -var_9));
        }
        for (int i_16 = 1; i_16 < 14;i_16 += 1) /* same iter space */
        {
            var_38 = (max(var_38, (((var_6 ? (((max((arr_20 [i_7] [i_16 + 1]), (arr_20 [i_7] [i_16 + 4]))))) : (((arr_39 [i_16] [i_16] [i_7] [i_7]) + (arr_30 [i_7] [i_7] [i_16 + 2] [i_16] [i_7] [i_16 + 4] [i_16]))))))));
            var_39 = (min(var_39, ((max(((min(-7724, 1))), (arr_46 [i_16 + 2] [i_16 + 2] [i_16 + 1]))))));
            var_40 = (max(var_40, (((~(max((arr_35 [i_7] [10] [i_16 + 1]), ((-26054 ? var_1 : 47)))))))));
            var_41 = ((~(18446744073709551615 >> var_3)));
        }
        arr_49 [i_7] = ((-(arr_17 [i_7])));
    }
    var_42 = ((((((max(var_3, var_0)) - 1))) ? (((var_9 + var_3) ? var_1 : (var_8 + var_5))) : (((var_5 - ((var_9 ? var_9 : -4656)))))));
    #pragma endscop
}
