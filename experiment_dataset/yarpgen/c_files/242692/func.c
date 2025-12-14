/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242692
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1])) ? (min((((/* implicit */unsigned int) (short)-32525)), (2956077378U))) : (((2956077362U) & (1338889922U)))))));
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2956077368U)))))) != (1908052943U)))) != (((/* implicit */int) (short)-30000))));
                                arr_14 [i_3] [i_0] [i_2] [i_1] [i_3] = ((/* implicit */int) arr_5 [i_3] [i_1 - 2] [(short)11]);
                                arr_15 [i_0] [i_3] [i_2 + 2] [(short)14] = ((/* implicit */unsigned int) ((int) ((long long int) min((1338889943U), (((/* implicit */unsigned int) var_8))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((min((max((((/* implicit */long long int) 2386914361U)), (arr_19 [i_0] [(signed char)18] [(signed char)18]))), (((/* implicit */long long int) var_5)))) != (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (18446744073709551615ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80))))))))))));
                                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_17 [16U] [6U] [6U] [i_2] [i_5]), (((unsigned int) var_8))))) ? (((max((((/* implicit */unsigned long long int) 2956077378U)), (18446744073709551614ULL))) & (((/* implicit */unsigned long long int) 16U)))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)32762)) & (((/* implicit */int) (short)-32748)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((unsigned short) max((((((/* implicit */int) arr_8 [i_8] [(short)6] [i_0] [i_0])) & (((/* implicit */int) arr_4 [(unsigned char)9] [(unsigned char)9])))), (((/* implicit */int) arr_8 [i_8] [i_8] [i_8] [i_2 - 1]))))))));
                                var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)243)) ? (((((/* implicit */long long int) ((2386914355U) ^ (2956077362U)))) ^ (((((/* implicit */long long int) 1338889943U)) ^ (var_2))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12376)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11678)))))) ? (min((var_1), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_8] [i_7] [i_7] [i_2 + 2] [i_1] [i_0])) ? (2956077368U) : (2956077358U))))))));
                                arr_25 [i_0] [3] [i_7] [3] [i_8] = ((/* implicit */short) 1338889933U);
                                arr_26 [i_7] [i_8] [i_2 - 1] [i_0] &= ((/* implicit */signed char) (-(4194303U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 1; i_9 < 23; i_9 += 4) 
    {
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 2) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)-11678)), (1338889922U))))));
                                arr_38 [i_9] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53160)) ? (2956077380U) : (((/* implicit */unsigned int) (~(((/* implicit */int) max(((short)11677), ((short)11677)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((max((arr_41 [i_9 + 1] [i_9 + 1] [i_11] [(_Bool)1]), (arr_41 [i_15] [i_10] [i_10] [i_9]))), (((/* implicit */unsigned short) arr_33 [i_9 - 1] [i_11] [i_14]))));
                                var_18 = ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)78)))) & (var_3)));
                                var_19 = ((/* implicit */unsigned char) max((min((var_2), (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9] [i_9 + 1] [i_11]))) : (1338889932U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        for (long long int i_17 = 2; i_17 < 21; i_17 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_43 [17ULL] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_17 + 3] [i_17])) ? (((/* implicit */int) arr_43 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_9 - 1] [i_17 - 1] [(short)8])) : (((/* implicit */int) arr_43 [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_17 - 1] [i_17 + 1])))), (((/* implicit */int) max((arr_43 [i_9 + 1] [i_9] [(signed char)20] [i_9 - 1] [i_9 + 1] [i_17 - 2] [i_17]), (arr_43 [12ULL] [i_9] [(short)5] [i_9 - 1] [i_9 + 1] [i_17 + 3] [i_17])))))))));
                                var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((1338889942U), (((/* implicit */unsigned int) (unsigned char)167))))) ? (((/* implicit */int) ((arr_47 [i_17] [i_16] [i_11] [22U] [i_10] [22U]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)0)))) != (((/* implicit */int) arr_29 [i_9 + 1] [i_17]))));
                                var_22 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)80))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        for (long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                        {
                            {
                                var_23 += ((((_Bool) ((4290772992U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [(short)9] [i_18] [(short)9] [i_10] [i_9 + 1])))))) ? (((/* implicit */unsigned int) ((arr_34 [9U] [9U] [i_11] [i_11] [(_Bool)1] [i_19]) & (((/* implicit */int) (unsigned char)167))))) : (((unsigned int) (~(((/* implicit */int) (short)-11678))))));
                                arr_58 [i_9 + 1] [i_9 + 1] [i_11] = ((/* implicit */unsigned long long int) ((short) var_7));
                                arr_59 [i_9 - 1] [i_9] [i_10] [(unsigned short)1] [i_9] [i_19] = ((/* implicit */unsigned int) (unsigned char)255);
                                arr_60 [i_9] [i_10] [i_11] [i_19] [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)11678), ((short)-11678))))) != ((~(max((((/* implicit */unsigned int) (signed char)-9)), (1338889923U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_20 = 0; i_20 < 10; i_20 += 2) 
    {
        for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 2) 
        {
            for (unsigned char i_22 = 0; i_22 < 10; i_22 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_23 = 0; i_23 < 10; i_23 += 4) 
                    {
                        for (unsigned long long int i_24 = 1; i_24 < 7; i_24 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_75 [i_20] [i_21] [i_24] [7] [1] = ((/* implicit */unsigned short) max((arr_71 [i_24 + 3] [i_23] [i_22] [i_21] [i_20]), (((/* implicit */long long int) (-(1338889941U))))));
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1908052941U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))))))) : (65532U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_25 = 0; i_25 < 10; i_25 += 4) 
                    {
                        for (long long int i_26 = 2; i_26 < 9; i_26 += 4) 
                        {
                            {
                                arr_81 [i_20] [i_21] [i_25] [i_26 + 1] = max((((((/* implicit */_Bool) arr_73 [i_22] [i_21] [i_26 - 2] [i_22] [i_21] [i_25] [i_22])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11659))) : (((arr_24 [i_20] [i_20] [12ULL]) ? (4294967295U) : (var_0))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_51 [i_26 - 2] [i_25] [i_25] [i_26] [i_25])) != (((/* implicit */int) arr_51 [i_26 - 2] [4ULL] [i_25] [i_25] [(signed char)21]))))));
                                var_26 &= ((/* implicit */long long int) (-(((/* implicit */int) ((arr_50 [i_26] [i_26] [(short)11] [i_26 - 1] [i_26 + 1] [i_26] [i_26 - 1]) != (((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_27 = 0; i_27 < 10; i_27 += 2) 
                    {
                        for (int i_28 = 1; i_28 < 8; i_28 += 2) 
                        {
                            {
                                arr_87 [i_20] [i_21] [i_20] [i_22] [(short)2] [i_28] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_10 [i_28 - 1] [i_21] [i_20] [i_21])))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)8046)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_22] [3ULL] [i_22] [i_22]))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(short)1] [i_28 + 1] [(_Bool)1] [i_28 + 1] [i_28 + 1]))))))));
                                var_27 -= ((/* implicit */int) min((((/* implicit */unsigned int) arr_18 [i_28 + 1] [i_28 - 1] [i_28 + 2] [i_28 + 1] [i_28])), (max((2956077363U), (((/* implicit */unsigned int) (short)-27019))))));
                                var_28 |= ((signed char) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_29 = 1; i_29 < 16; i_29 += 4) 
    {
        for (unsigned char i_30 = 0; i_30 < 17; i_30 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_31 = 0; i_31 < 17; i_31 += 4) 
                {
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        for (unsigned int i_33 = 1; i_33 < 14; i_33 += 3) 
                        {
                            {
                                arr_102 [i_30] [i_33] [i_31] [i_33] [i_29 - 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((2956077370U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned char)146)) & (((/* implicit */int) arr_88 [i_29 - 1])))) : ((~(((/* implicit */int) (unsigned char)162))))))) != (arr_37 [i_31] [i_32] [i_32] [i_32] [i_32] [i_31])));
                                arr_103 [i_29 + 1] [i_30] [i_31] [i_32] [i_33] = ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) ((arr_47 [i_29 - 1] [i_30] [i_31] [1U] [i_33] [i_33]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                arr_104 [i_31] [i_31] [i_31] [i_33 + 2] [i_30] |= 1113079012U;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_34 = 0; i_34 < 17; i_34 += 4) 
                {
                    for (unsigned short i_35 = 0; i_35 < 17; i_35 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_22 [i_29] [i_29] [i_30] [i_34] [i_35] [7LL])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (arr_107 [i_35] [i_34] [i_30] [i_29 - 1])))) : (min((var_2), (((/* implicit */long long int) arr_27 [i_30] [2U]))))))));
                            var_30 = ((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)88)) != (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (arr_49 [i_35] [i_34] [i_30] [(signed char)14] [i_29]))))))), (arr_10 [i_29 + 1] [i_30] [i_34] [i_29 + 1])));
                            var_31 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((unsigned short) arr_23 [i_29] [i_30] [i_30] [i_34] [(_Bool)1]))))) ? ((+(1731160712U))) : (((((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) arr_21 [i_30] [i_34] [i_34])))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_92 [i_29] [i_30] [i_34])))))))));
                            var_32 = ((/* implicit */unsigned char) max((var_32), (var_4)));
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_30] [i_30] [i_30] [i_29])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_88 [i_30]))) : (max((((/* implicit */unsigned int) var_8)), (min((13U), (1338889932U)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_36 = 2; i_36 < 14; i_36 += 4) 
                {
                    for (unsigned int i_37 = 4; i_37 < 15; i_37 += 3) 
                    {
                        {
                            var_34 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_112 [(signed char)6] [i_30] [i_36 + 3] [i_37 - 4])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_112 [i_37] [i_29 + 1] [(_Bool)1] [i_29 + 1]))))) != (((/* implicit */long long int) ((((/* implicit */int) arr_112 [i_37 - 2] [(short)3] [i_29 + 1] [i_29 + 1])) & (((/* implicit */int) arr_112 [i_37 + 2] [i_36] [i_29 + 1] [i_29 + 1])))))));
                            var_35 = ((/* implicit */signed char) ((arr_99 [i_30] [i_30] [i_30] [i_30] [i_36] [i_30]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2956077363U)) ? (((/* implicit */int) arr_24 [16] [i_36] [i_37 + 2])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (2563806583U))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) 1338889922U)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1338889922U)))))) : (arr_111 [16U])))));
                            arr_116 [i_37] = ((/* implicit */unsigned char) 956165918728666077LL);
                            arr_117 [8U] [i_30] [i_36] [i_37 + 1] = ((/* implicit */unsigned int) min((arr_57 [i_37] [23U] [i_30] [i_29 - 1]), (((arr_107 [i_37 - 1] [i_36 - 1] [i_30] [i_29 - 1]) != (arr_107 [(short)15] [i_30] [(_Bool)1] [i_37])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_38 = 0; i_38 < 25; i_38 += 4) 
    {
        for (unsigned long long int i_39 = 1; i_39 < 23; i_39 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_40 = 0; i_40 < 25; i_40 += 1) 
                {
                    for (unsigned int i_41 = 0; i_41 < 25; i_41 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (~(min((((/* implicit */unsigned int) arr_128 [i_38] [i_38] [i_40] [i_41])), ((~(2956077378U))))))))));
                            arr_129 [i_40] [i_40] [i_39] [i_40] [i_40] = ((/* implicit */short) ((arr_122 [i_41] [i_40] [i_38]) != (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_126 [i_40] [i_40] [i_40])), (var_4))))) - (((((/* implicit */_Bool) (short)24438)) ? (2956077388U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_42 = 0; i_42 < 25; i_42 += 3) 
                {
                    for (short i_43 = 1; i_43 < 23; i_43 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) ((int) (-((-(((/* implicit */int) (unsigned char)88)))))));
                            arr_137 [i_43] [i_38] [i_42] [i_38] [i_38] [i_38] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_133 [(_Bool)1])) ? (((/* implicit */int) (short)-16356)) : (arr_131 [i_43] [i_38] [i_39] [i_38])))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)0)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) != (min((((/* implicit */long long int) (+(var_0)))), ((~(arr_122 [i_38] [i_39 + 1] [i_42])))))));
                            arr_138 [19LL] [i_42] [i_39] [i_38] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168))) & (3350372751U)));
                        }
                    } 
                } 
            }
        } 
    } 
}
