/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227484
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_2] = ((/* implicit */unsigned long long int) 1807432664U);
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)55)))))) != ((((!(((/* implicit */_Bool) (unsigned short)2596)))) ? (arr_1 [i_0 + 2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) var_9);
                        arr_9 [i_2] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))))) ? (((/* implicit */int) var_10)) : ((~(((((/* implicit */_Bool) arr_4 [i_0 + 3] [(short)10] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (short i_5 = 2; i_5 < 22; i_5 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((var_10) ? (((/* implicit */int) min((var_6), (max((var_6), (((/* implicit */unsigned short) arr_14 [i_5] [i_4] [i_2] [i_0] [i_0]))))))) : (((/* implicit */int) min((arr_13 [i_0 - 1] [i_5 + 1] [i_0 - 1] [i_4] [i_5 + 1]), (arr_13 [i_0 - 1] [i_5 + 1] [(short)20] [i_5 + 1] [i_5 - 2])))))))));
                            var_14 = ((/* implicit */unsigned char) var_1);
                            arr_16 [i_0 - 1] [i_2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_2 [i_0 + 3] [i_1]), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_0 + 1] [i_2] [i_1]))))) ? (max((((/* implicit */unsigned long long int) (short)32763)), (var_1))) : (((((/* implicit */_Bool) 5231283037600070015ULL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_4] [i_0 + 3] [i_0] [i_5 - 2])))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            arr_19 [i_6] [i_1] [i_2] = ((/* implicit */unsigned char) var_10);
                            var_15 ^= ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)32765)) ^ (((/* implicit */int) arr_10 [(unsigned char)18] [(unsigned char)18] [i_0] [(signed char)10]))))));
                            arr_20 [i_6 + 1] [i_2] [i_2] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [i_2])) : (((/* implicit */int) var_10))))));
                            var_16 = ((/* implicit */short) arr_3 [i_4]);
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_7 [(_Bool)1] [i_4] [i_2] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */int) arr_5 [i_0] [i_2] [i_2])) : (((/* implicit */int) var_3))))) : (((unsigned long long int) var_6))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            arr_23 [i_0 + 1] [4ULL] [i_0] [i_0 + 3] [i_0 + 3] [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_7] [i_4] [i_1])) | (((/* implicit */int) arr_15 [i_2] [i_4] [i_4]))));
                            var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_6)) ? (13516801150567673972ULL) : (var_1)))));
                            var_19 = ((/* implicit */signed char) var_8);
                        }
                        for (short i_8 = 2; i_8 < 21; i_8 += 4) 
                        {
                            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (unsigned short)60037))))) ? (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_8] [i_8] [i_2] [i_8] [i_0 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_22 [i_0 + 2])), (var_4))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_8] [i_1] [i_2] [i_1])) >> (((((/* implicit */int) arr_10 [i_8] [i_2] [i_8] [i_2])) - (210))))))));
                            arr_27 [i_0 + 1] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_2] [i_4]))))), (max((((/* implicit */unsigned int) (unsigned char)64)), (var_7)))))), (min((((/* implicit */unsigned long long int) (short)-27995)), (var_5)))));
                        }
                        arr_28 [(short)20] [(unsigned char)12] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (var_6)))) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) var_4)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_2] [i_1] [i_2] [i_4] [19U] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : ((-(((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (short i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned short) (unsigned char)134);
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32753)) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_23 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6)))), (((/* implicit */int) max((arr_22 [i_0 + 2]), (var_3))))));
                        var_24 -= ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (var_6)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)205))))) : (max((var_5), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) arr_10 [(signed char)20] [i_2] [i_1] [(signed char)20]))));
                    }
                }
                arr_32 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_26 [(_Bool)0] [i_1] [i_0] [10U] [i_0 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0 - 1] [i_1] [i_1] [i_1]))) : (var_5))), (((/* implicit */unsigned long long int) arr_22 [i_0 + 1]))));
                /* LoopSeq 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_8 [i_0 + 2] [(short)10] [i_1] [(short)10] [i_0 + 2])) && ((_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 861241396U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (min((((/* implicit */unsigned long long int) var_4)), (11038891771393179215ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 1; i_11 < 20; i_11 += 3) 
                    {
                        for (short i_12 = 1; i_12 < 22; i_12 += 1) 
                        {
                            {
                                arr_39 [i_0] = ((/* implicit */short) var_4);
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned int) var_2))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (1151795604700004352ULL) : (((/* implicit */unsigned long long int) ((arr_3 [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_35 [i_12] [i_11] [i_10] [i_0 + 1])))))))));
                                var_27 = (+(max((min((((/* implicit */unsigned int) arr_35 [i_0] [i_1] [i_0] [i_12 - 1])), (arr_31 [i_0] [i_0] [i_10] [i_0] [(unsigned char)0] [i_0]))), (((/* implicit */unsigned int) var_6)))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (signed char)21))) / (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_5 [i_0] [(short)6] [i_10]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))))));
                    arr_40 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_22 [i_0 - 1])), ((short)32766)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0 - 1]))) : (18446744073709551615ULL))))));
                }
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_29 ^= ((/* implicit */unsigned short) var_9);
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((arr_3 [i_13]) ? (((((/* implicit */int) (unsigned char)148)) << (((((/* implicit */int) var_0)) - (40651))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_8)))))))));
                    var_31 = ((/* implicit */signed char) var_5);
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 3; i_14 < 19; i_14 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_14 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_13 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_14] [i_13])) : (((/* implicit */int) arr_13 [i_14 + 2] [i_14 - 2] [i_14] [i_14 + 4] [i_14 + 1]))));
                        arr_45 [i_0 + 2] [i_1] [i_13] [i_14] [i_14 - 3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_0] [16ULL] [i_13] [i_13] [i_13]))));
                    }
                }
            }
        } 
    } 
    var_33 ^= ((/* implicit */unsigned short) var_10);
}
