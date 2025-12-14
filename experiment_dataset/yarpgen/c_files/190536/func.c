/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190536
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_16 [i_3] = ((/* implicit */signed char) ((1481170600220279751LL) << (((((/* implicit */int) (signed char)3)) - (3)))));
                                var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_0]))))) ? (((/* implicit */int) max((arr_8 [i_3 + 2] [i_3 - 1]), (arr_8 [i_0] [i_2])))) : (((((/* implicit */int) arr_8 [i_1] [i_0])) ^ (((/* implicit */int) arr_8 [i_0] [i_0]))))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)-5214)))) ^ (((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 2] [i_1] [i_3] [i_1]))))) ? (((unsigned int) (unsigned char)247)) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_0] [i_1 + 3] [i_0] [i_1 + 1] [i_1 + 3] [i_1] [i_3 + 2])))))));
                                arr_17 [i_0] [i_4] [i_2] [i_3] = ((/* implicit */int) max((((unsigned long long int) 13563372688030651731ULL)), (((/* implicit */unsigned long long int) arr_5 [i_3 - 1] [15] [i_1 + 4]))));
                                var_16 = ((/* implicit */unsigned long long int) (+(-1481170600220279747LL)));
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */unsigned long long int) (short)13980);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_18 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) var_3)))))), (min((((/* implicit */unsigned long long int) var_6)), (4746247736493214471ULL)))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            arr_22 [i_5] [i_5 - 1] [(unsigned char)10] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)20))));
            arr_23 [17] = ((/* implicit */unsigned int) arr_15 [i_5] [(short)2] [(short)11] [(_Bool)1] [i_5] [i_5] [i_5 - 1]);
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(max((1481170600220279741LL), (((/* implicit */long long int) arr_2 [i_5 - 1] [i_5] [i_5 - 1])))))))));
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-((+(((/* implicit */int) var_12)))))))));
        }
    }
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = ((/* implicit */signed char) -1540020674617133344LL);
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            arr_31 [i_7] [i_7] = ((/* implicit */long long int) ((short) (unsigned char)12));
            arr_32 [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)37))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7598517457740854436ULL)) ? (((/* implicit */int) arr_8 [i_8] [i_7])) : (((/* implicit */int) var_3))));
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_10 [i_9] [i_9] [i_7] [i_9]))));
            var_23 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_7] [i_9] [(short)6] [i_9] [i_7])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    {
                        var_24 &= ((/* implicit */unsigned int) (-((~(var_2)))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_11]))) / (17290438544997078464ULL))))));
                    }
                } 
            } 
        }
        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            var_26 -= min((((/* implicit */long long int) arr_20 [i_12] [i_12] [i_12])), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-9021369898311396235LL))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))));
            arr_43 [i_7] [i_7] [i_7] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)22)) / (((/* implicit */int) var_6)))) >= (arr_5 [i_7] [i_7] [i_12])))), (-1481170600220279747LL)));
        }
    }
    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
    {
        arr_46 [i_13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_13] [i_13]))));
        var_27 |= ((/* implicit */unsigned short) (signed char)-64);
        /* LoopSeq 1 */
        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_15 = 3; i_15 < 10; i_15 += 1) 
            {
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_9)) - (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_11))) : (8680981811089927172ULL)))));
                arr_51 [i_13] [i_13] [i_14] [i_15] = ((/* implicit */_Bool) (unsigned short)0);
                /* LoopSeq 2 */
                for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    arr_54 [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_19 [i_15 - 3] [i_15 + 2]))))));
                    arr_55 [(unsigned char)2] [(unsigned char)2] [i_13] [i_13] = arr_20 [i_16] [i_14] [i_13];
                }
                for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 3; i_18 < 11; i_18 += 4) 
                    {
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_60 [i_18 + 1] [i_18 + 1] [i_14] [i_15 - 3] [i_18] [i_15] [i_18 - 2])) ? (max((((/* implicit */unsigned long long int) arr_14 [i_13] [i_14] [i_15 - 2])), (((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_56 [i_13] [i_14] [i_15 - 1] [i_18]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))));
                        var_30 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_15])) ? (((((/* implicit */int) (unsigned char)243)) ^ (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)26)))))) : (((((/* implicit */int) arr_53 [i_15] [i_15 - 3] [i_18 + 1] [2U] [i_18 - 1] [i_14])) ^ (((/* implicit */int) (unsigned short)21264))))));
                        var_31 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 938145430098868651LL)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) arr_53 [i_15] [i_15 - 2] [i_15] [i_15 + 1] [i_17] [i_14])))) / ((+(((/* implicit */int) arr_53 [i_15] [i_15] [(short)6] [i_15 + 1] [i_18] [i_14]))))));
                    }
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (((((/* implicit */_Bool) (signed char)-4)) ? (((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)21264))))));
                }
                var_33 = ((/* implicit */unsigned int) var_3);
            }
            for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                var_34 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((+(arr_61 [i_13] [i_13] [i_14] [i_14] [i_13] [i_19] [i_19])))));
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 10; i_20 += 4) 
                {
                    for (int i_21 = 1; i_21 < 9; i_21 += 4) 
                    {
                        {
                            var_35 |= ((/* implicit */_Bool) arr_61 [i_21] [i_21] [i_20] [i_19] [i_14] [i_14] [6U]);
                            arr_69 [i_13] [i_19] &= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_61 [i_13] [i_13] [i_19] [i_19] [i_20] [i_21] [i_21])) ? (((13700496337216337165ULL) + (((/* implicit */unsigned long long int) -2134024042)))) : (((/* implicit */unsigned long long int) 3805470222U)))));
                            var_36 = ((/* implicit */unsigned short) (signed char)110);
                        }
                    } 
                } 
            }
            var_37 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-126))));
            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) arr_62 [i_13]))));
        }
    }
    var_39 = ((/* implicit */signed char) (~(var_7)));
    var_40 &= ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (unsigned int i_22 = 1; i_22 < 21; i_22 += 1) 
    {
        for (int i_23 = 0; i_23 < 23; i_23 += 1) 
        {
            for (unsigned char i_24 = 0; i_24 < 23; i_24 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_25 = 0; i_25 < 23; i_25 += 4) 
                    {
                        var_41 = ((/* implicit */short) arr_74 [i_24] [(_Bool)1] [i_22 + 1]);
                        /* LoopSeq 1 */
                        for (unsigned short i_26 = 0; i_26 < 23; i_26 += 4) 
                        {
                            var_42 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)193)) >= ((-(((/* implicit */int) arr_72 [i_22 + 1]))))));
                            arr_82 [i_22] [i_22 + 2] [i_23] [i_23] [i_26] [i_22] = -1698558193;
                        }
                    }
                    for (short i_27 = 0; i_27 < 23; i_27 += 4) 
                    {
                        var_43 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min(((unsigned short)9358), (arr_84 [i_27] [i_27] [i_24] [i_23] [i_22])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_22 + 1]))) : (12007915990299316348ULL))) - (((/* implicit */unsigned long long int) var_2))));
                        arr_87 [i_22] [i_22] = ((/* implicit */short) arr_71 [i_22 + 1]);
                        arr_88 [i_22] [11U] [i_24] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_81 [i_27] [i_22 + 1] [i_22] [i_27] [i_27] [i_24])) ? (2172871396U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_85 [i_22 - 1] [i_23] [i_24] [i_24] [i_27] [i_23])))));
                    }
                    for (unsigned char i_28 = 1; i_28 < 20; i_28 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_29 = 0; i_29 < 23; i_29 += 1) 
                        {
                            var_44 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_90 [i_23] [i_23] [i_24] [i_28])), (((((/* implicit */_Bool) arr_77 [i_22] [i_28 + 1] [i_28 + 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)2))))) : (var_11)))));
                            arr_95 [i_22] [i_22 + 2] [i_22] [i_22] = ((/* implicit */signed char) arr_72 [i_22 + 2]);
                            var_45 = ((/* implicit */unsigned short) (+((((!(((/* implicit */_Bool) -1248935471)))) ? (arr_81 [i_22] [i_22] [i_22] [i_24] [i_28 + 1] [i_29]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3983866502U)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (unsigned short)3207)))))))));
                        }
                        arr_96 [i_22] [i_23] [i_23] [i_24] [i_22] [i_28 + 1] = ((/* implicit */unsigned short) arr_78 [i_22 + 1]);
                        arr_97 [17ULL] [i_22] [i_24] [i_28] = ((/* implicit */_Bool) arr_92 [i_22] [i_22 - 1] [i_22 + 1] [i_22] [i_22] [i_22]);
                        arr_98 [i_22] [i_24] [i_28 + 1] [i_28 + 2] [i_28] = ((/* implicit */int) arr_91 [i_22] [i_24] [i_23] [i_22]);
                    }
                    arr_99 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-4)) / (((/* implicit */int) arr_80 [i_23] [i_23] [i_22] [i_23] [i_23]))));
                }
            } 
        } 
    } 
}
