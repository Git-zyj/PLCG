/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237398
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
    var_13 = ((/* implicit */short) (unsigned char)255);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (2147483647) : (((/* implicit */int) var_0)))) == ((+(((/* implicit */int) arr_0 [i_1 - 1])))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) : (arr_4 [i_0])))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)141))) : (5054868236919735741LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> (((5054868236919735741LL) - (5054868236919735722LL)))))) : (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                    var_15 = (~(min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_8))))));
                }
                /* LoopNest 3 */
                for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_16 [i_1] = ((/* implicit */_Bool) (~(((int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_8))))));
                                var_16 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_5] [i_4] [i_0] [i_0])) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))), (((/* implicit */long long int) min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) (_Bool)1)))))));
                                arr_17 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */int) var_5);
                /* LoopSeq 4 */
                for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_18 [i_0] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_11 [i_0] [i_6] [i_7] [i_8])) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)1))))))));
                                arr_24 [i_1] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) var_4)) | (((/* implicit */int) arr_7 [i_1] [i_1])))) != (((/* implicit */int) var_4))))) | (((/* implicit */int) (_Bool)1))));
                                arr_25 [i_8] [i_1] [i_8] [i_8] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)32)), (-5054868236919735741LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)4)) * (((/* implicit */int) (unsigned char)225))))) : (34359738360ULL))))));
                                var_19 = ((/* implicit */short) (~((~(((/* implicit */int) var_2))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (0)))) && (((/* implicit */_Bool) ((var_3) ^ (((/* implicit */int) (unsigned char)75)))))))) : ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_30 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                                var_21 += ((/* implicit */signed char) max(((-(var_3))), (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_1 - 1]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_13 [i_1]) : (arr_13 [i_1])))))))));
                }
                for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        for (int i_13 = 2; i_13 < 17; i_13 += 2) 
                        {
                            {
                                var_23 -= ((/* implicit */int) (!(((((/* implicit */_Bool) arr_28 [i_0] [i_12] [i_13])) && (((/* implicit */_Bool) ((signed char) (signed char)-50)))))));
                                arr_39 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_35 [i_1 - 1]))))) ? ((+(3445943416439525952LL))) : (((/* implicit */long long int) (+(2147483647))))));
                                arr_40 [i_1] [i_1] [i_12] [i_12] [i_1] [i_12] [i_1] = ((/* implicit */_Bool) (unsigned short)65535);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_7 [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) - (((((/* implicit */int) var_4)) - (((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_0)) : (arr_31 [i_0] [i_0])))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15672317040088423003ULL)))))));
                    arr_41 [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 11998628293374059253ULL)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (unsigned short)48762)))) : (((/* implicit */int) arr_35 [i_1]))))));
                }
                for (unsigned char i_14 = 2; i_14 < 16; i_14 += 1) 
                {
                    var_25 *= ((/* implicit */unsigned int) var_9);
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        for (signed char i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            {
                                arr_49 [i_0] [i_0] [i_14] [i_1] [i_1] = ((/* implicit */_Bool) var_10);
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_16])) * (((/* implicit */int) var_2))))) ? (min((((/* implicit */long long int) var_5)), (arr_28 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (-1882541329)))) : (min((4294967284U), (((/* implicit */unsigned int) var_12))))))))))));
                                var_27 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_22 [i_1] [i_15] [i_15] [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_0] [i_1] [i_15] [i_1])) : (((/* implicit */int) arr_22 [i_1] [i_15] [i_1] [i_1] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_17 = 2; i_17 < 15; i_17 += 2) 
                {
                    var_28 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)127))))) - (((4294967275U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (3735057974907644134LL)));
                    arr_52 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((6506750793738818125ULL), (((/* implicit */unsigned long long int) -1882541343))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15688)) ? (13157521568549795899ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (var_10) : (((/* implicit */long long int) arr_13 [i_1])))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0])))))));
                    arr_53 [i_17] |= ((/* implicit */short) max((min((((((/* implicit */_Bool) 18446744073709551614ULL)) ? (8421263980636595670LL) : (var_10))), (((/* implicit */long long int) ((unsigned short) arr_19 [i_0] [i_1] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) / (arr_13 [i_17]))))));
                    arr_54 [i_0] [i_1] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_1]))) : (((12287343646581762552ULL) / (((/* implicit */unsigned long long int) 4294967295U))))));
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 18; i_19 += 1) 
                        {
                            {
                                arr_60 [i_1] [i_1] [i_1] [i_1] [i_1] [i_19] = ((/* implicit */_Bool) (unsigned short)0);
                                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_17 + 2] [i_1 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_17 + 3] [i_1 - 1]))) : (arr_3 [i_1 - 1])))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), (min((arr_28 [i_0] [i_1] [i_1]), (((/* implicit */long long int) (short)31594)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                                var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */_Bool) min((var_12), ((-(((/* implicit */int) (short)124))))))) ? (((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_57 [i_17] [i_17] [i_17] [i_17])) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) (unsigned char)32)) ? (var_12) : (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned char)237)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)64966))))) ? (max((var_12), (((/* implicit */int) var_2)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)59125))))))))));
                                var_31 ^= ((/* implicit */unsigned char) (((-((+(arr_3 [i_1]))))) * (((((var_4) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned long long int) ((var_12) * (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_20 = 0; i_20 < 14; i_20 += 2) 
    {
        for (int i_21 = 4; i_21 < 12; i_21 += 3) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_23 = 0; i_23 < 14; i_23 += 2) 
                    {
                        arr_71 [i_20] [i_21] [i_22] [i_20] = ((/* implicit */unsigned short) (~(-8421263980636595670LL)));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) max(((-(max((((/* implicit */int) var_4)), (var_12))))), (((/* implicit */int) max((var_4), (((arr_8 [i_20] [i_21] [i_21] [i_20]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)170)))))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        arr_74 [i_20] [i_20] [i_20] [i_20] [i_24] = ((/* implicit */unsigned char) ((arr_26 [i_21] [i_21 + 1] [i_21 + 1] [i_21 + 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_20])))));
                        arr_75 [i_20] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_43 [i_20] [i_20])))));
                    }
                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 14; i_25 += 4) 
                    {
                        arr_78 [i_20] [i_20] [i_21] [i_21] [i_20] [i_20] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (var_12))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_32 [i_25] [i_20] [i_20] [i_20]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_20] [i_25] [i_25] [i_22] [i_25]))))) ? (((((/* implicit */int) var_2)) ^ (var_3))) : (((/* implicit */int) var_6))));
                    }
                    for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65526))));
                        var_35 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */int) arr_43 [i_20] [i_20])) > (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((/* implicit */int) (_Bool)1))))))))));
                        arr_82 [i_26] [i_21] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) arr_76 [i_20] [i_21] [i_22]))))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (!(((/* implicit */_Bool) 9134473894467894206ULL)))))))) : (max((((/* implicit */int) (short)-3325)), ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_20] [i_20] [i_20] [i_26] [i_20]))))))));
                        arr_83 [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [i_21 - 4] [i_21 + 2])) ? (((/* implicit */int) arr_81 [i_21 + 1] [i_21 - 3])) : (((/* implicit */int) (unsigned char)171))))) ? (((arr_57 [i_26] [i_26 + 1] [i_26] [i_26 + 1]) ? (((/* implicit */int) arr_57 [i_26] [i_26 + 1] [i_26 + 1] [i_26 + 1])) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) arr_81 [i_21 + 1] [i_21 - 3])) ? (((/* implicit */int) arr_57 [i_26] [i_26 + 1] [i_26] [i_26 + 1])) : (((/* implicit */int) var_7))))));
                        arr_84 [i_20] [i_20] [i_20] [i_20] [i_26] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) var_5)))))) ? ((((_Bool)1) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_21 + 2] [i_21 - 2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_21] [i_21])))));
                    }
                    arr_85 [i_20] [i_20] [i_20] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_29 [i_21] [i_20] [i_21] [i_22] [i_22])) : (((/* implicit */int) (_Bool)1)))))));
                    var_36 = ((/* implicit */unsigned long long int) (+(max((((arr_57 [i_20] [i_21] [i_22] [i_21]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 503453314U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    } 
    var_37 &= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
}
