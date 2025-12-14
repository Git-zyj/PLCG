/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21156
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
    var_20 = (+(var_3));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (+(((unsigned int) min((1243634547U), (1243634547U))))));
                var_22 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10))))))), (((((/* implicit */_Bool) (+(1243634547U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_0]))))));
                var_23 = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1 - 3] [1U])))));
                var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)-115)))))) == (((arr_6 [i_1 - 3] [i_1 - 3]) ? (((/* implicit */long long int) min((3051332748U), (((/* implicit */unsigned int) var_19))))) : (min((var_16), (((/* implicit */long long int) arr_6 [(short)12] [i_1]))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((1243634515U), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)32767)))))))) ? (((/* implicit */int) (signed char)114)) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_0] [i_1 - 4]))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) max((var_26), (arr_8 [i_1] [i_1 - 3] [i_2])));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned char) (+(1839944197)));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32763)) || (((/* implicit */_Bool) (signed char)-115))));
                            var_29 = ((/* implicit */int) (+(-6252877180556119009LL)));
                            var_30 = ((/* implicit */long long int) (~(18113860580792161347ULL)));
                        }
                        for (unsigned int i_5 = 2; i_5 < 9; i_5 += 2) 
                        {
                            var_31 += ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) 73740794U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22073))) : (2287828610704211968ULL))), (((/* implicit */unsigned long long int) (signed char)3)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_7 [2U] [(signed char)12] [i_2] [i_5 + 1])))) ? (((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned char)250)))) : (194988319))))));
                            var_32 ^= ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_11)), (12592005000426912638ULL)))));
                            var_33 |= ((/* implicit */signed char) max((((long long int) (short)32762)), (((/* implicit */long long int) (-(((1243634547U) * (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                        }
                        var_34 = ((((((/* implicit */_Bool) (signed char)-91)) || (((/* implicit */_Bool) arr_14 [i_0] [i_0 + 2] [i_0] [i_1] [i_1] [i_1])))) ? (max((((/* implicit */int) (short)-32767)), (16646144))) : (((/* implicit */int) ((signed char) arr_14 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (int i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)-31227)) && (((/* implicit */_Bool) (signed char)-1)))) && (((/* implicit */_Bool) var_0))))) - (var_6))))));
                        var_36 |= ((/* implicit */unsigned long long int) 4221226501U);
                        /* LoopSeq 3 */
                        for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            var_37 ^= ((/* implicit */unsigned char) ((long long int) min((((/* implicit */short) arr_19 [i_0 + 2] [i_1 + 1] [i_6 + 1])), ((short)12710))));
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 4] [i_0] [i_6 + 1] [i_0] [i_7])) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_1 + 1] [i_0] [i_6 - 1] [i_7] [i_2])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_14 [i_0 + 1] [i_1 - 1] [i_0] [i_6 - 1] [(unsigned short)10] [i_2]), (var_0)))))));
                            var_39 = ((/* implicit */short) ((max((((/* implicit */unsigned int) (signed char)-17)), (var_12))) > (((/* implicit */unsigned int) max((((/* implicit */int) ((short) 3051332793U))), (var_6))))));
                            var_40 &= ((/* implicit */short) min((((/* implicit */long long int) max(((signed char)84), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)13570)) || (((/* implicit */_Bool) arr_3 [i_1] [i_1])))))))), (max((((/* implicit */long long int) max(((short)4110), (((/* implicit */short) arr_6 [i_1] [i_6]))))), ((-9223372036854775807LL - 1LL))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            var_41 = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned short)51966)), (arr_11 [i_0 + 1] [i_0] [i_0 + 1] [11] [i_0])))));
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)36049)) ? (((3051332793U) & (((/* implicit */unsigned int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)90), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)13576)) || (((/* implicit */_Bool) 1266087789)))))))))));
                            var_43 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_9 [i_0 - 1]), (arr_9 [i_0 + 2]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            var_44 *= ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) 3051332784U)) ? (arr_17 [i_0] [i_0 + 2] [i_1] [i_2] [i_6] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49756))))) : (arr_28 [i_0] [i_1] [i_1] [i_1 - 3] [(unsigned short)1] [i_1])));
                            var_45 &= ((/* implicit */_Bool) ((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13576)))));
                            var_46 = ((/* implicit */unsigned long long int) ((unsigned short) arr_12 [i_6 + 1] [i_1 - 3]));
                        }
                        var_47 += ((/* implicit */int) (unsigned short)55060);
                    }
                    for (unsigned char i_10 = 4; i_10 < 12; i_10 += 1) 
                    {
                        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) min((((((/* implicit */int) arr_14 [(unsigned short)8] [i_0 - 1] [i_1] [i_0] [i_0] [i_0])) < (((/* implicit */int) (signed char)-110)))), (((((/* implicit */_Bool) (unsigned short)13567)) || (((/* implicit */_Bool) (signed char)0)))))))));
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1266087789)), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) > (var_8))))) : (min((-9223372036854775797LL), (arr_13 [i_0] [i_0] [i_2] [i_10] [i_2])))))) ? (((((/* implicit */int) var_19)) - (((/* implicit */int) arr_14 [i_2] [i_2] [i_0] [i_0] [(unsigned char)9] [i_1 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55052)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38859))) : (1243634511U)))))))));
                    }
                }
                for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 13; i_13 += 2) 
                        {
                            {
                                var_50 = ((((/* implicit */unsigned int) (((-(((/* implicit */int) (short)-10631)))) ^ (((/* implicit */int) var_18))))) - (arr_7 [i_0] [i_0] [i_0] [i_0]));
                                var_51 = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) (unsigned char)145)))) ? (((((/* implicit */_Bool) 3051332788U)) ? (((/* implicit */long long int) -408207782)) : (arr_11 [i_0] [i_1] [i_1] [i_12] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)84))) > (1243634497U))))))), (((/* implicit */long long int) max((((/* implicit */short) ((unsigned char) (signed char)99))), (((short) arr_6 [i_1] [i_1])))))));
                                var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) max(((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49759))) < (arr_1 [i_12] [i_13])))))), ((~(((((/* implicit */_Bool) (unsigned char)156)) ? (arr_35 [9U] [i_1] [i_11] [9U] [0ULL]) : (((/* implicit */int) var_13)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 3; i_14 < 10; i_14 += 2) 
                    {
                        for (signed char i_15 = 3; i_15 < 11; i_15 += 2) 
                        {
                            {
                                var_53 -= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((long long int) arr_34 [i_0] [i_0] [i_11] [i_14] [2LL]))) ? (((/* implicit */unsigned long long int) ((var_16) | (((/* implicit */long long int) ((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) 1879048192U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_0 + 2] [i_0] [i_0] [i_0] [i_0]))))));
                                var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3051332784U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [(short)11] [i_0] [i_11] [i_14 - 1] [i_15])))))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-125)), (var_19)))) : ((~(((/* implicit */int) var_15))))))) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8147)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (unsigned short)54623)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_16 = 0; i_16 < 10; i_16 += 3) 
    {
        for (signed char i_17 = 0; i_17 < 10; i_17 += 3) 
        {
            for (unsigned long long int i_18 = 1; i_18 < 8; i_18 += 2) 
            {
                {
                    var_55 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3051332787U)))))) | (((((/* implicit */_Bool) arr_34 [i_16] [(signed char)11] [8LL] [i_18] [i_18])) ? (arr_31 [i_16] [i_17] [i_16]) : (((/* implicit */unsigned int) -1266087789))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_17] [i_17]))) : ((~(max((((/* implicit */unsigned int) (signed char)-116)), (var_12)))))));
                    /* LoopNest 2 */
                    for (short i_19 = 1; i_19 < 6; i_19 += 4) 
                    {
                        for (long long int i_20 = 0; i_20 < 10; i_20 += 2) 
                        {
                            {
                                var_56 = var_1;
                                var_57 = ((/* implicit */unsigned long long int) 3051332780U);
                                var_58 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) < (var_4))) ? (((/* implicit */long long int) arr_7 [i_18 + 1] [i_19 - 1] [i_19] [i_19 + 1])) : (-1478942316215285530LL))))));
                            }
                        } 
                    } 
                    var_59 = ((/* implicit */signed char) (short)506);
                    var_60 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-113))));
                }
            } 
        } 
    } 
    var_61 = ((/* implicit */long long int) var_2);
}
