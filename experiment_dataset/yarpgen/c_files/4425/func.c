/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4425
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            var_11 = ((/* implicit */int) ((unsigned long long int) (-(var_10))));
                            var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1676432181U)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))) : (var_2))) : (((/* implicit */unsigned int) min((623160192), (((/* implicit */int) (signed char)0))))))))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 21; i_5 += 2) 
                        {
                            arr_17 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) ((short) ((((/* implicit */long long int) ((((/* implicit */int) (short)-32755)) & (((/* implicit */int) (unsigned char)62))))) >= (arr_14 [7U] [i_5 + 2] [i_5 + 2] [i_5 - 3] [7U] [i_5]))));
                            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_2))));
                            arr_18 [17U] [17U] [i_1] [i_5] = ((/* implicit */unsigned long long int) (signed char)4);
                        }
                        /* LoopSeq 2 */
                        for (short i_6 = 3; i_6 < 20; i_6 += 3) /* same iter space */
                        {
                            var_14 &= var_10;
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) (_Bool)0))) | (3722562578702773883ULL)))) ? (((/* implicit */unsigned int) ((((((/* implicit */long long int) -625242843)) < (5452500523258713348LL))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-9136))))) : (min((2417332505U), (4294967295U))))))));
                        }
                        for (short i_7 = 3; i_7 < 20; i_7 += 3) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((399951327) <= (-1897553040))) ? (((/* implicit */int) ((signed char) arr_7 [i_7 - 3] [i_3] [i_0] [4] [i_0] [21LL]))) : (((/* implicit */int) ((_Bool) -7990849966470475255LL)))));
                            arr_27 [i_3] [i_3] |= (((!(((/* implicit */_Bool) arr_4 [(signed char)11])))) ? (-7990849966470475255LL) : (((/* implicit */long long int) ((((/* implicit */int) ((short) 0))) * (((/* implicit */int) ((_Bool) arr_3 [19ULL] [i_2])))))));
                            arr_28 [i_1] [i_3] [1U] = (_Bool)0;
                        }
                    }
                    /* vectorizable */
                    for (short i_8 = 2; i_8 < 21; i_8 += 2) 
                    {
                        arr_33 [i_0] [i_1] [i_2] [i_2] [i_1] = (((~(((/* implicit */int) (short)9136)))) <= (((/* implicit */int) arr_9 [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 1] [i_8 + 1])));
                        /* LoopSeq 3 */
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            arr_36 [i_1] [i_1] [i_2] [i_2] [i_1] [i_9] = ((/* implicit */unsigned long long int) 2147483638);
                            arr_37 [i_1] [i_1] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)10325)) << (((((((/* implicit */_Bool) 478592645)) ? (-1LL) : (-5452500523258713348LL))) + (8LL)))));
                            var_16 = ((/* implicit */_Bool) ((unsigned int) 2147483647));
                        }
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            arr_41 [i_0] [i_8 + 3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))) >= (((var_10) - (((/* implicit */long long int) ((/* implicit */int) (signed char)101)))))));
                            arr_42 [i_1] [15] [i_2] [i_1] [i_10] = ((/* implicit */unsigned int) ((unsigned long long int) arr_7 [i_8] [i_8] [i_8 + 2] [7U] [i_8 + 2] [i_8]));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_46 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_8 + 2] [i_1] [i_1] [i_8 - 1])) ? (((/* implicit */unsigned long long int) 4203857503U)) : (arr_11 [i_8 + 3] [i_1] [i_1] [i_8 + 1])));
                            arr_47 [i_0] [i_1] [i_2] [i_8] [i_11] = ((/* implicit */unsigned char) var_10);
                            arr_48 [i_0] [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) 3573082818206415311LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(short)19] [i_0] [i_0] [i_0]))) : (arr_23 [i_0] [(signed char)21] [i_1] [i_2] [i_1] [(unsigned short)14] [i_11])))));
                            arr_49 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_21 [i_1] [i_2] [i_2] [i_2] [9LL])) >> (((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) -1LL)))))));
                        }
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) * (-2454339979142753575LL))));
                        arr_53 [i_1] [i_2] [i_12] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 5452500523258713348LL)))) ? (((((/* implicit */int) (short)-9136)) + (1770785584))) : (((/* implicit */int) arr_24 [i_12] [i_12] [i_12 + 1] [i_12] [i_12]))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_18 &= ((/* implicit */unsigned long long int) (signed char)34);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_12 [i_13] [i_13] [(unsigned char)13] [i_1] [i_0] [i_0] [i_0])))) == (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551613ULL))))))))) == (((((/* implicit */_Bool) -399951313)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_13] [i_1]))) : (547879640U)))));
                        /* LoopSeq 3 */
                        for (signed char i_14 = 1; i_14 < 22; i_14 += 4) 
                        {
                            arr_60 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) min(((((_Bool)1) || (((/* implicit */_Bool) var_7)))), ((_Bool)1))))));
                            var_20 += ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */int) ((_Bool) 8739532042397431947LL))) : (((/* implicit */int) var_9)))), (((/* implicit */int) min((((/* implicit */unsigned char) max((arr_21 [i_0] [i_1] [i_2] [(short)22] [(unsigned char)2]), ((_Bool)1)))), (((unsigned char) 4294967295U)))))));
                            arr_61 [i_1] [i_2] [i_2] [23ULL] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42419))) : (var_10)))) ? (((/* implicit */int) min(((short)9145), (((/* implicit */short) var_7))))) : (((/* implicit */int) arr_34 [i_1] [i_14 + 2] [i_1] [i_13] [i_14 - 1] [i_2]))))) ? (((/* implicit */long long int) min(((~(((/* implicit */int) (signed char)-1)))), (min((((/* implicit */int) arr_45 [i_0] [i_1] [i_2] [i_13] [5LL])), (arr_16 [i_1] [i_13])))))) : (min((7990849966470475255LL), (-9016200482609108964LL)))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) 
                        {
                            arr_64 [i_0] [i_0] [i_1] [i_1] [i_13] [i_13] [i_15] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((-820706324), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (var_4))))))), (min((((/* implicit */unsigned long long int) (short)-9158)), (4ULL)))));
                            arr_65 [i_0] [i_0] [i_1] [i_2] [i_13] [i_15] [i_15] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1] [i_0])) + (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_10 [i_15] [i_1] [i_13] [i_1] [i_1] [i_1] [i_0])) + (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_13] [i_15] [i_15]))))));
                        }
                        for (short i_16 = 3; i_16 < 22; i_16 += 1) 
                        {
                            arr_68 [i_0] [i_1] [(unsigned char)15] [i_1] [17] = ((/* implicit */int) min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_57 [i_0] [i_1] [i_13])) : (((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))), ((+(7990849966470475242LL)))));
                            var_21 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])) ? (((var_3) ? (-3784201294241549300LL) : (((/* implicit */long long int) -2147483645)))) : (((((/* implicit */_Bool) arr_63 [i_0] [i_0] [i_1] [i_2] [i_13] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10))))));
                            arr_69 [i_1] [i_1] [i_2] [i_1] [i_16 - 3] [4U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_16 - 1] [i_16 + 1] [i_16 + 1] [20LL] [i_16])) ? (arr_50 [i_16] [i_16 + 1] [i_16 + 1] [23] [i_16 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -3608359731290188405LL)))) : (min((arr_50 [i_16 + 2] [i_16 - 1] [i_16 + 2] [i_16 - 1] [i_16]), (arr_50 [i_16] [i_16 - 1] [i_16 - 2] [i_16 - 2] [i_16])))));
                            var_22 = ((((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_13] [i_13] [i_16 + 1] [i_16])))))) << (((((/* implicit */int) arr_0 [i_16])) + (55))));
                            arr_70 [i_2] [i_13] [i_2] [i_2] [i_1] [i_1] [i_2] |= ((/* implicit */signed char) arr_23 [i_0] [i_0] [i_1] [i_2] [i_2] [i_13] [i_16 - 1]);
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 3; i_17 < 23; i_17 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
                        arr_73 [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (9223372036854775791LL)))) ? (((long long int) var_5)) : (((/* implicit */long long int) min((arr_5 [i_0] [i_1]), (((/* implicit */unsigned int) (unsigned short)2086)))))))) ? ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_17] [i_0] [i_1])) : (((/* implicit */int) arr_44 [i_0] [i_1] [i_1] [i_17] [i_1])))))) : (((arr_44 [i_17] [(short)21] [8U] [i_1] [i_0]) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (unsigned short)65512))))));
                    }
                    /* vectorizable */
                    for (short i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        arr_76 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((unsigned int) arr_63 [i_0] [i_1] [i_2] [i_2] [i_18] [i_0]));
                        arr_77 [i_18] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((arr_51 [i_0] [i_1] [i_1] [i_1] [i_18]) < (((/* implicit */int) arr_74 [(_Bool)1] [8U] [i_2] [i_18])))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)-97)) + (106)))))) : (var_4)));
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 3; i_19 < 22; i_19 += 1) 
                        {
                            arr_81 [i_1] [i_18] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1012497296U))))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-117))))));
                            arr_82 [i_1] [i_1] = ((/* implicit */_Bool) (signed char)-12);
                            arr_83 [i_0] [i_1] [i_1] [i_18] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_75 [i_1] [i_19] [i_19 + 2] [i_19] [i_1] [i_19 + 1])) - (((/* implicit */int) arr_75 [i_0] [i_1] [i_1] [i_1] [i_1] [i_19 - 2]))));
                            arr_84 [i_1] [i_1] [i_2] [i_18] [i_19 - 1] = ((/* implicit */unsigned short) -2950716728656154541LL);
                        }
                        for (unsigned int i_20 = 0; i_20 < 24; i_20 += 3) 
                        {
                            var_24 -= ((/* implicit */_Bool) arr_4 [i_0]);
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~(((/* implicit */int) var_5)))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_21 = 2; i_21 < 23; i_21 += 4) 
                        {
                            arr_89 [i_0] [i_1] [i_0] [i_0] [i_0] [(unsigned short)12] [i_0] = ((/* implicit */signed char) ((_Bool) (short)12097));
                            arr_90 [i_0] [i_1] [15U] [i_18] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (signed char)-50))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45193)) ? (65535) : (((/* implicit */int) var_3)))))));
                        }
                        for (unsigned int i_22 = 0; i_22 < 24; i_22 += 4) 
                        {
                            arr_94 [i_0] [(short)22] [i_18] [i_18] [i_18] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_79 [i_18])) : (var_8)))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (unsigned char)191))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -5652436595381504431LL)) == (18446744073709551600ULL)))));
                            arr_95 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_1] [i_18]);
                            var_26 *= ((/* implicit */signed char) ((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)1))));
                            arr_96 [i_1] [i_1] [i_2] [i_18] [i_22] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_86 [i_0] [i_1] [i_2] [i_1] [i_2]))) + (var_8))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) + (var_6))))));
                            var_27 -= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_1] [i_1] [i_2] [i_1] [i_1]))));
                        }
                        var_28 = ((/* implicit */signed char) (+(var_2)));
                    }
                    arr_97 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 1459559014897113489LL)) : (arr_11 [i_1] [i_1] [(signed char)0] [(signed char)0]))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) var_1)))))))) ? (((/* implicit */int) min((arr_80 [i_0] [16LL] [i_2] [i_1] [i_2]), (((/* implicit */signed char) (_Bool)0))))) : (((/* implicit */int) ((unsigned char) arr_7 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_1] [i_0])))));
                    arr_98 [i_2] [i_2] |= ((/* implicit */unsigned short) min((min(((+(11ULL))), (((/* implicit */unsigned long long int) (!(arr_7 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (7097548257785945352LL) : (-2694971885741954660LL)))))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */int) min((min((min((8268715244584755005LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) max((var_2), (var_8)))))), (((/* implicit */long long int) min((var_6), (((/* implicit */int) var_5)))))));
    var_30 = ((/* implicit */short) var_7);
}
