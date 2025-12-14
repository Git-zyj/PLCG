/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206560
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3] [i_1])) ? (arr_8 [i_0] [i_0] [i_0] [i_1]) : (arr_8 [i_0] [i_1] [i_1] [i_1]))))));
                                arr_17 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)57662)), (510412946)))), ((-(349194759U)))));
                                arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_2] [i_1] [i_0]))) : (arr_3 [i_0]))))) >> (((((/* implicit */int) max((((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), (var_11)))), (var_9)))) - (217))));
                                var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_2)), (((unsigned short) var_2))))), (max((var_4), (((/* implicit */unsigned long long int) (+(var_8))))))));
                                arr_19 [i_0] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 349194785U)))) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) ((signed char) var_1)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    arr_23 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) + (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1855254953U))) : (((/* implicit */unsigned int) arr_12 [i_5] [i_1]))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min(((((~(var_4))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9)))))), (((/* implicit */unsigned long long int) ((arr_3 [i_5 - 1]) & ((-9223372036854775807LL - 1LL))))))))));
                    arr_24 [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) (short)-32765);
                }
                for (short i_6 = 2; i_6 < 11; i_6 += 3) 
                {
                    arr_27 [i_1] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_16 [i_6 + 3] [i_6 + 2] [i_6] [i_6] [i_6 + 2])) ? (var_8) : (((/* implicit */long long int) arr_16 [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_6 - 2] [i_6])))) % (((/* implicit */long long int) (-(arr_16 [i_6 - 1] [i_6 + 2] [i_6] [i_6] [i_6 + 2]))))));
                    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 0U)) : (arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (arr_25 [i_0] [i_0]))))) : ((-(var_5)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16383U))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (1220350782)))))) : (((((/* implicit */_Bool) arr_1 [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 2168734676U)))) : (((long long int) var_5))))));
                    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3699)) != ((~(arr_2 [i_6 - 1])))));
                }
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 2; i_8 < 12; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                arr_38 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_25 [i_1] [i_1])))) - ((-(((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7873))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_34 [i_8] [i_8] [i_8 - 1] [i_8] [i_8 + 1] [i_8])) : (arr_5 [i_1] [i_8] [i_8 + 2])))));
                                var_18 = ((/* implicit */signed char) (-(349194759U)));
                            }
                        } 
                    } 
                    arr_39 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_12);
                    arr_40 [i_0] [i_1] = ((/* implicit */long long int) var_2);
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 13; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (signed char)-30);
                                var_20 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_1]))) / (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_1])) : (arr_2 [i_10 + 1]))))));
                                var_21 += max((((/* implicit */unsigned long long int) (short)21105)), (var_4));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) >> (((((var_8) + (((/* implicit */long long int) 510412944)))) - (5784765683694067749LL)))))))))));
                }
                var_23 *= ((/* implicit */short) max((((/* implicit */unsigned int) var_2)), ((((-(951404339U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (1220350771) : (((/* implicit */int) arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (var_0)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) : (1855254953U))))))));
    var_25 = ((/* implicit */long long int) (-((-(var_3)))));
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_6))));
    var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1587037891U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)57662)))) : (((/* implicit */int) var_9))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) var_12))))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58993))) : (var_8)))))));
}
