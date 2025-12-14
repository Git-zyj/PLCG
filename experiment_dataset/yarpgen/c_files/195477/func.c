/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195477
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_2] [i_1 - 2] [i_2] [(signed char)1] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [i_1 - 1] [i_2 + 2])), ((+((-(15U)))))));
                                arr_15 [2LL] [i_2] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)85))))), (var_12)));
                                arr_16 [i_0] [i_1 - 2] [i_2] [i_3] [i_2] = ((/* implicit */long long int) min((((unsigned int) arr_5 [i_1 - 2] [i_2 + 2])), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1 + 3] [i_2 - 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_13 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)3419)) : (((/* implicit */int) var_12))))) <= (((arr_5 [i_0] [i_2 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35))))))))));
                                arr_21 [i_2] [i_1] [i_2] [i_2 + 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2147352576U)) != (-5LL)));
                                arr_22 [i_2] [i_1 + 1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)34)))))));
                                var_14 = ((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (2147483646)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) min((((((/* implicit */int) (short)3419)) >> (((/* implicit */int) (unsigned char)12)))), (((/* implicit */int) (short)-3419))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        for (long long int i_8 = 3; i_8 < 17; i_8 += 3) 
                        {
                            {
                                arr_27 [i_2] [(unsigned char)8] [i_7] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                                var_16 ^= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                                arr_28 [i_1] [i_8] [i_2] [i_7] [i_8 - 2] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_9 [i_1 + 1] [i_2 - 1] [i_8 - 3] [(signed char)12] [i_8] [2U])) > (((/* implicit */int) arr_9 [i_1 + 1] [i_2 - 1] [i_8 - 3] [i_7] [i_8 + 1] [i_7])))) ? (((((/* implicit */int) arr_9 [i_1 + 1] [i_2 - 1] [i_8 - 3] [i_2] [i_8 + 2] [i_2 - 1])) - (((/* implicit */int) arr_9 [i_1 + 1] [i_2 - 1] [i_8 - 3] [i_7] [5] [i_1 + 1])))) : ((~(((/* implicit */int) arr_9 [i_1 + 1] [i_2 - 1] [i_8 - 3] [4] [i_8 + 2] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [(unsigned char)14]);
        arr_29 [i_0] |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 628085615U)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (18446744073709551615ULL)))));
        var_18 ^= ((/* implicit */_Bool) (((+(((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [(signed char)18] [i_0])) + (arr_5 [i_0] [i_0]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) 2147483647)) : (2147352574U))))));
    }
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                for (unsigned int i_12 = 1; i_12 < 17; i_12 += 3) 
                {
                    {
                        arr_38 [i_9] [i_10] [i_11] [8U] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(arr_3 [i_11] [i_10] [(unsigned char)13])))), (((((/* implicit */_Bool) arr_20 [i_9] [8U] [i_11] [10LL] [i_12 + 2] [i_10] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (var_7))))) : (((arr_31 [i_9]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20413)))))))));
                        arr_39 [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_2))))));
                    }
                } 
            } 
        } 
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) -2147483623)), (arr_36 [i_9] [i_9] [i_9] [i_9] [18U] [i_9])))) && (((((/* implicit */_Bool) arr_17 [i_9] [i_9] [(unsigned char)6] [i_9] [i_9] [12U])) && (((/* implicit */_Bool) arr_17 [i_9] [i_9] [12U] [i_9] [(_Bool)1] [10LL]))))));
    }
    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
    {
        arr_44 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((628085615U) * (2147614719U)))) != (arr_25 [i_13] [i_13] [(short)7])));
        /* LoopNest 2 */
        for (unsigned short i_14 = 3; i_14 < 9; i_14 += 3) 
        {
            for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                {
                    arr_50 [i_13] [3U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((arr_46 [i_13] [i_14 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned char)0] [i_14] [i_14] [i_14] [16U] [i_15])))))))) ? (((/* implicit */unsigned long long int) (+(arr_19 [i_13] [i_15] [i_15] [i_15] [i_14 - 2])))) : (((((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))))) & ((+(4530045530393291111ULL)))))));
                    /* LoopSeq 1 */
                    for (long long int i_16 = 1; i_16 < 7; i_16 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (unsigned char)191))));
                        arr_53 [8] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_14 - 2] [i_14 - 2])) <= (((/* implicit */int) (_Bool)0))))) ^ (((((/* implicit */_Bool) arr_10 [i_14 - 2] [i_14 - 2] [i_14 + 1] [4])) ? (((/* implicit */int) arr_10 [i_14 - 2] [i_14 - 2] [i_14 + 1] [(unsigned char)6])) : (((/* implicit */int) arr_2 [i_14 - 2] [i_14 - 2]))))));
                        /* LoopSeq 4 */
                        for (int i_17 = 0; i_17 < 10; i_17 += 2) /* same iter space */
                        {
                            arr_56 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483619)) ? (((/* implicit */unsigned long long int) (-(36011204832919552LL)))) : ((+(4530045530393291111ULL)))));
                            var_21 ^= ((/* implicit */unsigned short) min(((~(7802452221555698387ULL))), (((/* implicit */unsigned long long int) ((var_10) | (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                        }
                        for (int i_18 = 0; i_18 < 10; i_18 += 2) /* same iter space */
                        {
                            arr_59 [1U] = ((/* implicit */_Bool) ((unsigned char) (~(-2147483642))));
                            arr_60 [1ULL] [i_14] [i_15] [(_Bool)1] [i_18] = ((/* implicit */_Bool) ((((arr_46 [i_16 - 1] [i_14 - 1]) | (arr_46 [i_16 + 3] [i_14 - 3]))) ^ (arr_24 [i_18])));
                        }
                        for (int i_19 = 0; i_19 < 10; i_19 += 2) /* same iter space */
                        {
                            arr_63 [i_13] [i_14 - 2] [i_19] [5] [i_14] [1] = ((/* implicit */signed char) arr_31 [(unsigned char)5]);
                            arr_64 [i_13] [(_Bool)1] [(signed char)6] [i_16 + 1] [i_19] = ((/* implicit */signed char) -1475551554);
                            arr_65 [i_13] [8U] [1ULL] [i_19] = ((/* implicit */unsigned char) arr_40 [i_13] [i_14 - 1]);
                        }
                        for (int i_20 = 0; i_20 < 10; i_20 += 2) /* same iter space */
                        {
                            arr_68 [i_13] [(unsigned short)1] [i_15] [(unsigned char)2] [i_20] [i_15] = ((/* implicit */signed char) min(((+(arr_0 [i_14 - 1]))), (((((/* implicit */_Bool) arr_33 [i_16 - 1])) ? (arr_0 [i_14 + 1]) : (13916698543316260513ULL)))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (-(((unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))))));
                            arr_69 [i_15] [i_14] [i_13] [i_16 - 1] [i_20] [i_14 + 1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_14 + 1] [i_14 + 1] [i_16 + 3] [i_20])) ^ (((/* implicit */int) arr_10 [i_14 + 1] [i_14 + 1] [i_16 + 1] [i_20])))) >= ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)181)))))))));
                            arr_70 [i_13] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [i_13] [i_13] [i_13] [i_20])) << (((9223372036854775807LL) - (9223372036854775785LL))))) != (((((/* implicit */int) arr_10 [(_Bool)1] [i_14 - 2] [i_15] [i_20])) + (((/* implicit */int) arr_10 [i_13] [i_13] [i_13] [i_20]))))));
                        }
                        arr_71 [i_15] [i_14] [i_15] [i_14 + 1] [i_13] = ((/* implicit */int) (((-(arr_47 [i_14 + 1] [i_14 - 2] [i_14 - 2]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) < (arr_6 [i_16 + 2])))))));
                        arr_72 [i_13] = ((/* implicit */unsigned char) (~(((unsigned int) var_12))));
                    }
                }
            } 
        } 
    }
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+((-((-(var_4))))))))));
}
