/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232820
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) ((signed char) var_16))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((-(var_19)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((((_Bool) var_12)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 + 4] [i_0 + 4])) & (((/* implicit */int) arr_1 [i_0 + 3] [i_1]))))) : (((unsigned int) arr_1 [i_0 - 2] [i_0 - 2])));
                var_22 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_1 [i_1] [i_0])))) : (((/* implicit */int) ((short) 0U)))))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */int) min((var_23), (((((_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) var_18))))) : (((((/* implicit */_Bool) 262143U)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 2]))))))));
                    arr_7 [i_1] [i_1] [i_2] [i_2] = ((1234783808089194207LL) % (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)20), (((unsigned char) (unsigned char)220)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [i_4] [i_3] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((6191441766302298438LL), (((/* implicit */long long int) arr_4 [i_0]))))) ? (((/* implicit */int) arr_1 [i_2] [i_3])) : (((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_1 - 2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 4])) > (((/* implicit */int) var_2)))))) : (var_5)));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((unsigned long long int) min((((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (unsigned short)15509)))), ((-(((/* implicit */int) arr_1 [i_2] [i_2]))))))))));
                                var_25 = ((/* implicit */_Bool) ((unsigned long long int) max(((~(var_1))), (((((/* implicit */int) (unsigned char)20)) * (((/* implicit */int) arr_3 [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_16))));
                        arr_18 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_17 [i_0] [i_2] [i_2] [i_0 + 1] [i_0] [i_0])), (arr_12 [i_0] [i_1] [i_1] [i_1 + 1] [i_1 + 1]))) * (min((arr_12 [i_0] [i_1] [i_0] [i_1 + 1] [i_2]), (((/* implicit */unsigned long long int) arr_4 [i_0 + 1]))))));
                        arr_19 [i_0] [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)65522);
                        arr_20 [i_0] [i_1] [i_5] [i_5] [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_1 - 1] [i_2] [i_1]);
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-20)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_28 += ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_6])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_6])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))));
                }
                for (int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_0] &= arr_21 [i_0] [i_0 + 4] [i_0] [i_0 - 2];
                    var_29 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_11 [i_7] [i_0 + 3])) & (((/* implicit */int) (short)-12137))))));
                    arr_27 [i_1] [i_1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))) : (((/* implicit */int) ((unsigned short) (_Bool)0))))));
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 3) 
                    {
                        arr_33 [i_0] [i_1 + 1] [i_9] [i_8] &= ((/* implicit */signed char) var_13);
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) arr_29 [i_0 + 1])) : (-1456335206)));
                        arr_34 [i_0 + 4] [i_1] [i_0] |= ((/* implicit */signed char) arr_29 [i_9 + 1]);
                    }
                    for (short i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)189)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18)))))) ? (((((/* implicit */int) arr_0 [i_10])) << (((((/* implicit */int) (unsigned short)65535)) - (65529))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_8] [i_1] [i_0])) && (((/* implicit */_Bool) 3139877899U)))))))));
                        var_32 ^= ((/* implicit */unsigned int) (signed char)-98);
                    }
                    arr_38 [i_1] [i_1 - 3] [i_1] = ((/* implicit */unsigned char) ((short) var_11));
                }
            }
        } 
    } 
    var_33 += ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (((((var_18) + (9223372036854775807LL))) >> (((var_16) - (8745101517554059000LL)))))))) : (var_12)));
    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (min((((((/* implicit */long long int) var_1)) + (var_7))), (((/* implicit */long long int) ((unsigned char) (unsigned char)128))))) : (-5796877608311590977LL))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
    {
        var_35 -= (unsigned char)168;
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            for (short i_13 = 1; i_13 < 10; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        for (signed char i_15 = 2; i_15 < 10; i_15 += 3) 
                        {
                            {
                                arr_53 [i_11] [i_12] [i_13] [i_14] [i_11] |= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)2)) ? (-1456335206) : (((/* implicit */int) (unsigned short)58079)))), (((/* implicit */int) (short)0))))) || (((/* implicit */_Bool) (~(6191441766302298438LL))))));
                                arr_54 [i_11] [i_12] [i_12] [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_13] [i_13] [i_13] [i_13] [i_13 - 1])) / (max((((/* implicit */int) ((short) arr_35 [i_11] [i_15 - 2] [i_13] [5U]))), (((((/* implicit */int) (short)27451)) / (((/* implicit */int) var_0))))))));
                                var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)50013)))));
                                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) arr_10 [i_11] [i_15 - 1] [i_15 - 2] [i_15 - 1]))));
                                var_38 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_25 [i_11]), ((unsigned char)0)))) ? ((-(((/* implicit */int) arr_31 [i_11] [(unsigned short)2] [i_11] [i_11] [i_11] [i_11])))) : (((((/* implicit */int) max((((/* implicit */short) arr_35 [i_11] [i_14] [i_14] [i_14])), (arr_42 [i_11] [i_13] [10])))) / (var_1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 3; i_16 < 10; i_16 += 2) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_12] [i_12 + 1] [i_13] [i_16] [i_16] [i_13] [(short)10]))) : (var_7))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_12 [i_11] [i_11] [i_13] [i_16] [i_17])))) ? ((+(((/* implicit */int) arr_5 [i_11] [i_16] [i_17])))) : (((((/* implicit */_Bool) arr_43 [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_50 [i_12] [i_12] [i_12] [i_12] [i_13 + 1] [i_12] [i_12])) : (var_1))))))));
                                arr_60 [i_11] [i_12] [i_13] [i_11] [i_17] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6191441766302298459LL)) ? (((unsigned int) 17393929774706161567ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_11] [i_11] [i_11] [i_16 - 1] [i_11] [i_11])))))) == (min(((+(arr_39 [i_17]))), ((~(arr_52 [i_16] [i_16] [i_12])))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_12] [i_12] [i_12] [i_12]))) : (6320926542317967571ULL))), (((/* implicit */unsigned long long int) arr_25 [i_12]))))) ? (((((_Bool) arr_1 [i_11] [i_13 - 1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_11] [i_12] [(signed char)14])) >> (((18446744073709551615ULL) - (18446744073709551593ULL)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_47 [i_12] [i_12] [i_12] [i_11])) : (-27LL))))) : (((((/* implicit */_Bool) arr_21 [i_13] [i_11] [i_11] [i_11])) ? (min((0LL), (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) ((int) arr_40 [i_12])))))));
                    arr_61 [i_11] [i_12] [i_11] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_28 [i_11] [i_13 - 1] [i_12 + 1]))) ? (((/* implicit */int) arr_28 [i_11] [i_13 - 1] [i_12 + 1])) : (((/* implicit */int) ((short) arr_28 [i_11] [i_13 + 1] [i_12 + 1])))));
                }
            } 
        } 
    }
    for (unsigned char i_18 = 0; i_18 < 18; i_18 += 1) 
    {
        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_18)), (((arr_64 [i_18]) ? (arr_63 [i_18]) : (((/* implicit */unsigned long long int) var_16))))))) ? (((/* implicit */unsigned long long int) ((((1155089399U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_18]))))) << (((((long long int) var_17)) - (40LL)))))) : (arr_63 [i_18]))))));
        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_63 [i_18])))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_18]))) > (((unsigned long long int) 6191441766302298458LL)))))))));
        var_43 = ((/* implicit */long long int) min(((~(((/* implicit */int) min(((unsigned char)244), (((/* implicit */unsigned char) arr_64 [i_18]))))))), (((/* implicit */int) arr_64 [i_18]))));
    }
}
