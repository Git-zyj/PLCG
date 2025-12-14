/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23254
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
    var_17 = var_9;
    var_18 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        arr_2 [i_0] [(unsigned short)4] = ((/* implicit */int) (!((!((_Bool)1)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_8))) ? (((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (unsigned char)81))))) : (((((/* implicit */long long int) ((arr_1 [i_0] [i_0]) / (((/* implicit */int) (unsigned char)177))))) / (max(((-9223372036854775807LL - 1LL)), (8240856000389588114LL)))))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_9 [i_2] [(unsigned short)4] = ((/* implicit */unsigned short) (((((_Bool)1) || (((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) max((arr_4 [i_2]), (arr_4 [i_1]))))));
            arr_10 [i_1] [i_1] = (-(((/* implicit */int) arr_8 [i_1] [i_2] [i_2])));
        }
        for (unsigned char i_3 = 2; i_3 < 7; i_3 += 1) 
        {
            /* LoopSeq 4 */
            for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) max(((unsigned char)159), ((unsigned char)183)))) ? (((((/* implicit */int) arr_12 [i_4] [i_3] [i_1])) & (((/* implicit */int) arr_7 [i_1] [i_4])))) : (((/* implicit */int) (unsigned char)254)))) < (((arr_11 [5LL] [i_3 + 2]) & (((/* implicit */int) var_13))))));
                arr_15 [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) ((_Bool) (unsigned char)197));
                arr_16 [i_3] [i_3] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_12 [i_3 + 1] [i_3 + 3] [i_3 - 2]), (max(((unsigned short)4746), (((/* implicit */unsigned short) (short)2244))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (var_12)))) ? (var_7) : (arr_1 [i_4] [i_3]))) : (((/* implicit */int) arr_5 [i_1] [i_4]))));
            }
            for (int i_5 = 3; i_5 < 6; i_5 += 2) 
            {
                var_21 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)-25374)), ((-9223372036854775807LL - 1LL))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_21 [i_1] [i_6] [(signed char)6] [i_1] [i_6] = ((/* implicit */int) max((((((/* implicit */_Bool) 17883997282803959779ULL)) ? (arr_13 [i_3 - 1] [i_3 + 1] [i_5 + 3]) : (((/* implicit */unsigned long long int) 693041605U)))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_13 [i_1] [i_3] [i_5])) ? (((/* implicit */int) arr_5 [i_1] [i_6])) : (((/* implicit */int) var_9)))), (((((/* implicit */int) (signed char)-111)) - (arr_1 [i_6] [i_3]))))))));
                    var_22 = ((/* implicit */unsigned long long int) arr_12 [i_1] [(_Bool)1] [(_Bool)1]);
                    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((int) var_14))) < ((~(arr_0 [i_1]))))) ? (((((((/* implicit */int) var_11)) ^ (((/* implicit */int) (unsigned char)177)))) - (((/* implicit */int) max((((/* implicit */short) var_16)), (var_15)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_13 [i_1] [i_5 + 1] [i_1])))))))));
                    arr_22 [i_6] [i_3] [(signed char)5] [i_5] [i_5] [7LL] = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_5 + 4]))) % (-1932336304445207505LL)))));
                }
            }
            for (int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                arr_26 [(unsigned short)0] [i_3] [i_7] = ((/* implicit */_Bool) ((var_11) ? (((min((var_4), (((/* implicit */unsigned long long int) (short)32767)))) * (((/* implicit */unsigned long long int) arr_20 [i_1] [i_1] [i_7] [i_3] [(unsigned char)0] [i_7])))) : (((((/* implicit */_Bool) ((arr_20 [i_7] [i_7] [i_7] [i_7] [i_1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1])))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (3012851060400889813ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                arr_27 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3926817822U))));
            }
            for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        {
                            var_24 -= ((/* implicit */short) var_12);
                            var_25 = arr_11 [i_8] [i_8];
                            arr_39 [i_1] [i_8] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_19 [i_1] [i_8])), (arr_25 [i_1] [(unsigned short)3] [i_1])))), (var_4)))) ? ((((-(((/* implicit */int) var_11)))) / (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_19 [i_10] [i_10]))));
                            arr_40 [i_1] [0ULL] [i_1] [i_10] [i_1] [i_1] |= max((max((((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_10] [i_10] [i_1] [i_10])) ? (((/* implicit */long long int) var_7)) : (8322295760464342392LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)78)) / (-2147483630)))))), (((/* implicit */long long int) (unsigned char)147)));
                        }
                    } 
                } 
                arr_41 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max(((~(max((((/* implicit */unsigned int) arr_33 [i_1] [i_3] [i_8] [i_3] [i_1] [(_Bool)1])), (var_8))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_35 [i_8] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_16))))) : (((/* implicit */int) (_Bool)1)))))));
                arr_42 [4LL] [i_8] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned int) (+(-1164860218)))) : (((unsigned int) arr_33 [i_1] [i_3] [i_3] [i_3] [i_8] [i_8]))))) < (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))), (min((arr_31 [i_1] [i_3] [i_3]), (var_4)))))));
            }
            arr_43 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)141);
        }
        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_12 = 2; i_12 < 7; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    arr_54 [i_13] [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(-2105324827)));
                    var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_1] [i_12] [i_13])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_52 [i_1] [i_11])))) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [i_11] [i_12])) != (((/* implicit */int) min(((_Bool)0), ((_Bool)0))))))) : (((((((/* implicit */int) (unsigned char)81)) * (((/* implicit */int) (short)13691)))) ^ (((/* implicit */int) (unsigned char)124))))));
                }
                arr_55 [i_1] = ((/* implicit */long long int) var_11);
                arr_56 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_12 - 1] [i_12 - 1] [i_12 + 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_46 [i_12 + 1] [i_12] [i_12 - 2]))))) ? (((((/* implicit */_Bool) arr_46 [i_12 - 2] [i_12] [i_12 + 3])) ? (-5556769691299991232LL) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_12 + 3] [i_12] [i_12 - 2]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_46 [i_12 + 1] [i_12] [i_12 - 1])) / (((/* implicit */int) arr_46 [i_12 + 1] [i_12 - 1] [i_12 - 1])))))));
                arr_57 [i_12] [i_11] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_49 [i_12 - 1] [i_12 + 2] [i_12 + 3]))))) ? (((arr_29 [i_12 + 1] [i_12 + 3] [i_12 + 2] [i_12 + 3]) / (arr_29 [i_12 + 3] [i_12 - 1] [i_12 + 1] [i_12 - 1]))) : (((/* implicit */int) arr_8 [i_12 - 2] [i_12 - 1] [i_12 - 1]))));
            }
            for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
            {
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (-(((/* implicit */int) (signed char)123)))))));
                arr_61 [i_1] = ((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1]);
            }
            /* LoopSeq 2 */
            for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
            {
                arr_64 [i_1] [i_1] [i_1] [6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (4285181760U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2435))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_1] [i_11] [i_11] [i_15])))))));
                arr_65 [i_1] [i_1] = max(((((+(arr_29 [i_1] [i_11] [i_1] [i_1]))) ^ (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))), (((/* implicit */int) var_1)));
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    for (short i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        {
                            arr_72 [i_17] [i_17] [i_1] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) max((((/* implicit */long long int) max(((-(((/* implicit */int) arr_59 [i_11] [i_11] [i_11])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_1] [i_11] [i_15] [i_16])))))))), (((6084769501953313527LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28616)))))));
                            arr_73 [i_17] [i_16] [i_15] [(_Bool)1] [(_Bool)1] = ((((arr_8 [i_11] [i_11] [i_11]) ? (arr_25 [i_1] [i_11] [i_16]) : (arr_25 [i_17] [i_16] [i_15]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_23 [i_1] [i_1] [i_15]), (((/* implicit */int) (unsigned char)81))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_18 = 0; i_18 < 10; i_18 += 4) /* same iter space */
            {
                arr_76 [i_18] [i_11] [i_1] [i_1] |= ((/* implicit */unsigned long long int) 8240856000389588114LL);
                arr_77 [(unsigned char)0] [i_11] [i_11] = ((/* implicit */_Bool) (-((~(max((((/* implicit */int) (short)25528)), (-735521163)))))));
                arr_78 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (short)560)) << (((18180954184283848904ULL) - (18180954184283848901ULL)))));
            }
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) <= (var_8)))), (((((/* implicit */_Bool) arr_35 [8] [8] [8] [8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_46 [i_1] [i_11] [i_1]))))))) ^ ((~(((arr_68 [i_1] [i_11] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_13))))))))))));
        }
        /* LoopSeq 4 */
        for (signed char i_19 = 4; i_19 < 7; i_19 += 1) 
        {
            arr_82 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)19719)) || (((/* implicit */_Bool) arr_30 [i_1] [i_19 + 1] [i_19 + 1] [i_19])))))))) ? (min((((/* implicit */int) (_Bool)1)), (150402943))) : ((-(arr_33 [i_19 + 3] [i_19] [i_19 + 3] [i_19] [(unsigned char)3] [i_19 - 3])))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_30 [i_19] [i_19] [(short)9] [i_19])) : (((/* implicit */int) arr_17 [i_1] [5] [8]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [i_1] [i_1] [i_1]), (arr_12 [i_1] [i_19 + 3] [i_19 + 3])))))));
            /* LoopNest 2 */
            for (long long int i_20 = 1; i_20 < 6; i_20 += 2) 
            {
                for (signed char i_21 = 2; i_21 < 7; i_21 += 2) 
                {
                    {
                        arr_88 [i_1] [i_19] [i_21] = ((/* implicit */_Bool) arr_13 [(_Bool)1] [i_21 - 1] [i_21 - 2]);
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_19 + 1] [i_21] [i_21])) ? (((/* implicit */int) (short)-18878)) : (((/* implicit */int) var_10))))) ? ((-(((/* implicit */int) arr_79 [i_19 + 1] [i_19 + 1] [i_20])))) : (max((arr_74 [i_19 + 1] [i_21 - 1] [i_21] [i_21 - 1]), (((/* implicit */int) arr_79 [i_19 + 1] [i_19 - 1] [i_19 - 1]))))));
                    }
                } 
            } 
        }
        for (int i_22 = 0; i_22 < 10; i_22 += 2) 
        {
            var_31 ^= ((/* implicit */short) min(((~(((/* implicit */int) max((((/* implicit */short) (unsigned char)111)), ((short)18087)))))), (min((((((/* implicit */int) var_3)) >> (((((/* implicit */int) (unsigned short)64289)) - (64280))))), (((/* implicit */int) (unsigned char)0))))));
            arr_91 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1])) ? (arr_31 [(unsigned char)1] [i_22] [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (max(((+(((/* implicit */int) (short)-13975)))), ((((_Bool)0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_53 [i_22] [i_22] [i_22] [i_1])))))) : (((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)5753)))) / (((/* implicit */int) min(((short)-18077), (((/* implicit */short) arr_8 [i_1] [i_1] [i_1])))))))));
            arr_92 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_2)), (min((-2856150415006476933LL), (((/* implicit */long long int) 1919302200U))))));
        }
        for (short i_23 = 0; i_23 < 10; i_23 += 2) 
        {
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) arr_18 [i_1]))));
            var_33 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_1] [(short)6])) ? (min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-88)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((((/* implicit */int) arr_38 [i_1] [i_1] [i_23] [(_Bool)1] [i_23] [i_23] [i_23])) ^ (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_36 [i_1] [i_23] [i_1]))))));
        }
        for (unsigned char i_24 = 0; i_24 < 10; i_24 += 2) 
        {
            arr_97 [i_1] [i_1] = ((/* implicit */int) (unsigned short)19719);
            arr_98 [i_1] [i_1] = ((/* implicit */unsigned char) min(((((~(((/* implicit */int) (unsigned char)0)))) ^ (((/* implicit */int) var_2)))), (((/* implicit */int) arr_8 [i_1] [i_24] [(unsigned char)3]))));
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((max((((arr_85 [i_1] [i_1]) ? (((/* implicit */unsigned long long int) arr_28 [i_1] [i_1] [i_24])) : (18180954184283848904ULL))), (arr_93 [i_1] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23424)))))));
            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) arr_89 [i_1]))));
            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_29 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) (unsigned char)12))))) ? (arr_1 [i_24] [i_24]) : (max((((/* implicit */int) arr_4 [i_24])), (-887588840)))))) ? (arr_20 [i_1] [i_1] [i_24] [i_24] [(unsigned char)6] [i_24]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_7 [i_24] [i_1])) : (((/* implicit */int) (short)1861))))) ? (((/* implicit */long long int) arr_11 [i_24] [i_24])) : (min((((/* implicit */long long int) var_3)), (arr_25 [(_Bool)1] [(unsigned short)9] [(_Bool)1])))))));
        }
    }
    for (int i_25 = 0; i_25 < 10; i_25 += 1) /* same iter space */
    {
        arr_101 [i_25] [i_25] = ((/* implicit */unsigned long long int) arr_11 [i_25] [(_Bool)0]);
        /* LoopNest 2 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            for (unsigned short i_27 = 0; i_27 < 10; i_27 += 4) 
            {
                {
                    arr_110 [i_25] = ((/* implicit */unsigned char) arr_12 [i_27] [i_26] [i_25]);
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) arr_23 [i_25] [(short)6] [i_25])), (((unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (((~(-2147483627))) < (((((/* implicit */int) (signed char)75)) & (-889119739)))))))))));
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned short) (+((-((~(((/* implicit */int) (unsigned char)27))))))));
    }
    var_39 = ((/* implicit */unsigned short) max(((((((~(((/* implicit */int) var_3)))) + (2147483647))) << ((((((~(((/* implicit */int) (short)26685)))) + (26706))) - (20))))), (((/* implicit */int) var_10))));
}
