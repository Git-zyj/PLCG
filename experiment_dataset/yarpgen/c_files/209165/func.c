/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209165
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
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 3259667743U)) ? (((((/* implicit */_Bool) 1035299544U)) ? (((/* implicit */unsigned long long int) 1035299552U)) : ((+(1782481668664032952ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                                var_20 ^= (!(((/* implicit */_Bool) 4660363148292092887ULL)));
                                arr_14 [i_0] [i_1] [i_3] [i_0] [i_4] [i_2] [i_1 + 2] = ((/* implicit */int) max((((unsigned long long int) arr_10 [i_3] [i_3] [i_3] [i_1 + 3])), (((/* implicit */unsigned long long int) (signed char)23))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_5 = 1; i_5 < 7; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 8; i_6 += 2) 
                    {
                        for (long long int i_7 = 2; i_7 < 8; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1035299537U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)16))) : (-1897841182987333349LL)))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) 1035299536U)) && (((/* implicit */_Bool) max((1035299544U), (1035299544U)))))))));
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0 - 4] [(signed char)6] [i_0] = ((/* implicit */int) var_0);
                                arr_25 [i_0] [i_0] [i_1] [i_1] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0 - 3] [i_0 - 4] [i_0 - 4] [i_0] [i_0 - 4] [i_0 - 4] [i_0]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_5 + 1] [i_0] [i_7])))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [(unsigned char)2] [i_5 + 2] |= ((/* implicit */signed char) 1035299544U);
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            {
                                arr_33 [(unsigned short)4] [i_0] [i_8] [i_5 - 1] [i_1] [i_0] [i_0] = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) (unsigned short)4095)) : (arr_7 [i_0] [i_0] [i_0] [i_0])))) <= (((unsigned long long int) (unsigned char)255)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [(signed char)6] [8] [8] [(signed char)6]), (((/* implicit */unsigned char) (signed char)-112)))))) + (max((3340425823814319245ULL), (((/* implicit */unsigned long long int) var_4)))))) : (1125899906842623ULL));
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max((((/* implicit */unsigned int) ((arr_2 [i_0 - 3] [i_1 - 1]) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_5 + 1] [i_1 + 3])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_5 - 1] [i_1 - 1]))))), (max((var_7), (((/* implicit */unsigned int) arr_10 [i_0 - 3] [i_0 - 3] [i_5 + 3] [i_1 + 2])))))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((18445618173802708988ULL) * (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1035299552U)))))) : (arr_22 [i_0 + 3] [i_0] [i_0] [i_1] [i_1 + 2] [i_1 - 1] [(signed char)4])))) ? (max((3259667744U), (((/* implicit */unsigned int) arr_10 [i_0 - 3] [i_1 + 3] [i_1 - 1] [i_5 + 2])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                                arr_34 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned char)199)), (1035299548U))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (unsigned short)4089)) : (((/* implicit */int) (unsigned short)32640)))))))) : (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    arr_35 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0 - 4])))))) == (arr_32 [i_0] [i_5] [i_0] [i_5] [i_0] [i_5])));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        for (short i_11 = 3; i_11 < 9; i_11 += 4) 
                        {
                            {
                                arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)4169)) ? (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_5] [5U])) : (((/* implicit */int) (unsigned short)32644))))));
                                var_24 = ((/* implicit */unsigned char) arr_17 [i_0] [i_1] [i_10]);
                                var_25 &= 2923749604993537787ULL;
                                var_26 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_10] [3LL] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10] [i_1] [i_1]))) : (arr_11 [i_0 + 1] [i_1] [i_5 + 1] [(_Bool)1] [i_10] [(unsigned short)8])))) ? (arr_7 [i_11] [i_1 - 1] [i_0] [i_10]) : (((/* implicit */int) (signed char)-112))))) * (var_7)));
                            }
                        } 
                    } 
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)128)), ((short)-287))))));
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) max((arr_19 [i_1] [0LL] [i_1 + 1] [i_1 + 3] [i_1 + 1]), (((/* implicit */short) ((_Bool) arr_19 [i_1] [2] [i_1 + 1] [i_1] [i_1 + 3]))))))));
                    var_29 = ((/* implicit */short) (((~(((/* implicit */int) arr_17 [i_1 + 2] [i_1 + 1] [i_1 + 2])))) | (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned int i_13 = 1; i_13 < 8; i_13 += 4) 
                {
                    var_30 = ((/* implicit */short) (signed char)-109);
                    arr_46 [i_0] [i_0] = ((/* implicit */_Bool) arr_43 [i_0] [8LL] [(signed char)1] [i_13 + 2]);
                    /* LoopSeq 3 */
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        arr_49 [i_0] [i_13] [i_1 + 3] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_21 [(unsigned short)0] [(unsigned short)7] [i_14] [i_13 + 1] [(short)5] [i_1 + 2])) : (((/* implicit */int) arr_21 [i_14] [i_14] [(short)1] [i_13 - 1] [i_1 + 2] [i_1 + 2]))))), (max((min((1422570182U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))))));
                        arr_50 [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned short) arr_28 [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_0 + 1]));
                        arr_51 [i_0] [i_1 + 2] [i_0] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((var_17), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) ((arr_30 [(short)5] [(short)5]) > (((/* implicit */unsigned long long int) arr_28 [i_1 - 1] [i_14] [i_1 - 1] [i_14])))))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)32887), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)56))))))))) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_14] [i_13] [i_0] [i_13]))) : (arr_47 [i_14] [i_0] [i_14] [i_14])))));
                        var_31 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_1])) ^ (((/* implicit */int) arr_36 [i_0 - 1] [(_Bool)1] [i_13 + 2])))));
                    }
                    for (short i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        arr_54 [i_15] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_7))), (((/* implicit */unsigned int) (((_Bool)1) || ((_Bool)1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 234881024U))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)99)), (arr_22 [i_15] [i_1] [i_1] [i_15] [i_15] [i_15] [i_15])))) ? (((/* implicit */int) min((arr_17 [i_0] [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (_Bool)1))))));
                        var_32 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (_Bool)1)), (2872397096U))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned short) ((int) 2627228568U));
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_16] [i_13] [i_1 + 1] [i_0 + 2] [i_0 + 2] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0 + 1])) || (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_8)))))))) : (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (9223372036854775807LL))) ? (((5786073640348904927LL) << (((1422570182U) - (1422570182U))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)116))))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_17 = 3; i_17 < 8; i_17 += 3) 
                        {
                            var_35 ^= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_0 [i_1] [i_1])) | (((/* implicit */int) var_11)))));
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_1] [i_1] [(unsigned char)2] [i_0] [(unsigned char)2] [i_1 + 1] [i_0])) ? (((/* implicit */int) (unsigned short)39058)) : (((/* implicit */int) var_10))));
                        }
                    }
                    /* vectorizable */
                    for (int i_18 = 2; i_18 < 9; i_18 += 2) 
                    {
                        var_37 = ((/* implicit */int) max((var_37), (((((_Bool) (_Bool)1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_0] [i_0 - 3] [i_0] [i_18] [i_0]))))) : (((/* implicit */int) (!((_Bool)1))))))));
                        arr_65 [i_0] [i_1 - 1] [i_13] [i_0] [i_13] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-31477)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_56 [i_0] [i_1] [i_13 + 2] [i_18]))))) : (((301729390655702455LL) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_18])))))));
                    }
                    var_38 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (((signed char) (unsigned char)37)))))));
                    arr_66 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) 2627228568U)) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)32648))))) ? (((unsigned long long int) (unsigned char)1)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                }
            }
        } 
    } 
    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (1650395847U)))) ? (((/* implicit */int) var_17)) : (max((var_3), (((/* implicit */int) var_11))))))))))));
    /* LoopNest 3 */
    for (signed char i_19 = 3; i_19 < 20; i_19 += 2) 
    {
        for (short i_20 = 1; i_20 < 20; i_20 += 4) 
        {
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                {
                    var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) + (((((/* implicit */_Bool) (signed char)-40)) ? (arr_67 [i_21 - 1]) : (((/* implicit */unsigned long long int) 2157610442U)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        for (signed char i_23 = 0; i_23 < 21; i_23 += 3) 
                        {
                            {
                                var_41 = ((/* implicit */long long int) ((arr_81 [i_19] [i_19] [(unsigned short)2] [i_19]) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((unsigned int) arr_80 [i_19 + 1] [i_20] [i_19] [i_21 - 1] [(_Bool)1] [(_Bool)1])), (arr_78 [i_19] [i_20])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32755))) : (arr_67 [i_21])));
                                var_43 = ((/* implicit */signed char) (((((!((_Bool)1))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))))) && (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
