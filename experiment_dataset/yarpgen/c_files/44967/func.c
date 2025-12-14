/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44967
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18116001189724641431ULL)) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (min((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_0 [i_0] [i_1]))))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) var_4))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                    {
                        var_10 *= ((/* implicit */unsigned int) (+(arr_4 [i_0 + 2] [i_1 + 2] [i_2])));
                        arr_13 [i_0] [i_1] [3LL] = ((/* implicit */unsigned long long int) arr_10 [i_0 + 3] [6ULL] [9]);
                        arr_14 [i_0] [6LL] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (short)18468));
                    }
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_11 = ((/* implicit */unsigned char) 9223372036854775789LL);
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? ((+(((/* implicit */int) arr_6 [i_0 + 2] [i_1 + 1] [i_1 - 1])))) : (((/* implicit */int) arr_6 [i_0 - 1] [i_1 + 2] [i_1 + 1]))));
                            var_13 = ((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0] [i_0]);
                            arr_20 [i_0] [i_1] [i_1] [i_4] [i_0] [i_5] [i_5] = -9223372036854775807LL;
                        }
                        arr_21 [i_0 - 1] [i_1] [i_1 - 1] [i_2] [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_16 [(_Bool)1] [i_0 + 3] [i_2 + 2])) ? (((/* implicit */int) arr_16 [i_0] [i_0 + 2] [i_2 - 2])) : (((/* implicit */int) arr_1 [i_0] [i_0 + 3]))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_1))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 2; i_7 < 11; i_7 += 2) 
                        {
                            var_15 *= ((/* implicit */unsigned char) min((0ULL), (((/* implicit */unsigned long long int) 9223372036854775789LL))));
                            arr_28 [i_0 - 2] [i_0 - 2] [i_2] [i_6] [(short)5] = 2147483647;
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_18 [i_6] [i_1 + 1] [i_1 + 1] [i_6] [i_7] [i_1 + 1]))));
                        }
                        arr_29 [(unsigned char)9] [i_1 - 1] [i_2 + 1] [i_6] [i_1] [i_2] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                    }
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        arr_33 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_7)), (var_4))))) : (((((/* implicit */_Bool) arr_26 [i_8] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [3LL] [i_0]))) : (-9223372036854775805LL)))))) ? (max((((/* implicit */long long int) arr_30 [i_8] [i_2] [i_1] [i_8])), ((((-9223372036854775807LL - 1LL)) / (var_0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) arr_16 [i_8] [i_2 - 1] [i_1])) : (((/* implicit */int) ((-9223372036854775787LL) <= ((-9223372036854775807LL - 1LL))))))))));
                        arr_34 [i_0 - 1] [i_0 + 3] [i_8] [8ULL] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((arr_17 [i_8] [i_1 + 2] [i_2 - 2]), (arr_17 [i_1 + 2] [4U] [i_2])))), (max((var_8), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1 + 1] [i_2]))))));
                    }
                    arr_35 [i_0] [2ULL] [i_0] = ((/* implicit */unsigned short) min((arr_9 [(short)4] [i_1 - 1] [i_1 - 1] [i_0] [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_30 [i_0] [0LL] [i_1 - 1] [i_2])), (arr_15 [i_1] [i_1 + 1] [i_2])))))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        arr_38 [i_9] [i_9] = ((/* implicit */unsigned short) arr_36 [i_9]);
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-124)) >= (((/* implicit */int) var_2)))))));
    }
    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
    {
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [(_Bool)1] [6ULL] [i_10] [i_10] [6ULL] [(unsigned short)2] [i_10])) - (((/* implicit */int) arr_17 [i_10] [i_10] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_10] [i_10]))) <= (9223372036854775789LL))))) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((-9223372036854775790LL) >= (2247401767174144LL)))) >= (((/* implicit */int) max((((/* implicit */short) arr_32 [i_10] [i_10] [i_10] [6LL] [6] [i_10])), (arr_12 [i_10] [i_10] [i_10] [i_10])))))))) : (arr_39 [(signed char)5] [(signed char)5])));
        /* LoopNest 3 */
        for (short i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                for (unsigned char i_13 = 2; i_13 < 8; i_13 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 1; i_14 < 10; i_14 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_48 [i_14 + 1] [i_14 - 1] [i_13] [(signed char)10] [i_13 + 3])) <= (((/* implicit */int) var_3))))))))));
                            arr_52 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1738295660731940579ULL)) ? (((/* implicit */int) arr_44 [6ULL] [i_11])) : (((/* implicit */int) var_5))))) / (9223372036854775789LL))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 775991927U)) ? (max(((-2147483647 - 1)), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_40 [i_13])))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_14 - 1])) % (((/* implicit */int) arr_40 [(short)0]))))) >= (arr_39 [i_10] [i_10]))))));
                            arr_53 [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_6 [i_10] [i_13 - 1] [i_12]);
                        }
                        arr_54 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) max((-9223372036854775790LL), (((((((/* implicit */_Bool) arr_51 [i_10] [i_11] [i_11] [i_12] [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0))) | (((/* implicit */long long int) (+(((/* implicit */int) arr_50 [i_11] [i_11] [i_11] [i_11] [i_11])))))))));
                        var_21 = ((/* implicit */unsigned short) -9223372036854775807LL);
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_0)))))))));
                            var_23 = ((/* implicit */signed char) arr_18 [i_13 + 3] [i_13] [i_13] [i_13 - 1] [i_13 - 1] [i_13 + 3]);
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (((-(max((var_6), (((/* implicit */unsigned int) var_1)))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_13 + 1] [i_10]))) * (var_6))))))));
                        }
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) 110313250))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) var_2))))) ? (16752749002807445092ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (short)-22094))));
        /* LoopNest 2 */
        for (unsigned char i_16 = 4; i_16 < 8; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 3; i_17 < 10; i_17 += 4) 
            {
                {
                    arr_63 [i_10] [i_10] [i_16] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_25 [3LL] [i_16 - 4] [i_16] [i_16 - 4] [i_10] [i_10] [i_10]), (((/* implicit */short) arr_9 [i_10] [i_16] [i_16] [i_17 - 2] [i_17])))))))) ? (arr_4 [(unsigned char)12] [i_16] [i_16]) : (((/* implicit */unsigned long long int) var_0))));
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((arr_57 [i_16]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_17] [i_16] [i_17 - 3] [i_17] [(unsigned short)3] [i_17] [i_16 - 4]))))))));
                    /* LoopNest 2 */
                    for (long long int i_18 = 1; i_18 < 9; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
                        {
                            {
                                arr_68 [i_18] [i_16] [i_17] [i_18] [i_19] = ((/* implicit */short) arr_2 [i_17]);
                                arr_69 [i_19] [i_16] [2] [i_18] [i_16] = ((/* implicit */short) ((27ULL) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2046)) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) arr_62 [(short)1] [(short)1] [i_17]))))), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_10] [i_10] [i_19] [i_10] [i_17 - 3] [i_16] [i_10]))) : (arr_8 [i_10] [i_16 + 3] [i_10] [i_18]))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) max((max((((/* implicit */int) max((((/* implicit */short) arr_17 [i_10] [i_10] [(_Bool)1])), (arr_42 [i_10])))), (((995446508) - (((/* implicit */int) (signed char)109)))))), (((/* implicit */int) arr_6 [i_16 - 3] [i_16] [i_16 + 3]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_21 = 0; i_21 < 16; i_21 += 1) 
        {
            for (int i_22 = 0; i_22 < 16; i_22 += 3) 
            {
                for (short i_23 = 1; i_23 < 13; i_23 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_24 = 1; i_24 < 15; i_24 += 3) 
                        {
                            arr_85 [i_23] [i_21] [i_21] [i_22] [i_23 - 1] [i_23 + 2] [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_83 [i_23] [(short)15] [i_23 + 2] [i_20] [i_20] [i_23]), (((/* implicit */unsigned int) (signed char)55))))) ? (((/* implicit */unsigned long long int) ((unsigned int) 16087590107574695798ULL))) : (var_8)));
                            arr_86 [i_20] [i_23] [i_22] [i_23] [i_24] = ((/* implicit */short) arr_70 [i_23 + 2]);
                            arr_87 [i_20] [(unsigned short)13] [i_20] [i_21] [i_22] [i_23 - 1] [i_23] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (576460752303423487ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_24 + 1]))) : (9223372036854775789LL)))));
                            arr_88 [i_20] [8ULL] [i_23] [(signed char)15] [i_23] [i_24] = ((/* implicit */long long int) ((((max((3810431797980110583ULL), (((/* implicit */unsigned long long int) (short)28672)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_73 [i_22] [i_21] [i_20]), (var_9))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29206)))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_83 [i_23] [4ULL] [i_22] [i_23] [i_24] [(short)10])) ? (((/* implicit */int) ((short) arr_81 [i_20] [i_21] [i_22] [i_23] [i_24]))) : (((((/* implicit */_Bool) arr_72 [i_20])) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) var_9)))))))))));
                        }
                        for (short i_25 = 1; i_25 < 13; i_25 += 3) 
                        {
                            arr_93 [i_23] = ((/* implicit */unsigned int) var_9);
                            var_30 = (signed char)81;
                            var_31 = ((/* implicit */_Bool) max((var_31), (((((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) arr_72 [i_23])), (var_8))))) <= (((((/* implicit */_Bool) 4906523261131895671LL)) ? (0ULL) : (((/* implicit */unsigned long long int) 0U))))))));
                        }
                        arr_94 [i_23] [i_23 + 2] [i_22] [i_22] [i_21] [i_23] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_82 [i_20] [i_21] [i_23 + 2] [12LL])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_26 = 0; i_26 < 16; i_26 += 4) /* same iter space */
                        {
                            arr_98 [(signed char)1] [i_23] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)81)) ? (arr_36 [i_20]) : (((/* implicit */int) (_Bool)1))))));
                            var_32 *= ((/* implicit */short) ((((((/* implicit */_Bool) -1500691725092948306LL)) ? (arr_74 [i_22]) : (((/* implicit */int) var_7)))) / (((/* implicit */int) arr_37 [i_26] [i_26]))));
                        }
                        for (int i_27 = 0; i_27 < 16; i_27 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_20] [i_20])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_89 [i_23]))))) : ((((_Bool)1) ? (((/* implicit */int) var_7)) : (arr_97 [i_21])))))) ? (((((/* implicit */_Bool) arr_79 [i_23 + 3] [i_23 - 1] [i_23] [i_23 + 3] [i_23])) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_20]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20143))))))))));
                            arr_103 [i_23] = ((/* implicit */unsigned int) arr_73 [i_23 + 1] [i_23 + 1] [i_22]);
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) >= (var_8))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_70 [(signed char)13])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-82))))))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)58241))))), (arr_102 [i_22] [i_27] [i_22] [i_23] [i_23 + 2]))))))));
                        }
                    }
                } 
            } 
        } 
        arr_104 [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_79 [(signed char)6] [i_20] [4] [i_20] [(signed char)6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_79 [i_20] [i_20] [i_20] [i_20] [4LL])))), (arr_101 [i_20] [i_20] [i_20] [i_20] [i_20])))) ? (min((arr_90 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]), (((/* implicit */unsigned int) (signed char)48)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) max((var_4), (((/* implicit */short) (unsigned char)74))))) : (((/* implicit */int) arr_79 [i_20] [0LL] [12LL] [i_20] [10LL])))))));
    }
}
