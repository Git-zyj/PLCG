/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31592
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
    var_20 *= ((/* implicit */signed char) min((((/* implicit */unsigned short) var_0)), (var_5)));
    var_21 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */short) arr_2 [i_0] [i_0]);
                var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) 1073610752U)) || (((/* implicit */_Bool) (unsigned short)56424))));
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_2] = (-(max((min((((/* implicit */unsigned int) var_11)), (var_7))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1] [i_0]))))))));
                    var_23 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_5 [i_1])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) min((1073610752U), (3221356543U)));
                                arr_15 [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    arr_18 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_0)), (arr_3 [i_5] [i_1])));
                    arr_19 [i_0] [i_0] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) var_19)) : (arr_1 [i_1]))), ((~(1073610752U)))));
                    var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((_Bool) 3893666458U))), (min((0ULL), (((/* implicit */unsigned long long int) 4430336987270031058LL))))));
                }
                for (short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                {
                    arr_23 [i_1] = (((+(((3221356533U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))) << (((4294967295U) - (4294967272U))));
                    var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_8 [i_1] [i_1] [i_6])))));
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 1; i_7 < 17; i_7 += 1) /* same iter space */
                    {
                        var_27 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) (-(((1056964608) << (((arr_12 [i_7 + 1] [i_7] [i_7 + 2] [i_1] [i_7 + 1]) - (16621668616823320912ULL)))))))) : (((/* implicit */unsigned short) (-(((1056964608) << (((((arr_12 [i_7 + 1] [i_7] [i_7 + 2] [i_1] [i_7 + 1]) - (16621668616823320912ULL))) - (17269011102770341263ULL))))))));
                        var_28 += ((/* implicit */unsigned long long int) var_16);
                        /* LoopSeq 1 */
                        for (short i_8 = 1; i_8 < 17; i_8 += 2) 
                        {
                            var_29 = ((/* implicit */int) ((unsigned int) arr_26 [i_1] [i_1] [i_6] [1]));
                            arr_30 [4] |= ((arr_6 [i_0]) && (((/* implicit */_Bool) max((arr_13 [i_8 + 3] [i_8] [i_8 + 1] [i_7 + 2] [i_1]), (arr_13 [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_7 - 1] [i_7])))));
                            var_30 *= min((((((/* implicit */long long int) 2U)) & (var_10))), (((/* implicit */long long int) 4294967294U)));
                        }
                        var_31 = ((/* implicit */short) arr_12 [i_0] [i_6] [i_6] [i_1] [i_6]);
                    }
                    for (unsigned short i_9 = 1; i_9 < 17; i_9 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(unsigned short)17] [i_9] [i_9 + 1] [i_9] [i_9] [i_9]))))), ((-(((/* implicit */int) arr_24 [i_0] [i_1] [i_9 + 3] [i_9 - 1] [(signed char)5]))))));
                        arr_33 [(short)2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((short) (~(arr_25 [i_9 + 3] [i_9] [i_9 + 3] [i_9 + 2] [i_9]))));
                    }
                    for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        var_33 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) var_9))))))));
                        arr_36 [i_6] [i_1] [(short)14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) var_12))))) ? (((((/* implicit */unsigned long long int) arr_9 [i_1] [i_10] [i_1] [i_10])) + (arr_8 [i_1] [i_1] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_10] [i_0] [i_1] [i_0])))))) ? (((/* implicit */int) ((unsigned short) arr_28 [i_1]))) : (((((/* implicit */int) arr_4 [i_0] [i_6])) & (min((var_6), (((/* implicit */int) arr_27 [i_1] [i_1] [i_6] [i_10] [i_1] [(short)13]))))))));
                    }
                }
                for (short i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_12 = 1; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        arr_41 [i_0] [i_1] [i_11] [i_1] [1U] [i_12 + 1] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (_Bool)0)))));
                        var_34 += ((/* implicit */unsigned short) arr_29 [i_0]);
                        arr_42 [i_0] [i_1] [i_11] [i_11] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1489392445U))) + (max((2805574852U), (((/* implicit */unsigned int) (short)(-32767 - 1)))))));
                    }
                    for (long long int i_13 = 1; i_13 < 18; i_13 += 1) /* same iter space */
                    {
                        arr_46 [i_0] [i_1] [i_1] [i_13 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-4890)) && (((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) (short)32767)))))));
                        /* LoopSeq 3 */
                        for (int i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_1] [i_0] [i_13 - 1] [i_13 + 2] [8LL] [i_13])) - (((/* implicit */int) (short)-7079))))) ? (((/* implicit */long long int) 4294967294U)) : (2299514253090166242LL)));
                            var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1489392445U))));
                        }
                        for (short i_15 = 1; i_15 < 19; i_15 += 1) 
                        {
                            var_37 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_39 [(_Bool)1])) : (((/* implicit */int) (short)-32763)))), (((/* implicit */int) arr_20 [i_15 + 1]))))), (((((/* implicit */_Bool) arr_12 [i_15 - 1] [i_15] [i_15 + 1] [12U] [i_15 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_0] [i_1] [i_15])) ^ (((/* implicit */int) (unsigned short)6153))))) : (max((((/* implicit */unsigned int) 2029876720)), (2U)))))));
                            arr_52 [i_0] [i_15] [i_15] [i_1] [i_15] = ((/* implicit */signed char) (short)-32766);
                            arr_53 [i_0] [4U] [i_0] [4U] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) arr_11 [10ULL] [10ULL] [i_11] [(signed char)8] [10ULL] [10ULL]);
                            var_38 = (!(((/* implicit */_Bool) ((unsigned short) arr_9 [i_1] [i_15 - 1] [i_13 + 1] [(short)19]))));
                            var_39 = ((/* implicit */signed char) max((max((4294967294U), (((/* implicit */unsigned int) (unsigned short)65535)))), (((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (var_15)))))));
                        }
                        for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 2) 
                        {
                            arr_58 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) var_19))))) : (arr_14 [i_0] [i_1] [i_11] [i_13 + 1] [i_1] [i_16])))) ? (((/* implicit */int) min((arr_40 [i_1] [i_16 + 1] [i_16 + 1] [i_16 + 1] [(short)2]), (((/* implicit */signed char) max((var_13), ((_Bool)1))))))) : ((~(((/* implicit */int) (_Bool)1)))));
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (4166319604U)));
                            arr_59 [(unsigned char)18] [i_13 + 2] [i_1] [i_1] [i_1] [(unsigned char)18] &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 1489392440U)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-99)))))));
                            arr_60 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-32763)), (2029876720)))) && (((/* implicit */_Bool) ((unsigned int) var_10)))))) < ((~(((/* implicit */int) arr_29 [i_13 - 1]))))));
                        }
                    }
                    var_41 += ((((/* implicit */_Bool) min((((arr_4 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_1 [i_0]))), (((/* implicit */unsigned int) var_18))))) ? ((~(((/* implicit */int) arr_29 [(unsigned char)11])))) : (((((/* implicit */int) ((short) var_12))) ^ (((/* implicit */int) var_13)))));
                }
                arr_61 [i_0] [(unsigned short)4] [i_0] |= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_57 [i_0] [(unsigned short)10] [i_0] [i_0] [i_0] [i_1] [i_1]))) < (var_10)))), (((long long int) arr_28 [(short)6]))));
                /* LoopSeq 1 */
                for (short i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    arr_65 [i_1] [i_1] [i_17] = ((/* implicit */unsigned short) min((((((/* implicit */int) (short)32753)) - (((/* implicit */int) (unsigned short)61306)))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [(signed char)10])) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_66 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 2166034903U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-12))))) : (((((/* implicit */_Bool) arr_47 [i_0] [i_1] [i_17] [i_1] [i_0] [i_1] [i_1])) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) arr_5 [i_1]))))));
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        for (long long int i_19 = 0; i_19 < 20; i_19 += 4) 
                        {
                            {
                                arr_72 [i_0] [i_0] [i_1] [i_17] [(short)2] [(short)2] [i_19] = ((/* implicit */signed char) -990712613);
                                arr_73 [i_0] [i_1] [i_17] [i_18] [i_19] = ((/* implicit */unsigned long long int) arr_31 [i_19] [i_17] [i_0] [i_0]);
                                arr_74 [i_19] [i_1] [(signed char)16] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)24)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_44 [i_1] [i_17] [i_17] [i_17] [i_17]), (((/* implicit */short) arr_4 [i_0] [i_18])))))) : (((unsigned int) arr_44 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                                arr_75 [i_0] [i_0] [5U] [i_17] [i_1] [(signed char)12] = ((/* implicit */_Bool) var_15);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
