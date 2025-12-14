/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48882
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
    var_17 = ((((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))) == (((/* implicit */int) (((~(((/* implicit */int) var_10)))) < (((/* implicit */int) var_14))))));
    var_18 = ((/* implicit */short) ((var_11) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)25)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) 267911168U);
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) 1391921793)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_7))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [11ULL]))))))) / (((/* implicit */unsigned int) max((((((/* implicit */int) (short)21415)) * (((/* implicit */int) var_11)))), (((((/* implicit */int) (short)-21409)) / (((/* implicit */int) (_Bool)1)))))))));
                            var_20 *= ((/* implicit */unsigned long long int) arr_4 [i_4]);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_5 = 3; i_5 < 17; i_5 += 4) 
            {
                arr_17 [i_1] [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                arr_18 [5LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_5])))))) ? (arr_14 [i_0] [i_0 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (short)-21409))));
                    var_22 ^= ((/* implicit */_Bool) ((unsigned char) arr_3 [i_5 + 2]));
                }
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_25 [i_8] [i_7] [i_5] [i_7] [12LL] |= ((/* implicit */signed char) var_0);
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_4))));
                            var_24 = ((/* implicit */unsigned char) arr_7 [10ULL] [i_1] [i_0] [i_8]);
                            var_25 = ((/* implicit */unsigned long long int) 536870912U);
                            arr_26 [i_0] [(short)19] [i_5 - 1] [i_5 - 1] [i_5 - 1] = ((/* implicit */long long int) ((arr_7 [i_8] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [i_0] [i_8 - 1])) : (((/* implicit */int) arr_7 [i_0 - 2] [i_0 + 4] [i_0] [16LL]))));
                        }
                    } 
                } 
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_26 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_10 [i_0]) << (((arr_10 [i_0]) - (1328446965U))))))))) : (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_10 [i_0]) << (((((arr_10 [i_0]) - (1328446965U))) - (2305488808U)))))))));
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((unsigned long long int) var_15)))));
                /* LoopSeq 3 */
                for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_22 [(short)0] [i_0 + 3] [i_0 - 1] [i_0]))));
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_2 [4LL] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))))));
                    var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)1)) * (var_3)))))));
                }
                for (short i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
                {
                    arr_35 [i_0 + 3] [i_0] [i_0 + 3] = ((/* implicit */long long int) ((min(((~(((/* implicit */int) arr_13 [i_0] [i_0 + 1] [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_12)))))) < (((/* implicit */int) (!((_Bool)1))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        arr_39 [i_0] [14LL] [i_0 - 1] [i_0 - 1] [i_0] [i_0] = ((unsigned int) (-(var_1)));
                        var_31 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (var_7))) << (((((/* implicit */_Bool) arr_31 [i_0] [i_1] [4ULL] [4ULL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)21409))))));
                        var_32 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0 + 1])))));
                    }
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        var_33 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_32 [i_13] [(_Bool)1] [(unsigned short)1] [i_0] [i_13])) ? (arr_32 [i_0] [i_1] [i_1 - 1] [i_0] [i_0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((signed char) arr_34 [i_0] [i_13])))));
                    }
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        arr_46 [i_0] [i_11] = ((/* implicit */unsigned int) ((long long int) ((unsigned short) var_14)));
                        var_35 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60))) >= (4027056128U)))) << (((/* implicit */int) ((var_13) || ((_Bool)1))))))));
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) max((((signed char) ((((/* implicit */unsigned long long int) 4027056127U)) / (arr_14 [i_0] [i_9] [i_9])))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) var_16)))))))))));
                    }
                    arr_47 [(unsigned char)2] [i_1] [i_1] [i_11] |= ((/* implicit */unsigned short) ((var_11) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (((unsigned int) var_10))))) : (((((/* implicit */int) max(((unsigned char)211), (((/* implicit */unsigned char) var_0))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                }
                for (short i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */short) 134201344U);
                    arr_51 [i_0] [i_0] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_49 [i_1] [i_15]), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4160765966U)) || (((/* implicit */_Bool) arr_33 [i_9]))))) : (((/* implicit */int) ((var_3) < (((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_0])))))))) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_7)) : (((arr_27 [i_0] [i_1 + 1] [i_9]) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [12U] [i_9] [i_15])))))))));
                    var_38 = ((/* implicit */long long int) ((short) min((max((arr_34 [i_15] [i_0]), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((_Bool) arr_44 [14ULL] [14ULL]))))));
                    var_39 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_40 [i_0] [i_0] [i_9] [i_15])) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_0)) * (((/* implicit */int) var_5)))))) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */int) arr_15 [i_15] [i_0] [i_1] [i_0]))))) && (((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_41 [i_0] [i_0] [i_0] [i_15] [i_0] [i_9]))))))))));
                }
            }
            for (unsigned char i_16 = 1; i_16 < 18; i_16 += 4) 
            {
                arr_54 [i_0] [i_1] [17U] = ((/* implicit */signed char) (+(((/* implicit */int) min((((unsigned char) (short)-21405)), (arr_53 [i_0 + 3]))))));
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    for (unsigned char i_18 = 0; i_18 < 20; i_18 += 1) 
                    {
                        {
                            var_40 += ((/* implicit */signed char) (((+(((/* implicit */int) arr_37 [i_0 + 2] [i_1] [i_16] [i_17] [i_18])))) / (((arr_55 [i_0 + 2] [i_1 - 1] [i_16 + 2] [i_17]) ? (((/* implicit */int) ((_Bool) arr_29 [i_0] [i_17] [i_0] [i_0]))) : ((+(((/* implicit */int) arr_37 [i_16] [i_17] [i_16] [i_1] [i_0]))))))));
                            var_41 = ((/* implicit */unsigned char) arr_48 [i_0] [i_0] [i_16] [i_0] [i_17] [i_18]);
                        }
                    } 
                } 
                arr_60 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (short)21415)) ? (((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_0 + 3])) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((/* implicit */int) ((((var_3) / (((/* implicit */int) arr_23 [i_0] [(signed char)15] [i_0] [i_0] [i_16] [i_16] [i_16])))) == (((/* implicit */int) ((short) arr_10 [i_0]))))))));
            }
            arr_61 [i_0] [i_0] [i_0] = 36028797010575360LL;
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 20; i_19 += 2) 
            {
                for (long long int i_20 = 3; i_20 < 19; i_20 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            arr_68 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (arr_32 [i_0 + 3] [(_Bool)1] [i_19] [i_0] [9ULL]) : (((/* implicit */unsigned int) var_3)))) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_55 [i_19] [i_1 + 1] [i_1 + 1] [i_0])))))))) ? (((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0] [i_0 - 1])))) : (((/* implicit */int) arr_28 [i_0 - 2] [i_20 + 1])))) : (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_10)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [0] [(_Bool)1] [i_21])))) : (((/* implicit */int) ((unsigned char) var_3)))))));
                            arr_69 [(signed char)17] [(signed char)17] [(_Bool)1] [(signed char)17] [i_0] [(signed char)17] [(_Bool)1] = arr_24 [i_0] [i_1] [i_19] [i_20] [i_20] [i_21];
                        }
                        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_1] [i_19] [i_19] [i_19]))))) ? (((/* implicit */int) ((4270909768513935848ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_16)))))))) : (((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned char)32)))))))));
                        var_43 &= (((~(((/* implicit */int) ((signed char) arr_33 [i_0]))))) / (((((/* implicit */int) var_6)) ^ (((arr_62 [i_19] [i_1] [i_19] [i_19]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14)))))));
                    }
                } 
            } 
        }
        var_44 = ((/* implicit */unsigned int) arr_21 [i_0] [i_0]);
        var_45 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) >= (((unsigned int) 16625352234639683037ULL)))))));
    }
    for (unsigned char i_22 = 0; i_22 < 11; i_22 += 4) 
    {
        arr_72 [i_22] = ((/* implicit */unsigned long long int) ((_Bool) (-(var_4))));
        arr_73 [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-36028797010575354LL), (((/* implicit */long long int) arr_10 [i_22]))))) ? (((arr_10 [i_22]) / (arr_10 [i_22]))) : (((/* implicit */unsigned int) ((var_3) ^ (((/* implicit */int) var_8)))))));
        var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) << (((((((/* implicit */_Bool) arr_15 [i_22] [i_22] [i_22] [i_22])) ? (1065353216U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_22] [i_22] [(unsigned char)19] [i_22] [i_22] [i_22]))))) - (1065353214U)))));
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_24 = 0; i_24 < 13; i_24 += 1) 
        {
            for (int i_25 = 0; i_25 < 13; i_25 += 4) 
            {
                for (unsigned int i_26 = 0; i_26 < 13; i_26 += 4) 
                {
                    {
                        var_47 = ((/* implicit */unsigned char) arr_58 [i_26] [i_26] [i_23] [(unsigned char)17] [i_23] [i_23] [i_23]);
                        var_48 = ((/* implicit */_Bool) max((var_48), (arr_80 [i_26] [i_24] [i_25] [i_26])));
                    }
                } 
            } 
        } 
        arr_84 [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)240))))), ((+(arr_50 [i_23] [i_23] [i_23] [i_23])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46))) : (((max((arr_81 [i_23] [i_23] [i_23] [(unsigned short)8]), (((/* implicit */unsigned long long int) var_0)))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_23] [1LL] [i_23] [i_23])) << (((((/* implicit */int) arr_40 [i_23] [i_23] [i_23] [i_23])) + (31))))))))));
    }
    for (long long int i_27 = 0; i_27 < 14; i_27 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_28 = 0; i_28 < 14; i_28 += 2) 
        {
            var_49 *= ((/* implicit */unsigned char) var_3);
            arr_90 [(unsigned char)10] [i_27] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_2)), (arr_64 [15U] [i_28] [i_28] [15U] [i_28])))) ? (min((((/* implicit */long long int) (unsigned char)185)), (var_4))) : (((/* implicit */long long int) arr_6 [i_28]))))) ? (((/* implicit */long long int) (+(735432409U)))) : (arr_0 [i_27] [i_27])));
        }
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 14; i_29 += 2) 
        {
            for (long long int i_30 = 2; i_30 < 12; i_30 += 2) 
            {
                for (unsigned long long int i_31 = 2; i_31 < 10; i_31 += 1) 
                {
                    {
                        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) (-(((/* implicit */int) arr_98 [i_27] [i_29] [i_27] [i_29])))))));
                        var_51 = ((/* implicit */int) arr_9 [i_31 + 1] [i_30] [i_30 + 1] [i_29] [i_27] [12ULL]);
                        var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) arr_33 [i_31 + 1]))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
    {
        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
        {
            for (unsigned short i_34 = 0; i_34 < 24; i_34 += 2) 
            {
                {
                    var_53 = ((/* implicit */signed char) var_3);
                    /* LoopNest 2 */
                    for (unsigned char i_35 = 0; i_35 < 24; i_35 += 4) 
                    {
                        for (unsigned char i_36 = 0; i_36 < 24; i_36 += 2) 
                        {
                            {
                                arr_115 [i_32] [i_32] [i_32] [i_32] [i_32] [i_36] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) max(((_Bool)1), (var_11))))))) <= (((((((/* implicit */_Bool) arr_109 [i_32])) ? (arr_105 [i_32] [i_32] [i_35] [i_32]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) << (((((6611481029879687550ULL) >> (((2299704047415069989LL) - (2299704047415069983LL))))) - (103304391091870087ULL)))))));
                                arr_116 [i_32] [i_32] [i_32] [i_32] [i_32] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) max((var_10), (((/* implicit */short) arr_114 [i_34] [i_33] [i_34] [i_35] [i_33])))))) ? (min((((/* implicit */unsigned long long int) arr_101 [i_33])), (arr_113 [i_32]))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)162)), (((var_3) / (((/* implicit */int) var_12)))))))));
                                arr_117 [i_32] [i_33] [9] [i_32] [i_36] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (4506148278908685899ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : (arr_105 [i_32] [i_32] [i_32] [i_32]))), (arr_105 [i_32] [i_32] [i_32] [i_32])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
