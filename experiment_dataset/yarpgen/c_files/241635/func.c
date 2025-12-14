/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241635
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), (var_13)))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_16 [i_2] [i_1] [i_1] [i_3] [i_2] [i_2] [i_0] = max((((/* implicit */unsigned int) max((arr_0 [i_0] [i_4 - 1]), (arr_0 [i_0] [i_4 - 1])))), (max((arr_2 [i_1]), (arr_2 [i_3 - 1]))));
                                arr_17 [i_0] [i_2] [i_2] [i_3 - 2] [i_3] [i_4] [i_4 - 1] = ((/* implicit */long long int) 212476946U);
                                arr_18 [i_0] [i_0] [i_2] [i_2 - 2] [i_3] [i_4 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2])) ? (arr_5 [i_4 + 1] [i_2 + 1] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (min((4082490370U), (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1017))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) arr_19 [i_1] [i_1])) ? (212476946U) : (arr_10 [i_5] [i_0] [i_0] [i_1] [i_0]))))), (((/* implicit */unsigned int) ((int) 456541134U)))));
                    arr_21 [i_0] [i_1] = ((/* implicit */int) max((-4223079458297390951LL), (((/* implicit */long long int) arr_19 [i_0] [i_5]))));
                    var_21 = ((/* implicit */unsigned short) (signed char)115);
                    arr_22 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (min((((/* implicit */unsigned int) min((((/* implicit */short) (signed char)115)), (var_16)))), (max((var_15), (((/* implicit */unsigned int) var_8))))))));
                }
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 4; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 4082490349U)) && ((_Bool)1)))));
                                arr_31 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */int) var_0)), (var_1))) : (((/* implicit */int) arr_24 [i_8 - 1] [i_8 - 1])))), (arr_23 [i_1] [i_1] [i_6] [i_6])));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        var_23 |= ((/* implicit */unsigned short) min((arr_25 [i_0] [i_1] [i_1]), (((/* implicit */int) ((short) 4082490350U)))));
                        arr_34 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) (_Bool)1);
                    }
                    for (unsigned int i_10 = 2; i_10 < 12; i_10 += 3) 
                    {
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(min((((/* implicit */long long int) ((short) arr_14 [i_10] [i_6] [i_0]))), (((arr_35 [i_0] [i_1] [i_6] [i_10 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63823))))))))))));
                        var_25 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)111)))), (4093276671U)))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_1] [i_11] = ((unsigned short) (+(max((arr_15 [i_0] [i_1] [i_1] [i_1] [i_6] [i_1] [i_1]), (((/* implicit */unsigned int) (unsigned short)52294))))));
                        arr_40 [i_0] [i_1] [i_6] [i_11] = ((/* implicit */int) (((!(((/* implicit */_Bool) (+(4082490350U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_11) & (((/* implicit */long long int) ((/* implicit */int) (short)2969)))))) ? ((-(((/* implicit */int) (unsigned short)190)))) : (((/* implicit */int) var_19))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) var_19))))), (max((((/* implicit */long long int) 212476965U)), (var_14)))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_13 = 2; i_13 < 13; i_13 += 3) 
                        {
                            arr_47 [i_0] [i_1] [i_6] [i_12] [i_13] = ((/* implicit */unsigned int) -1LL);
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        arr_48 [i_0] [i_1] [i_6] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (201690622U) : (2453403740U))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])) ? (-6011902466410512964LL) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-59))))))), (((/* implicit */long long int) (unsigned short)52269))));
                            var_28 = ((/* implicit */unsigned short) ((unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_6] [i_14])))) ? (((/* implicit */int) (short)-1017)) : (((/* implicit */int) (unsigned short)52269)))));
                            arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) / (var_11)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_0] [i_12])) * (((/* implicit */int) (short)1009))))) : (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])) ? (445182846U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_1] [i_1] [i_1] [i_14] [i_1]))))))) : (((/* implicit */unsigned int) (+(var_1))))));
                            var_29 = ((/* implicit */unsigned int) ((unsigned short) (_Bool)1));
                        }
                    }
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) max((min((((/* implicit */unsigned int) (unsigned short)127)), ((~(arr_10 [i_0] [i_0] [i_6] [i_1] [i_0]))))), (((/* implicit */unsigned int) ((short) (unsigned short)185))))))));
                }
                /* LoopSeq 3 */
                for (signed char i_15 = 1; i_15 < 13; i_15 += 4) 
                {
                    arr_56 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_15] [i_15 + 1]))));
                    arr_57 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_54 [i_15 + 1] [i_15 - 1] [i_15 + 2] [i_15])) : (((/* implicit */int) arr_54 [i_15 + 1] [i_15 - 1] [i_15 - 1] [i_15 - 1])))), (((((/* implicit */_Bool) ((var_10) << (((arr_25 [i_0] [i_1] [i_0]) + (618973129)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (arr_41 [i_0] [i_0] [i_15] [i_15] [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 4; i_16 < 11; i_16 += 3) 
                    {
                        for (short i_17 = 1; i_17 < 13; i_17 += 3) 
                        {
                            {
                                arr_64 [i_0] [i_0] [i_0] [i_0] [i_17] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_15 - 1] [i_15 + 2] [i_15 + 1])) ? (((/* implicit */int) arr_20 [i_15 + 1] [i_15] [i_15 + 1])) : (((/* implicit */int) arr_20 [i_15 + 2] [i_15] [i_15 + 2]))))) ? (((/* implicit */int) arr_20 [i_15 - 1] [i_15] [i_15 + 1])) : (((((/* implicit */_Bool) arr_20 [i_15 + 2] [i_15] [i_15 - 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_20 [i_15 + 2] [i_15] [i_15 - 1]))))));
                                arr_65 [i_1] &= ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (var_3)))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_18 = 4; i_18 < 13; i_18 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 0; i_19 < 15; i_19 += 4) 
                    {
                        for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) min((arr_55 [i_20] [i_20]), (var_14)))) ? (((((/* implicit */_Bool) var_6)) ? (arr_14 [i_1] [i_18] [i_19]) : (6893394639159737458ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_18 - 2])) ? (var_5) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) 525722828)) : (var_15)))) ? (((var_8) ? (arr_29 [i_0] [i_1] [i_18 + 2] [i_19] [i_0] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)52294))))))))));
                                arr_73 [i_0] [i_19] = ((/* implicit */_Bool) (+(((long long int) arr_5 [i_0] [i_18 + 1] [i_20]))));
                                var_32 = ((/* implicit */unsigned short) arr_61 [i_18] [i_1] [i_18 + 2] [i_19] [i_20]);
                                arr_74 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((_Bool)1) ? (arr_37 [i_19] [i_1] [i_18] [i_19]) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_20])) ? (-1991410168) : (((/* implicit */int) (unsigned short)13241))))), (var_7))));
                                arr_75 [i_0] [i_0] [i_18] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) ? (var_3) : (((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_24 [i_0] [i_0])))), (((int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_0] [i_18 - 3] [i_0] [i_18 + 1] [i_18]))) : (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((long long int) min((((/* implicit */long long int) 212476946U)), (var_14))))));
                }
                for (int i_21 = 0; i_21 < 15; i_21 += 1) 
                {
                    var_34 += ((/* implicit */signed char) arr_72 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_35 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_21]) : (arr_2 [i_0])))));
                }
            }
        } 
    } 
    var_36 = ((/* implicit */long long int) var_8);
    var_37 = ((/* implicit */unsigned short) var_5);
}
