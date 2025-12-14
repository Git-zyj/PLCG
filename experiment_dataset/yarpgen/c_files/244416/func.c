/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244416
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
    var_10 = ((/* implicit */unsigned short) (~(((4016811977U) | (((/* implicit */unsigned int) 2032))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) max((1198895179), (((/* implicit */int) (signed char)7))));
                            var_12 = ((/* implicit */unsigned long long int) var_8);
                            var_13 = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) >= (3321745525U))));
                            var_14 = ((/* implicit */unsigned long long int) var_0);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_5 = 2; i_5 < 7; i_5 += 1) 
            {
                var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (unsigned char)14))));
                arr_14 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) 14307153593390901013ULL);
            }
            arr_15 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (unsigned short)4096))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_1] [i_1] [i_0])))) : (arr_0 [i_1] [i_0])))) < (var_1)));
            arr_16 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-20)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (signed char)-6)))) >> (((((((/* implicit */_Bool) (signed char)36)) ? (2040151854) : (((/* implicit */int) (unsigned char)62)))) - (2040151829))))))));
            arr_17 [i_0] [i_0] [i_0] = arr_11 [i_0] [i_1] [i_0];
        }
        for (unsigned char i_6 = 1; i_6 < 7; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                var_16 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 4250018205288854260LL))));
                arr_24 [i_0] [i_6] [i_6] [i_7 + 2] = ((/* implicit */signed char) (-(max((arr_18 [i_6 + 3]), (((/* implicit */int) (signed char)3))))));
                var_17 = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [i_6])))) >> (((min((1500336903), (((/* implicit */int) (unsigned short)3185)))) - (3168))))));
                arr_25 [i_0] [i_6 + 3] [i_6] = ((/* implicit */unsigned int) (unsigned char)13);
            }
            for (unsigned short i_8 = 2; i_8 < 8; i_8 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    arr_31 [i_9] [i_0] [i_6] [i_6] [i_0] = ((/* implicit */long long int) arr_27 [i_9] [i_8] [i_6 - 1] [i_0]);
                    var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned char)253), (((/* implicit */unsigned char) (signed char)63))))) ? (8ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_6]))));
                    var_19 ^= ((/* implicit */int) arr_3 [i_6] [i_8 + 1] [i_9]);
                }
                for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_23 [i_6 + 2])) ? (((/* implicit */int) max((((/* implicit */short) var_3)), ((short)-1885)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)243)) > (((/* implicit */int) (unsigned char)60)))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        arr_38 [6ULL] [i_10] [i_6] [i_6] [3ULL] = ((/* implicit */int) (_Bool)0);
                        var_21 ^= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_5 [i_6] [i_6 + 1] [i_8 - 1]))) + (((((/* implicit */int) ((signed char) (unsigned short)0))) >> (((((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [i_10] [i_6] [(unsigned short)2])) + (24759)))))));
                        var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) max((var_4), (((/* implicit */int) (unsigned char)69))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-69)))) : (((((/* implicit */long long int) arr_23 [i_6])) ^ (5388521600951281566LL))))), (((/* implicit */long long int) arr_13 [i_6 - 1] [i_6 + 1] [i_8 + 2] [i_8 + 2]))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        arr_41 [i_0] [i_6] [i_10] = ((/* implicit */unsigned char) (~(arr_39 [i_12] [i_10] [i_0])));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_0] [i_6])) : (-699388143)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (_Bool)1)) + ((-2147483647 - 1))))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [i_6 - 1] [i_10]))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (3771277347786028107LL))) : (min((var_1), (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)10)) ^ (((/* implicit */int) ((unsigned char) arr_32 [i_6]))))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) min((280667000U), (4014300295U)));
                        arr_46 [i_0] [i_6] [i_6] [i_10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_6] [1ULL] [i_6 + 3] [i_6 + 2] [(unsigned short)10])) ? (arr_34 [i_6] [1LL] [i_6] [i_6 + 4] [i_6]) : (((/* implicit */int) (unsigned char)140))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6]))) >= (18446744073709551598ULL)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) > (13ULL))))));
                        var_25 = ((/* implicit */int) (!((_Bool)1)));
                        var_26 = max((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned short)52463))))))), (arr_1 [i_10] [i_13]));
                    }
                    for (int i_14 = 1; i_14 < 9; i_14 += 2) 
                    {
                        arr_49 [i_6] [i_14 - 1] = ((/* implicit */signed char) max((14879742111864366778ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                        arr_50 [i_0] [i_6] [i_10] [i_10] [i_6] [i_10] = ((/* implicit */signed char) ((unsigned char) (unsigned char)250));
                    }
                    var_27 ^= ((((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-5))))), (((signed char) arr_6 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 705651070)) % (2U)));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 4; i_15 < 10; i_15 += 3) 
                {
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        {
                            arr_55 [i_6] [i_15] [i_15 - 3] [(signed char)2] [i_6] [i_6] = ((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-16))));
                            arr_56 [i_0] [i_6 + 1] [i_6] [i_15] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)3)), (9223372036854775793LL)))) ? (var_7) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-87)))))));
                            arr_57 [i_6] [i_6 + 2] [i_6 - 1] [i_6] [i_6 + 1] = ((/* implicit */unsigned int) (unsigned char)0);
                            var_29 = ((/* implicit */signed char) (!((_Bool)1)));
                        }
                    } 
                } 
                var_30 = ((/* implicit */long long int) min(((~(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_6] [i_8 + 3] [i_6] [i_0] [i_6])) && (((/* implicit */_Bool) arr_9 [i_0] [i_6]))))))), ((+(((/* implicit */int) (unsigned short)62813))))));
            }
            var_31 = ((((/* implicit */_Bool) ((unsigned int) arr_48 [(unsigned short)6] [i_6 + 3] [i_6 - 1] [i_6 + 1] [(unsigned short)6]))) ? (var_4) : (((((/* implicit */_Bool) (unsigned short)2697)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-37)))));
            /* LoopSeq 4 */
            for (unsigned short i_17 = 0; i_17 < 11; i_17 += 3) 
            {
                var_32 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)251))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [5U] [i_6] [i_6] [i_17] [i_17] [i_17])) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)5] [i_0] [i_6] [i_17])))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) 130944U)) && (((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) (unsigned short)34527))))))))));
                arr_60 [7U] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_48 [i_17] [i_6 - 1] [i_0] [i_6 + 4] [i_6]) + (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_0] [i_6 + 2] [i_6 + 2] [i_6 + 4] [i_6 + 1] [i_17] [(signed char)6])))))), ((~(13851214052086016723ULL)))));
                /* LoopSeq 1 */
                for (int i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    var_33 = ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_18] [i_18])) ? (((/* implicit */int) arr_54 [i_6] [i_18] [i_6] [i_6] [i_6] [i_6] [i_0])) : (((/* implicit */int) arr_30 [i_6] [i_6 + 4] [i_17])))) < (((/* implicit */int) ((unsigned char) arr_47 [(short)5] [i_6] [(short)5] [i_18] [i_0] [i_18])))))));
                    arr_64 [i_6] = ((/* implicit */unsigned char) arr_43 [i_0] [i_6] [i_6] [i_18] [5]);
                }
                var_34 = (((~(((/* implicit */int) arr_53 [1U] [i_6] [1U] [i_0] [i_6] [i_6 + 3] [8])))) | (((((/* implicit */int) arr_53 [i_0] [i_6] [i_17] [i_6] [i_6 - 1] [i_6 - 1] [i_6])) ^ (((/* implicit */int) arr_53 [(unsigned char)5] [i_17] [i_17] [i_6 - 1] [i_17] [i_6 + 2] [i_6])))));
            }
            for (unsigned char i_19 = 1; i_19 < 8; i_19 += 4) 
            {
                arr_67 [i_0] [i_19 + 3] [i_19 + 2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)90)) * (((/* implicit */int) (unsigned char)194))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)115))));
                var_35 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_13 [i_6 + 2] [i_6 + 2] [i_19 + 3] [i_19 - 1])) - (((/* implicit */int) arr_13 [i_6 + 3] [i_6 + 2] [i_19 + 3] [i_19 - 1])))), (((/* implicit */int) arr_13 [i_6 - 1] [i_6 + 1] [i_19 + 2] [i_19 - 1]))));
            }
            for (signed char i_20 = 0; i_20 < 11; i_20 += 2) 
            {
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (arr_23 [i_0]) : (((/* implicit */int) var_8))));
                arr_71 [i_0] [i_6 + 3] [i_6] = ((/* implicit */int) (short)32767);
            }
            for (unsigned char i_21 = 1; i_21 < 10; i_21 += 3) 
            {
                arr_74 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 8388607U)), (16012589553154563050ULL)));
                arr_75 [i_6] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_6] [i_6] [i_6] [i_21] [i_21]);
                var_37 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) ((signed char) (unsigned short)33533)))))));
                arr_76 [i_6] [(unsigned char)2] [i_21] [i_21 + 1] = ((/* implicit */unsigned char) 8388607LL);
            }
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (0U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))) : (9223372036854775808ULL))))));
            /* LoopSeq 2 */
            for (short i_22 = 0; i_22 < 11; i_22 += 2) 
            {
                var_39 = ((/* implicit */unsigned int) min((arr_79 [i_0] [i_6] [i_0]), (arr_65 [i_0] [i_6] [i_0] [i_0])));
                var_40 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_63 [i_6] [i_6] [i_6] [i_6] [i_6 + 1])), (((var_7) * (((/* implicit */unsigned int) arr_63 [(signed char)10] [i_6] [(unsigned char)1] [i_6 + 2] [i_6 - 1]))))));
            }
            for (unsigned short i_23 = 1; i_23 < 9; i_23 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_24 = 0; i_24 < 11; i_24 += 1) 
                {
                    for (unsigned short i_25 = 0; i_25 < 11; i_25 += 4) 
                    {
                        {
                            var_41 ^= ((/* implicit */unsigned short) ((arr_0 [i_24] [i_6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6 - 1] [i_6 + 4] [i_6 + 4])))));
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0])))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_0] [i_6] [0LL] [i_25] [(unsigned short)10]))) % (arr_66 [4] [i_6] [i_6] [i_6]))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (short)7333))))))));
                            arr_91 [i_6] [i_24] [i_0] [i_6] [i_6] = ((/* implicit */unsigned short) 4294967295U);
                        }
                    } 
                } 
                var_43 ^= var_6;
                var_44 ^= ((/* implicit */unsigned short) ((int) max((max((var_7), (((/* implicit */unsigned int) arr_61 [i_23] [i_6 + 1] [i_0])))), (((/* implicit */unsigned int) max((arr_13 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (unsigned char)85))))))));
                var_45 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) : (arr_48 [i_0] [i_6] [i_6] [i_23 - 1] [i_23 + 1]))))))), (max((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)127)), (-1350305834)))), (((arr_78 [i_23]) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (arr_84 [(signed char)3] [i_6] [i_6] [i_6 + 3])))))));
            }
        }
        var_46 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1861347320U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)14428)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) 9))))));
    }
    var_47 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (unsigned char i_26 = 0; i_26 < 17; i_26 += 1) 
    {
        for (unsigned long long int i_27 = 0; i_27 < 17; i_27 += 4) 
        {
            for (signed char i_28 = 1; i_28 < 16; i_28 += 2) 
            {
                {
                    var_48 ^= ((((/* implicit */_Bool) ((unsigned int) ((signed char) var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_93 [i_26] [i_26])))))) ? (((/* implicit */int) var_3)) : (((arr_97 [i_26] [i_26] [(signed char)12]) ? (((/* implicit */int) arr_92 [i_27])) : (((/* implicit */int) var_8))))))) : (((unsigned long long int) ((arr_95 [i_26] [i_26] [i_26]) | (((/* implicit */long long int) var_7))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_29 = 0; i_29 < 17; i_29 += 4) 
                    {
                        arr_102 [i_26] [i_27] [i_26] [i_29] = (unsigned char)167;
                        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max(((unsigned char)50), (((/* implicit */unsigned char) arr_98 [i_26] [i_28] [i_27] [i_26]))))), (max((var_4), (((/* implicit */int) arr_100 [i_26] [i_27] [15U] [i_28 + 1] [i_29]))))))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) - (101525190U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_98 [i_26] [i_26] [i_28] [i_28])))));
                        var_50 ^= ((/* implicit */int) var_7);
                    }
                    var_51 ^= ((/* implicit */unsigned char) min((((((/* implicit */int) ((signed char) -185435550))) % (((/* implicit */int) arr_100 [i_28] [i_27] [i_28 - 1] [i_27] [i_27])))), (((((/* implicit */int) arr_96 [i_27] [i_27] [i_28])) - ((+(((/* implicit */int) arr_98 [i_27] [i_27] [i_27] [i_27]))))))));
                    arr_103 [i_26] [i_27] [i_26] [i_27] = ((/* implicit */int) max((((unsigned int) arr_97 [i_28 + 1] [0U] [i_28 + 1])), (((/* implicit */unsigned int) arr_97 [i_28 - 1] [i_28] [i_28 - 1]))));
                }
            } 
        } 
    } 
}
