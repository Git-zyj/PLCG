/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2619
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 7; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_11 [i_0 + 2] [i_3] [i_3])), (arr_7 [4ULL] [4ULL] [i_2])))) / (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned char)107))))), (((unsigned long long int) (unsigned char)8))))));
                                var_13 = ((/* implicit */unsigned long long int) ((((int) var_9)) * (((/* implicit */int) ((signed char) (unsigned char)1)))));
                                var_14 = ((/* implicit */long long int) (+((+(arr_1 [i_0])))));
                                arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_12 [(signed char)1] [2U] [i_2] [2U] [i_4] [i_1] [2U]))))))) != (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0 + 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 8; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned char) var_10);
                            var_16 *= ((/* implicit */int) ((unsigned int) arr_18 [i_1] [i_2] [i_6 - 1] [i_6] [i_6] [i_6]));
                        }
                        for (int i_7 = 4; i_7 < 8; i_7 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_7] [i_7] [i_2] [i_2] [i_7 - 3])) ? (((/* implicit */int) arr_11 [i_7 - 3] [i_7 - 1] [i_7])) : (((/* implicit */int) var_6))));
                            arr_24 [i_0] [i_1] [i_1] [4] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                            var_18 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_5 - 1] [i_0 - 2] [i_0 - 2])) << (((arr_5 [i_0] [i_2] [i_0]) - (3367969074U)))));
                        }
                        for (int i_8 = 4; i_8 < 8; i_8 += 3) /* same iter space */
                        {
                            var_19 *= ((/* implicit */int) ((((/* implicit */int) arr_19 [3] [i_8 - 3] [i_5 + 1] [i_2] [i_1] [i_0 - 1])) == (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5 + 1])))) ? (((/* implicit */int) arr_15 [i_8 + 1] [i_0 + 2] [i_1] [i_5 - 1])) : ((-(((/* implicit */int) (_Bool)1))))));
                        }
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0 + 3] [(unsigned char)6] [i_5 + 1])) ? (arr_25 [i_0] [i_0] [i_2] [(_Bool)1] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((373058069U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 8; i_9 += 4) /* same iter space */
                    {
                        arr_30 [i_0] [2ULL] [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_9]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 1) 
                        {
                            var_22 = arr_3 [i_0] [(_Bool)1] [i_2];
                            var_23 = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) max((arr_4 [i_0]), (((/* implicit */unsigned int) arr_29 [i_0 - 1] [i_1] [5LL]))))), (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_24 = ((/* implicit */int) var_1);
                            var_25 = min((((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) != (max((373058069U), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [8U]))))))), (arr_10 [8U] [i_1] [i_1]));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_25 [i_10 - 1] [i_1] [i_0 - 1] [9U] [6LL] [i_2] [i_10 - 1])) || (((/* implicit */_Bool) arr_25 [i_10 - 1] [3U] [i_0 + 3] [i_9] [i_10] [5] [i_0 - 3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0] [9U] [i_9])), (arr_10 [i_0 - 1] [i_2] [i_2])))) || (((/* implicit */_Bool) ((unsigned int) 18446744073709551615ULL)))))) : (((((/* implicit */int) ((4294967293U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) % (((/* implicit */int) ((((/* implicit */long long int) 1317275174U)) > (-1LL)))))))))));
                        }
                        var_27 *= arr_2 [i_2];
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            var_28 *= ((/* implicit */unsigned long long int) arr_6 [i_0] [(unsigned char)7] [i_0]);
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9 + 1] [0U] [i_0] [0U] [(_Bool)1])) ? (arr_22 [i_9 + 2] [i_9 + 2] [i_0] [i_11] [i_11]) : (arr_22 [i_9 + 2] [i_9] [i_0] [i_9 + 2] [i_11])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 2)) / (arr_27 [i_0] [i_0] [i_0 + 2] [i_0] [6ULL])))) ? (((/* implicit */unsigned int) ((-440168989) ^ (((/* implicit */int) (signed char)-39))))) : (((3U) >> (((var_0) + (1038300528))))))))));
                        }
                        var_30 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((max((3921909211U), (var_9))) << (((arr_14 [i_9 + 1] [4U] [i_0] [8LL] [0U] [i_2]) + (2521745165369790767LL)))))) ? ((((-(2977692110U))) - (((/* implicit */unsigned int) (+(arr_34 [i_0] [i_0] [i_1] [i_2] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47974)))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((max((3921909211U), (var_9))) << (((((arr_14 [i_9 + 1] [4U] [i_0] [8LL] [0U] [i_2]) + (2521745165369790767LL))) + (4891502576216215314LL)))))) ? ((((-(2977692110U))) - (((/* implicit */unsigned int) (+(arr_34 [i_0] [i_0] [i_1] [i_2] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47974))))));
                    }
                    var_31 *= ((/* implicit */unsigned char) max(((~(arr_14 [i_0 - 3] [i_2] [i_2] [i_2] [i_2] [i_0]))), (((/* implicit */long long int) arr_16 [i_0] [(unsigned char)8] [i_2] [(unsigned char)8] [i_2] [(unsigned short)0]))));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_5 [i_0 + 2] [i_0] [i_0]), (arr_5 [i_0 - 1] [i_0] [i_0 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 3] [i_0] [i_2])) && ((_Bool)1)))) : (((((/* implicit */int) (unsigned char)32)) ^ (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_33 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_26 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0])) || (((arr_10 [i_0] [i_0] [i_0]) > (((/* implicit */int) var_3)))))) ? ((~((+(arr_7 [i_0 - 1] [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)0))))) == ((+(((/* implicit */int) var_11)))))))));
    }
    for (int i_12 = 3; i_12 < 7; i_12 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned char i_14 = 3; i_14 < 9; i_14 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        arr_47 [i_12] [i_14] [i_13] [4] [i_12] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((arr_45 [i_12] [i_13]) ? (((/* implicit */int) arr_45 [i_12] [i_13])) : (((/* implicit */int) arr_45 [i_12] [i_13]))))), (max((arr_0 [i_13]), (arr_0 [i_14 + 1])))));
                        var_34 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(arr_34 [i_14 - 2] [(signed char)7] [(signed char)7] [i_14] [8ULL])))), (max((((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_12] [i_13] [i_14 - 2]))))), (((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) (unsigned char)62)))))))));
                        var_35 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((-5831988853890697838LL) % (((/* implicit */long long int) arr_5 [i_12] [i_12] [i_15]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((-(2977692110U))))));
                        /* LoopSeq 1 */
                        for (long long int i_16 = 2; i_16 < 8; i_16 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_41 [i_14] [i_15 - 1] [i_16])), (min((((/* implicit */int) var_7)), (arr_17 [(_Bool)0] [i_13] [(signed char)4] [9] [i_16])))))), ((-(arr_35 [i_14] [i_14] [i_14] [i_14 - 1] [i_12])))));
                            arr_51 [i_12] [i_13] [i_14] [i_15] [i_12] [i_12] = ((/* implicit */int) arr_45 [i_12] [i_12]);
                        }
                        var_37 = (i_12 % 2 == zero) ? (max((((arr_33 [i_12] [i_12] [i_12 - 1] [i_13] [5] [i_14 - 3]) << (((((((/* implicit */int) (short)-5957)) + (5975))) - (18))))), (((/* implicit */int) ((unsigned char) arr_48 [i_15] [i_12] [i_15] [i_15 - 1]))))) : (max((((((arr_33 [i_12] [i_12] [i_12 - 1] [i_13] [5] [i_14 - 3]) + (2147483647))) << (((((((/* implicit */int) (short)-5957)) + (5975))) - (18))))), (((/* implicit */int) ((unsigned char) arr_48 [i_15] [i_12] [i_15] [i_15 - 1])))));
                    }
                    for (unsigned char i_17 = 4; i_17 < 8; i_17 += 3) 
                    {
                        var_38 = ((/* implicit */long long int) (((!(arr_46 [i_12 + 3] [i_12] [i_12 + 3] [i_14 - 3] [i_12] [i_17 + 2]))) ? ((+(((/* implicit */int) arr_46 [i_12 + 2] [i_12 + 2] [3] [i_14 - 2] [i_12] [(unsigned char)0])))) : (((/* implicit */int) ((((/* implicit */long long int) arr_34 [i_12] [(unsigned char)4] [i_12] [i_14] [(signed char)9])) < (arr_0 [i_12]))))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_12] [i_12])) << (((2763107394U) - (2763107371U)))))) ? (((/* implicit */int) ((((var_8) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) != (((/* implicit */long long int) min((((/* implicit */int) var_1)), (var_0))))))) : (((((/* implicit */int) (_Bool)1)) * ((-(((/* implicit */int) (signed char)47))))))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        var_40 |= ((/* implicit */long long int) 1876642696);
                        arr_56 [i_12 - 2] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_12] [(short)3] [i_14])) ? ((-(arr_17 [(signed char)2] [6LL] [(signed char)0] [i_14] [i_18]))) : (1876642691)))) ? (((arr_7 [i_14 + 1] [8] [8]) ^ (((var_7) ? (((/* implicit */int) (signed char)21)) : (-867567247))))) : (arr_32 [(unsigned char)1] [i_13] [i_14 + 1] [i_18])));
                        var_41 *= ((/* implicit */unsigned char) arr_37 [i_12] [i_13]);
                    }
                    /* vectorizable */
                    for (int i_19 = 1; i_19 < 9; i_19 += 2) 
                    {
                        arr_61 [i_12] [(unsigned short)6] [i_14] [i_19] [2LL] [i_13] |= ((/* implicit */unsigned char) arr_34 [i_12] [i_12] [i_14] [i_12] [i_19]);
                        var_42 *= ((/* implicit */unsigned long long int) 0LL);
                        /* LoopSeq 3 */
                        for (unsigned int i_20 = 0; i_20 < 10; i_20 += 2) 
                        {
                            arr_64 [i_19] [i_19] [i_19] [i_19] [i_12] [i_19] = ((/* implicit */unsigned int) ((arr_9 [i_13]) << (((2147483646) - (2147483646)))));
                            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) var_1))));
                            arr_65 [i_12] [i_20] [i_13] [i_12] [i_20] [i_19] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_12]))));
                            var_44 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_26 [1] [1] [(unsigned char)3] [i_14] [2U] [i_20])) ? (var_9) : (var_9))) != (arr_60 [i_19] [1U] [i_19] [i_19] [i_19 + 1] [i_12])));
                            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (_Bool)1))));
                        }
                        for (unsigned char i_21 = 0; i_21 < 10; i_21 += 2) /* same iter space */
                        {
                            var_46 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_21] [i_13] [(_Bool)1]))));
                            var_47 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_66 [i_12] [i_12] [i_19 - 1] [i_21] [i_21])) && (((/* implicit */_Bool) arr_66 [i_13] [i_13] [i_14 + 1] [i_21] [i_14 + 1]))));
                        }
                        for (unsigned char i_22 = 0; i_22 < 10; i_22 += 2) /* same iter space */
                        {
                            arr_71 [i_12] = ((arr_17 [i_13] [i_14 - 3] [i_22] [i_22] [(unsigned char)9]) < (arr_17 [2LL] [i_14 - 3] [i_22] [i_22] [i_22]));
                            arr_72 [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((arr_5 [i_12 + 1] [i_12] [i_19 + 1]) ^ (arr_5 [i_12 - 1] [i_12] [i_19 + 1])));
                        }
                    }
                    arr_73 [i_12] [1ULL] [i_12] [i_14] = ((/* implicit */signed char) arr_53 [i_13] [i_13]);
                    var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) (((-(arr_1 [6]))) * ((-(((/* implicit */int) min(((unsigned char)0), ((unsigned char)21)))))))))));
                }
            } 
        } 
        var_49 = ((/* implicit */signed char) (((+(((/* implicit */int) ((_Bool) var_9))))) * (((/* implicit */int) min((((var_9) < (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), ((!(((/* implicit */_Bool) arr_16 [i_12 + 3] [i_12] [i_12] [(unsigned char)5] [3LL] [i_12])))))))));
        var_50 *= ((/* implicit */signed char) arr_59 [i_12] [i_12] [i_12] [(signed char)1]);
    }
    var_51 = ((/* implicit */unsigned char) max((((/* implicit */int) min((min((((/* implicit */unsigned char) var_2)), ((unsigned char)0))), (((/* implicit */unsigned char) var_10))))), (((((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) (_Bool)0)))) & (((1879048192) - (((/* implicit */int) (unsigned char)219))))))));
    var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_11)))), ((+(((/* implicit */int) (unsigned char)0))))))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) var_0))));
    var_53 = ((/* implicit */int) var_7);
}
