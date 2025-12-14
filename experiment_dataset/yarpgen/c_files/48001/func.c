/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48001
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)0)) / (((/* implicit */int) (unsigned char)18))))));
                        arr_10 [i_0] [i_0] [i_1] [i_3] [i_3] = var_1;
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) -167661425413571345LL))));
                        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
                    }
                    var_20 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2])), (max(((-(17592186044288ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (165810944))))))));
                }
                for (unsigned int i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    arr_13 [i_1] [i_1] = ((/* implicit */signed char) var_6);
                    arr_14 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))), (((((/* implicit */unsigned long long int) var_8)) ^ (var_7))))) * (min((min((((/* implicit */unsigned long long int) var_10)), (17592186044269ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4] [i_1] [(signed char)6] [i_0])) ? (((/* implicit */int) (signed char)0)) : (-165810945))))))));
                }
                for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) min((-165810945), (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (((~(var_15))) & (((/* implicit */int) (unsigned char)5)))))));
                        var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)15))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) ((((min((-165810937), (((/* implicit */int) var_13)))) >= ((-(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6)))))))) : (((((((-167661425413571345LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)0)))) >> ((((~(((/* implicit */int) var_11)))) + (31293)))))));
                }
                arr_21 [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) max(((signed char)(-127 - 1)), (((/* implicit */signed char) var_4)))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8] [i_8]))))) : (((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) var_2))))))))));
                            var_26 &= ((/* implicit */signed char) var_16);
                            var_27 = ((/* implicit */unsigned int) (_Bool)0);
                            var_28 ^= ((/* implicit */signed char) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_10 = 1; i_10 < 18; i_10 += 3) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) > (18446744073709551615ULL)));
            var_30 += min((((/* implicit */int) ((_Bool) min((var_3), (var_3))))), (((((/* implicit */_Bool) ((long long int) 4194048))) ? (((/* implicit */int) var_16)) : (max((((/* implicit */int) var_9)), (var_8))))));
            var_31 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) > (min((((/* implicit */long long int) 4194062)), (arr_24 [i_9]))))))));
            arr_34 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_1))))) ? (((((((/* implicit */int) arr_9 [i_9] [i_10] [(unsigned short)1])) * (((/* implicit */int) var_3)))) ^ (((/* implicit */int) var_6)))) : ((+(524287)))));
        }
        for (unsigned int i_11 = 1; i_11 < 18; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_12 = 2; i_12 < 18; i_12 += 2) 
            {
                var_32 = ((/* implicit */short) (-(var_15)));
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    for (signed char i_14 = 2; i_14 < 17; i_14 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_11] [i_14 + 3])) ? (524287) : (((/* implicit */int) var_5))))) > (((((/* implicit */_Bool) (-(4294967295U)))) ? ((+(4611686018427387888ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_34 = ((/* implicit */short) min(((-(((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_9)))))), (((/* implicit */int) var_11))));
                            var_35 += ((/* implicit */long long int) arr_4 [i_12]);
                            var_36 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))));
                        }
                    } 
                } 
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_37 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_7 [i_15] [8])) >> (((var_8) + (680128752))))), (((524283) >> (((((/* implicit */int) (unsigned short)65535)) - (65506)))))))), (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)1860))))))));
                /* LoopSeq 1 */
                for (unsigned int i_16 = 1; i_16 < 19; i_16 += 4) 
                {
                    arr_49 [i_9 + 1] [15ULL] [i_16] [i_11] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_11 - 1] [i_11 - 1]))))))), (((/* implicit */int) var_10))));
                    var_38 -= ((/* implicit */unsigned short) (-(var_7)));
                }
                var_39 &= ((/* implicit */long long int) (_Bool)1);
                arr_50 [i_9] [i_11] = ((/* implicit */long long int) -165810966);
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_40 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 524287)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)20))));
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 17; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 1; i_19 < 16; i_19 += 4) 
                    {
                        {
                            var_41 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_3))))));
                            var_42 = max((((/* implicit */unsigned long long int) min(((signed char)-3), (((/* implicit */signed char) (_Bool)1))))), (min((var_7), (((/* implicit */unsigned long long int) (short)127)))));
                            arr_61 [i_11] [i_17] [i_11] [i_11] = max(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_7))))), (((/* implicit */unsigned long long int) (unsigned short)8160)));
                            var_43 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) min(((signed char)2), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-38)) * (((/* implicit */int) (signed char)-23))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (arr_33 [i_9 + 1]))))));
                            var_44 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_9 - 1] [i_17] [i_19])) ? (((/* implicit */int) arr_9 [i_9] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) (_Bool)1))))) ? (min(((+(((/* implicit */int) (short)992)))), (((/* implicit */int) (short)1016)))) : ((-(((((/* implicit */int) var_13)) - (((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_20 = 0; i_20 < 20; i_20 += 3) 
                {
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_1)), (255U))), (((/* implicit */unsigned int) min((((/* implicit */signed char) arr_4 [i_11])), (var_14))))));
                            arr_66 [i_21] [i_20] [i_11] [i_11] [i_9] = ((/* implicit */unsigned short) ((unsigned char) var_4));
                            var_46 = ((/* implicit */int) ((((/* implicit */_Bool) (short)0)) ? (0ULL) : (((/* implicit */unsigned long long int) var_15))));
                            var_47 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-992)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (_Bool)1)))))));
                            var_48 = ((/* implicit */signed char) (_Bool)0);
                        }
                    } 
                } 
                var_49 -= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)65535))));
            }
            var_50 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)37)), ((unsigned short)14297))))));
        }
        var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_15)), (4205619820U)))) ? ((((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_9 - 1] [i_9 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967278U))))));
        var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_1)))))))));
    }
    for (signed char i_22 = 0; i_22 < 22; i_22 += 1) 
    {
        arr_69 [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_67 [i_22] [i_22])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1389914985))))) : (((int) var_10))));
        arr_70 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -831501156)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
    }
    /* LoopSeq 2 */
    for (short i_23 = 0; i_23 < 11; i_23 += 3) 
    {
        arr_73 [i_23] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)24576)) ? (-3788322282713811919LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
        /* LoopNest 2 */
        for (long long int i_24 = 3; i_24 < 9; i_24 += 4) 
        {
            for (unsigned int i_25 = 2; i_25 < 10; i_25 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                        {
                            {
                                arr_86 [10U] [2ULL] [2ULL] [i_23] [i_23] = ((/* implicit */short) (-((-(((/* implicit */int) var_13))))));
                                var_53 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)127))));
                                var_54 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned short i_28 = 0; i_28 < 11; i_28 += 4) 
                    {
                        var_55 *= ((/* implicit */unsigned long long int) ((((arr_30 [i_25 - 1] [i_24 - 2]) ? (arr_71 [i_25 - 1] [i_24 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) ^ (((arr_71 [i_25 + 1] [i_24 + 2]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
                        var_56 ^= ((/* implicit */unsigned int) (((~(((var_7) & (((/* implicit */unsigned long long int) arr_77 [i_23] [i_23] [i_25])))))) ^ (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (939524096U))))))));
                        arr_90 [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 536870911ULL)) ? (min((var_0), (((/* implicit */unsigned long long int) min((4294967290U), (((/* implicit */unsigned int) (unsigned short)51888))))))) : ((-((-(18446744073709551600ULL)))))));
                        arr_91 [i_23] [i_24] [i_24] [i_24 + 2] = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (0U))), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) var_2))));
                    }
                    for (unsigned long long int i_29 = 0; i_29 < 11; i_29 += 4) 
                    {
                        arr_94 [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) var_10)), ((short)-32754)))) & (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_30 = 1; i_30 < 8; i_30 += 4) 
                        {
                            var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(var_1)))) ^ (((/* implicit */int) min((arr_85 [i_23] [6U] [i_25] [i_23] [i_23]), (var_1))))))) ? (min((arr_38 [i_24] [i_25 - 2] [i_24] [i_24 - 2]), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) arr_16 [i_30 - 1] [i_24 - 2] [i_25 + 1] [i_24 - 3])) : (((/* implicit */int) ((31) >= (((/* implicit */int) (signed char)-1))))))))));
                            arr_98 [i_23] = ((/* implicit */unsigned char) (~(max((max((-32), (((/* implicit */int) var_12)))), (((/* implicit */int) var_10))))));
                        }
                        var_58 = ((/* implicit */signed char) (unsigned short)39448);
                    }
                    for (unsigned char i_31 = 1; i_31 < 7; i_31 += 4) 
                    {
                        arr_101 [i_23] [i_24] [i_23] [i_25 - 2] [(_Bool)1] = (+(((((/* implicit */int) (short)-13)) - (((/* implicit */int) (short)32766)))));
                        var_59 *= ((/* implicit */unsigned short) (~(min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_13)))), ((-(((/* implicit */int) var_4))))))));
                    }
                    for (unsigned long long int i_32 = 0; i_32 < 11; i_32 += 1) 
                    {
                        var_60 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) (_Bool)1)))));
                        var_61 = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned short)29)) ^ (-15)))));
                        var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32746)) ? (max((((/* implicit */int) arr_83 [i_25] [i_25])), (var_15))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                        var_63 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_47 [i_24])) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16ULL)) ? (5U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-32))))))))));
                        arr_104 [6ULL] [i_23] [i_32] = ((/* implicit */_Bool) 14);
                    }
                }
            } 
        } 
    }
    for (unsigned char i_33 = 2; i_33 < 22; i_33 += 3) 
    {
        arr_109 [i_33] [i_33] = ((/* implicit */int) var_16);
        var_64 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (18446744073709551600ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_2)))))))) ? (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) arr_105 [i_33 + 3])) : (((/* implicit */int) var_4))))) : (min((min((((/* implicit */unsigned long long int) (unsigned short)1023)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_4)))))))));
    }
}
