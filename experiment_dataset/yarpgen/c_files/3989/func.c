/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3989
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32488))) < (5468924836242461149ULL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_6 [i_1] [i_0] = ((long long int) arr_3 [i_1]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_13 *= ((/* implicit */short) ((var_8) < (arr_8 [i_0] [i_0] [i_0] [i_0])));
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((arr_11 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1]) ? (var_11) : (((/* implicit */int) arr_11 [i_3 + 3] [i_3] [i_3] [i_3 + 2] [i_3 - 1] [i_3 + 1])))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 3) 
                {
                    arr_15 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 2] [i_5 + 1]))));
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (+(arr_10 [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 + 2] [i_5 - 1])));
                }
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_7 = 1; i_7 < 10; i_7 += 2) 
                    {
                        var_15 *= ((/* implicit */_Bool) arr_1 [i_6]);
                        arr_23 [i_0] [i_1] [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_7 - 1])) ? (((/* implicit */int) (_Bool)1)) : (arr_12 [i_7 + 1])));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 2) 
                        {
                            var_16 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_9 + 1] [i_9 + 1] [i_6] [i_8] [i_8 - 1])) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [9LL] [i_1])))))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(2627203623U)))) ? (((/* implicit */int) arr_5 [i_9 + 2])) : (((/* implicit */int) arr_21 [i_8 + 2] [i_8] [i_8 - 1] [(signed char)3]))));
                        }
                        for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            arr_31 [i_8] [i_8] [(unsigned char)4] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_1 [i_0])) - (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            arr_32 [i_0] [i_8] [i_0] [i_8] [i_10] = ((/* implicit */_Bool) ((((arr_1 [i_0]) >> (((18446744073709551615ULL) - (18446744073709551599ULL))))) & (arr_7 [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_8 - 1])));
                        }
                        for (short i_11 = 1; i_11 < 10; i_11 += 3) 
                        {
                            arr_36 [i_8] [i_6] [i_8] [i_6] [i_6] [i_8] = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21475))) * (arr_30 [i_0] [i_0] [i_0] [(short)8] [i_8] [i_8 + 2] [i_8])))));
                            arr_37 [i_11] [i_6] [i_8] [i_8 - 1] [i_11 - 1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)115)) < (var_8)));
                        }
                        var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_29 [i_8] [(short)3] [i_6] [(signed char)8] [i_0] [i_0]) : (((((/* implicit */long long int) ((/* implicit */int) (short)-21473))) | (arr_10 [i_0] [i_0] [i_1] [6LL] [i_8 - 1])))));
                        /* LoopSeq 1 */
                        for (short i_12 = 2; i_12 < 10; i_12 += 1) 
                        {
                            arr_40 [i_8] [i_8] [i_8] [i_8] [i_12] = ((/* implicit */short) arr_13 [i_0] [i_1] [i_6] [i_12]);
                            arr_41 [i_0] [i_8] [i_6] [i_8] [i_8] = ((/* implicit */_Bool) ((unsigned char) ((long long int) (short)-21475)));
                            var_19 = (+(var_9));
                            arr_42 [i_1] [i_8] = ((/* implicit */short) ((24ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21491)))));
                        }
                    }
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_11 [i_0] [i_0] [i_1] [i_6] [i_1] [i_13])), ((short)7319)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551577ULL)) ? (((/* implicit */int) (short)1463)) : (((/* implicit */int) (signed char)13)))))))), (((((((/* implicit */_Bool) arr_17 [(unsigned char)0] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_44 [i_0] [i_0] [i_0] [i_0])) : (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [4ULL] [i_1]))) >> (((((((/* implicit */_Bool) 0ULL)) ? (arr_43 [i_0] [i_0] [i_1] [i_6] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (short)-11283))))) + (11330LL)))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33ULL)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned char)119))))) ? (((((/* implicit */_Bool) arr_34 [i_13] [i_1] [i_0] [i_1] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_34 [i_0] [i_1] [(short)4] [i_13] [i_6])))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))) | (arr_1 [i_0])))));
                        arr_46 [i_0] [i_1] [i_6] [i_6] [i_13] [1LL] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4127916651U)) ? (((/* implicit */int) (short)21470)) : (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) (short)20))));
                    }
                    /* LoopSeq 1 */
                    for (int i_14 = 1; i_14 < 9; i_14 += 3) 
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_7 [i_14] [i_14 + 2] [i_14 + 2] [i_14 + 2] [i_14]))));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_6] [8LL] [(short)2] [i_0] [i_1])) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (short)13))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_48 [i_0] [i_1] [i_6] [(_Bool)1]))) : (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_14] [i_6] [i_1] [i_1] [i_0]))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)82)) | (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) (short)-21500)) : (((((/* implicit */int) (short)951)) ^ (((/* implicit */int) (unsigned char)84))))))))))));
                    }
                }
                arr_50 [0LL] = ((/* implicit */int) ((short) min((arr_0 [i_1]), (arr_47 [i_0] [i_0] [i_0]))));
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0])) ? (min((11156090702145487845ULL), (((/* implicit */unsigned long long int) (short)21474)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
            }
        } 
    } 
}
