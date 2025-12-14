/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216145
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_10))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_1]))));
                        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) & (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6)))) : (((1289032455U) - (((/* implicit */unsigned int) arr_7 [(unsigned short)5] [i_1] [i_1] [i_3]))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) ((long long int) arr_9 [i_4] [i_0] [i_0] [i_0]));
                        arr_15 [i_0] [i_4] [i_0] [i_4] [i_4] = ((/* implicit */signed char) ((int) (unsigned char)105));
                    }
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_0] [i_5 + 2]))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_0] [i_1])) | (((/* implicit */int) (short)-14071))));
                        var_25 = ((/* implicit */long long int) var_8);
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_1])) + (var_1)))));
                        var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_3 [i_6] [i_2] [i_1]))));
                        var_27 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)96)) | (((/* implicit */int) (signed char)17))))));
                        var_28 = ((/* implicit */unsigned int) (+(-415987398)));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) 3314893500U);
                                var_30 = (!(((/* implicit */_Bool) var_13)));
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [i_0] [i_1])))) : ((-(((/* implicit */int) (short)-14071))))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_2]))));
                }
                for (int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */_Bool) max((((long long int) (unsigned short)4198)), (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_0] [i_0] [i_1] [i_9] [14LL] [i_9])))))));
                    var_33 = (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_9] [i_1])) : (((/* implicit */int) arr_29 [i_9])))))));
                    var_34 ^= ((/* implicit */unsigned int) var_7);
                }
                for (int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                {
                    arr_32 [i_0] [i_10] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned short)53345)) ? (3121484374525611631ULL) : (max((((/* implicit */unsigned long long int) 1)), (7027753633201385394ULL))))));
                    /* LoopSeq 4 */
                    for (long long int i_11 = 2; i_11 < 22; i_11 += 4) 
                    {
                        var_35 = max((((/* implicit */unsigned long long int) var_2)), (min(((-(7037115774827474753ULL))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])))));
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_12 [i_0] [i_0] [i_10] [i_11 + 2] [i_10] [i_11]), (((/* implicit */short) arr_19 [i_0] [i_1] [i_10] [i_11 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) arr_14 [i_1] [i_10] [i_11])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) : (max((((/* implicit */unsigned long long int) var_6)), (arr_26 [i_11 - 2] [i_1] [i_10] [i_0] [i_11])))));
                        arr_35 [i_0] [i_10] [i_1] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0] [i_11 + 2] [15ULL]))))), (((((/* implicit */_Bool) (unsigned char)152)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136)))))));
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_10] [i_10]);
                        var_38 = ((/* implicit */long long int) ((((/* implicit */int) arr_37 [i_0] [i_10] [i_10] [i_12])) != (((/* implicit */int) var_6))));
                        arr_38 [i_0] [i_0] [i_10] [i_10] [i_12] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_30 [i_0] [i_1] [i_10])) != (((/* implicit */int) arr_30 [i_0] [i_1] [i_10]))));
                    }
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
                    {
                        arr_41 [i_10] [i_10] = ((/* implicit */int) ((signed char) arr_28 [i_0] [i_1] [i_10] [i_10]));
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [10ULL] [i_10] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 8058398676657449280ULL)))) : (arr_22 [i_13] [i_10] [i_10] [i_1] [i_0]))))));
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_13])))) : (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_1] [i_0])))));
                        var_41 = arr_6 [i_13] [i_1];
                        /* LoopSeq 2 */
                        for (long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            arr_44 [i_14] [i_10] [i_10] [i_10] [i_1] [i_10] [i_0] = ((/* implicit */short) ((unsigned short) arr_26 [i_0] [i_0] [i_10] [i_13] [i_13]));
                            var_42 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_14] [2U] [i_1] [i_10] [i_1] [i_0] [i_0])) + (((/* implicit */int) arr_42 [i_1] [i_1] [i_13] [i_1] [i_14] [i_1] [i_13]))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 24; i_15 += 4) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [i_0] [i_1] [i_13] [i_10]))));
                            var_44 = ((/* implicit */int) ((unsigned long long int) arr_33 [i_0] [i_1] [i_0] [i_10] [i_15]));
                            var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_47 [i_0] [i_0])) / (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_10] [i_0] [i_10])))) >> (((((((/* implicit */_Bool) 10LL)) ? (((/* implicit */long long int) arr_43 [i_13] [i_15] [i_13])) : (var_4))) - (1560008344LL))))))));
                            var_46 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_28 [i_13] [i_1] [i_1] [i_10])) : (((/* implicit */int) arr_28 [i_10] [i_10] [i_10] [i_10])));
                        }
                    }
                    for (long long int i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_0] [i_1] [i_10] [i_1] [i_10])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_16] [i_16] [i_10])) : (((/* implicit */int) ((short) max((((/* implicit */long long int) arr_46 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_9)))))));
                        arr_51 [i_10] [i_10] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_10), (22ULL)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (3046210368488187919ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))))) : (((/* implicit */unsigned long long int) var_16)))), (14085526673287424945ULL)));
                        var_48 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_16]);
                        arr_52 [i_16] [i_1] [i_10] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_14 [i_10] [i_10] [i_16]), (((/* implicit */unsigned short) var_8))))) + ((+(((/* implicit */int) (signed char)15))))))), (((((/* implicit */_Bool) min((arr_50 [i_10] [i_10] [i_10] [i_10]), (((/* implicit */int) arr_33 [i_16] [i_16] [i_10] [i_10] [i_16]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)4)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) : (max((var_17), (((/* implicit */unsigned long long int) (unsigned char)150))))))));
                    }
                    var_49 = min((((long long int) ((((/* implicit */_Bool) arr_48 [i_10] [i_1] [i_10] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)0))))), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0])));
                }
                for (int i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        for (unsigned long long int i_19 = 4; i_19 < 21; i_19 += 4) 
                        {
                            {
                                arr_61 [i_19] [i_0] [i_18] [i_18] [i_19] = ((/* implicit */unsigned int) var_14);
                                var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2127213435)) ? (-71712204) : (((/* implicit */int) (unsigned char)105)))))));
                                var_51 = ((/* implicit */unsigned long long int) arr_29 [i_18]);
                            }
                        } 
                    } 
                    arr_62 [i_0] [i_1] [i_17] = ((/* implicit */unsigned int) max((max((var_17), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) arr_30 [i_0] [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 24; i_21 += 4) 
                        {
                            {
                                arr_68 [i_20] [i_1] [i_17] [i_20] [i_1] = var_14;
                                arr_69 [i_0] [i_0] [i_0] [i_0] [i_20] [i_0] = max((((unsigned long long int) arr_23 [i_1] [i_1] [i_21] [i_21] [2U])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-17)) && (((/* implicit */_Bool) -71712204))))));
                            }
                        } 
                    } 
                }
                arr_70 [i_0] [i_1] [i_0] = var_17;
                arr_71 [i_1] [i_1] = ((/* implicit */long long int) 2315545303851831195ULL);
            }
        } 
    } 
    var_52 = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14)))) == (var_9))))));
    var_53 += ((/* implicit */short) var_1);
}
