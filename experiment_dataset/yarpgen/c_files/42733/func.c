/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42733
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_2 + 1] [i_2] [i_0] = ((min((((/* implicit */unsigned int) -16384)), (arr_7 [i_2 + 1]))) + (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_6)))) && ((!(((/* implicit */_Bool) var_11)))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            arr_15 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_2] [(unsigned char)2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 16384)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) : (var_9))) < (((/* implicit */long long int) arr_6 [i_0 - 2] [i_4] [(unsigned char)7] [i_3])))))) : (max((4611404543450677248ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            arr_16 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((int) arr_6 [5LL] [i_0 - 1] [i_2 - 1] [i_4])))) ? (((/* implicit */unsigned int) ((int) max((arr_14 [i_2]), (((/* implicit */long long int) arr_4 [i_0 - 1])))))) : (min((((/* implicit */unsigned int) (+(arr_6 [i_0] [i_0] [i_0] [i_0])))), (arr_13 [i_0] [i_0 - 1] [i_2] [i_3] [i_2 - 1])))));
                        }
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)13768))) % (((((/* implicit */_Bool) arr_11 [(signed char)8] [i_1] [7] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2 + 1]))) : (((long long int) var_7)))))))));
                    }
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        arr_21 [i_1] [i_2] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-121))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            arr_26 [i_0 + 1] [i_2] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned char) 1608138049);
                            var_14 = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_18 [i_0 - 2] [i_0 + 1])))));
                        }
                        arr_27 [i_2] [i_2] [i_5] = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_11)) ? (arr_19 [i_0] [(_Bool)1] [i_0 - 2] [i_0 - 2]) : (arr_19 [i_0 + 1] [i_0 - 2] [4] [i_0 + 1])))));
                    }
                    arr_28 [i_0] |= ((/* implicit */short) var_8);
                    var_15 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41159))))) << (((((unsigned long long int) max((var_12), (((/* implicit */int) (short)32737))))) - (32712ULL))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (unsigned char i_8 = 2; i_8 < 17; i_8 += 4) 
        {
            for (unsigned char i_9 = 3; i_9 < 16; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        for (signed char i_11 = 1; i_11 < 17; i_11 += 4) 
                        {
                            {
                                var_16 ^= ((/* implicit */long long int) max((((/* implicit */int) arr_32 [i_8 + 1] [i_8 + 3] [i_8 + 3])), (((((/* implicit */int) arr_32 [i_8 - 2] [i_8 - 2] [i_8 + 3])) | (((/* implicit */int) arr_32 [i_8 + 1] [i_8 - 2] [i_8 - 1]))))));
                                arr_41 [i_7] [i_8 + 2] [i_9] [i_8 + 2] [i_7] = ((/* implicit */short) ((unsigned long long int) ((((long long int) arr_35 [i_7 - 1] [i_8 + 3] [i_9])) == (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                                arr_42 [i_7] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)41159)), (((((/* implicit */_Bool) -192974706)) ? (-192974712) : (((/* implicit */int) (signed char)58)))))))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) -192974684)) ? (((((/* implicit */_Bool) arr_31 [i_7 - 1])) ? (arr_31 [i_7 - 1]) : (arr_31 [i_7 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 17572047484547887198ULL))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(1591361735454529839LL))))));
                    var_19 = (i_7 % 2 == zero) ? (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (signed char)17)) >> (((arr_30 [i_7]) - (3499286571887073631ULL))))))) : (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (signed char)17)) >> (((((arr_30 [i_7]) - (3499286571887073631ULL))) - (13889317602382357294ULL)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
    {
        for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (+(((var_4) - (((/* implicit */unsigned long long int) 555664706U)))))))));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    for (unsigned int i_15 = 1; i_15 < 11; i_15 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) min((((/* implicit */unsigned int) ((max((2849275751534023010LL), (((/* implicit */long long int) arr_32 [i_12] [i_13] [i_14])))) != (((/* implicit */long long int) arr_48 [i_13] [i_14] [i_15 - 1] [i_15 + 1]))))), (2108179504U)));
                            arr_53 [i_12] [i_13] [11U] [i_15] [i_13] [i_13] = ((/* implicit */unsigned short) min((2477360783352698721LL), (((/* implicit */long long int) (unsigned char)248))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    var_22 ^= arr_55 [i_13] [i_13] [i_13];
                    arr_57 [10ULL] [i_12] [i_16] = ((/* implicit */long long int) ((short) arr_45 [i_12]));
                    arr_58 [i_16] [i_13] [i_16] = ((/* implicit */signed char) (unsigned short)41159);
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((arr_45 [i_12]) ? (((/* implicit */int) arr_32 [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_32 [i_12] [i_13] [i_16])))))));
                }
                for (short i_17 = 1; i_17 < 12; i_17 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 13; i_18 += 1) 
                    {
                        for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((/* implicit */int) arr_43 [i_18])), (max(((-2147483647 - 1)), (192974705))))))));
                                arr_69 [i_17 + 1] [i_19] = (-(arr_29 [(short)4] [i_17 - 1]));
                            }
                        } 
                    } 
                    arr_70 [i_17] [i_12] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-22267))))) / (((unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 6730128832161312499LL)) : (var_4))))));
                    /* LoopNest 2 */
                    for (short i_20 = 0; i_20 < 13; i_20 += 2) 
                    {
                        for (unsigned long long int i_21 = 1; i_21 < 12; i_21 += 2) 
                        {
                            {
                                var_25 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_60 [i_17 + 1] [i_17 + 1] [i_17 - 1])) ? (arr_29 [i_21 + 1] [i_21 + 1]) : (arr_29 [i_21 - 1] [i_21 - 1]))), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)(-127 - 1))), (-1299833548))))));
                                arr_76 [i_12] [i_12] [i_12] [0ULL] [(unsigned short)12] = ((/* implicit */signed char) ((unsigned long long int) arr_74 [i_12] [i_12] [i_12] [i_12] [i_12]));
                                arr_77 [(short)4] [i_13] [i_17] [i_20] [i_17] [i_21] [i_13] = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */short) var_10)), (arr_34 [i_17 + 1] [i_13] [i_21 - 1] [i_20]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_22 = 0; i_22 < 13; i_22 += 2) 
                    {
                        for (signed char i_23 = 0; i_23 < 13; i_23 += 4) 
                        {
                            {
                                arr_83 [i_23] [i_22] [i_17] [i_13] [i_12] &= ((/* implicit */int) ((unsigned int) -192974716));
                                arr_84 [i_12] [i_13] [7] [i_13] [5ULL] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_9) != (((/* implicit */long long int) arr_48 [i_17 - 1] [i_17] [i_17] [i_17 + 1]))))) / (arr_48 [i_17] [i_17] [i_17] [i_17 + 1])));
                            }
                        } 
                    } 
                }
                for (unsigned char i_24 = 0; i_24 < 13; i_24 += 2) 
                {
                    arr_88 [i_13] [i_13] = ((/* implicit */signed char) arr_54 [i_12] [i_12] [i_24]);
                    var_26 ^= ((/* implicit */short) -3870914454511449228LL);
                    /* LoopNest 2 */
                    for (short i_25 = 0; i_25 < 13; i_25 += 2) 
                    {
                        for (unsigned short i_26 = 3; i_26 < 10; i_26 += 3) 
                        {
                            {
                                arr_96 [(unsigned char)7] [(unsigned short)8] [(short)2] [i_25] [i_25] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_62 [i_12] [7] [i_24] [i_26 + 2]), (arr_62 [i_26] [i_13] [i_24] [i_26 + 3])))) >= (2147483647)));
                                arr_97 [(signed char)1] [(signed char)1] [(signed char)1] [(signed char)1] [(signed char)1] [i_26 - 1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)10616))));
                                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_91 [i_26] [i_26 + 3] [i_24] [i_26] [8]))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_27 = 0; i_27 < 13; i_27 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_28 = 3; i_28 < 11; i_28 += 1) 
                    {
                        for (unsigned int i_29 = 0; i_29 < 13; i_29 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_103 [i_12] [i_27] [i_28] [i_28] [i_28 - 2] [i_28] [i_29])) && (((/* implicit */_Bool) arr_103 [i_28] [i_28 - 2] [i_28] [i_28] [i_28 - 2] [(_Bool)1] [i_29])))) ? (var_3) : (max((((/* implicit */int) (unsigned char)0)), (var_8)))));
                                arr_106 [i_28 - 2] [i_29] [i_13] = ((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned long long int) ((unsigned char) arr_39 [i_29] [i_28] [0LL] [i_13] [9U]))), (((1ULL) << (((/* implicit */int) var_0)))))));
                                var_29 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_75 [i_12] [i_29])))) + (2147483647))) << (((((((min(((-2147483647 - 1)), (((/* implicit */int) arr_34 [10ULL] [i_13] [i_13] [i_13])))) - (-2147483623))) + (29))) - (4)))))) > (70367670435840ULL)));
                            }
                        } 
                    } 
                    var_30 -= ((/* implicit */long long int) var_1);
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */unsigned int) var_12)) * (min((((/* implicit */unsigned int) (unsigned char)116)), (((unsigned int) arr_40 [i_13])))))))));
                }
            }
        } 
    } 
}
