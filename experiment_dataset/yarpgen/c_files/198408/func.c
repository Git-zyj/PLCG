/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198408
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
    var_12 = ((/* implicit */signed char) (((((-(var_3))) >> (((((/* implicit */int) var_9)) + (9143))))) == (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 231392437014072346LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)757))) : (var_3)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_7))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -399934114)) ? (((arr_11 [i_0] [i_1] [i_1] [i_3]) ? (arr_1 [i_4]) : (((/* implicit */int) arr_13 [i_4] [i_3] [i_2 + 1] [i_1] [i_0])))) : (((int) arr_7 [i_0] [i_0] [i_0] [i_1]))));
                                var_14 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_9 [(signed char)0] [i_2 + 1] [i_2] [i_2 - 1]))));
                                arr_14 [i_0] [i_1] [13] [i_1] [13] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2 - 1])) * (((var_7) ? (((/* implicit */int) var_0)) : (var_11)))));
                                var_15 = var_4;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 14; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_4 [i_6] [i_2] [i_0]);
                                var_16 ^= ((/* implicit */unsigned char) var_11);
                            }
                        } 
                    } 
                    arr_23 [i_2] [(_Bool)1] [(_Bool)1] [i_0] &= ((/* implicit */_Bool) 1762815658);
                    var_17 &= arr_17 [i_0] [12U] [i_1] [10LL] [i_1];
                    arr_24 [i_0] [i_1] [i_0] [i_2] = (-(((/* implicit */int) ((((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])) == (((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned short i_7 = 1; i_7 < 15; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 2; i_8 < 13; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-18186)) ? (((((/* implicit */_Bool) var_4)) ? (arr_17 [i_1] [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_7] [i_7 + 1] [i_1] [i_8 + 3]))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)10)))))));
                                arr_32 [i_1] [i_7] [i_1] [i_9] = ((/* implicit */int) max((2981476391U), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74))) <= (2861925780U))))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(short)9] [i_1] [i_7 - 1] [i_1] [i_9]))) | (arr_7 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_1])))))));
                                var_19 = (+(626955420));
                            }
                        } 
                    } 
                    arr_33 [i_7 - 1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned short) 469286051));
                    arr_34 [i_1] = ((/* implicit */short) arr_7 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_1]);
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_20 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_36 [i_7 + 1] [i_7] [i_7 + 1])))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((min((arr_9 [i_0] [i_7 - 1] [i_7] [i_10]), (((/* implicit */short) var_5)))), (max((arr_9 [i_10] [i_7 - 1] [i_7 - 1] [(unsigned char)10]), (((/* implicit */short) (_Bool)0)))))))));
                        arr_37 [i_0] [i_1] [i_7] [i_10] = -469286039;
                        arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)93)) / (((/* implicit */int) (unsigned char)181))));
                    }
                    for (unsigned char i_11 = 4; i_11 < 13; i_11 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            arr_43 [i_0] [i_1] [i_1] [i_11 + 1] [i_1] [i_1] [i_1] = max((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_40 [i_12] [i_11 + 3] [i_7] [i_1])))), (((((/* implicit */int) arr_27 [i_11 + 3] [i_1] [i_1] [i_7 - 1])) - (((/* implicit */int) arr_25 [i_7] [i_1] [i_12])))));
                            var_22 = ((/* implicit */int) (unsigned char)74);
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_23 = ((/* implicit */int) ((long long int) arr_4 [i_0] [i_1] [i_7 - 1]));
                            arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] = (+(((/* implicit */int) arr_18 [i_0] [i_1] [i_7 + 1] [i_13] [i_13])));
                            arr_48 [i_0] [i_7] [i_7] [i_1] [i_13] = ((/* implicit */int) (short)-28877);
                        }
                        arr_49 [i_1] = ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)7)), ((unsigned short)41666)))) != (((/* implicit */int) var_7)));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_8))));
                        arr_50 [i_1] = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_7 + 1] [i_11]);
                    }
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_11);
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)32018)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (unsigned short)41666)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)16518)) && (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (var_8))))))) : ((+(4294967295U)))));
}
