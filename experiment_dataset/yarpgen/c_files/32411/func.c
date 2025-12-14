/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32411
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
    var_17 = ((/* implicit */long long int) var_4);
    var_18 = ((/* implicit */_Bool) ((unsigned int) var_16));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_19 = ((/* implicit */short) ((min(((_Bool)1), ((_Bool)1))) ? ((~(((arr_5 [i_2] [i_2]) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) 0U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((signed char) arr_6 [i_1]))) : (arr_3 [i_1 + 4] [i_1 + 4]))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_1] [i_1 + 3] [i_1 + 2]), (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) arr_3 [i_0] [i_1])) : (arr_7 [i_0] [i_1] [i_2])))))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (arr_2 [i_1 + 4]) : (arr_2 [i_1 + 4]))) : (min((arr_2 [i_1 + 2]), (arr_2 [i_1 + 2])))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) max((arr_1 [i_1] [i_2]), (((/* implicit */long long int) arr_3 [i_1 + 1] [i_1 + 3]))));
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((long long int) ((long long int) (-9223372036854775807LL - 1LL))));
                }
                for (unsigned int i_3 = 4; i_3 < 6; i_3 += 3) 
                {
                    arr_15 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)23637)) ? (((/* implicit */int) (short)17)) : (((/* implicit */int) (signed char)86))))))) ? (min((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_13 [i_1]) : (((/* implicit */long long int) 524256U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23638)) ? (((/* implicit */int) (short)23615)) : (((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) (signed char)-1)))))));
                    var_20 = ((/* implicit */unsigned int) min(((short)23637), ((short)17)));
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 4) 
                {
                    var_21 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_4 - 1] [i_4])) ? (arr_14 [i_4 - 1] [i_4 + 2] [i_4]) : (arr_14 [i_4] [i_4 - 1] [i_4])))) ? (max((arr_14 [i_0] [i_4 + 2] [i_4 + 1]), (arr_14 [i_4] [i_4 + 1] [i_4 - 1]))) : (max((arr_14 [i_0] [i_4 + 1] [i_4]), (((/* implicit */long long int) 3281715731U)))));
                    var_22 = ((/* implicit */_Bool) max(((+(arr_2 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((9559404627127859049ULL), (((/* implicit */unsigned long long int) (unsigned char)127))))) ? (arr_18 [i_4] [i_4] [i_4 + 1] [i_4 - 1]) : (((/* implicit */int) arr_6 [i_1 + 3])))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_26 [i_5] [i_5] [i_1] [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0]))));
                                var_23 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_20 [i_1 + 4] [i_1] [i_1] [i_4 - 1] [i_6 + 1] [i_0])) ? (((/* implicit */int) arr_20 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_4 - 1] [i_6 + 1] [i_0])) : (((/* implicit */int) (short)0))))));
                                arr_27 [i_0] [i_5] [i_4] [i_5] [i_6 + 1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_6 + 1] [i_5] [i_1])) ? (((/* implicit */long long int) arr_7 [i_0] [i_1 + 4] [i_4])) : (((((/* implicit */_Bool) (-(arr_17 [i_0] [i_0])))) ? (arr_1 [i_1 + 2] [i_5]) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_4]))) : (134086656LL)))))));
                                var_24 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                            }
                        } 
                    } 
                    var_25 &= ((/* implicit */short) arr_0 [i_1 + 4]);
                }
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (int i_9 = 2; i_9 < 7; i_9 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_7])) ? (arr_29 [i_0] [i_0] [i_0]) : (arr_29 [i_8] [i_1] [i_7])));
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_9 - 2] [i_1] [i_7] [i_7])) ? (((/* implicit */int) arr_22 [i_9 - 1] [i_9 - 1] [i_8] [i_9 - 1])) : (((/* implicit */int) arr_22 [i_9 + 2] [i_1 + 3] [i_7] [i_8]))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (+(arr_32 [i_1] [i_1 + 3] [i_1] [i_1] [i_1 - 1] [i_7]))))));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 4; i_10 < 8; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((((/* implicit */_Bool) 136365211648LL)) ? (((/* implicit */long long int) 0)) : (arr_28 [i_0] [i_0] [i_0] [i_10 + 2]))) : (((((/* implicit */_Bool) 192731086)) ? (arr_36 [i_10] [i_1] [i_1] [i_1] [i_1 + 4] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)23645)))))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_1 + 4] [i_1 + 2] [i_1])) ? (arr_8 [i_0] [i_1] [i_1 + 4] [i_1 - 1]) : (arr_21 [i_1] [i_1 - 1] [i_1] [i_1 + 4]))))));
                    }
                    for (long long int i_11 = 1; i_11 < 7; i_11 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            arr_44 [i_11] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_11] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_11] [i_12]))) : (0ULL))));
                            var_31 = ((/* implicit */_Bool) (+(arr_39 [i_12] [i_7] [i_1 + 2] [i_0])));
                        }
                        var_32 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_25 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_7] [i_7] [i_7] [i_7] [i_7]))) : (arr_23 [i_0] [i_1] [i_1] [i_0])))));
                        arr_45 [i_11] [i_1 + 2] [i_11] [i_11] [i_7] = ((/* implicit */_Bool) arr_30 [i_0] [i_11] [i_7] [i_11]);
                        arr_46 [i_1 + 2] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_11 - 1] [i_11 + 3] [i_11 + 1] [i_11])) ? (((/* implicit */int) arr_31 [i_11 + 2] [i_11 + 2] [i_11 + 3] [i_11])) : (((/* implicit */int) arr_31 [i_11 + 1] [i_11] [i_11 + 2] [i_11]))));
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23637)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_25 [i_7]))))) ? ((-(-3560289795160678145LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2])))))));
                    }
                    for (long long int i_13 = 1; i_13 < 7; i_13 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_13] [i_1 + 1] [i_1 + 1] [i_13] [i_13 + 1] [i_1 + 1])) ? ((-(63050394783186944ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_7] [i_1] [i_0])) ? (arr_17 [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0]))))))));
                        arr_50 [i_0] [i_13] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13])) ? (((long long int) 0)) : (((/* implicit */long long int) ((unsigned int) arr_31 [i_0] [i_0] [i_0] [i_0])))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_15 = 4; i_15 < 6; i_15 += 4) 
                    {
                        var_35 *= ((/* implicit */unsigned int) (short)-23638);
                        arr_58 [i_15] [i_14] [i_1 + 3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-23645))))) ? (arr_1 [i_14] [i_0]) : (((/* implicit */long long int) (~(0))))));
                        arr_59 [i_0] [i_0] [i_0] = 54043195528445952ULL;
                    }
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        arr_63 [i_0] [i_0] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_29 [i_1 + 2] [i_14] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_1])))))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (18392700878181105672ULL))) : (((/* implicit */unsigned long long int) arr_38 [i_1] [i_1 + 4] [i_0] [i_16]))));
                        arr_64 [i_16] [i_16] [i_16] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_0] [i_1] [i_1 - 1] [i_14] [i_0] [i_14])) ? (arr_33 [i_0] [i_1] [i_1 + 2] [i_0] [i_14] [i_16]) : (arr_33 [i_1] [i_1] [i_1 + 4] [i_16] [i_14] [i_14])));
                    }
                    arr_65 [i_0] [i_1] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_1 + 4] [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_0])) ? (((/* implicit */int) (short)-23619)) : (((/* implicit */int) arr_20 [i_0] [i_1 + 2] [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_14]))));
                }
                for (unsigned char i_17 = 0; i_17 < 10; i_17 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_1 + 1])) ? (((/* implicit */int) arr_22 [i_1 - 1] [i_1 + 2] [i_17] [i_17])) : (((/* implicit */int) arr_22 [i_1 + 1] [i_1 + 1] [i_18] [i_17]))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (-2147483647 - 1))), (-1LL)))) ? (arr_33 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0]))))));
                        arr_70 [i_0] [i_0] [i_0] = (~(min((arr_29 [i_0] [i_1] [i_17]), (arr_29 [i_17] [i_1 + 3] [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 3; i_19 < 8; i_19 += 1) 
                    {
                        for (long long int i_20 = 0; i_20 < 10; i_20 += 1) 
                        {
                            {
                                arr_76 [i_0] [i_20] = ((/* implicit */signed char) arr_33 [i_19 - 1] [i_19] [i_19] [i_19 - 1] [i_19 - 1] [i_19 - 1]);
                                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_20] [i_1] [i_1 + 4] [i_20])) ? (((/* implicit */long long int) arr_53 [i_20] [i_1 + 1] [i_0])) : (arr_38 [i_20] [i_1 - 1] [i_1 - 1] [i_20])))) ? ((-(arr_38 [i_20] [i_20] [i_1 + 3] [i_20]))) : ((-(arr_38 [i_20] [i_20] [i_1 + 3] [i_20])))));
                                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_20])))) ? (arr_4 [i_1 + 4] [i_1]) : (arr_61 [i_17] [i_1 + 3] [i_17] [i_0] [i_19 - 1])))) ? ((-(((/* implicit */int) arr_47 [i_19 - 2] [i_20] [i_20] [i_19 + 2])))) : (((/* implicit */int) arr_35 [i_20] [i_0] [i_0] [i_1] [i_0]))));
                                var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), ((-(min((arr_32 [i_0] [i_1 + 2] [i_17] [i_19] [i_1 + 2] [i_20]), (((/* implicit */unsigned long long int) arr_74 [i_20] [i_0] [i_17] [i_19] [i_20])))))))))));
                            }
                        } 
                    } 
                    arr_77 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) min((arr_37 [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_37 [i_1 + 4] [i_1 + 1] [i_1 + 2] [i_1 + 3])))) ? ((+(0))) : (((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1))))));
                }
                /* LoopSeq 1 */
                for (long long int i_21 = 0; i_21 < 10; i_21 += 4) 
                {
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 705304571)) ? (arr_23 [i_0] [i_1] [i_21] [i_0]) : (((/* implicit */long long int) arr_2 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_1 - 1] [i_21])) ? (arr_23 [i_0] [i_0] [i_1] [i_21]) : (arr_23 [i_0] [i_21] [i_21] [i_21])))));
                    var_41 |= ((/* implicit */signed char) ((arr_5 [i_1 + 2] [i_1 + 3]) ? (((/* implicit */int) min((arr_5 [i_1 + 2] [i_1 + 3]), (arr_5 [i_1 + 3] [i_1 + 4])))) : (((/* implicit */int) min((arr_5 [i_1 + 1] [i_1 + 2]), (arr_5 [i_1 + 3] [i_1 - 1]))))));
                }
                var_42 = ((/* implicit */int) min((var_42), ((-(((/* implicit */int) arr_54 [i_1 + 1]))))));
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned int) ((signed char) min(((-(var_9))), (((/* implicit */unsigned int) var_6)))));
    /* LoopNest 3 */
    for (signed char i_22 = 0; i_22 < 19; i_22 += 2) 
    {
        for (signed char i_23 = 0; i_23 < 19; i_23 += 4) 
        {
            for (unsigned int i_24 = 4; i_24 < 18; i_24 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_25 = 0; i_25 < 19; i_25 += 3) /* same iter space */
                    {
                        arr_92 [i_22] [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_91 [i_22] [i_22] [i_24 - 2] [i_25] [i_25] [i_25])) ? (((((/* implicit */_Bool) arr_91 [i_22] [i_22] [i_24 - 3] [i_24 - 1] [i_24] [i_24])) ? (arr_91 [i_23] [i_23] [i_24 - 1] [i_25] [i_25] [i_25]) : (arr_91 [i_22] [i_22] [i_24 - 3] [i_24 + 1] [i_24 - 3] [i_25]))) : (max((arr_91 [i_24 + 1] [i_24] [i_24 - 2] [i_25] [i_25] [i_25]), (arr_91 [i_22] [i_22] [i_24 - 1] [i_25] [i_22] [i_25])))));
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_91 [i_22] [i_22] [i_23] [i_24 - 2] [i_24] [i_25])) ? (((/* implicit */unsigned long long int) (-(6627016592152979332LL)))) : (((unsigned long long int) arr_88 [i_23] [i_23] [i_23] [i_23] [i_24 - 3]))));
                    }
                    for (signed char i_26 = 0; i_26 < 19; i_26 += 3) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_88 [i_24] [i_24 - 3] [i_24] [i_26] [i_26]))))) ? ((+(((/* implicit */int) arr_88 [i_24] [i_24 - 1] [i_24 + 1] [i_26] [i_26])))) : (((/* implicit */int) arr_88 [i_23] [i_24 + 1] [i_26] [i_26] [i_26]))));
                        arr_96 [i_22] [i_22] [i_26] [i_26] [i_23] &= ((/* implicit */short) min((((/* implicit */long long int) arr_81 [i_24 - 4] [i_24 - 3])), (min((arr_90 [i_24 - 2]), (((/* implicit */long long int) arr_85 [i_24] [i_24 - 3] [i_24 + 1] [i_24 + 1]))))));
                    }
                    arr_97 [i_24] [i_24] [i_24] = ((/* implicit */short) min((max((arr_89 [i_24] [i_24] [i_24 - 2] [i_24 - 2] [i_24 - 3] [i_24 - 1]), (((/* implicit */long long int) ((short) 4294967295U))))), (((((/* implicit */_Bool) arr_89 [i_24] [i_22] [i_23] [i_23] [i_22] [i_22])) ? (arr_89 [i_23] [i_23] [i_23] [i_24 - 3] [i_24 - 3] [i_22]) : (arr_89 [i_22] [i_22] [i_22] [i_23] [i_23] [i_23])))));
                    arr_98 [i_23] [i_23] = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */long long int) ((/* implicit */int) arr_88 [i_24] [i_24 - 1] [i_23] [i_23] [i_22]))) : (arr_89 [i_23] [i_24] [i_24] [i_22] [i_23] [i_22])))) ? (((/* implicit */long long int) (~(arr_94 [i_22])))) : (min((arr_90 [i_23]), (arr_89 [i_22] [i_23] [i_23] [i_24] [i_24] [i_24])))));
                    var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_87 [i_24 - 2] [i_24 + 1] [i_24 - 1]), (arr_87 [i_24 - 4] [i_24 - 3] [i_24 + 1])))) ? ((-(arr_87 [i_24 - 4] [i_24 + 1] [i_24 - 2]))) : (576460752301326336LL)));
                }
            } 
        } 
    } 
}
