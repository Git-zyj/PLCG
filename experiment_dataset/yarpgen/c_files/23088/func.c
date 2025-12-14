/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23088
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 *= ((/* implicit */unsigned char) max((max((var_3), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))), (var_10)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((var_6) + (var_9)));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_22 = ((/* implicit */long long int) (_Bool)1);
                    var_23 = ((/* implicit */unsigned int) (((~(arr_1 [i_0]))) | (((/* implicit */int) max((arr_5 [i_0] [i_0]), (var_0))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) - (32767)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_25 += ((/* implicit */signed char) var_18);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (4153264367U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])))))) : (var_10)));
                        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) -1)) + (3125705701U)));
                            var_29 = ((_Bool) arr_8 [i_2] [i_4] [i_4 - 2] [i_5]);
                        }
                        var_30 = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 3; i_6 < 11; i_6 += 3) 
                    {
                        var_31 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (17370802921033555699ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6 - 1] [i_6 + 2] [i_6 + 1] [i_6 - 3])))));
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) 4153264367U))));
                        var_33 = ((/* implicit */short) (+(arr_3 [i_0] [i_0] [i_0])));
                    }
                }
                /* vectorizable */
                for (signed char i_7 = 1; i_7 < 14; i_7 += 1) 
                {
                    var_34 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) 32765)))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            {
                                var_35 = ((short) 3125705701U);
                                var_36 = ((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) arr_10 [i_0] [i_0] [i_7] [i_0] [i_9] [i_7 - 1]))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_10 = 2; i_10 < 12; i_10 += 3) 
                {
                    var_37 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_4)) & (((((/* implicit */_Bool) -32751)) ? (((/* implicit */int) arr_0 [i_1] [4U])) : (((/* implicit */int) var_0)))))), (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) arr_23 [i_10])), (arr_17 [i_0] [i_0] [i_0] [i_0])))))));
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2ULL))));
                        var_39 = ((/* implicit */unsigned long long int) var_2);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 3; i_12 < 11; i_12 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)56)) - (52)))))));
                            var_41 *= ((/* implicit */short) (unsigned char)67);
                            var_42 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_16 [i_12] [i_1] [i_0] [i_12] [i_13])) : (((/* implicit */int) (short)-27908)))) << (((arr_1 [i_0]) - (1500613158)))))) : (((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_16 [i_12] [i_1] [i_0] [i_12] [i_13])) : (((/* implicit */int) (short)-27908)))) << (((((arr_1 [i_0]) + (1500613158))) + (427367131))))));
                            var_43 = ((/* implicit */unsigned short) ((long long int) ((arr_15 [i_0] [i_1] [i_10] [i_1] [i_13]) != (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-27908))));
                            var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_10] [i_10] [i_10] [i_14] [i_10] [i_10])) - (((/* implicit */int) arr_10 [i_10] [i_10] [i_10] [i_14] [i_10] [i_10])))))));
                            var_46 = ((/* implicit */unsigned int) var_11);
                        }
                        var_47 = ((/* implicit */int) arr_8 [i_12] [i_0] [i_0] [i_12]);
                        var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1] [i_1] [i_12] [i_1] [(short)0])) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) arr_27 [i_10] [i_10])))) << ((((((-(((/* implicit */int) (unsigned char)76)))) + (102))) - (14))))))));
                        /* LoopSeq 1 */
                        for (signed char i_15 = 1; i_15 < 14; i_15 += 1) 
                        {
                            var_49 = ((/* implicit */long long int) arr_22 [i_10] [i_10] [i_10] [i_1] [i_0]);
                            var_50 = ((/* implicit */signed char) arr_12 [i_0] [i_1] [i_10] [i_10] [i_15]);
                        }
                    }
                    var_51 = ((/* implicit */unsigned long long int) var_0);
                }
                var_52 *= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [(unsigned short)10] [i_0] [i_1])))));
            }
        } 
    } 
    var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_17) | (var_17)))) ? (((/* implicit */unsigned long long int) -32782)) : (((max((((/* implicit */unsigned long long int) 32755)), (var_6))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_54 = ((/* implicit */unsigned char) arr_43 [i_16] [i_16]);
        var_55 += ((/* implicit */unsigned int) arr_23 [i_16]);
        var_56 = ((/* implicit */unsigned int) var_0);
    }
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_57 = ((/* implicit */unsigned long long int) var_0);
        /* LoopNest 3 */
        for (long long int i_18 = 1; i_18 < 21; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 19; i_19 += 3) 
            {
                for (unsigned int i_20 = 0; i_20 < 22; i_20 += 2) 
                {
                    {
                        var_58 = arr_51 [i_20] [i_19 + 2] [i_20];
                        var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_19 + 3])) ? (arr_50 [i_18]) : (((/* implicit */unsigned long long int) (+(4294967295U))))));
                    }
                } 
            } 
        } 
        var_60 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)61440)) | (((/* implicit */int) (unsigned char)205))));
        /* LoopSeq 3 */
        for (unsigned short i_21 = 0; i_21 < 22; i_21 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_22 = 1; i_22 < 21; i_22 += 2) 
            {
                var_61 = ((/* implicit */long long int) ((((/* implicit */int) arr_52 [i_22 + 1])) | (((/* implicit */int) arr_52 [i_22 + 1]))));
                var_62 = ((/* implicit */unsigned long long int) var_13);
            }
            var_63 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_54 [i_17] [i_17] [i_17] [i_17])))) ? ((-(-32763))) : (((((/* implicit */_Bool) arr_48 [i_17] [i_21])) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) (unsigned short)65519))))));
        }
        for (unsigned long long int i_23 = 1; i_23 < 20; i_23 += 3) 
        {
            var_64 = ((/* implicit */unsigned long long int) ((unsigned int) ((short) var_8)));
            var_65 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_48 [i_17] [i_17])) | (var_3))))));
            var_66 = ((/* implicit */short) ((((/* implicit */_Bool) arr_57 [i_23 - 1])) ? (((int) 15125591205257799685ULL)) : ((-(((/* implicit */int) (short)-1))))));
            var_67 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
        }
        for (unsigned char i_24 = 2; i_24 < 18; i_24 += 3) 
        {
            var_68 ^= ((/* implicit */unsigned int) (+(536868864)));
            var_69 = ((/* implicit */short) ((((/* implicit */int) arr_66 [i_24 + 2] [i_24 - 2] [i_24 + 1])) * (((/* implicit */int) arr_66 [i_24 + 4] [i_24 + 4] [i_24 - 1]))));
            var_70 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) 8689782195346910331LL))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_63 [i_17]))));
            /* LoopSeq 1 */
            for (short i_25 = 0; i_25 < 22; i_25 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    var_71 |= ((unsigned char) arr_55 [i_24] [(unsigned char)8] [i_24] [i_24]);
                    var_72 *= ((/* implicit */short) (unsigned char)0);
                }
                var_73 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (short)-32752)))) - (((/* implicit */int) ((unsigned short) 18446744073709551615ULL)))));
            }
        }
    }
    var_74 = ((/* implicit */unsigned long long int) ((((max((var_16), (((/* implicit */unsigned int) var_12)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) << (((((/* implicit */int) var_0)) - (61)))));
}
