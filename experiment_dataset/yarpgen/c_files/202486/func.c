/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202486
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((var_18), ((!(((/* implicit */_Bool) var_17))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_3))));
                        arr_11 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned int) arr_9 [i_2 - 1] [(unsigned char)17] [i_2 + 1] [9] [i_2 - 2]);
                        arr_12 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_7 [i_2 + 1] [(signed char)7] [(unsigned char)11] [i_2 - 1])))) >> (((((((/* implicit */_Bool) arr_7 [18] [i_3] [i_3] [i_2 - 2])) ? (((/* implicit */int) arr_7 [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 2])) : (((/* implicit */int) arr_7 [i_3] [11] [i_3] [i_2 - 2])))) - (23338)))));
                    }
                    for (int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((min((((/* implicit */long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_15))))), (arr_14 [4LL] [i_1] [i_2 - 1] [4LL]))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_1 [i_0] [i_1])) + (19735))))))));
                        var_21 = ((/* implicit */long long int) var_17);
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (((-(0))) >> (((max((arr_2 [i_0] [i_2 - 2]), (arr_2 [i_1] [i_2 - 2]))) + (1768340191))))))));
                        var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_14 [i_4] [i_2] [i_2 - 2] [i_2])) ? (arr_14 [i_4] [i_2] [i_2 - 2] [i_4]) : (arr_14 [i_4] [i_2 + 1] [i_2 - 2] [i_2])))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (min((min((4194303ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)192))))))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_25 -= ((/* implicit */short) ((((/* implicit */int) arr_16 [i_5] [i_2] [i_1] [i_0])) == (((/* implicit */int) arr_16 [15] [i_5] [i_2] [i_5]))));
                        /* LoopSeq 1 */
                        for (int i_6 = 2; i_6 < 20; i_6 += 1) 
                        {
                            arr_19 [i_0] [5LL] [i_2 + 1] [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 2] [i_6])))));
                            arr_20 [i_0] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned int) arr_5 [(short)20]);
                            var_26 = (+(((/* implicit */int) arr_7 [i_6 - 2] [i_6 + 1] [(unsigned char)9] [i_6 - 1])));
                            arr_21 [i_0] [i_1] [i_2 - 2] [(_Bool)1] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_0]))));
                        }
                    }
                    var_27 = (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_15 [i_1] [i_0])) ? (arr_15 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))))))));
                }
                for (int i_7 = 1; i_7 < 21; i_7 += 4) 
                {
                    /* LoopSeq 4 */
                    for (int i_8 = 1; i_8 < 21; i_8 += 4) 
                    {
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((unsigned char) arr_5 [i_8])))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) arr_17 [i_0] [i_1] [i_7]))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned char) (+((+(((var_9) - (((/* implicit */int) arr_0 [i_1]))))))));
                        arr_31 [i_0] [(unsigned short)9] [i_0] [(short)0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
                    }
                    for (unsigned char i_10 = 1; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) max((arr_25 [i_1] [i_1] [i_1] [i_7 - 1] [i_10 + 2] [i_10 + 3]), (((/* implicit */unsigned int) (-(14)))))))));
                        var_32 = ((/* implicit */int) min((var_32), ((+(((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_7 + 2] [i_10] [i_7 + 2]))))));
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            var_33 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_9 [i_0] [(short)0] [i_10 - 1] [i_10] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_10 - 1] [i_10 + 2] [i_11])) : (((/* implicit */int) arr_9 [i_0] [i_7] [i_10 + 2] [(_Bool)1] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_10 + 3] [(unsigned char)17] [i_11])))))));
                            arr_38 [i_1] = min((min((((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_0] [i_1] [i_7] [i_10]))))), (min((((/* implicit */long long int) arr_9 [i_0] [(short)10] [i_7 + 2] [i_10] [i_11])), (var_1))))), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (unsigned char)120))) != (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_34 [i_11] [5U] [i_7] [i_1] [i_0]))))))));
                            arr_39 [i_0] [14] [i_0] [14] [(unsigned short)7] [i_0] [12LL] = ((/* implicit */_Bool) ((((arr_30 [i_7 - 1] [i_7 + 2] [i_7 + 2] [i_7 + 1]) + (((/* implicit */unsigned int) arr_27 [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_10 - 1])))) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_10 - 1])) ^ (var_8))))));
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((((+(((/* implicit */int) arr_26 [i_0] [i_1] [i_7] [i_10 + 2] [i_11])))) >> (((((((/* implicit */_Bool) arr_27 [i_0] [21LL] [i_0] [i_0] [i_0] [i_0])) ? (arr_33 [i_0] [i_0] [i_1] [i_7 - 1] [i_10] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_11]))))) - (8352046360906084207LL))))) * (((((/* implicit */_Bool) arr_25 [i_10 - 1] [i_10] [i_10 - 1] [i_7 - 1] [i_1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_7 + 1] [i_0] [i_10] [i_11]))))) : (((arr_2 [i_10 - 1] [i_7 - 1]) & (arr_32 [i_0] [14] [i_0] [i_10])))))));
                        }
                        for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            arr_43 [i_0] [i_1] [i_7] [(unsigned char)11] [i_12] [i_10] [i_12] = ((/* implicit */unsigned short) var_11);
                            var_34 -= ((/* implicit */signed char) var_8);
                            arr_44 [(unsigned short)12] [2LL] [20] &= ((/* implicit */long long int) ((arr_32 [i_0] [i_0] [i_0] [i_0]) >> (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) >= (((/* implicit */long long int) arr_24 [i_7] [i_10] [i_12])))))));
                        }
                    }
                    for (unsigned char i_13 = 1; i_13 < 20; i_13 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_48 [i_7 + 2] [i_13 + 3] [9] [i_13 - 1] [1LL]))));
                            var_36 *= ((/* implicit */short) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0])))));
                            var_37 = ((/* implicit */long long int) max((var_37), (((((/* implicit */_Bool) arr_0 [i_7 - 1])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_7 - 1] [i_7 - 1] [i_13 + 2] [i_14])))))));
                            arr_49 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_0] [i_0])) >= (((/* implicit */int) arr_23 [i_0] [(short)7]))));
                            var_38 *= ((/* implicit */unsigned char) arr_16 [5LL] [i_7] [i_13] [i_14]);
                        }
                        for (int i_15 = 0; i_15 < 23; i_15 += 1) 
                        {
                            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) arr_32 [i_0] [i_1] [i_7 - 1] [i_15]))));
                            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_13 [i_0] [i_15] [i_7 + 1]), (((/* implicit */int) var_17))))) ? (min((arr_15 [i_7] [i_13]), (((/* implicit */long long int) arr_36 [i_0] [i_1] [(signed char)17])))) : (max((arr_14 [i_15] [(short)8] [i_7] [5LL]), (((/* implicit */long long int) var_3))))))) ? (((((/* implicit */int) arr_3 [i_1])) ^ (((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (unsigned char)155)))))) : ((+(((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_0)))))))));
                            var_41 = ((/* implicit */long long int) min((var_41), (max((((/* implicit */long long int) (short)29104)), (-7233634773111391270LL)))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 23; i_16 += 4) 
                        {
                            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) (~((~(((/* implicit */int) var_3)))))))));
                            var_43 = ((/* implicit */int) min((var_43), (((((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (unsigned char)0)))) & (((/* implicit */int) arr_22 [i_0]))))));
                            arr_55 [2] [i_13 + 1] [i_7] [14LL] [i_0] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (unsigned char)64)), (0ULL))), (((/* implicit */unsigned long long int) arr_33 [i_16] [i_1] [i_1] [i_13] [i_16] [i_1]))));
                        }
                        var_44 ^= (~(((((/* implicit */_Bool) (-(arr_10 [(short)10] [12] [(signed char)22] [(signed char)22])))) ? (var_1) : (((/* implicit */long long int) arr_10 [(unsigned char)4] [i_13 - 1] [i_13] [10LL])))));
                        arr_56 [(short)16] [3LL] [i_7 - 1] [12LL] [10U] = ((((/* implicit */_Bool) ((long long int) arr_4 [i_13 - 1]))) ? (((/* implicit */int) ((unsigned char) ((var_16) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7]))))))) : (((((/* implicit */_Bool) arr_35 [0LL] [0LL] [i_7 - 1] [i_13 + 2] [i_1])) ? (arr_35 [i_7] [i_1] [i_7] [i_7] [i_13]) : (arr_35 [i_0] [i_0] [i_1] [i_0] [i_0]))));
                        arr_57 [i_7] = ((/* implicit */short) arr_17 [i_0] [19] [i_0]);
                        arr_58 [i_0] [i_1] [i_7 - 1] [i_13] = ((/* implicit */_Bool) ((((arr_13 [i_7] [(unsigned short)6] [i_1]) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (arr_14 [(signed char)6] [0] [i_7] [i_7])))) ? (((arr_47 [5] [i_1] [(_Bool)1] [i_7 + 1] [2LL]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_7]))) : (arr_41 [(short)8] [i_7 - 1] [i_7 - 1] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0] [0LL] [0LL] [0LL] [i_1] [i_0])))))))) - (4056431965U)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 23; i_18 += 4) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) (+(((long long int) 0ULL)))))));
                                arr_64 [11] [(unsigned short)10] [(unsigned short)10] [i_1] [i_0] [i_0] = (+(((/* implicit */int) var_17)));
                                var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) min((((/* implicit */long long int) (unsigned short)44105)), (5899095849829814067LL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 21; i_19 += 3) 
                    {
                        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                        {
                            {
                                arr_70 [i_0] [i_1] [i_7 + 2] [i_19] [i_19] = ((/* implicit */unsigned short) (-(min((arr_10 [(_Bool)1] [2LL] [i_19 + 2] [4LL]), (((/* implicit */int) (signed char)127))))));
                                var_47 ^= ((/* implicit */int) ((min((((/* implicit */long long int) arr_18 [i_7 - 1] [i_7] [i_7 + 1] [(_Bool)1] [i_7 - 1] [i_19 - 1])), (arr_54 [i_7 - 1] [i_20 + 1]))) / (((((/* implicit */_Bool) arr_54 [i_7 - 1] [i_20 + 1])) ? (arr_33 [(short)16] [i_20] [(signed char)17] [i_7 - 1] [i_7 - 1] [i_1]) : (arr_54 [i_7 + 1] [i_20 + 1])))));
                                arr_71 [i_0] [11U] [i_7] [11U] [i_20] = ((/* implicit */unsigned short) var_6);
                                arr_72 [(unsigned char)0] [i_1] = ((/* implicit */long long int) arr_13 [i_0] [4] [i_20]);
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (short i_21 = 0; i_21 < 23; i_21 += 4) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        for (unsigned char i_23 = 2; i_23 < 20; i_23 += 1) 
                        {
                            {
                                arr_83 [i_22] [i_21] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) min((var_8), (((/* implicit */int) var_5))))) : (var_7)));
                                var_48 = ((/* implicit */_Bool) arr_10 [i_21] [(_Bool)1] [i_21] [i_22]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((signed char) min((((unsigned short) (signed char)-127)), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (var_13))))))))));
    var_50 &= ((/* implicit */long long int) ((unsigned int) var_15));
    var_51 = ((/* implicit */unsigned short) ((long long int) ((((var_4) != (((/* implicit */long long int) var_8)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((var_1) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
}
