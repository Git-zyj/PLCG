/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44666
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
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_11 [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (var_5) : (5130611062162020133ULL)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            arr_14 [i_3] [(unsigned char)1] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 1] [i_0 + 1])) : (var_11));
                            arr_15 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned short)32764))) ? (((/* implicit */int) var_4)) : (((arr_2 [3U]) % (arr_6 [i_1] [i_1])))));
                        }
                        for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_3] [(short)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 453510520075381871LL)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) arr_12 [i_0 - 2] [i_0] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) | ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) 2865197839U))))) : (((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_5 [i_0 - 2])))));
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (~(var_11))))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_1]))) : (min((((/* implicit */unsigned int) var_7)), (arr_10 [i_5])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) max((var_11), (arr_2 [i_2]))))))) : (((((/* implicit */_Bool) var_6)) ? (541238886) : (980317039)))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned long long int) 2865197839U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(short)7] [i_1] [i_1] [i_1] [i_2] [i_1] [i_6 + 3]))))) : (((/* implicit */int) arr_3 [i_1]))))) & (arr_7 [(unsigned char)3] [i_1] [i_2] [i_3])));
                            arr_23 [i_6] [i_3] [10] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (arr_13 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_6 - 2] [i_6] [i_6] [7])))));
                        }
                        arr_24 [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned short) var_2)))))) == (min((((/* implicit */long long int) var_6)), (arr_22 [i_2] [i_1] [i_2] [i_3] [i_3] [i_2])))));
                    }
                    for (unsigned int i_7 = 3; i_7 < 10; i_7 += 3) 
                    {
                        arr_28 [i_1] [i_1] = ((/* implicit */int) (unsigned char)86);
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) ((-1477808592) == (((/* implicit */int) var_0)))))))) == (((((/* implicit */_Bool) arr_22 [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0 - 2] [i_0 + 2])) ? (((/* implicit */int) (short)-24836)) : (-541238887)))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_27 [i_0 + 1] [i_7] [i_2]))));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_7] [(short)8] [i_7 - 2] [i_0] [i_0] [i_0] [6U]))))))))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_31 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_9 [i_8 - 1] [7] [i_0 + 2] [i_0]), (arr_9 [i_8 - 1] [i_0 + 2] [i_0 + 2] [i_0]))))));
                        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -453510520075381872LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)97)))))));
                        arr_32 [i_2] [i_1] [i_0] [(unsigned char)11] [(unsigned char)11] [(unsigned char)11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0 + 2] [i_0 + 2])) ? (13316133011547531482ULL) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (short)-14994))))) : (max((var_3), (((/* implicit */long long int) arr_4 [i_0 + 1] [i_1] [i_0 - 2])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 3) 
                        {
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) var_11))), (((((/* implicit */_Bool) arr_21 [i_2] [i_8 - 1] [i_9 - 2])) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) -109367517)))))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) 541238886))));
                            arr_35 [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2] [1LL] [i_2] = ((/* implicit */unsigned int) (-(((unsigned long long int) (signed char)22))));
                        }
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_5))));
                    }
                    var_23 = ((/* implicit */unsigned short) max((((var_2) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_5 [i_0 - 1]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (((unsigned int) (_Bool)0)))))));
                    arr_36 [i_2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (17122919487238516723ULL))) | ((~(var_5))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) var_10);
    var_25 = ((/* implicit */int) min((var_25), (((((((/* implicit */_Bool) (~(1463921018)))) ? ((-(-541238887))) : (((/* implicit */int) var_6)))) & (((((-453510520075381872LL) > (((/* implicit */long long int) 850039344U)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_1))))))));
}
