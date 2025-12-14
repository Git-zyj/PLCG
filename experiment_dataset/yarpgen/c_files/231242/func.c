/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231242
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
    var_14 = var_7;
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_15 = max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)210))))) ? (((/* implicit */int) max(((unsigned short)61753), (((/* implicit */unsigned short) (unsigned char)232))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_11))))))));
            /* LoopSeq 4 */
            for (unsigned char i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) arr_2 [i_2 - 1] [i_2 + 4] [i_0 - 2])), (((((/* implicit */_Bool) (unsigned short)3783)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))) : (var_13))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0 + 1])) + (((/* implicit */int) (unsigned short)740))))))))));
                arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (((-((~(var_12))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_2 + 1])) - (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_5 [i_0] [i_0] [i_2 + 4])))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (short i_4 = 1; i_4 < 8; i_4 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_14 [i_4 + 3] [i_0] [i_2 - 1] [i_1] [(short)4] [i_0] [i_0 - 1])))), (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (signed char)-123))))))));
                            arr_17 [i_4] [i_0] [i_4] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */int) (unsigned short)28672);
                        }
                    } 
                } 
            }
            for (unsigned short i_5 = 4; i_5 < 9; i_5 += 4) 
            {
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)135);
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    arr_26 [i_0] [i_0] [(short)5] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)718)), (3656045967265284533ULL)));
                    var_17 -= ((/* implicit */int) min((min((((((/* implicit */_Bool) arr_12 [i_0] [i_5] [(short)0])) ? (arr_20 [i_0] [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [(unsigned short)10] [i_6] [i_6] [i_6]))))), (((((/* implicit */_Bool) (unsigned short)740)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_6] [i_5] [i_6]))) : (var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_6] [i_5] [i_5 + 1] [i_5 + 1] [i_0] [i_5] [i_0])) ? (((/* implicit */int) arr_14 [(short)6] [i_1] [i_1] [(short)6] [i_5 + 1] [i_6] [i_6])) : (((/* implicit */int) arr_14 [2ULL] [i_6] [i_5 + 2] [i_0 + 2] [i_5 + 2] [i_6] [i_6])))))));
                    arr_27 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned char) var_4);
                    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) var_5)))))), (var_2)));
                }
                var_19 = ((/* implicit */signed char) (~(min((var_10), (((/* implicit */unsigned long long int) arr_8 [i_0 - 1]))))));
                var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_5 - 2] [i_0] [i_5 - 1] [i_0 - 2]))));
            }
            for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    arr_32 [i_0 + 2] [i_0 + 2] [i_0] [i_7] [i_8] = (+(var_10));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) max((var_21), ((-(((/* implicit */int) (short)-31410))))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64795))) : (var_0)))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_13))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_0] [i_0] = ((/* implicit */unsigned short) min((max((((((/* implicit */int) var_11)) & (((/* implicit */int) var_11)))), (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [0]))))) ? (arr_21 [i_0 + 1] [i_0 - 2] [i_0 + 2]) : ((~(((/* implicit */int) arr_1 [i_8]))))))));
                        arr_39 [i_0] [i_0] = (((-(((/* implicit */int) ((unsigned short) arr_37 [i_10] [(unsigned char)9] [i_8] [(unsigned short)10] [i_1] [i_0] [i_0]))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_11)))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [0ULL] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 1])) * (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))) != (((/* implicit */int) var_9))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_18 [i_0] [i_1] [(signed char)2]), ((short)29724)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (var_2))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_0 + 1] [i_1] [(signed char)5] [i_0 + 1] [i_0 + 2]))))))))));
                    }
                    arr_44 [i_0 + 1] [(signed char)9] [i_0] [(short)2] = ((/* implicit */_Bool) var_13);
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_3))));
                }
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        arr_51 [i_0] [i_0] = ((/* implicit */unsigned short) min((874181112231350510ULL), (((/* implicit */unsigned long long int) -437997676))));
                        var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((var_4) < (((/* implicit */int) var_1))))) >> (((((int) var_6)) - (1963499830))))) == (((/* implicit */int) arr_12 [i_0 - 2] [i_0] [i_0]))));
                        var_27 += ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((int) arr_34 [i_7] [i_7]))), (((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_11)) ? (-1) : (arr_21 [i_0] [i_1] [i_13]))))))));
                    }
                    for (int i_14 = 3; i_14 < 7; i_14 += 2) 
                    {
                        arr_55 [i_0] = (signed char)0;
                        var_28 = ((/* implicit */_Bool) ((unsigned long long int) min(((short)31421), (((short) var_8)))));
                        arr_56 [i_0] [i_0] [i_0] [i_12] [1ULL] [(unsigned char)9] = ((/* implicit */unsigned short) 2147483647);
                        arr_57 [i_0 + 1] [i_0 + 1] [i_7] [i_12] [i_0] [i_14 - 2] = ((/* implicit */signed char) max((((/* implicit */short) var_8)), (arr_19 [i_0])));
                    }
                    arr_58 [i_0] [i_1] [i_0] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23944)) && (((/* implicit */_Bool) (unsigned char)35)))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36849))) <= (var_13))))) + (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))))));
                    arr_59 [i_12] [i_0] [i_1] = ((/* implicit */int) (unsigned char)122);
                }
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)23)) * (((/* implicit */int) (unsigned short)27965))))), (var_13))))));
                arr_60 [i_0] [i_0] [i_7] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) var_9)) << (((((/* implicit */int) max((arr_10 [i_0 - 1] [i_0] [i_7] [i_7]), (arr_10 [i_0 + 2] [i_0] [i_7] [(signed char)9])))) - (196)))))) : (((/* implicit */short) ((((/* implicit */int) var_9)) << (((((((/* implicit */int) max((arr_10 [i_0 - 1] [i_0] [i_7] [i_7]), (arr_10 [i_0 + 2] [i_0] [i_7] [(signed char)9])))) - (196))) - (24))))));
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        {
                            arr_66 [i_0 - 2] [i_0] [i_16] [i_15] [i_15] [i_16] = ((/* implicit */short) (unsigned short)27350);
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((2251799545249792ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31410))))))));
                            arr_67 [i_7] |= ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)57336)), (max((((/* implicit */int) var_9)), (var_4)))));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_19 [(unsigned short)1]))));
                            arr_68 [(unsigned short)3] [i_1] [i_0] [i_1] [i_16] = var_12;
                        }
                    } 
                } 
                var_32 ^= ((/* implicit */short) (~((+(((((/* implicit */_Bool) (signed char)81)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36874)))))))));
            }
            for (int i_17 = 1; i_17 < 9; i_17 += 3) 
            {
                arr_71 [i_17] [i_0] [7] = ((/* implicit */_Bool) var_3);
                arr_72 [(signed char)10] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)35061))));
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 3) 
                {
                    arr_75 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_30 [i_17 + 1] [(unsigned short)3] [i_1] [i_0 - 1] [i_0 + 1] [2ULL])) | (((/* implicit */int) arr_30 [i_17 + 1] [6] [i_17] [i_0 + 1] [i_0 + 2] [(unsigned short)10])))));
                    arr_76 [i_17] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_33 [i_0]);
                }
            }
        }
        for (unsigned short i_19 = 0; i_19 < 11; i_19 += 3) 
        {
            arr_79 [i_0] [i_19] = ((/* implicit */short) ((var_13) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)33408)) != (((/* implicit */int) arr_64 [i_0] [i_0] [6] [i_19] [i_0 + 2])))))))));
            arr_80 [(unsigned short)2] [i_19] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_73 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0])), (((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0 + 1] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_0 + 2] [(short)4] [i_0 + 1] [(short)4] [(short)4] [i_0])))))));
        }
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 11; i_20 += 3) 
        {
            for (int i_21 = 0; i_21 < 11; i_21 += 2) 
            {
                {
                    arr_86 [(short)3] [i_0] = ((/* implicit */int) arr_28 [i_21] [i_20] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 11; i_22 += 4) 
                    {
                        for (unsigned short i_23 = 4; i_23 < 9; i_23 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (~((~((~(var_6))))))))));
                                arr_91 [2] [2] [i_23] [i_0] [i_22] [i_23] [i_20] = ((/* implicit */short) max((max((((/* implicit */int) arr_52 [i_0 - 1] [i_23 - 3] [i_21] [i_22])), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_23] [i_0] [i_23 - 2] [i_22] [(_Bool)0] [i_0] [i_22])))))));
                                arr_92 [i_0] [i_0] = ((/* implicit */short) (+((-(((/* implicit */int) (unsigned short)33408))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_24 = 0; i_24 < 16; i_24 += 4) 
    {
        arr_95 [0ULL] [i_24] = ((/* implicit */signed char) (unsigned short)0);
        /* LoopNest 3 */
        for (unsigned long long int i_25 = 0; i_25 < 16; i_25 += 1) 
        {
            for (unsigned short i_26 = 2; i_26 < 12; i_26 += 1) 
            {
                for (short i_27 = 0; i_27 < 16; i_27 += 2) 
                {
                    {
                        arr_107 [i_25] [i_26 + 2] [i_25] [i_25] = ((/* implicit */signed char) (unsigned char)207);
                        /* LoopSeq 2 */
                        for (signed char i_28 = 0; i_28 < 16; i_28 += 4) /* same iter space */
                        {
                            arr_112 [i_25] [i_25] [i_26] [7ULL] [i_24] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_108 [i_26 + 3] [i_26 - 2] [i_26 - 1])) / ((+(var_4))))), (((/* implicit */int) (unsigned short)31111))));
                            arr_113 [i_25] [i_25] [i_25] [i_25] = ((/* implicit */unsigned long long int) (unsigned short)32142);
                        }
                        for (signed char i_29 = 0; i_29 < 16; i_29 += 4) /* same iter space */
                        {
                            arr_118 [i_26 - 1] [(unsigned char)13] [i_25] [i_25] [i_25] [i_24] = ((/* implicit */unsigned short) (+(min((max((((/* implicit */int) arr_104 [i_29] [(signed char)10])), (1411506688))), (((/* implicit */int) ((short) arr_98 [i_24] [i_26 + 4] [i_26])))))));
                            arr_119 [i_25] = ((/* implicit */_Bool) (unsigned short)34424);
                        }
                    }
                } 
            } 
        } 
    }
    for (short i_30 = 2; i_30 < 16; i_30 += 3) 
    {
        var_34 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-60)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_31 = 0; i_31 < 17; i_31 += 1) 
        {
            for (int i_32 = 0; i_32 < 17; i_32 += 3) 
            {
                {
                    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_128 [i_30 + 1] [i_30] [i_30] [i_30]))));
                    var_36 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_128 [i_30 - 1] [i_30 - 1] [i_31] [i_31])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))));
                    arr_130 [i_30 + 1] [i_30] [i_31] [i_32] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_123 [(short)12]))));
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_3))));
                    arr_131 [i_30] [i_31] [i_30] [i_30] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) arr_123 [i_30 - 2])))));
                }
            } 
        } 
    }
    for (unsigned long long int i_33 = 0; i_33 < 17; i_33 += 2) 
    {
        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_126 [i_33])))) || (((((/* implicit */_Bool) (short)-27662)) && (((/* implicit */_Bool) var_6)))))))));
        arr_134 [i_33] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_126 [(signed char)7]))));
        /* LoopNest 2 */
        for (int i_34 = 2; i_34 < 15; i_34 += 4) 
        {
            for (short i_35 = 0; i_35 < 17; i_35 += 2) 
            {
                {
                    arr_141 [i_33] [i_34] [i_35] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) (signed char)60)) == (((/* implicit */int) (unsigned short)25975))))), (max(((short)-32649), (((/* implicit */short) (signed char)60))))))) * (((((((/* implicit */int) var_1)) - (((/* implicit */int) arr_136 [i_33])))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                    /* LoopSeq 1 */
                    for (short i_36 = 0; i_36 < 17; i_36 += 3) 
                    {
                        var_39 |= ((/* implicit */short) (((-(3ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 13381500475710404206ULL))))));
                        var_40 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_11)) ? (max((var_6), (((/* implicit */int) (unsigned short)31123)))) : ((-(((/* implicit */int) arr_136 [i_35]))))))));
                    }
                    arr_146 [i_35] [i_34] [i_33] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_125 [i_33] [i_33]))))) << (((((/* implicit */int) (short)32091)) - (32081)))))));
                    arr_147 [i_34] [i_33] = ((/* implicit */unsigned short) max(((+(((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_143 [i_33] [i_35] [i_34 + 2] [i_35]))))))), (((/* implicit */unsigned long long int) (-(-2))))));
                    arr_148 [i_35] [(unsigned short)11] [(unsigned short)11] = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned long long int) (short)32758))));
                }
            } 
        } 
    }
}
