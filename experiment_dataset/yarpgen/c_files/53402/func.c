/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53402
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
    for (long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_0 - 2] = ((/* implicit */unsigned long long int) (+(arr_3 [i_0 - 2] [i_0 - 1])));
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */int) ((_Bool) var_11))) * (((int) var_8)))) < (var_5))))));
                    var_20 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-31151)))) << (((((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1] [10U])) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_0])) : (((/* implicit */int) arr_9 [i_0 - 2] [i_1] [i_0])))) - (160)))))) : (((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-31151)))) << (((((((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1] [10U])) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_0])) : (((/* implicit */int) arr_9 [i_0 - 2] [i_1] [i_0])))) - (160))) - (10))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)17)) >> (((((/* implicit */int) var_3)) + (32699))))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) 1073737728)) == (18446744073709551611ULL))))))) || (((/* implicit */_Bool) var_18))));
                        var_22 = ((/* implicit */short) ((long long int) var_10));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_2 [i_0]))));
                    }
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_1))));
                        var_25 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_1] [i_0 - 4])) ? (1073737715) : (((/* implicit */int) arr_9 [i_0 - 2] [i_1] [i_0 - 4]))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 3] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [3ULL]))) : (((((/* implicit */_Bool) (signed char)-23)) ? (var_7) : (var_7))))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)48)))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_4] [i_0 + 1])) - (((/* implicit */int) (signed char)37))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1))))))));
                        }
                        var_28 |= ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
                    }
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_29 ^= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (short)-512)) & (((/* implicit */int) arr_13 [i_7] [i_6])))));
                        var_30 ^= ((/* implicit */_Bool) ((unsigned short) ((unsigned short) 1073737728)));
                    }
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        arr_24 [(_Bool)1] [0LL] [i_8] [(unsigned short)2] |= ((/* implicit */unsigned int) (!(((((/* implicit */int) (signed char)-104)) < (((/* implicit */int) arr_16 [i_8] [i_6] [i_1] [i_0 + 1] [i_8]))))));
                        var_31 = ((/* implicit */signed char) ((unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_1]))))));
                    }
                    arr_25 [i_0 + 1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_6 - 1]))) & (13279267792397406006ULL)));
                }
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    arr_28 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-16403)) : (((/* implicit */int) (short)26131))))) ? (((((/* implicit */_Bool) arr_18 [i_0] [(unsigned short)2] [i_0 - 3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55168))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 3; i_10 < 11; i_10 += 2) 
                    {
                        var_32 -= ((/* implicit */_Bool) ((((((/* implicit */int) var_12)) != (((/* implicit */int) arr_19 [i_1] [(short)10] [i_0 + 1] [i_10 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0] [4U] [i_0 - 3] [i_0 - 3])) - (((/* implicit */int) arr_19 [i_0] [4LL] [i_0 - 3] [i_10 - 3]))))) : (((var_7) | (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                        var_33 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)2047))) : (((((/* implicit */_Bool) (unsigned short)4737)) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-102))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)100)))))));
                        arr_31 [2U] [i_9] [i_1] [0U] [i_1] [2U] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) (unsigned short)39475)) : (((((/* implicit */int) var_14)) >> (((((/* implicit */int) (short)7156)) - (7127)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_10 - 1] [8U] [i_0])) ? (var_8) : (((/* implicit */long long int) var_13)))))));
                        var_34 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_9])))))));
                        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) var_13))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_11] [i_0] [i_0 + 1] [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_21 [i_11] [i_0] [i_0 - 3] [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_11] [i_0] [i_0 - 4] [i_0] [i_0])))))));
                            arr_38 [i_0] [i_0] [i_1] [i_11] [i_12] = ((/* implicit */unsigned char) var_17);
                            arr_39 [i_1] [i_1] [i_9] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_12] [i_1] [i_9] [i_9])) & (((/* implicit */int) arr_2 [i_9]))))) ? (((120255119U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [3U]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)29630)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (unsigned char)142)))))));
                            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned long long int) 195629270U)) : (2305702271725338624ULL)));
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1]))) - (var_0))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            arr_43 [i_13] [i_13] [i_13] [i_13] [i_1] [(unsigned char)4] [i_13] = (+(((/* implicit */int) var_16)));
                            var_39 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0 - 4]))));
                        }
                        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((long long int) arr_0 [i_0 - 4])))));
                    }
                }
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        for (short i_16 = 0; i_16 < 12; i_16 += 3) 
                        {
                            {
                                arr_53 [i_0] [5U] [i_14] [i_14] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3967135134U)) || (((/* implicit */_Bool) (unsigned char)255))));
                                arr_54 [i_1] [(unsigned short)6] [i_1] [i_1] [i_1] [(short)6] &= ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                    arr_55 [0U] [i_1] [(signed char)0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 4]))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) arr_20 [i_1] [i_1] [i_1])) : (4294967295U)))));
                }
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 3) 
                    {
                        arr_61 [i_0] [i_0 - 2] [i_1] [i_17] [i_17] [i_18] = ((/* implicit */long long int) arr_5 [i_1]);
                        var_41 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_44 [i_0] [i_0 - 4] [i_17 + 1] [i_17 + 1])) ? (arr_44 [i_0] [i_0 - 1] [i_17 + 1] [i_17 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (arr_44 [i_0] [i_0 - 3] [i_17 + 1] [i_17 + 1]))) - (1581288940U)))));
                        var_42 -= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [(signed char)8] [(signed char)8])) ? (((/* implicit */int) arr_48 [8ULL] [i_1] [i_17] [(_Bool)0])) : (arr_20 [i_0] [i_1] [10LL]))))))) > (var_17)));
                        arr_62 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) 11290863997424981578ULL);
                    }
                    for (unsigned int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) ((arr_17 [i_0] [i_0 - 4] [i_0]) | (((unsigned long long int) ((((/* implicit */_Bool) (short)-7156)) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) (unsigned char)252))))))))));
                        var_44 ^= ((short) ((11897495079378870662ULL) > (((/* implicit */unsigned long long int) 1686068682U))));
                        var_45 = ((/* implicit */short) ((((((((/* implicit */int) var_3)) | (((/* implicit */int) var_10)))) + (2147483647))) << (((/* implicit */int) ((unsigned short) 18444492273895866368ULL)))));
                        arr_66 [i_0] [i_0] [(short)4] [i_0] [i_0] &= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_21 [8U] [i_1] [8U] [6U] [i_1])) || (((/* implicit */_Bool) var_14))))));
                    }
                    arr_67 [10U] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_0] [(unsigned short)4] [i_0])) : (((/* implicit */int) var_12))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)-27111)))))));
                }
                for (signed char i_20 = 0; i_20 < 12; i_20 += 3) 
                {
                    arr_71 [i_1] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((unsigned int) var_2))) || (((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) ^ (arr_3 [i_0] [i_0]))))))));
                    arr_72 [i_0] [i_0] [i_1] [i_20] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) || (((/* implicit */_Bool) 5759499316726712887LL)))))) | (((((/* implicit */_Bool) (~(var_2)))) ? (((unsigned long long int) (unsigned short)65520)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0]))))))));
                }
                /* LoopSeq 3 */
                for (unsigned int i_21 = 0; i_21 < 12; i_21 += 4) 
                {
                    arr_75 [i_0 - 3] [i_1] = ((/* implicit */unsigned int) (-(var_5)));
                    arr_76 [i_1] [i_1] [i_21] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_1] [i_0 - 4] [i_0])) ? (((/* implicit */int) arr_40 [i_1] [i_0 - 4] [i_0])) : (((/* implicit */int) var_4))))) != (((((/* implicit */_Bool) 4025296985U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15236))) : (arr_52 [(short)0] [8ULL] [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 4] [i_0 + 1])))));
                }
                /* vectorizable */
                for (unsigned short i_22 = 2; i_22 < 8; i_22 += 3) 
                {
                    var_46 ^= ((/* implicit */signed char) ((short) arr_37 [i_22] [i_22 + 3] [i_22] [i_22] [i_22 + 3]));
                    var_47 = ((/* implicit */long long int) var_2);
                    arr_79 [i_0 - 4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) + (((/* implicit */int) arr_57 [i_22 + 2] [i_0] [i_0 - 2] [i_0]))));
                }
                for (unsigned short i_23 = 2; i_23 < 10; i_23 += 3) 
                {
                    var_48 *= ((/* implicit */unsigned char) var_16);
                    arr_82 [i_0] [(_Bool)1] |= ((/* implicit */long long int) ((int) ((((/* implicit */int) arr_45 [i_0 - 3] [i_23 - 2] [i_23])) / (((/* implicit */int) arr_45 [i_0 - 1] [i_23 - 1] [i_23])))));
                    arr_83 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_1);
                    arr_84 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_15);
                }
            }
        } 
    } 
    var_49 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
    /* LoopSeq 1 */
    for (unsigned short i_24 = 0; i_24 < 17; i_24 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_25 = 0; i_25 < 17; i_25 += 4) 
        {
            var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((unsigned int) ((((/* implicit */int) (signed char)44)) ^ (var_5)))))));
            arr_90 [(short)9] [i_24] [i_25] = ((/* implicit */unsigned short) ((18446744073709551615ULL) - (18333234998156202768ULL)));
            var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) arr_89 [i_24] [i_25] [i_24]))));
        }
        for (unsigned long long int i_26 = 0; i_26 < 17; i_26 += 1) 
        {
            arr_93 [i_24] [i_24] = ((/* implicit */signed char) var_13);
            arr_94 [i_24] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_6))) || (((((/* implicit */int) (signed char)90)) < (((/* implicit */int) var_6)))))))) > (((((/* implicit */_Bool) arr_87 [i_26])) ? (arr_87 [i_26]) : (arr_87 [i_24])))));
            var_52 = ((/* implicit */unsigned short) arr_86 [i_24]);
        }
        var_53 = ((/* implicit */unsigned int) ((short) ((unsigned short) arr_87 [i_24])));
        /* LoopSeq 1 */
        for (long long int i_27 = 1; i_27 < 15; i_27 += 3) 
        {
            var_54 = ((/* implicit */short) ((unsigned char) ((long long int) ((short) arr_91 [(unsigned short)10] [i_27]))));
            arr_97 [i_24] [i_27] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (signed char)-121)) * (((/* implicit */int) (signed char)15)))));
        }
    }
}
