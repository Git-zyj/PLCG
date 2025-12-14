/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213746
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
    var_15 = ((/* implicit */long long int) (unsigned short)65535);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_10 [i_0] [(_Bool)1] [i_1] [i_2] [i_3] = ((long long int) (+(((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_4)))))));
                        arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [14LL] [i_0] [i_0])) ? (1839184527U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))) % (arr_9 [i_0] [i_2] [i_2] [i_3] [i_0])));
                        arr_12 [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_0] [(signed char)12] [12] [i_3]);
                        var_16 = ((/* implicit */unsigned long long int) var_14);
                    }
                    for (int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        var_17 &= ((/* implicit */unsigned char) max((arr_1 [i_4 + 1] [(_Bool)1]), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_0] [(short)19] [i_2] [i_2])), (arr_4 [i_2] [i_1])))) || (((/* implicit */_Bool) min(((unsigned short)65506), (var_10)))))))));
                        var_18 -= (~(((((/* implicit */_Bool) 1801227095)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)32758)))));
                        var_19 = min((((((/* implicit */int) arr_14 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4])) ^ (((/* implicit */int) var_6)))), (((((((/* implicit */int) arr_14 [i_4 + 1] [i_4 + 2] [i_4] [i_4 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_14 [i_4 + 1] [i_4] [18U] [19LL])) + (26455))))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)30312), (var_4))))) / ((+((~(arr_4 [i_1] [i_4])))))));
                    }
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */short) var_7);
                            var_21 = ((/* implicit */unsigned short) ((unsigned long long int) arr_14 [i_0] [8ULL] [20U] [i_6]));
                            var_22 += ((/* implicit */short) (~(arr_15 [i_0] [i_1] [20LL])));
                            arr_23 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_6 + 1] [i_1] [i_2] [i_5] [i_6]))))), (2461786243U)));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_23 &= ((/* implicit */_Bool) var_1);
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (-(var_2)))) : (arr_18 [i_2])));
                            arr_27 [i_1] &= ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [(signed char)5] [i_2] [13])) && (((/* implicit */_Bool) (unsigned short)20335))))) / (((/* implicit */int) var_6)));
                            arr_28 [i_0] [i_1] [i_2] [i_5] [i_7] = var_14;
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (1U) : (arr_4 [i_0] [i_0])))), ((+(((((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_0])) ? (arr_30 [i_2]) : (((/* implicit */unsigned long long int) var_8)))))))))));
                            arr_31 [i_0] [2ULL] = ((/* implicit */unsigned short) ((((arr_3 [i_1] [i_2]) ^ (((/* implicit */long long int) arr_6 [(signed char)12] [i_1] [i_2])))) < (((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_8])) ? (((/* implicit */long long int) arr_6 [i_5] [(short)8] [i_0])) : (arr_3 [i_0] [i_0])))));
                            var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [(short)4])) == (((/* implicit */int) arr_25 [2ULL] [i_5])))))) <= (((arr_0 [i_0]) ? (arr_15 [i_0] [i_1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1] [i_5]))))))))));
                        }
                        for (short i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967273U)) ? (arr_3 [i_5] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551602ULL)) || (((/* implicit */_Bool) arr_5 [i_0]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_5] [i_9]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_22 [i_9] [i_9] [i_5] [12ULL] [i_2] [i_1] [(unsigned char)16])) : (9782725237049907792ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_6 [i_5] [1LL] [i_5])) : (0U)))) : (max((((/* implicit */unsigned long long int) var_2)), (19ULL))))))))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [(unsigned short)4] [(unsigned short)13])) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_5] [i_9])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (4284890372234994867ULL))) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_5])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_5] [i_9])))))))))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 1; i_10 < 20; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), ((~(arr_5 [i_10])))))) || (((/* implicit */_Bool) 17179869120ULL))));
                        var_30 ^= ((/* implicit */signed char) min((max((arr_15 [i_10] [i_10 - 1] [i_10 + 1]), (arr_15 [i_10] [i_10 + 1] [i_10 + 1]))), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_13)))) ? ((+(6927593732216418115LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */int) arr_29 [i_10 - 1] [i_2])) : (var_13))))))) ? (((/* implicit */long long int) ((int) arr_9 [i_0] [17ULL] [i_2] [i_10 + 1] [i_10]))) : (((((arr_25 [i_0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_2] [i_2]))) : (var_2))) + (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) arr_29 [i_0] [i_0])))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_22 [i_1] [19U] [i_2] [(signed char)3] [i_11] [i_11] [i_1]))));
                        arr_41 [i_0] [i_1] [i_2] [i_11] [13U] = ((/* implicit */long long int) (~(max((max((arr_18 [i_11]), (((/* implicit */unsigned long long int) var_7)))), (((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)9] [18ULL] [i_2])) ? (arr_37 [i_1]) : (((/* implicit */unsigned long long int) var_2))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_44 [i_11] [i_1] [i_2] [i_2] [i_0] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_0 [19LL])), (arr_18 [2LL])))))) ? (max((((/* implicit */unsigned long long int) arr_43 [i_12] [i_11] [i_11] [i_11] [i_2] [i_1] [i_0])), (max((((/* implicit */unsigned long long int) var_14)), (var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-5)), (arr_43 [i_12] [i_12 - 1] [i_11] [i_11] [(unsigned short)17] [i_1] [i_0])))) ? (min((((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)9] [i_11])), (var_8))) : (((/* implicit */int) var_10)))))));
                            var_33 |= ((/* implicit */int) (~(arr_30 [14ULL])));
                        }
                        /* LoopSeq 3 */
                        for (short i_13 = 1; i_13 < 18; i_13 += 3) 
                        {
                            var_34 = ((/* implicit */long long int) 14758720724200992161ULL);
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0])), (arr_39 [i_0] [i_1] [i_2] [i_2] [14LL] [16ULL])))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_33 [i_0] [i_1] [i_2] [i_11] [i_13])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65485)))))))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            arr_51 [i_0] [i_1] [5U] [i_2] [i_11] [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])))))));
                            var_36 -= ((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_38 [i_0] [i_1] [i_2] [i_11]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_8) : (((/* implicit */int) var_7))))) != (((((/* implicit */long long int) 453146757U)) | (max((arr_5 [i_0]), (var_2))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 1) 
                        {
                            var_37 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [(unsigned short)10] [i_2] [i_2])) ? (((/* implicit */int) arr_17 [i_15] [(unsigned short)17] [i_2] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_2] [i_2] [19ULL] [i_15] [(short)3]))))) ? (((/* implicit */int) min((arr_17 [i_0] [i_0] [i_1] [(signed char)18] [i_11] [i_15]), (arr_17 [(short)14] [i_1] [7U] [(short)5] [i_15] [i_15])))) : (((((/* implicit */int) arr_17 [1] [16ULL] [i_2] [i_11] [i_15] [(signed char)20])) ^ (((/* implicit */int) arr_17 [i_0] [(unsigned short)4] [i_2] [i_11] [i_11] [(signed char)13]))))));
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_15 [(unsigned short)14] [i_2] [i_11]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535)))))))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_33 [i_11] [i_11] [(unsigned short)6] [i_11] [1]))));
                            var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_15] [i_2] [i_1]))))))))));
                            arr_56 [i_0] [i_0] [(unsigned short)2] &= ((/* implicit */short) ((((/* implicit */_Bool) (-(((unsigned int) arr_8 [i_0] [i_1] [i_2] [i_11]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_33 [i_0] [3ULL] [i_2] [i_11] [(unsigned short)6]))));
                        }
                        var_40 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (max((var_11), (((/* implicit */unsigned int) (unsigned short)22976)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_14), (((/* implicit */short) var_7))))))))));
                    }
                    for (int i_16 = 0; i_16 < 21; i_16 += 4) 
                    {
                        arr_60 [5ULL] [i_1] = ((/* implicit */short) max((((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) % (max((arr_6 [i_0] [i_1] [i_0]), (((/* implicit */int) var_7)))))), (((int) (+(-542462867742032205LL))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_17 = 2; i_17 < 18; i_17 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) (unsigned short)6144);
                            var_42 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [5LL])) || (((/* implicit */_Bool) arr_39 [i_0] [i_1] [3U] [i_2] [18ULL] [(unsigned short)13]))))) >> ((((~(((/* implicit */int) arr_0 [i_0])))) + (9)))));
                            var_43 += ((/* implicit */short) (~(arr_20 [i_2] [i_2] [i_17 - 2] [i_17 + 1] [i_17 + 2])));
                            var_44 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_3))) | (((/* implicit */int) arr_58 [i_2] [i_17 - 2] [i_17 + 3] [i_17] [i_17] [0U]))));
                            var_45 ^= (-((-(((/* implicit */int) arr_25 [i_17] [i_0])))));
                        }
                        arr_64 [i_0] [i_1] [(unsigned short)15] [i_16] [i_16] = min((((/* implicit */unsigned int) (((+(((/* implicit */int) arr_48 [i_0] [i_1] [i_16] [i_2] [i_16] [(short)18] [i_16])))) ^ (((int) arr_37 [i_0]))))), (((var_1) << (((((/* implicit */int) arr_24 [i_16])) + (21915))))));
                    }
                }
            } 
        } 
    } 
}
