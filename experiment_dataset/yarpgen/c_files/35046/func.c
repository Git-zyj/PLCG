/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35046
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1 + 3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4294967295U)))) ? (((((/* implicit */_Bool) 1680394282)) ? (((/* implicit */int) (unsigned short)45045)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (signed char)43)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((var_8), ((-(((/* implicit */int) var_4))))));
                var_14 = ((/* implicit */short) ((((int) arr_1 [i_1 - 2])) >> ((((~(((/* implicit */int) (unsigned short)0)))) + (6)))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                var_15 -= ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((unsigned char) var_4));
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)45)), ((-(((/* implicit */int) max((var_1), ((signed char)-7))))))));
    var_18 *= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_19 *= ((/* implicit */short) (-((+(((/* implicit */int) arr_7 [(unsigned char)4]))))));
        arr_9 [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((short) var_8));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            /* LoopSeq 4 */
            for (short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                arr_16 [i_2] = ((/* implicit */signed char) (short)-17122);
                /* LoopSeq 4 */
                for (unsigned short i_5 = 1; i_5 < 10; i_5 += 3) /* same iter space */
                {
                    arr_19 [i_2] = ((/* implicit */unsigned char) (+(-1)));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((-(2627718202673027137ULL))) / (var_6))))));
                }
                for (unsigned short i_6 = 1; i_6 < 10; i_6 += 3) /* same iter space */
                {
                    arr_22 [i_2] [i_4] [i_3] [i_3] [i_2] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_15 [i_3] [i_4] [i_3])) <= (((/* implicit */int) var_9)))));
                    var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_3] [i_6]))) & (var_3)))) && (((/* implicit */_Bool) arr_14 [i_3] [i_4] [2U] [i_4]))));
                }
                for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    var_22 = ((/* implicit */long long int) ((short) (unsigned short)39862));
                    arr_26 [i_7] [11] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) var_0);
                }
                for (unsigned short i_8 = 1; i_8 < 9; i_8 += 3) 
                {
                    arr_31 [i_2] [6] [i_2] = ((/* implicit */short) arr_28 [i_2] [i_2] [i_2] [i_2]);
                    arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_8);
                    arr_33 [i_2] [4LL] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_2] [i_8 - 1] [i_8 + 3]))));
                    arr_34 [i_2] [i_3] [i_2] [i_8 + 3] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                    var_23 += ((/* implicit */unsigned short) arr_8 [i_3] [i_3]);
                }
            }
            for (signed char i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
            {
                var_24 += (~(((/* implicit */int) arr_18 [i_3])));
                /* LoopNest 2 */
                for (unsigned char i_10 = 3; i_10 < 8; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            arr_42 [i_2] = ((/* implicit */short) ((arr_27 [i_2]) | (8113249600852591298LL)));
                            arr_43 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) arr_38 [i_10 + 2] [i_10 - 1] [i_2] [i_10] [i_10]));
                            var_25 = ((/* implicit */short) ((int) arr_41 [(short)7] [i_2] [i_10] [i_10] [i_10 - 1] [i_2] [i_10]));
                        }
                    } 
                } 
                var_26 ^= ((/* implicit */unsigned char) 2617782413U);
            }
            for (signed char i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_13 = 3; i_13 < 11; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        arr_51 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((15819025871036524448ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17122)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (1004913612) : (((/* implicit */int) var_10))))) : (((unsigned long long int) 7477523775391304803ULL))));
                        arr_52 [(signed char)9] [i_13 - 2] [i_12] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_13] [i_13])) ? (((/* implicit */long long int) var_11)) : (4664092787609566838LL)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_38 [2ULL] [i_2] [i_2] [i_2] [5]))))));
                    }
                    arr_53 [i_3] |= ((/* implicit */short) (+(2627718202673027160ULL)));
                    arr_54 [6ULL] [i_3] [i_3] [(short)2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_48 [i_3] [i_13 + 1] [i_13 - 1] [i_3] [i_3] [i_13 - 2]))));
                    arr_55 [i_13] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_12 [i_2] [i_3] [i_2]);
                }
                var_27 = ((/* implicit */long long int) 925522856);
                arr_56 [11U] [i_2] [i_12] [i_12] = ((/* implicit */unsigned char) (~(arr_27 [i_2])));
            }
            for (signed char i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
            {
                arr_61 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+(arr_29 [i_3] [i_2] [i_3] [i_2])));
                arr_62 [i_2] [i_2] [i_2] [i_15] = ((/* implicit */unsigned char) (signed char)70);
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
                    {
                        {
                            arr_67 [i_2] = ((((/* implicit */_Bool) arr_20 [i_17] [i_17] [i_17] [i_2] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_17] [i_15] [i_3] [i_2]))) : (var_3));
                            arr_68 [i_3] [i_2] [i_15] [i_2] [8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((int) arr_48 [i_2] [i_2] [i_2] [i_2] [i_2] [6LL]))) : (arr_20 [i_17] [i_2] [i_15] [i_2] [8U])));
                            arr_69 [i_2] [i_3] [(unsigned short)3] [i_3] [(unsigned short)3] [(unsigned short)3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_17] [i_2] [i_15] [i_2])) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_2])) : ((+(((/* implicit */int) (signed char)48))))));
                            arr_70 [i_2] [i_16] [i_16] [i_15] [i_15] [i_3] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_15 [i_16] [i_15] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14496))) : (var_6)))));
                        }
                    } 
                } 
            }
            var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_24 [(short)10] [i_3] [i_3] [(short)10] [i_3] [i_3]))));
        }
    }
    /* vectorizable */
    for (unsigned int i_18 = 2; i_18 < 11; i_18 += 2) 
    {
        arr_73 [i_18] [i_18] = ((/* implicit */int) ((3196938465557231361ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        arr_74 [i_18] = ((((int) arr_38 [i_18] [i_18] [i_18] [i_18] [i_18])) + (((/* implicit */int) (signed char)45)));
        arr_75 [i_18] [i_18] |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)187))) + (arr_27 [i_18])));
        /* LoopNest 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (unsigned int i_20 = 0; i_20 < 12; i_20 += 2) 
            {
                {
                    arr_83 [i_19] [(unsigned char)0] [i_19] = ((/* implicit */unsigned short) (short)-23594);
                    /* LoopNest 2 */
                    for (long long int i_21 = 2; i_21 < 11; i_21 += 4) 
                    {
                        for (unsigned char i_22 = 1; i_22 < 11; i_22 += 1) 
                        {
                            {
                                arr_91 [i_18 - 1] [i_18] [i_19] [i_18] [i_18 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17122)) ? (((/* implicit */int) arr_37 [i_19] [i_21] [i_20] [i_19])) : (((/* implicit */int) var_13))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_19])) ? (arr_14 [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                                arr_92 [i_19] = ((/* implicit */unsigned long long int) (((-(3426819538U))) / (((((/* implicit */_Bool) var_5)) ? (222001566U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_19] [i_19])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        arr_96 [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_57 [i_23] [8ULL] [i_23] [(short)10]))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_23]))) : (arr_44 [i_23]))))));
        var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((short)21536), (((/* implicit */short) (signed char)96))))), ((~(11949088320752737394ULL)))))) ? (((/* implicit */int) (short)-17112)) : (-2098672246)));
    }
}
