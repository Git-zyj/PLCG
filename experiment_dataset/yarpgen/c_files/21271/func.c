/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21271
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
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)0))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_12))));
    var_17 = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-25373)) : (((/* implicit */int) min(((short)-25373), (min((((/* implicit */short) (_Bool)1)), ((short)-25373)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [(unsigned char)0])) > (arr_2 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)130))));
        var_19 ^= ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])));
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-25364))));
        var_21 += ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (short i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        arr_16 [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)124)) ? (1700247696) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [i_4]))))), (((/* implicit */int) arr_7 [i_2]))));
                        var_22 -= ((/* implicit */long long int) min((((/* implicit */short) (unsigned char)130)), (min((((/* implicit */short) min(((unsigned char)121), ((unsigned char)126)))), ((short)25373)))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)25373)) ? (((/* implicit */long long int) 115504700)) : (288230376151711743LL))) / (arr_8 [i_4] [i_1])))) ? (((((/* implicit */_Bool) max((arr_6 [i_1]), (((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_4]))))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) : (arr_9 [i_1] [i_2] [i_4]))) : (((/* implicit */long long int) min((((/* implicit */int) arr_7 [4LL])), (arr_6 [i_1])))))) : (arr_8 [i_3] [i_2])));
                        var_24 = ((/* implicit */int) (~(arr_9 [i_1 + 1] [i_1 - 1] [i_1 + 2])));
                        var_25 = min((((/* implicit */int) arr_14 [i_1] [8LL] [i_1] [i_1 - 2] [(signed char)5] [i_1])), (min((((/* implicit */int) arr_12 [i_1 + 2] [i_1 - 2] [i_1 - 1] [i_1 + 2])), (arr_6 [(signed char)9]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 2; i_5 < 16; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_6 = 1; i_6 < 14; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-25374)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (_Bool)1))));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1])) && (arr_18 [i_1] [i_5 - 1])))), (min((((/* implicit */long long int) arr_20 [(_Bool)1] [i_6] [i_7])), (arr_24 [i_1])))))) ? ((+(((/* implicit */int) arr_17 [i_6 + 1] [i_5 + 1] [i_1 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 - 2] [i_1 - 2] [i_6 + 3])))))));
                }
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    arr_28 [i_1] [(short)1] [i_8] [8] [i_1] = min((max((((/* implicit */long long int) arr_25 [i_1] [i_1 - 2] [1LL] [i_1 - 2] [i_1 - 2])), ((~(arr_8 [i_6 + 1] [i_8]))))), (((/* implicit */long long int) arr_18 [8LL] [i_5])));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_6]))))), (max((arr_8 [i_1] [i_1]), (((/* implicit */long long int) arr_26 [i_1 - 1] [i_1 - 1] [i_8] [i_8]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_1 + 2])), (arr_15 [i_6] [i_5])))) ? (arr_24 [i_1 - 2]) : (((/* implicit */long long int) min((arr_19 [i_1 + 2] [i_1 + 2]), (((/* implicit */unsigned int) arr_21 [(_Bool)1] [(_Bool)1] [(_Bool)1] [8U]))))))))));
                    var_29 = (-((-(((/* implicit */int) arr_23 [i_8] [14LL] [i_6] [14LL] [11ULL] [i_1])))));
                }
                /* LoopSeq 4 */
                for (int i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    var_30 = ((/* implicit */_Bool) max((min(((~(((/* implicit */int) arr_30 [i_1] [i_5] [i_6] [i_9])))), (((/* implicit */int) arr_21 [i_1] [i_5 - 2] [i_5 + 1] [i_6 - 1])))), (((((/* implicit */_Bool) arr_5 [i_6 + 1] [i_1 - 2])) ? (((/* implicit */int) arr_5 [i_6 + 3] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_6 + 2] [i_1 - 1]))))));
                    arr_32 [(_Bool)1] [i_9] [i_9] [i_1 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((min(((short)-25366), (((/* implicit */short) (unsigned char)148)))), (((/* implicit */short) min((arr_21 [(_Bool)1] [i_5] [(_Bool)1] [(_Bool)1]), (arr_18 [i_6 - 1] [i_9])))))))));
                    arr_33 [i_9] [4LL] [i_6] = ((/* implicit */long long int) min((arr_21 [(_Bool)1] [3U] [i_5 - 1] [i_1]), (min((arr_18 [i_1 + 2] [i_6 + 1]), (arr_4 [i_1 + 2])))));
                }
                for (short i_10 = 2; i_10 < 16; i_10 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        arr_39 [(signed char)3] [i_5] [i_10] = ((/* implicit */short) arr_29 [i_11] [i_10] [i_6] [i_5 - 2] [i_1 + 2] [i_1]);
                        var_31 *= ((/* implicit */_Bool) (-((+(((/* implicit */int) max((((/* implicit */short) arr_30 [i_5] [i_5] [i_5] [i_11])), (arr_20 [i_6] [i_6 + 3] [1LL]))))))));
                        var_32 = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_5 + 1])))), (((((/* implicit */_Bool) (short)-25366)) && (((/* implicit */_Bool) (unsigned char)2))))));
                    }
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        var_33 = min((((/* implicit */int) ((arr_30 [8ULL] [8ULL] [i_1 - 1] [i_6 + 3]) && (((/* implicit */_Bool) min((arr_6 [i_1]), (((/* implicit */int) arr_12 [i_12] [(_Bool)1] [i_1] [i_1])))))))), (min((((/* implicit */int) min((arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 2] [(signed char)16]), (arr_22 [(short)6] [i_5 - 1] [i_5 - 1] [i_10 - 1])))), (((arr_18 [i_10] [i_12]) ? (arr_31 [i_1 - 1] [i_1 - 1] [i_1]) : (((/* implicit */int) arr_17 [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
                        var_34 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_12]);
                    }
                    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((arr_30 [i_5] [i_5] [6LL] [i_5 + 1]), (arr_14 [i_1] [i_1] [i_1] [10U] [i_1] [(unsigned char)13])))) ^ ((+(((/* implicit */int) arr_13 [i_10]))))))))))));
                        arr_45 [i_1] [i_5] [i_5] [i_10] [i_5] [i_13] |= min((max((((arr_38 [i_1] [i_5] [i_6]) ? (arr_36 [(short)0] [i_5] [(short)0] [i_10 - 2] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [(short)5] [i_5] [i_6] [i_1]))))), (((/* implicit */long long int) (!(arr_25 [i_1] [i_13] [i_13] [(short)12] [(short)12])))))), (((/* implicit */long long int) arr_27 [i_10 - 1] [i_6 + 3] [i_5 - 1])));
                    }
                    var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((arr_43 [i_1] [i_10] [i_1]) != (arr_24 [i_1 + 1]))))) % ((+(arr_43 [i_1 - 2] [i_10] [(short)14]))))))));
                    var_37 = (!(arr_21 [i_10 - 2] [(_Bool)1] [i_5] [(_Bool)1]));
                    arr_46 [i_1] [i_10] [i_6 + 3] [i_10 - 2] [3LL] [3LL] = ((/* implicit */unsigned char) arr_10 [i_5 - 1] [i_5 - 1] [i_10]);
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) min(((-(((/* implicit */int) ((arr_37 [(unsigned char)8] [i_5 - 2] [11ULL] [i_14] [i_5] [i_5 - 2] [i_1]) <= (((/* implicit */unsigned long long int) arr_9 [i_6] [i_6] [i_14]))))))), (arr_31 [14ULL] [i_5] [i_14]))))));
                    arr_50 [i_5] &= arr_6 [i_1 + 2];
                    var_39 = ((/* implicit */_Bool) ((min((arr_43 [i_1 - 1] [i_14] [9ULL]), (((/* implicit */long long int) arr_27 [(_Bool)1] [i_1 + 2] [i_1])))) + (min((((/* implicit */long long int) arr_27 [i_5] [i_1 - 1] [i_1 + 2])), (arr_43 [i_1 + 2] [i_14] [i_1])))));
                    var_40 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_49 [i_1 - 2] [i_1] [i_1] [i_1])) ? ((+(arr_19 [i_1] [i_1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_5 + 1] [i_5 - 2]))))))), (((/* implicit */unsigned int) ((arr_22 [i_1] [8ULL] [i_6] [i_14]) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)39))))) : (((/* implicit */int) arr_30 [i_14] [i_6] [i_5] [i_1])))))));
                }
                /* vectorizable */
                for (unsigned char i_15 = 0; i_15 < 17; i_15 += 3) 
                {
                    var_41 += arr_10 [9LL] [i_5] [14ULL];
                    arr_54 [i_15] [i_15] [i_15] = (i_15 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_43 [(_Bool)1] [i_15] [(_Bool)1]) + (9223372036854775807LL))) << (((arr_24 [i_15]) - (615608756708218024LL)))))) && (((((/* implicit */long long int) ((/* implicit */int) (short)-32765))) >= ((-9223372036854775807LL - 1LL))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((arr_43 [(_Bool)1] [i_15] [(_Bool)1]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((arr_24 [i_15]) - (615608756708218024LL)))))) && (((((/* implicit */long long int) ((/* implicit */int) (short)-32765))) >= ((-9223372036854775807LL - 1LL)))))));
                }
                var_42 = (((!(((/* implicit */_Bool) arr_15 [i_6 - 1] [i_6 - 1])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_53 [i_6] [i_5 - 1] [i_1 + 2] [(signed char)12] [i_1])), (min((((/* implicit */unsigned int) arr_10 [i_1] [i_1 + 2] [10])), (arr_19 [i_1] [i_5 - 2])))))));
            }
            for (unsigned int i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1]))))) && (((arr_55 [i_16] [(unsigned short)12] [i_16]) && (((/* implicit */_Bool) arr_37 [i_1 - 2] [i_5 - 2] [i_16] [i_16] [i_5 - 2] [13LL] [i_1])))))))) >= (min((max((((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1] [i_1])), (arr_51 [i_1] [i_16]))), (((/* implicit */long long int) arr_7 [i_1 - 2])))))))));
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 17; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 3) 
                    {
                        {
                            arr_63 [i_1] [i_5 - 1] [i_1] [i_18] [i_16] = ((/* implicit */unsigned long long int) arr_6 [i_17]);
                            var_44 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)98))));
                        }
                    } 
                } 
            }
            for (short i_19 = 0; i_19 < 17; i_19 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 17; i_20 += 4) 
                {
                    for (signed char i_21 = 1; i_21 < 16; i_21 += 4) 
                    {
                        {
                            var_45 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [2] [2] [i_19] [2])) ? (((/* implicit */int) arr_25 [(_Bool)1] [(_Bool)1] [i_19] [i_20] [i_21])) : ((-(((/* implicit */int) arr_48 [i_1 + 2] [(_Bool)1] [i_19]))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_41 [i_5] [i_1 - 2] [i_1 + 2])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1])) && (((/* implicit */_Bool) arr_15 [i_5] [i_20])))))))) : (((/* implicit */int) arr_40 [i_1 + 1] [i_1] [i_1] [i_1] [i_1]))));
                            var_46 = ((/* implicit */long long int) max((var_46), ((+(arr_51 [i_1 - 2] [i_1 - 2])))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_23 [i_1] [i_5] [i_19] [16LL] [i_1] [i_1 + 1])), (arr_41 [i_19] [i_19] [i_19])))) ? (((((/* implicit */_Bool) arr_19 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5] [i_5] [3LL] [4U]))) : (arr_19 [i_19] [(signed char)5]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_12 [(short)15] [i_19] [i_5 - 1] [i_1]), (arr_17 [i_19] [i_5] [i_1]))))))), (((/* implicit */unsigned int) max((((arr_55 [i_1] [i_1] [7U]) ? (((/* implicit */int) arr_56 [i_19] [i_19] [i_19])) : (((/* implicit */int) arr_22 [i_19] [i_19] [(short)8] [i_19])))), (((/* implicit */int) ((((/* implicit */int) arr_35 [i_1] [i_1] [i_19] [i_1])) > (((/* implicit */int) arr_62 [(short)8] [(_Bool)1] [i_19] [i_1] [i_5] [i_19]))))))))));
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (unsigned int i_23 = 0; i_23 < 17; i_23 += 4) 
                    {
                        {
                            var_48 ^= ((/* implicit */_Bool) arr_20 [i_1 - 2] [(_Bool)1] [16ULL]);
                            var_49 = ((/* implicit */_Bool) min((var_49), (((min(((-(arr_60 [i_1 + 2] [i_5 - 2] [i_19] [(signed char)7] [i_23]))), (((/* implicit */unsigned long long int) arr_62 [(signed char)1] [6] [i_19] [(signed char)8] [i_1 + 1] [i_19])))) >= (((/* implicit */unsigned long long int) ((max((arr_24 [i_1]), (((/* implicit */long long int) arr_6 [i_22])))) & (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_13 [i_5])), (arr_52 [i_1] [i_5 - 1] [i_5] [2U] [2U] [i_23])))))))))));
                        }
                    } 
                } 
            }
            var_50 -= ((/* implicit */short) arr_6 [i_1 - 2]);
        }
    }
}
