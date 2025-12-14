/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37718
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) - (((((/* implicit */int) (short)27495)) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (var_12))) - (3928972391U)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    arr_9 [i_0 + 4] [i_1] [i_1] = ((/* implicit */short) arr_2 [i_0] [i_0 + 3] [i_0]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_14 [i_0] [i_3] [i_2] [i_0] [i_3] [i_2 + 1] &= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)158))));
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((arr_10 [i_0] [i_0 + 3] [i_1 - 2] [i_2 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 2; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_6 [i_0] [i_1])))) >> (((((/* implicit */int) var_5)) - (121)))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [(short)8] [(short)8])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)255)))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 2; i_5 < 10; i_5 += 3) /* same iter space */
                    {
                        var_19 ^= var_10;
                        var_20 = ((/* implicit */short) ((arr_13 [2U] [i_1] [i_2 + 1] [i_5 + 2] [i_0 + 4] [i_5]) >> (((var_6) - (3514293405U)))));
                    }
                }
                for (unsigned int i_6 = 2; i_6 < 9; i_6 += 1) 
                {
                    arr_25 [i_1] [i_0 + 1] [i_1] = arr_19 [i_0] [i_0] [(short)10] [i_6 + 1];
                    /* LoopSeq 1 */
                    for (short i_7 = 2; i_7 < 8; i_7 += 3) 
                    {
                        arr_29 [8U] &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(short)4] [i_0] [i_7]))) <= (min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_0] [i_0] [i_0 + 3] [4U]))))), ((+(arr_18 [i_0 + 2] [i_0 + 2] [(short)6] [i_0 + 2])))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_24 [i_0] [i_0 + 3] [i_0 + 1] [i_1])) <= (((/* implicit */int) arr_22 [i_6] [7U] [i_6] [i_1])))))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_18 [i_7 - 2] [i_1 - 1] [(short)0] [i_6 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)97))))) : (((/* implicit */int) arr_8 [i_7 + 4] [i_0 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 - 2] [i_1] [i_6 + 1])) >= (((/* implicit */int) (short)3))))))))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_6)))))) ? ((+(((/* implicit */int) (unsigned char)236)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6 - 2] [i_6] [i_6] [i_6] [(unsigned char)2] [i_6])) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_6 - 1] [i_7 - 1]))))) && (((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0]))))))))));
                    }
                    arr_30 [i_0] [i_1] [9U] = ((/* implicit */unsigned char) max((max((min((arr_18 [i_1] [i_1] [i_1] [6U]), (((/* implicit */unsigned int) arr_22 [i_0] [i_1] [i_1] [i_1])))), ((+(arr_3 [i_0 - 1] [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (unsigned char)62)))))));
                }
                for (unsigned int i_8 = 1; i_8 < 11; i_8 += 1) 
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-734)) + (2147483647))) >> (((/* implicit */int) (unsigned char)3))))) ? (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_21 [0U])))) : (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) arr_21 [(short)8]))))))))));
                    var_25 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_8 - 1] [i_0 + 1])))))));
                    arr_33 [i_0] [(unsigned char)0] [(unsigned char)10] |= ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_19 [i_0] [i_1 - 1] [i_1 + 1] [i_1])))), (((/* implicit */int) min(((short)-1368), (((/* implicit */short) (!(((/* implicit */_Bool) var_5))))))))));
                }
                arr_34 [i_0] [i_1] [i_0 + 4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1])))))) ^ (((/* implicit */int) var_5))));
                var_26 -= min((var_6), (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_1]), (var_1))))) ^ (((((/* implicit */_Bool) (short)12658)) ? (3730405515U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))))))));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 3; i_9 < 10; i_9 += 2) 
                {
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1]))) < (var_6)))) | (((/* implicit */int) (unsigned char)54))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        for (short i_11 = 1; i_11 < 11; i_11 += 3) 
                        {
                            {
                                arr_42 [i_0] [i_10] &= (+(((arr_3 [i_9 - 2] [i_10]) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
                                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max((arr_31 [i_0] [i_1 + 1] [i_9]), (arr_11 [i_1]))) : (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) != ((-(var_7))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
