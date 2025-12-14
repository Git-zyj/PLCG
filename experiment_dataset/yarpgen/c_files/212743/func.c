/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212743
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 16; i_1 += 3) /* same iter space */
        {
            var_14 += ((/* implicit */unsigned short) (~(((/* implicit */int) (short)0))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((unsigned long long int) arr_10 [i_1]));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-17876))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                arr_17 [(signed char)6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(short)4] [i_0] [i_1 + 1] [i_4] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) : (arr_5 [i_0] [i_0] [i_1] [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) 288230101273804800ULL)) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((long long int) (short)-17855)))));
                    arr_21 [i_1] = ((/* implicit */short) arr_19 [i_5] [i_5] [i_5] [i_5] [i_1]);
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_6))));
                }
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                {
                    arr_26 [i_4] [i_1 - 3] [i_0] [i_6] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)16368);
                    arr_27 [i_1] [i_1] [i_4] [i_6] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (short)-17876)) : (arr_23 [i_0] [i_1] [i_6] [i_6])))));
                }
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_4]))))) ^ (((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((unsigned long long int) 8572457486716634212ULL));
                            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-17855)) && (((/* implicit */_Bool) var_0))));
                        }
                    } 
                } 
            }
            arr_34 [i_1] [i_1 - 3] = ((/* implicit */unsigned long long int) ((int) var_10));
            var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (var_7)));
        }
        for (short i_9 = 3; i_9 < 16; i_9 += 3) /* same iter space */
        {
            arr_38 [i_9] [i_0] [i_9 + 1] = ((/* implicit */unsigned long long int) ((short) ((long long int) (signed char)-81)));
            var_21 = ((/* implicit */unsigned short) ((long long int) (_Bool)0));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                for (unsigned char i_11 = 1; i_11 < 16; i_11 += 1) 
                {
                    {
                        arr_43 [i_11] [i_11] [i_9] [i_11 + 1] [i_0] [i_11 + 1] = ((/* implicit */_Bool) arr_6 [i_9 - 1] [i_9 + 1] [i_11 + 2] [i_11 - 1]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                        {
                            arr_47 [i_9] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)17875))) < (arr_5 [i_0] [i_9] [i_11 + 1] [i_11])));
                            var_22 = ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)-17890))));
                            var_23 = ((/* implicit */short) ((((/* implicit */int) (short)17913)) << (((((/* implicit */int) var_9)) - (180)))));
                            var_24 = ((short) arr_39 [i_11 + 1] [i_12] [i_12]);
                        }
                    }
                } 
            } 
        }
        for (short i_13 = 3; i_13 < 16; i_13 += 3) /* same iter space */
        {
            var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)215)) < (((/* implicit */int) arr_0 [i_0] [i_13])))))) : (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)17890)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    {
                        arr_58 [i_15] [i_14] [i_13] [i_13] [i_13] [i_0] = ((short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                        var_26 = ((/* implicit */unsigned char) 981764657U);
                        arr_59 [i_15] [i_13] [i_13] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) ((unsigned int) arr_24 [i_0] [i_13 - 1]));
        }
        arr_60 [i_0] &= ((/* implicit */unsigned char) arr_24 [i_0] [i_0]);
        var_28 = ((/* implicit */unsigned int) ((int) ((int) 3500641195U)));
    }
    for (int i_16 = 0; i_16 < 25; i_16 += 4) 
    {
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) 2068203773908836496LL))));
        /* LoopNest 3 */
        for (long long int i_17 = 0; i_17 < 25; i_17 += 4) 
        {
            for (unsigned long long int i_18 = 1; i_18 < 23; i_18 += 3) 
            {
                for (unsigned short i_19 = 1; i_19 < 23; i_19 += 4) 
                {
                    {
                        var_30 = ((/* implicit */int) (short)-32765);
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)63)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)14346))) | (var_5)))) ? (288094722U) : (4006872573U))))))));
                        var_32 = -2147483636;
                        var_33 = ((/* implicit */long long int) (~(((/* implicit */int) (short)16531))));
                        arr_74 [i_16] [i_17] [i_18] [i_19] |= ((/* implicit */unsigned short) ((unsigned char) max((arr_72 [i_19] [i_19] [(unsigned short)22] [i_19 - 1] [i_18 + 2]), (((/* implicit */unsigned long long int) ((signed char) arr_66 [i_16] [9ULL] [i_18]))))));
                    }
                } 
            } 
        } 
        arr_75 [i_16] [i_16] = ((/* implicit */unsigned int) (short)-14347);
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 25; i_20 += 2) 
        {
            for (long long int i_21 = 0; i_21 < 25; i_21 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 4; i_22 < 22; i_22 += 4) 
                    {
                        for (unsigned char i_23 = 0; i_23 < 25; i_23 += 1) 
                        {
                            {
                                arr_87 [i_16] [(short)1] [i_21] [i_23] [i_23] = ((/* implicit */signed char) (_Bool)1);
                                var_34 |= max((max((((/* implicit */int) ((2147483641) >= (((/* implicit */int) (unsigned short)45479))))), ((+(((/* implicit */int) (unsigned char)106)))))), (((arr_69 [i_22 - 1] [(unsigned char)10] [i_22 - 1]) + (((/* implicit */int) (signed char)-83)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_24 = 0; i_24 < 25; i_24 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((unsigned int) arr_91 [i_24] [(short)15] [i_20] [i_16])))));
                        /* LoopSeq 2 */
                        for (short i_25 = 0; i_25 < 25; i_25 += 2) /* same iter space */
                        {
                            arr_96 [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)2)) && (((/* implicit */_Bool) (unsigned short)52644))));
                            var_36 = var_6;
                        }
                        for (short i_26 = 0; i_26 < 25; i_26 += 2) /* same iter space */
                        {
                            arr_99 [(unsigned char)5] [i_20] [i_21] [i_24] = ((/* implicit */unsigned char) ((signed char) 1014626928U));
                            arr_100 [(unsigned short)20] [i_20] [i_21] [i_24] = ((/* implicit */unsigned long long int) ((int) arr_80 [i_16]));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_27 = 0; i_27 < 25; i_27 += 2) /* same iter space */
                    {
                        arr_103 [i_16] [i_20] [i_21] [17U] [i_27] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_79 [i_20])) ? (((/* implicit */int) arr_77 [(signed char)12] [i_20])) : (((/* implicit */int) (unsigned short)63499))));
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (unsigned char)198))));
                    }
                    for (long long int i_28 = 0; i_28 < 25; i_28 += 2) /* same iter space */
                    {
                        arr_108 [i_16] [(unsigned short)7] [i_21] [i_28] [i_28] [i_16] = ((/* implicit */signed char) var_6);
                        arr_109 [i_16] [i_20] [i_21] [i_16] [i_16] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_76 [i_16])) ? (arr_73 [i_21] [i_20] [8LL] [i_28] [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))))), (((/* implicit */unsigned long long int) ((signed char) (short)-17892)))));
                    }
                    for (signed char i_29 = 0; i_29 < 25; i_29 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_30 = 1; i_30 < 21; i_30 += 1) 
                        {
                            arr_115 [9LL] [9LL] [i_21] [0LL] [i_30 + 1] [i_30] |= ((/* implicit */unsigned short) (signed char)-64);
                            arr_116 [i_30] [i_29] [i_29] [i_21] [i_20] [i_16] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) (short)-12819)), (min((18158513972435746816ULL), (((/* implicit */unsigned long long int) 0U)))))), (((/* implicit */unsigned long long int) ((unsigned char) 13LL)))));
                        }
                        var_38 *= ((/* implicit */_Bool) 17058120858749940287ULL);
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) 9223372036854775807LL))));
                        var_40 = ((/* implicit */signed char) max((((unsigned char) ((unsigned int) var_3))), (((/* implicit */unsigned char) (_Bool)1))));
                    }
                }
            } 
        } 
    }
    var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_8))) ^ (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (~(-1)))))) : (max((max((9223372036854775807LL), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) << (((var_7) - (2759600695663554028ULL))))))))));
}
