/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238176
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) (!((_Bool)0)));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */long long int) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), (arr_0 [(unsigned short)12])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : ((+(6210639466553448420LL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_2);
                                var_14 |= ((/* implicit */int) (((-(min((((/* implicit */unsigned int) var_3)), (arr_9 [(signed char)23] [i_2] [22U] [(signed char)19]))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)0)))))))));
                                arr_12 [(unsigned short)17] [(unsigned char)0] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((4183640685U) < (((/* implicit */unsigned int) 29725156))))), (((unsigned int) arr_5 [i_0] [i_1]))));
                                arr_13 [7LL] [(signed char)4] [(signed char)4] [(signed char)20] [22U] = ((/* implicit */_Bool) -1460097630);
                                var_15 = ((/* implicit */_Bool) arr_7 [(short)15] [i_1] [i_1]);
                            }
                        } 
                    } 
                    var_16 |= ((/* implicit */_Bool) var_3);
                }
            } 
        } 
        arr_14 [11U] = ((/* implicit */_Bool) arr_5 [(unsigned char)0] [(unsigned char)0]);
    }
    var_17 |= ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (signed char i_5 = 2; i_5 < 14; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (short i_7 = 1; i_7 < 13; i_7 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)-22822)), (-7872932902502539872LL)));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (_Bool)1))));
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 3; i_8 < 14; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_20 |= 11887121331207852234ULL;
                            var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_5 + 1] [12])) ? (16127596631541899020ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        }
                        arr_28 [i_7] [i_6] [i_7] = ((/* implicit */unsigned long long int) (_Bool)0);
                    }
                    for (int i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        arr_33 [i_7] [i_5] [i_6] [i_7] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (max((min((arr_29 [i_5] [i_6] [i_7] [i_5]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27765))) : (var_8)))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 1; i_11 < 14; i_11 += 2) 
                        {
                            var_22 |= ((/* implicit */short) (-(((((/* implicit */int) (short)27765)) >> (0U)))));
                            arr_37 [i_5] [i_7] [i_7] [i_10] [i_11 + 1] = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (unsigned short)14605)))));
                        }
                        for (long long int i_12 = 0; i_12 < 15; i_12 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_0))));
                            arr_40 [i_5 - 2] [i_6] [i_7] [i_7] [13ULL] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) (signed char)35)), ((-(arr_30 [i_5] [i_6] [i_7 + 1] [i_7 + 1] [i_5] [i_5]))))));
                        }
                        for (long long int i_13 = 0; i_13 < 15; i_13 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1881734679)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5]))) : (max((((/* implicit */unsigned long long int) var_10)), (arr_16 [(_Bool)1] [i_6])))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((int) var_11))))));
                            var_25 *= ((/* implicit */short) (unsigned char)60);
                            var_26 = ((/* implicit */unsigned long long int) (-(1224257096)));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 15; i_15 += 2) 
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_6] [i_7] [i_6] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27766))) : (arr_29 [i_5] [i_6] [i_7] [i_14])));
                            arr_47 [i_5 + 1] [i_7] = (-(((((/* implicit */_Bool) arr_5 [(unsigned char)21] [i_14])) ? (-1124206907) : (((/* implicit */int) arr_1 [i_5 - 2])))));
                        }
                        arr_48 [i_14] [14] [i_5] [i_5] [i_6] [(_Bool)1] |= ((/* implicit */unsigned short) ((4294967289U) >> (((((/* implicit */int) arr_2 [i_5 - 2])) - (152)))));
                    }
                }
            } 
        } 
        var_28 |= ((/* implicit */long long int) ((short) min((1984283827), (((/* implicit */int) (short)30663)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_16 = 0; i_16 < 18; i_16 += 2) 
    {
        for (short i_17 = 0; i_17 < 18; i_17 += 3) 
        {
            {
                var_29 &= ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(short)5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_50 [3U] [(_Bool)1])))) ? (max((((/* implicit */unsigned long long int) var_2)), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30664))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */int) (unsigned short)38942)), (1201930266)))))));
                var_30 *= (-(((/* implicit */int) (!(((/* implicit */_Bool) 1U))))));
            }
        } 
    } 
}
