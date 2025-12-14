/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48277
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */int) (short)-1538))));
        var_14 = ((/* implicit */int) ((((((/* implicit */long long int) (-(1628177260U)))) - (((long long int) (unsigned char)245)))) + (((/* implicit */long long int) (-(1628177260U))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((2666790036U), (((/* implicit */unsigned int) var_9))))) ? (((unsigned long long int) 2666790065U)) : (((/* implicit */unsigned long long int) ((long long int) 1628177271U)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 8; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_3] [i_3 + 1] = ((/* implicit */int) 2666790030U);
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1956932457)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)208)) && (((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_3])) ? (((/* implicit */int) (signed char)-121)) : (2065227245)))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            {
                                var_17 ^= ((((/* implicit */_Bool) 2666790043U)) ? (arr_6 [i_2 - 4] [6]) : (((/* implicit */int) var_8)));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_4 - 1])) && (((/* implicit */_Bool) 2666790065U))));
                                arr_17 [i_5] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */signed char) var_3);
                                var_19 -= ((/* implicit */long long int) (~(arr_13 [i_1])));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_2 + 3] [i_4 - 2] [i_2 + 3] [i_4] [i_4])) ? (((int) var_3)) : (arr_16 [i_2 - 3] [i_2 + 3] [i_2 + 3] [i_2 - 4] [i_3 + 1] [i_4 - 1] [i_4 - 2])));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)58667)) ? (3689248048846544598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_7 = 2; i_7 < 7; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 3; i_8 < 8; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            {
                                var_23 -= ((/* implicit */long long int) var_11);
                                var_24 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) 2065227245)))));
                                var_25 = ((/* implicit */unsigned int) var_10);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) var_11);
                            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-20620))));
                            var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_8] [i_6]))));
                            arr_35 [i_6] [i_8] [i_6] [i_11] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6] [i_7 - 1] [i_8] [i_11])) ? (778250783) : (((/* implicit */int) arr_33 [7ULL] [i_8] [i_7 + 2] [i_8 - 2] [i_11] [i_8]))));
                            arr_36 [i_8] = ((/* implicit */unsigned int) ((unsigned short) arr_25 [i_6] [i_8]));
                        }
                        var_29 = ((/* implicit */int) (~(((3797190697U) - (1628177252U)))));
                        arr_37 [i_6] [i_7] [i_8] [i_11] = ((/* implicit */signed char) arr_32 [i_8 + 2] [i_7 + 4] [(signed char)8] [i_6] [(signed char)8] [i_11]);
                        var_30 = ((/* implicit */unsigned long long int) var_7);
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                    {
                        arr_40 [i_8] = ((/* implicit */long long int) 2666790065U);
                        var_31 = ((/* implicit */unsigned long long int) (~(2666790036U)));
                    }
                    arr_41 [i_6] [i_8] [i_8 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_7 - 2] [i_8 - 3])) && (((/* implicit */_Bool) 1628177276U))));
                }
            } 
        } 
        var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 0ULL)))) & (((((/* implicit */long long int) ((/* implicit */int) (signed char)-101))) ^ (9223372036854775800LL)))));
        var_33 = ((/* implicit */short) max((var_33), (arr_33 [i_6] [10U] [i_6] [i_6] [10U] [i_6])));
        var_34 = ((/* implicit */unsigned int) min((((/* implicit */long long int) 1628177285U)), (((long long int) ((2666790068U) | (1628177259U))))));
    }
    /* LoopNest 2 */
    for (signed char i_14 = 0; i_14 < 13; i_14 += 2) 
    {
        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_16 = 1; i_16 < 12; i_16 += 3) 
                {
                    var_35 = ((((/* implicit */_Bool) arr_43 [i_14] [i_15])) ? (((/* implicit */unsigned long long int) (-(arr_52 [i_16 + 1] [i_16] [i_16 - 1])))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (2666790088U)))), ((+(var_6))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 13; i_17 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 2) 
                        {
                            var_36 = ((/* implicit */unsigned int) var_11);
                            var_37 = ((/* implicit */unsigned char) min((((arr_56 [i_16 + 1] [i_15] [i_16] [i_15] [i_18] [i_18] [i_16 + 1]) / (arr_57 [i_16 - 1] [i_15] [i_16] [i_17] [i_18]))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_8)))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_19 = 0; i_19 < 13; i_19 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned int) arr_51 [i_15] [i_16] [i_16] [i_16 - 1]);
                            var_39 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_54 [6] [6] [i_16] [i_16 + 1] [i_15] [i_17])));
                            arr_62 [8ULL] [i_15] [(unsigned char)7] [i_15] [i_19] [i_19] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_13)))) | (arr_55 [i_14])));
                        }
                        var_40 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_53 [i_14] [i_15] [i_16] [i_14])), (((((/* implicit */_Bool) arr_59 [i_15] [i_16] [i_15] [i_16 - 1] [i_16 - 1])) ? ((~(202409937))) : (((/* implicit */int) (signed char)91))))));
                    }
                    arr_63 [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_7))) == (((((/* implicit */_Bool) var_5)) ? (arr_60 [i_14] [(_Bool)1] [2] [i_14] [i_16]) : (var_3))))))) == (max((((unsigned int) var_2)), (((/* implicit */unsigned int) ((short) var_6)))))));
                    arr_64 [i_16 - 1] [i_15] [i_14] [i_14] = ((/* implicit */unsigned long long int) var_7);
                }
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_21 = 4; i_21 < 10; i_21 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_22 = 1; i_22 < 10; i_22 += 2) 
                        {
                            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [9U] [i_15] [i_14] [i_15] [i_14]))))))));
                            arr_72 [i_15] [i_22] = ((/* implicit */long long int) ((unsigned char) arr_68 [5ULL] [i_22 + 1] [i_20 - 1] [i_21 - 1] [(signed char)0]));
                        }
                        for (int i_23 = 0; i_23 < 13; i_23 += 2) 
                        {
                            var_42 = ((unsigned int) arr_52 [i_20 - 1] [i_15] [i_20]);
                            var_43 |= ((/* implicit */long long int) ((arr_57 [i_15] [0U] [i_15] [i_20 - 1] [i_21 + 1]) | (arr_57 [i_14] [i_14] [i_14] [i_20 - 1] [i_21 - 2])));
                            var_44 -= ((/* implicit */short) (+(9223372036854775805LL)));
                            arr_75 [i_14] = ((/* implicit */unsigned long long int) (-(((long long int) arr_67 [i_21 - 1]))));
                        }
                        for (unsigned char i_24 = 0; i_24 < 13; i_24 += 1) 
                        {
                            var_45 = ((/* implicit */long long int) (+(arr_77 [i_14] [i_20 - 1] [0] [i_21] [i_21 - 4])));
                            arr_78 [i_14] = ((/* implicit */unsigned long long int) arr_60 [i_15] [i_15] [i_15] [i_15] [i_15]);
                        }
                        var_46 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_68 [i_21 - 3] [i_15] [i_20 - 1] [i_21 + 2] [i_15])) : (((/* implicit */int) var_1)));
                        var_47 = ((/* implicit */long long int) arr_49 [0]);
                        /* LoopSeq 1 */
                        for (unsigned int i_25 = 2; i_25 < 12; i_25 += 1) 
                        {
                            var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) (!(((/* implicit */_Bool) ((int) 2147483642))))))));
                            var_49 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (arr_79 [10] [10] [i_15] [i_20 - 1] [i_21 - 2] [9ULL])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 3) 
                        {
                            arr_83 [i_14] [i_15] [i_15] [(signed char)7] [12ULL] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_20] [i_20] [i_20 - 1])) ? (2993837281099291660ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52)))));
                            var_50 = ((int) 1126571410);
                        }
                    }
                    arr_84 [i_15] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)59)), (arr_76 [10U] [i_15] [i_20 - 1])))) && (((/* implicit */_Bool) arr_77 [i_20 - 1] [(short)2] [i_15] [i_15] [i_14])))));
                    arr_85 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (+(0ULL)))) ? (2993837281099291658ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_20 - 1] [i_20 - 1] [i_14] [1ULL] [i_15] [i_15] [i_14])) && (((/* implicit */_Bool) 2993837281099291658ULL)))))))));
                }
                for (unsigned short i_27 = 0; i_27 < 13; i_27 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_28 = 0; i_28 < 13; i_28 += 1) 
                    {
                        arr_92 [i_27] [i_15] [i_27] [i_28] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_82 [i_27])), (2666790005U)))), (7ULL))) | (18446744073709551615ULL)));
                        var_51 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) -823950826)) | (4421102271453650789ULL))) == (((/* implicit */unsigned long long int) arr_91 [i_14] [i_14] [i_15] [i_27] [i_27]))));
                        var_52 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 2095973379U)) ? (((/* implicit */int) ((signed char) arr_81 [i_14] [i_15] [i_27] [i_27] [i_28]))) : (((/* implicit */int) ((2555993637U) == (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                    }
                    /* vectorizable */
                    for (short i_29 = 3; i_29 < 12; i_29 += 3) 
                    {
                        var_53 ^= (!(((/* implicit */_Bool) var_10)));
                        arr_95 [i_15] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_90 [i_14] [i_15] [i_27])) - (arr_79 [i_29 + 1] [i_29 + 1] [i_29 + 1] [i_29 + 1] [i_29] [i_29 + 1])));
                        var_54 = ((/* implicit */int) ((signed char) arr_90 [i_15] [i_15] [i_27]));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_30 = 2; i_30 < 10; i_30 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_31 = 3; i_31 < 12; i_31 += 3) 
                        {
                            arr_102 [i_14] [i_27] [i_27] [i_14] [i_31] = ((/* implicit */int) ((((/* implicit */_Bool) 3432848404U)) ? (((((/* implicit */_Bool) 477643860446938605ULL)) ? (-9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 4294967295U))))));
                            var_55 = ((/* implicit */unsigned long long int) min((var_55), (min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) max((-1511551924), (((/* implicit */int) (unsigned char)169))))) ? (((/* implicit */unsigned long long int) 2666790088U)) : (17969100213262613008ULL)))))));
                            var_56 = ((/* implicit */signed char) var_5);
                            arr_103 [i_14] [i_15] [i_27] [i_27] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_55 [i_31])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)4)))) == (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551596ULL)) && (((/* implicit */_Bool) (unsigned char)144)))))));
                            arr_104 [i_14] [i_14] [i_27] [i_30 + 2] [i_27] [i_27] = (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)29413))))));
                        }
                        arr_105 [i_27] [i_30] [i_27] [i_27] [i_15] [i_14] = ((/* implicit */int) 9223372036854775805LL);
                    }
                    var_57 = ((/* implicit */short) (~(((((/* implicit */int) var_8)) >> (((max((((/* implicit */unsigned int) (_Bool)1)), (2666790044U))) - (2666790022U)))))));
                }
                var_58 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_90 [i_15] [i_15] [i_14])) : (min((((/* implicit */unsigned long long int) (short)7075)), (max((arr_87 [i_15] [(_Bool)1]), (((/* implicit */unsigned long long int) 3797190678U))))))));
            }
        } 
    } 
}
