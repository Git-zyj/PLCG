/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40601
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
    var_11 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((18446744073709551605ULL), (((/* implicit */unsigned long long int) (unsigned short)16))))) ? ((~(var_0))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)65530)), (4294967295U)))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)65530)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (-692230695084017602LL)))))))));
    var_12 -= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_1] = arr_1 [i_1];
                var_13 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((arr_0 [i_0]), (18446744073709551602ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : ((((!(((/* implicit */_Bool) 11ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (18446744073709551605ULL)))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */int) var_0);
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_2 [i_1] [i_1] [i_0]))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) 692230695084017603LL);
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_0]))));
                        arr_13 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (~(127U)));
                        arr_14 [4U] [(unsigned char)4] [(unsigned short)4] [i_3] |= ((/* implicit */unsigned short) (_Bool)1);
                        var_17 ^= (-((-(((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) arr_1 [(signed char)2]);
                        var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))) : (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2])) : (((/* implicit */int) (short)-2))))))), (((((/* implicit */_Bool) var_2)) ? (-692230695084017607LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_4 + 2] [(short)4] [i_4] [(short)4])))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 8; i_5 += 2) 
                    {
                        arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) arr_2 [i_1] [7] [i_1 - 2]));
                        arr_21 [i_1] = ((/* implicit */unsigned long long int) (-(399553644U)));
                        arr_22 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (((-(18446744073709551600ULL))) <= (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 16777215)) : (27ULL)))));
                        var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (arr_10 [i_5] [i_2] [i_1] [i_0]) : (arr_2 [i_5] [i_2] [i_0])))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1 - 1] [i_1 - 3] [i_1])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)65528)) ? (var_7) : (((/* implicit */long long int) arr_24 [i_0] [i_1] [i_0] [i_1] [i_0])))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_1 - 3] [i_2] [i_2] [i_6 - 1])))));
                        arr_25 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((var_3) ? (arr_0 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1468933086659311197ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253)))))))));
                    }
                }
                for (unsigned int i_7 = 1; i_7 < 7; i_7 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                arr_34 [i_9] [i_1] [i_9] [i_8] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((10ULL) - (((/* implicit */unsigned long long int) arr_30 [i_0] [i_1] [i_7] [i_8] [i_9]))))))))) : (((((((/* implicit */int) (short)-32008)) > (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_1])))) ? (max((var_8), (((/* implicit */long long int) 3895413627U)))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_9])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))))));
                                arr_35 [i_0] [i_1] [i_7] [i_1] [i_9] [i_9] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_29 [i_1] [(unsigned short)1] [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7 + 1] [(unsigned char)8] [i_1 - 1] [i_0]))) : (((((/* implicit */_Bool) arr_7 [(_Bool)1] [2ULL] [i_7])) ? (18446744073709551602ULL) : (var_1))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0]))) ^ (arr_0 [i_0]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                                arr_36 [i_0] [i_1] [i_1] [i_1] [i_8] [i_9] = ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_7 + 2] [i_8] [i_9])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_7] [i_8] [i_9])) ? (arr_12 [i_7] [i_7] [i_0] [i_8] [i_9]) : (arr_12 [i_0] [i_0] [i_7] [i_8] [(unsigned char)5])))) : (((((/* implicit */_Bool) (unsigned short)11465)) ? (((/* implicit */long long int) arr_12 [i_0] [i_1 - 2] [i_7] [i_8] [i_9])) : (var_8))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-34)))))));
                }
                for (unsigned int i_10 = 1; i_10 < 7; i_10 += 3) /* same iter space */
                {
                    arr_40 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (arr_18 [i_10] [i_0] [i_1] [i_0])))) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_10] [i_1] [i_0])))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)-2)) : (0))) : ((+(((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_1]))))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_17 [i_1 - 2] [i_10 + 1] [i_10 + 1]), (((/* implicit */int) arr_38 [i_1 - 3] [i_1] [i_10 + 1]))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) arr_12 [i_10 - 1] [i_10] [i_1] [i_0] [i_0])) < (var_10)))))));
                    var_24 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_10 + 2] [i_10] [i_10])) << (((((unsigned long long int) (signed char)120)) - (102ULL))))))));
                    var_25 = ((/* implicit */signed char) (unsigned char)11);
                }
                /* vectorizable */
                for (unsigned int i_11 = 1; i_11 < 7; i_11 += 3) /* same iter space */
                {
                    arr_43 [i_1] = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [(signed char)1]);
                    arr_44 [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_11] [i_1] [i_11])) ? (((/* implicit */int) arr_28 [i_1] [(short)7] [i_1] [i_11])) : (((/* implicit */int) var_5))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_12 = 0; i_12 < 17; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (int i_14 = 2; i_14 < 15; i_14 += 3) 
            {
                {
                    arr_52 [i_13] [i_13] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_13 - 1] [i_13 - 1])) ? ((+(arr_46 [i_12]))) : (((/* implicit */long long int) ((unsigned int) 13ULL)))));
                    var_26 *= ((/* implicit */int) var_0);
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned long long int i_16 = 1; i_16 < 15; i_16 += 4) 
                        {
                            {
                                arr_59 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) arr_57 [i_12] [i_13] [i_14 - 2] [i_12] [i_16] [i_14]);
                                arr_60 [i_16] [i_15] [i_14] [i_13] [i_12] = ((/* implicit */short) ((((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) || (((/* implicit */_Bool) arr_58 [i_13] [i_13 - 1] [i_14] [i_14 + 2] [i_16 + 2]))));
                                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65508)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) ((long long int) var_2));
    }
    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 3) 
    {
        arr_64 [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) & (4294967290U)))) == (((long long int) arr_63 [i_17]))))) > (-16777215)));
        arr_65 [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) (-(18446744073709551605ULL)))) && (((/* implicit */_Bool) (~(var_7))))));
        var_29 = (-(((((/* implicit */_Bool) (signed char)127)) ? (33554431ULL) : (((/* implicit */unsigned long long int) 4294967295U)))));
    }
    var_30 = ((/* implicit */_Bool) ((unsigned short) var_2));
}
