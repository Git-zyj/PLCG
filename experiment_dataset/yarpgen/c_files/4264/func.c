/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4264
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 31))))) : (((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */long long int) ((1504224697) / (((/* implicit */int) (short)-32757))))) : (var_5))) : (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (var_6))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_0)), ((short)32767))))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0]))));
                    arr_11 [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0])) * (((/* implicit */int) arr_6 [i_1]))));
                    var_13 = ((/* implicit */long long int) (unsigned char)255);
                    var_14 = ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) (unsigned char)3)));
                }
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)32767)), ((+(((((/* implicit */int) var_8)) + (((/* implicit */int) var_8))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) var_3);
                                arr_22 [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                            }
                        } 
                    } 
                }
                for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((signed char) var_1)))));
                                var_17 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (var_6))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((signed char) 1663416354U));
                    arr_29 [i_0] [i_0] = ((/* implicit */signed char) max((arr_5 [i_6] [i_6]), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0]))) : ((-9223372036854775807LL - 1LL))))));
                    var_19 = ((/* implicit */unsigned char) (short)28470);
                }
                arr_30 [i_0] = ((/* implicit */short) (_Bool)1);
                /* LoopSeq 3 */
                for (long long int i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                {
                    var_20 |= ((/* implicit */long long int) (((((!(var_11))) ? ((-(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) arr_7 [i_9])) ? (((/* implicit */int) arr_12 [i_0] [(short)11] [i_9])) : (arr_15 [i_0]))))) - (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(unsigned short)0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5)))))))));
                    var_21 = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_0] [(signed char)23] [i_9]))))), (4294967287U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_9])))))));
                }
                for (long long int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                {
                    arr_36 [i_10] [(signed char)4] = ((/* implicit */unsigned short) ((short) ((var_8) ? (arr_13 [i_1] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0]))))));
                    var_22 = ((/* implicit */unsigned short) arr_27 [i_0] [i_1] [i_10] [i_1] [i_1] [i_10] [i_10]);
                }
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    arr_40 [(short)8] [i_1] [i_0] = arr_5 [i_0] [i_0];
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) var_9);
                            arr_46 [i_0] [i_1] [i_0] [i_12] [i_13] = (((+(((/* implicit */int) var_7)))) == (((/* implicit */int) (_Bool)0)));
                            var_24 = ((/* implicit */short) arr_6 [i_13]);
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_1))));
                        }
                        arr_47 [i_0] = ((/* implicit */_Bool) 6ULL);
                        /* LoopSeq 3 */
                        for (long long int i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
                        {
                            arr_50 [i_0] [i_1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) var_2)))) : (((((/* implicit */int) var_4)) % (((/* implicit */int) var_9))))));
                            arr_51 [i_14] [i_12] [i_11] [i_0] [i_0] = ((/* implicit */signed char) 853531341U);
                        }
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                        {
                            arr_56 [i_0] [(short)7] [(short)7] [(short)7] [i_15] [(short)7] [i_15] = ((/* implicit */short) 2147483647);
                            arr_57 [i_0] [i_1] [i_12] [i_12] [(_Bool)1] [i_12] [i_12] = (~(((/* implicit */int) (unsigned char)0)));
                        }
                        for (long long int i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_11] [i_12] [0] [i_16])))))));
                            var_27 = ((/* implicit */_Bool) (~(arr_53 [(unsigned short)17] [(short)12] [i_11] [i_12] [i_12] [i_11] [i_11])));
                            arr_60 [i_16] [i_16] [i_12] [i_11] [(_Bool)1] [i_16] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32767))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_31 [i_0] [i_0])))) : (((/* implicit */int) var_8))));
                        }
                        arr_61 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 8191LL))));
                        arr_62 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_25 [i_1] [i_12]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) (short)-31993);
                        arr_66 [i_17] [i_17] [i_17] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_8) || (((/* implicit */_Bool) arr_25 [(signed char)1] [i_0])))))));
                        /* LoopSeq 2 */
                        for (signed char i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
                        {
                            arr_70 [i_0] [i_0] [i_0] [i_17] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_1] [i_17]))));
                            arr_71 [(unsigned char)23] [i_11] [i_17] = ((/* implicit */short) arr_24 [i_18] [(short)15] [i_11]);
                            var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(18446744073709551615ULL))))));
                        }
                        for (signed char i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
                        {
                            var_30 = (unsigned char)0;
                            var_31 = ((/* implicit */short) arr_37 [i_19]);
                            var_32 = ((/* implicit */long long int) (((~(((/* implicit */int) (short)-1)))) & (((arr_43 [i_0] [i_11]) ^ (((/* implicit */int) var_9))))));
                            arr_76 [(_Bool)1] [i_1] [i_11] [i_17] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2533993267235694288LL)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (signed char)21))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_20 = 0; i_20 < 24; i_20 += 3) 
                        {
                            var_33 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) (unsigned char)255)))));
                            arr_79 [i_0] [i_20] [i_17] [i_17] [i_11] [i_1] [i_20] = ((/* implicit */unsigned int) (unsigned char)0);
                            var_34 = ((/* implicit */signed char) ((((unsigned int) 18446744073709551615ULL)) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_20] [(unsigned char)0] [i_0])) ? (arr_43 [i_0] [i_17]) : ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_34 [i_0] [i_1] [i_11]))))));
                        }
                    }
                    for (long long int i_21 = 0; i_21 < 24; i_21 += 4) /* same iter space */
                    {
                        arr_84 [i_0] = ((/* implicit */unsigned short) max((min((-9223372036854775802LL), (7294933774683921084LL))), (((/* implicit */long long int) (-((+(((/* implicit */int) arr_34 [(unsigned short)6] [17] [17])))))))));
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_0] [i_0]))))) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (unsigned char)29)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((3441435955U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)22850))))))) & (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (18446744073709551596ULL)))))));
                        var_37 = ((/* implicit */int) arr_49 [i_0] [i_21] [i_11] [i_21] [(_Bool)1]);
                    }
                    for (long long int i_22 = 0; i_22 < 24; i_22 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */short) min(((+(((((/* implicit */_Bool) var_10)) ? (arr_35 [i_0] [i_1] [i_11] [(short)22]) : (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_22] [i_1] [i_1]))))))), (((/* implicit */long long int) (+(((/* implicit */int) min(((short)-1), (((/* implicit */short) (_Bool)0))))))))));
                        arr_88 [i_0] [i_0] [i_11] [i_11] = ((/* implicit */long long int) (+(arr_2 [i_0])));
                        var_39 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) (short)32767))))) % (((((/* implicit */_Bool) arr_68 [i_0] [i_0] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3)))));
                        arr_89 [i_0] [i_1] [i_11] [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (arr_64 [i_22] [i_1] [i_22]))))) : ((~(var_5))))));
                    }
                    var_40 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_0] [i_1] [20] [i_0] [i_1] [i_1] [12LL])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_0] [i_11])))))) : ((+((-9223372036854775807LL - 1LL))))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 20ULL))))))));
                }
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned char) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)0))));
    var_42 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((var_8) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29)))))), ((+(2305843009213693952ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) 0U))))))))));
    var_43 = ((/* implicit */short) var_2);
    var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) var_10))));
}
