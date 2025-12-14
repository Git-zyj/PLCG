/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238605
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_7 [i_0 - 1] [i_0 - 1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_2)) ? (arr_1 [i_2]) : (arr_1 [i_0 - 2]))), (((/* implicit */int) var_2))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_12 [i_0 - 1] [i_1] [i_1] [i_3] [i_3] [i_0 - 1] = ((/* implicit */_Bool) arr_1 [i_0 - 2]);
                            arr_13 [i_0] [i_1 - 4] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) 1136515960)) ^ (arr_6 [i_0 + 2] [i_1] [i_1])))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)249)))))));
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 + 2])) ^ (((/* implicit */int) arr_8 [i_0 + 3])))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            arr_19 [i_1] [i_0] [i_2] [i_0] [i_1] = ((/* implicit */_Bool) var_0);
                            arr_20 [i_6] [i_1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_0] [i_2] [i_2] [i_6])) == (((/* implicit */int) arr_15 [i_0 + 3] [i_2] [i_3] [i_6]))));
                            var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 4158412136U))) ? (((var_3) ? (((/* implicit */int) (short)24149)) : (((/* implicit */int) (unsigned char)114)))) : (((/* implicit */int) arr_3 [i_1 - 2]))));
                            var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 8318577710467480120LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((136555181U) - (136555166U))))))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((arr_1 [i_0 + 1]) % (arr_1 [i_0 + 3]))))));
                        }
                        arr_21 [i_0] [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) ((unsigned short) (_Bool)1));
                        arr_22 [i_0 + 1] [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((arr_18 [i_0 + 3] [i_1] [i_1] [i_0 + 3] [i_1] [i_1] [i_1 + 4]) <= (arr_18 [i_0 - 2] [i_0] [i_1] [i_1 - 1] [i_1 + 3] [i_1 + 1] [i_1 + 4])));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))))));
                        var_18 = ((/* implicit */_Bool) arr_26 [i_7] [i_7] [i_1] [i_1] [i_2]);
                    }
                }
                for (unsigned int i_8 = 2; i_8 < 14; i_8 += 4) 
                {
                    var_19 *= ((/* implicit */unsigned int) (_Bool)1);
                    arr_31 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((arr_23 [i_0 + 3] [i_1] [i_0 + 3] [i_8 - 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_8 + 1] [i_1] [i_1 - 2] [i_8 + 1] [i_1]))))) ? (((((int) var_4)) | (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */short) (unsigned char)229))))) && (((/* implicit */_Bool) ((unsigned short) var_9))))))));
                }
                for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    arr_34 [i_1] = ((/* implicit */_Bool) ((unsigned int) min((arr_23 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) var_8)))));
                    var_20 ^= ((/* implicit */unsigned int) ((arr_0 [i_1]) ? (((((/* implicit */long long int) (+(var_4)))) - (-10LL))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) 67108863U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_28 [i_0] [i_1] [i_9])))))))));
                }
                for (unsigned int i_10 = 1; i_10 < 14; i_10 += 3) 
                {
                    arr_37 [i_0] [i_0] [i_1] [i_10] = ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_21 += ((/* implicit */_Bool) var_6);
                        arr_40 [i_0 - 2] [i_1] [i_0 + 1] [i_0 - 1] = ((/* implicit */_Bool) (((-((~(4227858419U))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_5))));
                    }
                    arr_41 [i_0 + 3] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_33 [i_0 + 1] [i_1] [i_10])), (var_10)))))))) ? ((~(((/* implicit */int) arr_38 [i_0 - 2] [i_0 + 3] [i_1 - 2] [i_1 - 2] [i_10 - 1])))) : (((/* implicit */int) arr_39 [i_0 + 3] [i_0 - 1] [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 14; i_13 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0 + 2] [i_1]))));
                                arr_48 [i_1] [i_0] [i_1] [i_10 - 1] [i_12] [i_13] = ((/* implicit */short) ((arr_27 [i_0] [i_0] [i_12] [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((arr_32 [i_0] [i_10] [i_12] [i_13 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_13 + 1]))))))));
                                arr_49 [i_10] [i_10] [i_10] [i_13 + 1] [i_10] [i_10] [i_1] = ((/* implicit */_Bool) 16383U);
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    arr_52 [i_14] [i_14] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) var_2)) & (((/* implicit */int) (_Bool)1)))) ^ ((-(((/* implicit */int) var_2))))));
                    var_24 = ((/* implicit */_Bool) arr_17 [i_0] [i_14]);
                }
                for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_16 = 1; i_16 < 12; i_16 += 4) 
                    {
                        for (unsigned int i_17 = 4; i_17 < 14; i_17 += 3) 
                        {
                            {
                                arr_59 [i_0 - 2] [i_1 + 2] [i_1] [i_15] [i_16] [i_1] = ((/* implicit */unsigned int) 18446744073709551602ULL);
                                var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2080374784U)))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_1] [i_1] [i_15] [i_1] [i_1] [i_1] [i_17])) ? (((/* implicit */int) (_Bool)1)) : (arr_51 [i_0] [i_1 - 3] [i_1 - 3]))))))) ? (min((((/* implicit */int) arr_53 [i_15] [i_16] [i_16] [i_16])), ((~(((/* implicit */int) var_9)))))) : (arr_1 [i_15])));
                                arr_60 [i_0] [i_1] [i_15] [i_15] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) arr_17 [i_0 + 1] [i_17 - 4])))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_42 [i_0 - 1] [i_0 + 1] [i_0] [i_1 + 2] [i_15])), ((unsigned char)193))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) arr_6 [i_0] [i_0] [i_15]);
                }
                arr_61 [i_1] [i_1] = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) (short)-9008);
    var_28 *= ((/* implicit */_Bool) var_4);
}
