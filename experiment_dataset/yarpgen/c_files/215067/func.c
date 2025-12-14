/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215067
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
    var_14 = ((/* implicit */unsigned char) max((((((_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) var_13))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_11))));
    var_16 = ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_17 -= ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_0] [i_1 + 1] [i_2] [i_4] [i_2] [i_1 - 1] [i_0 + 2])), (var_13)))) + (((/* implicit */int) ((20U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))))))))));
                            arr_13 [i_0] [i_0 + 1] [i_0] [11LL] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_12 [i_1 + 1] [i_0 - 2])) : (((/* implicit */int) arr_12 [i_1 - 1] [i_0 + 1])))), (((/* implicit */int) ((20U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 + 1] [i_0 - 2]))))))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 4) 
                        {
                            arr_17 [i_5] [(signed char)5] [i_0] [i_1 - 1] [i_0] [i_0] [i_5] = ((/* implicit */int) 11616168175833156393ULL);
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (min(((~(arr_15 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2] [i_1 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_5 [i_0 + 2])) > (max((arr_0 [i_1]), (((/* implicit */unsigned int) var_2)))))))))));
                            var_20 *= ((/* implicit */short) ((((int) 6830575897876395223ULL)) > (((/* implicit */int) ((11616168175833156393ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))))))));
                            arr_18 [(_Bool)1] [i_5] [i_0] [i_2] [i_5] [i_0] = ((/* implicit */unsigned int) ((int) max((17592183947264LL), (max((arr_2 [i_5] [(_Bool)1] [i_2]), (((/* implicit */long long int) var_3)))))));
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((max((((((/* implicit */int) (short)32761)) << (((/* implicit */int) arr_7 [i_1])))), (max((((/* implicit */int) var_10)), (arr_6 [i_0 - 1] [i_0] [4U] [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_6 [i_1 - 1] [(signed char)6] [i_1 - 1] [i_0]) : (((/* implicit */int) var_13)))))))));
                            var_23 = ((/* implicit */unsigned int) min((min((((/* implicit */int) arr_20 [i_0 + 1] [(short)13] [i_0 + 1] [(short)13] [i_6])), (3))), ((-(((/* implicit */int) arr_20 [i_0 + 1] [i_1] [i_1] [i_1] [i_1]))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (arr_3 [i_0 + 1])))) ? (((/* implicit */unsigned int) ((int) ((int) var_11)))) : (max((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */int) arr_20 [3LL] [i_1 - 1] [4] [i_3] [i_6])) : (((/* implicit */int) var_3)))))))));
                        }
                        arr_21 [i_0] [i_1] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_9 [i_1 - 1])) ? (arr_9 [i_1 + 1]) : (arr_9 [i_1 + 1]))), (((((/* implicit */_Bool) arr_9 [i_1 + 1])) ? (arr_9 [i_1 - 1]) : (arr_9 [i_1 - 1])))));
                    }
                } 
            } 
        } 
        arr_22 [i_0 - 2] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) var_6)), (arr_3 [i_0 - 2]))), (arr_2 [i_0 + 1] [i_0 - 1] [2])));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [9])) ? (min((arr_14 [i_0] [i_0]), (arr_14 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
        /* LoopNest 2 */
        for (unsigned short i_7 = 2; i_7 < 12; i_7 += 2) 
        {
            for (unsigned int i_8 = 1; i_8 < 14; i_8 += 1) 
            {
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (0ULL)))) ? (((/* implicit */unsigned long long int) max(((-(arr_26 [i_0] [7ULL] [i_8] [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (3949674387692829191ULL)))));
                    arr_28 [(short)12] [13] [i_8] [i_8] = ((/* implicit */unsigned int) var_4);
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max((((/* implicit */int) var_13)), (var_5))))));
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            arr_34 [i_0 + 2] [i_0 + 2] [(short)2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_9]) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_24 [i_0] [i_10])) : (((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_8 - 1])) ? (((/* implicit */int) arr_12 [i_7 - 2] [i_9])) : (((var_1) | (arr_32 [i_0 + 2] [i_7] [i_8 - 1] [(unsigned char)0] [1U])))))) : (((max((arr_14 [i_8] [i_7]), (((/* implicit */unsigned int) -1)))) & (max((var_8), (((/* implicit */unsigned int) (short)-11))))))));
                            arr_35 [i_0] [i_7] [i_8 + 1] [i_8] [i_9] [1ULL] [i_10] = ((/* implicit */signed char) (unsigned short)42331);
                            arr_36 [i_0] [i_7] [i_8] [(signed char)3] [i_9] [(short)1] [4LL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-25), (((/* implicit */short) (signed char)31)))))) > (max((((/* implicit */unsigned long long int) 0)), (14497069686016722425ULL)))));
                            var_28 = ((/* implicit */long long int) arr_14 [i_0 + 1] [i_7]);
                        }
                        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            arr_40 [i_11] [i_7] [i_8 + 1] [(short)1] [(short)1] = ((/* implicit */unsigned int) max((max((((/* implicit */int) arr_30 [i_0] [i_7] [8ULL] [i_9] [i_11])), (arr_32 [i_8] [i_8] [i_8] [i_8] [i_8 + 1]))), (max((max((((/* implicit */int) var_10)), (arr_33 [i_9] [(short)5] [i_8] [i_7] [i_11] [i_11]))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (0U))))))));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_8] [i_9])) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0))))), (min((var_7), (((/* implicit */unsigned int) var_12)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) var_4)))))))))));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_20 [i_0 + 1] [3U] [i_7 + 1] [(signed char)0] [i_8 + 1])) ? (((/* implicit */int) arr_20 [i_0 + 2] [i_0] [i_7 + 1] [i_8] [i_8 + 1])) : (((/* implicit */int) arr_20 [i_0 - 2] [i_7] [i_7 - 2] [(short)8] [i_8 - 1])))), (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) -300654246)), (var_6))))))))));
                            arr_41 [i_0] [(unsigned short)7] [i_11] [i_9] [i_0] = ((/* implicit */long long int) (-(386291748U)));
                        }
                    }
                }
            } 
        } 
    }
    for (int i_12 = 1; i_12 < 15; i_12 += 1) 
    {
        arr_45 [i_12] = ((/* implicit */unsigned int) var_4);
        /* LoopSeq 1 */
        for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 3; i_15 < 15; i_15 += 3) 
                {
                    for (int i_16 = 4; i_16 < 12; i_16 += 2) 
                    {
                        {
                            var_31 &= ((/* implicit */unsigned int) arr_49 [i_12] [i_13] [i_12]);
                            var_32 = ((/* implicit */unsigned int) arr_54 [i_12] [i_14] [8LL] [i_15] [(signed char)3] [i_12]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_57 [i_12 - 1] [i_12] [12] [i_12] [(short)3] = ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_55 [i_12 - 1] [i_12 - 1] [i_12 + 1])));
                    var_33 = ((/* implicit */short) arr_42 [i_12]);
                    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (arr_44 [12] [12])))) : (((((/* implicit */int) (signed char)3)) >> (((((/* implicit */int) arr_47 [(unsigned char)2])) - (14803))))))))));
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_52 [i_12] [i_13] [i_14] [i_13] [i_12 + 1] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_12 - 1]))) : (((((/* implicit */_Bool) arr_46 [i_17] [(unsigned short)3] [i_12])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))))))))));
                }
            }
            for (signed char i_18 = 1; i_18 < 15; i_18 += 4) 
            {
                var_36 = ((/* implicit */long long int) arr_61 [i_12 - 1]);
                var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
            }
            var_38 = ((/* implicit */short) var_12);
            arr_62 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 10220893504155231625ULL))) ? (arr_55 [i_12 + 1] [i_12 - 1] [i_12 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_53 [6LL] [6LL] [i_12 - 1] [i_13] [i_12])), (max((((/* implicit */signed char) var_10)), (var_11)))))))));
            arr_63 [i_13] [i_12] [i_12] = ((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)120)), ((short)0))))) - (((arr_50 [i_13]) + (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_12] [i_13] [i_12]))))))) >> (((max((((((/* implicit */_Bool) (signed char)20)) ? (4294967295U) : (1228279631U))), (((/* implicit */unsigned int) (signed char)-27)))) - (4294967277U))));
        }
        arr_64 [(unsigned char)8] [i_12] = ((/* implicit */long long int) max((max((3066687665U), (max((((/* implicit */unsigned int) var_11)), (arr_42 [i_12]))))), (((((/* implicit */unsigned int) var_12)) | (var_8)))));
    }
}
