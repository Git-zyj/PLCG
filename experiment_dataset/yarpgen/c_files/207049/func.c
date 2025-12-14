/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207049
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
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [(unsigned char)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (min((((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 - 1])) - (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 + 1]))))));
        var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)9203)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56333))) : (1150292612U)))), (((((/* implicit */_Bool) (unsigned char)255)) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) var_6))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0])), (min((0ULL), (((/* implicit */unsigned long long int) 0U)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((11373386404408998813ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3519)))))) << (((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) - (12814))))) <= (((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1]))))))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_12 = ((min((((/* implicit */unsigned long long int) (short)3530)), (min((arr_5 [i_1]), (((/* implicit */unsigned long long int) var_0)))))) & (max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))) == (var_7)))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((min((arr_4 [i_1]), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (signed char)-81)))))))) ? (max((((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_6 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (var_6))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-3507)))))));
            var_13 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((arr_4 [i_1]) >= (((((/* implicit */_Bool) arr_4 [(signed char)10])) ? (1969763883U) : (((/* implicit */unsigned int) arr_7 [(unsigned short)12] [(short)2] [(unsigned short)12])))))))));
            var_14 = ((/* implicit */unsigned short) max((var_14), (arr_8 [i_1])));
            arr_10 [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_8 [(unsigned short)2])), (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((2952339282U) - (2952339276U)))))) ? (arr_5 [i_1]) : (((arr_5 [i_1]) >> (((((/* implicit */int) arr_8 [i_2])) - (63587)))))))));
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) var_6);
        }
        arr_12 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max(((short)3519), ((short)3515)))), (((((/* implicit */_Bool) 3698190280U)) ? (((/* implicit */unsigned long long int) -1802876068)) : (var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (var_6))))))) : ((+(((arr_6 [i_1]) % (2046U)))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_3])) ? (var_4) : (arr_5 [i_3])));
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */unsigned long long int) 3118602977U)) : (arr_13 [11ULL]))))));
        /* LoopSeq 4 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            arr_18 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3])) ? (13268865100393525482ULL) : (((/* implicit */unsigned long long int) 3169263315U)))))));
            arr_19 [i_4] [i_3] [(unsigned short)0] &= ((/* implicit */short) ((0U) / (((/* implicit */unsigned int) ((((arr_7 [i_4] [i_3] [i_3]) + (2147483647))) >> (((arr_15 [i_4]) + (1768449334))))))));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                arr_23 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)231))))) ? (arr_5 [i_3]) : (((/* implicit */unsigned long long int) arr_16 [i_3] [i_4]))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 3; i_6 < 12; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        var_17 |= ((/* implicit */short) var_8);
                        arr_29 [i_7] [i_7] [i_6 + 2] [i_7 + 1] = ((((/* implicit */unsigned int) 869724026)) - (12U));
                        arr_30 [i_7 + 1] [i_7] [i_5] [i_7] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                    }
                    var_18 = (~(((/* implicit */int) (signed char)1)));
                    arr_31 [i_3] [7ULL] [i_5] = ((/* implicit */unsigned short) ((26ULL) - (((/* implicit */unsigned long long int) -1085975477))));
                }
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((arr_24 [i_3] [i_5] [(signed char)12] [i_5] [i_3] [i_3]) / (arr_16 [i_3] [i_4]))))));
                arr_32 [0] [i_4] [i_5] |= ((/* implicit */short) 7775857091229818018ULL);
            }
            var_20 = ((/* implicit */unsigned char) ((arr_28 [i_4] [(unsigned char)13] [i_4] [i_4] [i_4] [i_3]) >= (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3] [i_3] [i_3])))))));
        }
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3])) && (((/* implicit */_Bool) arr_6 [i_3])))))));
            arr_35 [i_3] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 3956625038494919196ULL))) & (((/* implicit */int) arr_27 [4ULL] [i_8] [i_3] [i_8] [i_3]))));
        }
        for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 4) 
        {
            arr_38 [i_3] [i_9] = ((/* implicit */signed char) (+(((long long int) (short)3547))));
            arr_39 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_3] [i_9 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32752))) : (arr_25 [i_3] [i_3] [1U] [i_9 - 1])));
            arr_40 [8] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-849)) % (((/* implicit */int) arr_20 [i_9 - 1] [i_3]))))) ? (((/* implicit */unsigned long long int) arr_4 [i_3])) : (((((/* implicit */_Bool) var_7)) ? (arr_26 [i_3] [i_9] [i_3] [i_3] [i_3]) : (8148087093890577949ULL)))));
            var_22 = ((/* implicit */unsigned int) arr_16 [i_3] [i_3]);
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    {
                        var_23 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_46 [i_9 + 1] [i_9 + 1] [i_10] [i_9 + 1] [i_9 + 1])) % ((+(((/* implicit */int) (short)32767))))));
                        var_24 ^= ((/* implicit */unsigned char) ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [i_9] [(signed char)8] [i_3] [i_9 + 1])))));
                        var_25 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_2)) ? (arr_25 [i_3] [i_3] [i_3] [i_11]) : (((/* implicit */long long int) 100663296))))));
                        arr_47 [i_3] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_28 [i_9] [i_9 + 1] [i_10] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_3] [i_3] [1U] [i_3])) ? (((/* implicit */int) arr_33 [i_3] [i_3] [i_10])) : (((/* implicit */int) (unsigned short)57901)))))));
                    }
                } 
            } 
        }
        for (unsigned int i_12 = 4; i_12 < 12; i_12 += 3) 
        {
            var_26 ^= ((/* implicit */short) arr_25 [i_3] [(short)7] [i_12 + 1] [(unsigned short)3]);
            /* LoopSeq 2 */
            for (short i_13 = 3; i_13 < 13; i_13 += 3) 
            {
                arr_52 [i_3] [i_13 - 1] [i_3] |= ((/* implicit */unsigned long long int) arr_14 [i_12 - 3]);
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) != (7073357669300552821ULL))))));
                arr_53 [i_12] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (arr_7 [i_3] [i_3] [i_13])))) ? ((-(1777329627U))) : (((((/* implicit */_Bool) var_1)) ? (793109661U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))));
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    /* LoopSeq 4 */
                    for (int i_15 = 1; i_15 < 12; i_15 += 1) 
                    {
                        arr_58 [i_3] [i_12] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [3LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_6 [i_15])));
                        arr_59 [i_12] [i_12] [i_12 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_3])) ? (((((/* implicit */_Bool) var_9)) ? (arr_17 [i_15]) : (3643700920U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))))));
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_42 [i_3] [i_12] [i_12 - 1]))) ? (arr_26 [12U] [i_14] [i_15] [i_15 + 1] [i_15 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_13 - 3] [i_12 - 4] [i_13 + 1])))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) 9147707137636631644ULL);
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24443)) ? (((((/* implicit */_Bool) 9223372036854775803LL)) ? (4311082797706765823ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1389))))) : (((/* implicit */unsigned long long int) ((var_9) + (((/* implicit */long long int) ((/* implicit */int) (short)-25532))))))));
                        var_31 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) 7775857091229818018ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_12 - 4] [i_14] [i_16])))))));
                        var_32 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [i_3] [i_12 + 1] [i_12 + 1] [i_14] [i_16])) ? (((/* implicit */int) ((651266375U) > (((/* implicit */unsigned int) 1459660339))))) : (((/* implicit */int) arr_21 [i_12] [i_12 + 2] [i_13 - 3]))));
                        arr_64 [i_3] [i_12] [i_12] [i_3] [(unsigned short)11] = ((/* implicit */int) ((((/* implicit */int) var_3)) < (((((/* implicit */_Bool) arr_51 [i_14] [i_12])) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (short)(-32767 - 1)))))));
                    }
                    for (long long int i_17 = 1; i_17 < 13; i_17 += 2) 
                    {
                        var_33 = ((/* implicit */signed char) var_0);
                        arr_69 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) arr_48 [i_3] [i_12])) : (((/* implicit */int) arr_60 [i_3] [i_13 + 1] [i_12 + 2] [i_12] [i_14] [i_12 - 4] [i_17 - 1]))));
                    }
                    for (long long int i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        var_34 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_63 [i_3] [i_3] [10LL] [i_12 - 4] [i_12] [i_3] [i_14])) ? (((/* implicit */int) ((((/* implicit */int) arr_63 [(unsigned short)10] [i_14] [i_13] [i_3] [8] [i_14] [i_3])) < (((/* implicit */int) arr_20 [i_3] [i_3]))))) : (arr_24 [i_3] [i_18] [i_13] [i_13 - 2] [i_3] [i_12 - 2])));
                        arr_72 [i_12] = ((/* implicit */unsigned int) 12742376334987995798ULL);
                        arr_73 [i_3] [i_3] [i_14] &= ((((((/* implicit */int) arr_21 [i_13 + 1] [i_18] [i_13 + 1])) + (2147483647))) << (((((/* implicit */int) arr_27 [i_3] [i_3] [i_3] [i_18] [i_13 - 3])) - (11509))));
                        arr_74 [i_3] [i_3] [i_12] = ((/* implicit */unsigned short) (((+(arr_42 [i_3] [i_3] [i_3]))) != (((/* implicit */int) arr_55 [i_12] [i_18]))));
                    }
                    arr_75 [i_14] [i_13] [i_12] [i_12] [i_12] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [9U] [9U] [i_13 - 3])) ? (((/* implicit */int) (short)-14964)) : (((/* implicit */int) arr_61 [i_3] [i_3] [i_13 + 1] [i_13 + 1] [i_12 - 4]))));
                    arr_76 [i_12] [i_12] [i_13 - 2] [i_12] = ((/* implicit */short) ((((((/* implicit */int) (short)-3534)) + (2147483647))) << (((((((/* implicit */int) arr_67 [(short)7] [i_12 - 3] [(short)7] [i_12] [i_12])) + (10558))) - (2)))));
                    arr_77 [i_14] [(short)2] [i_3] [i_3] [i_14] |= ((/* implicit */int) arr_27 [i_3] [i_3] [8ULL] [i_3] [i_13]);
                }
            }
            for (int i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((int) 749630136)))));
                arr_80 [i_12] = ((/* implicit */int) -5724553342446416229LL);
                arr_81 [i_12] [(unsigned short)6] [i_19] [i_19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
            }
            arr_82 [i_3] [i_12] [i_12 - 3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
        }
        arr_83 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
    }
    var_36 = (signed char)127;
}
