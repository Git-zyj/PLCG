/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218460
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_17 = ((/* implicit */long long int) ((arr_4 [i_1 + 1] [i_1 + 1]) / (arr_4 [i_0] [i_0])));
                    var_18 ^= ((/* implicit */short) ((((((/* implicit */int) (signed char)-25)) + (2147483647))) << (((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_5 [i_0] [i_1 + 1] [i_1 + 1]) : (arr_5 [i_0 + 1] [i_1] [i_2]))) - (689628026)))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    arr_13 [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 2])) ^ ((-(((/* implicit */int) arr_11 [i_1 + 2] [i_1 - 1]))))));
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((var_9) * (((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])) >> (((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])) - (168)))))));
                    var_19 = ((((/* implicit */_Bool) max((((/* implicit */int) var_15)), ((~(((/* implicit */int) (signed char)-48))))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) : (((/* implicit */int) var_2)));
                    var_20 ^= min((((/* implicit */int) var_16)), (((int) max((arr_8 [i_0 + 1]), (((/* implicit */unsigned char) var_0))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_21 &= ((/* implicit */long long int) arr_3 [i_0 + 1] [i_1 - 1] [i_3]);
                        arr_19 [(unsigned char)8] &= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-23))));
                        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 2]))));
                    }
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) 1125657726U);
                        var_24 -= ((/* implicit */signed char) var_14);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            arr_26 [i_0] [i_3] [i_3] [i_1] [i_0] &= ((/* implicit */int) 3040907832U);
                            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1 + 1] [i_5 + 1]))));
                        }
                    }
                    for (signed char i_7 = 1; i_7 < 13; i_7 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) arr_0 [i_1]);
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            arr_32 [i_8] [i_7 - 1] [i_3] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned char)204))) ? (arr_23 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_7 + 1] [i_7 - 1] [i_8]) : (((/* implicit */int) ((short) (+(((/* implicit */int) arr_16 [i_8] [i_8]))))))));
                            arr_33 [i_0 + 1] [i_0 + 1] [i_8] [i_0 + 1] [i_0 + 1] [i_8] [i_0 + 1] &= ((/* implicit */long long int) ((((/* implicit */int) ((-6807882340964091502LL) == (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_8 [i_0])), (3169309578U))))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) 3732064498U)) <= (23ULL))))));
                            var_27 -= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
                            var_28 ^= ((/* implicit */unsigned long long int) max((arr_28 [i_1] [i_3] [(_Bool)1]), (((/* implicit */unsigned char) var_3))));
                        }
                        for (unsigned int i_9 = 3; i_9 < 11; i_9 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (~(min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_13))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [12ULL] [i_1]))))))))))));
                            var_30 &= ((/* implicit */_Bool) 9223372036854775807LL);
                            var_31 -= ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) arr_8 [i_1 - 1])), (arr_31 [i_0 + 1] [i_1 - 1] [i_7 + 1] [i_1 - 1] [0ULL] [i_9])))));
                            var_32 = ((/* implicit */short) 1605912769);
                            arr_36 [i_7] [i_3] [i_7] = ((/* implicit */int) (~(min((arr_10 [i_0] [i_0 + 1] [i_1 + 2]), (arr_10 [i_0 + 1] [i_0 + 1] [i_1 + 2])))));
                        }
                        for (unsigned char i_10 = 2; i_10 < 13; i_10 += 4) 
                        {
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) -1))));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) arr_35 [i_0] [i_1] [i_1] [i_3] [i_7] [(_Bool)1]))));
                            arr_40 [i_0 + 1] [i_7] [i_10] &= ((/* implicit */long long int) (-(max((14ULL), (((/* implicit */unsigned long long int) var_9))))));
                        }
                        arr_41 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */int) max((arr_38 [i_7] [i_7] [i_7] [i_7] [i_7 - 1] [(_Bool)1] [i_7 + 1]), (((/* implicit */long long int) var_7))));
                    }
                }
                for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 3) 
                {
                    arr_44 [i_1] = ((/* implicit */unsigned int) (unsigned char)4);
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 3) 
                        {
                            {
                                arr_49 [i_13] [i_13] [i_0 + 1] [i_0 + 1] [i_0] = 18446744073709551615ULL;
                                var_35 = ((/* implicit */_Bool) (~(max((min((arr_30 [i_0] [i_1] [i_11] [i_12] [i_13]), (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_43 [i_11 - 1]))))));
                            }
                        } 
                    } 
                }
                var_36 = ((/* implicit */int) ((((/* implicit */_Bool) max((18446744073709551615ULL), (27ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1] [(unsigned short)9] [i_1] [i_1] [(unsigned short)9] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_42 [i_0] [i_0])) : (var_5)))) ? (((/* implicit */unsigned long long int) var_6)) : (max((var_11), (arr_12 [i_1] [i_0] [i_0 + 1] [i_0 + 1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_14 = 2; i_14 < 19; i_14 += 3) 
    {
        for (int i_15 = 2; i_15 < 18; i_15 += 2) 
        {
            {
                var_37 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((unsigned int) 1457536241U)) / (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_14 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) - (var_5))))))))));
                var_38 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_51 [i_14 - 2] [i_14])))), ((-(((/* implicit */int) arr_50 [i_14 + 1]))))));
                arr_55 [i_14] = ((/* implicit */int) max((((((/* implicit */_Bool) -2951677899437749455LL)) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))))), (((/* implicit */unsigned long long int) arr_51 [i_14] [i_14]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 1) 
    {
        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (-(6807882340964091507LL))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_57 [i_16])) / (((/* implicit */int) arr_53 [10U] [i_16] [i_16])))))) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_9)) : (var_13))), (((/* implicit */unsigned long long int) (unsigned short)52008))))));
        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_56 [i_16])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4697083602473348194ULL)) ? (arr_52 [i_16] [i_16]) : (((/* implicit */long long int) 766727156U))))) ? (((unsigned long long int) arr_52 [i_16] [i_16])) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 311478587)), (var_6)))))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (int i_18 = 0; i_18 < 17; i_18 += 3) 
        {
            {
                arr_64 [i_17] [i_18] = arr_63 [i_17] [i_18];
                /* LoopNest 3 */
                for (unsigned char i_19 = 1; i_19 < 15; i_19 += 2) 
                {
                    for (int i_20 = 1; i_20 < 16; i_20 += 1) 
                    {
                        for (short i_21 = 2; i_21 < 16; i_21 += 1) 
                        {
                            {
                                arr_73 [i_17] [i_17] [i_17] [i_18] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) var_14);
                                var_41 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((signed char) var_4))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_17])))))));
                                arr_74 [i_18] [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_70 [i_19] [i_19] [9] [i_19] [i_19 + 1]))));
                                arr_75 [i_17] [i_18] [i_19] [i_20] [i_21] = ((/* implicit */_Bool) 4725042087862228570ULL);
                                var_42 -= ((/* implicit */int) max((arr_50 [i_20 - 1]), (arr_66 [10ULL] [(_Bool)1] [i_19] [10ULL])));
                            }
                        } 
                    } 
                } 
                var_43 = arr_66 [i_18] [i_18] [i_17] [i_18];
            }
        } 
    } 
    var_44 ^= ((/* implicit */int) var_13);
}
