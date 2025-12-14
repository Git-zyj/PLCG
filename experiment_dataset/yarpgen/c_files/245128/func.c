/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245128
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3584U)) ? (((/* implicit */int) (unsigned char)160)) : (-16279532)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (var_7)))) > (max((3940649673949184ULL), (10461305530118144945ULL)))))) | (((/* implicit */int) min((min((arr_2 [(_Bool)1] [i_1]), (((/* implicit */unsigned short) var_1)))), (((/* implicit */unsigned short) min((var_9), (((/* implicit */unsigned char) arr_6 [i_0] [(signed char)12] [i_0] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) arr_11 [i_3] [19U] [i_3] [i_3] [i_3]);
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(arr_1 [i_0] [i_1]))) / (((/* implicit */int) min((var_8), (arr_2 [i_2] [(signed char)21]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(unsigned char)10] [i_2] [i_2] [i_2] [i_0] [i_3]))) : (var_6)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_7))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_10 [i_0] [i_3] [i_0] [i_0] [i_4] [i_2] [(signed char)10]), (var_10)))))))) : (((((/* implicit */_Bool) ((3940649673949184ULL) | (18442803424035602432ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [12LL] [i_1]), (((/* implicit */unsigned short) arr_8 [i_4] [i_3] [i_1] [(signed char)21])))))) : (((var_1) ? (((/* implicit */unsigned long long int) arr_9 [i_0])) : (var_5)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_9 [(unsigned char)4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_0]))))))))));
                    arr_12 [i_0] [i_0] = min((((((/* implicit */_Bool) ((signed char) (unsigned char)255))) ? (((/* implicit */unsigned int) (-(var_4)))) : (arr_5 [i_0] [i_0] [i_0] [i_2]))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_8 [(unsigned char)15] [(unsigned char)15] [(unsigned char)15] [20LL]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_5] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
                                arr_18 [i_6] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */long long int) max((arr_11 [i_0] [9U] [i_2] [i_5] [i_5]), (((/* implicit */unsigned int) var_10))))), (((var_12) ? (arr_9 [10ULL]) : (((/* implicit */long long int) var_15)))))));
                                var_21 = max(((short)5096), ((short)-5106));
                            }
                        } 
                    } 
                }
                for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            {
                                arr_27 [i_0] [i_0] [i_7] [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) max((min((min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (arr_3 [i_7] [i_1] [i_0]))), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (arr_20 [i_0] [i_0] [i_1]))))), ((((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_9] [i_9] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [8LL]))) : (arr_11 [(unsigned char)1] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((arr_24 [(signed char)9] [i_7] [i_7] [i_1] [(short)7] [i_8]) ? (var_4) : (((/* implicit */int) var_1)))))))));
                                var_22 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) (~(((/* implicit */int) var_14))))), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_7] [i_8]))) / (var_7))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_14) ? (var_15) : (((/* implicit */int) arr_8 [i_1] [i_7] [i_8] [i_9]))))) ? (((/* implicit */int) ((_Bool) arr_7 [i_9] [i_8] [i_0] [i_0]))) : (max((var_4), (((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                    arr_28 [i_0] [i_0] = ((/* implicit */signed char) (-(var_5)));
                    var_23 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                    var_24 = ((short) (short)-5106);
                }
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        for (long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) var_14)))) >> (((/* implicit */int) ((unsigned char) var_12)))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0] [i_0]) : (var_15))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [14LL])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_12))))) : (min((var_15), (var_15)))))));
                                var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [(unsigned short)3] [i_11] [i_12] [i_11])))))) ? (((/* implicit */int) max((arr_2 [i_10] [(unsigned short)18]), (((/* implicit */unsigned short) arr_35 [(unsigned short)16] [6U] [i_11] [i_1] [(unsigned short)16]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_25 [(unsigned short)19] [i_11] [i_10] [i_1] [i_0]))) > (((var_14) ? (((/* implicit */int) arr_6 [i_10] [i_10] [18ULL] [i_12])) : (var_4))))))));
                                arr_36 [i_0] [(unsigned short)5] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_32 [i_0] [i_0] [i_10] [4ULL] [i_0])))) ? (((var_5) << (((((/* implicit */int) arr_16 [10U] [10U])) + (83))))) : (((/* implicit */unsigned long long int) arr_34 [i_12] [i_11] [i_10] [i_0] [i_0] [i_1] [i_0])))), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned long long int) arr_7 [i_0] [i_1] [i_11] [i_12]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0] [i_13] [i_0] [i_1])) / (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
                        var_28 &= ((/* implicit */signed char) var_4);
                    }
                    for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        arr_41 [i_14] [i_10] [18U] [i_10] [i_0] &= ((/* implicit */_Bool) ((unsigned int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_29 [(signed char)6] [(signed char)6])) : (((/* implicit */int) var_9)))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
                        {
                            arr_44 [i_15] [i_0] [i_0] [i_1] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */int) (((+(((((/* implicit */_Bool) arr_13 [(unsigned char)5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_1] [i_10] [i_0] [i_15]))) : (arr_22 [(unsigned char)9] [i_0]))))) >> (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (var_5)))) >> (((arr_32 [i_0] [i_14] [i_0] [i_1] [i_0]) - (1966361105614901575ULL)))))))) : (((/* implicit */int) (((+(((((/* implicit */_Bool) arr_13 [(unsigned char)5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_1] [i_10] [i_0] [i_15]))) : (arr_22 [(unsigned char)9] [i_0]))))) >> (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (var_5)))) >> (((((arr_32 [i_0] [i_14] [i_0] [i_1] [i_0]) - (1966361105614901575ULL))) - (1821825075854783502ULL))))))));
                            arr_45 [i_0] [i_15] [i_14] [i_10] [i_0] [i_0] = ((/* implicit */int) min((min((((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_5 [i_0] [i_14] [i_14] [i_14]))), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) ((_Bool) ((arr_24 [i_15] [i_14] [i_14] [i_10] [i_0] [i_0]) ? (arr_31 [i_0]) : (((/* implicit */int) var_11))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                        {
                            arr_48 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
                            var_29 = ((/* implicit */short) arr_43 [i_14] [i_14] [i_1] [i_0]);
                        }
                        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 2) /* same iter space */
                        {
                            arr_52 [i_17] [i_0] [i_10] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((((/* implicit */int) arr_15 [i_17] [i_14] [i_10] [i_1] [i_0] [i_0])) >> (((arr_37 [23LL] [i_17] [i_14] [i_10] [i_1] [i_0]) - (16072944412859841670ULL))))) & (((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) var_10)))))), (((((((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (var_4) : (((/* implicit */int) arr_47 [i_0] [i_0])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_13 [i_10])) ? (var_4) : (((/* implicit */int) var_9)))) + (209001060)))))));
                            var_30 = ((/* implicit */short) ((max((((var_15) >= (((/* implicit */int) arr_15 [i_17] [i_14] [i_10] [i_10] [i_0] [i_0])))), (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_10)))))) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                        }
                    }
                }
                for (unsigned short i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    var_31 = ((/* implicit */long long int) arr_30 [i_0] [i_1] [i_0]);
                    arr_55 [i_0] [6ULL] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (var_5) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))) ? (min((((/* implicit */int) var_13)), (arr_49 [i_18] [i_0] [i_18] [i_1] [i_0]))) : (((/* implicit */int) ((var_4) == (((/* implicit */int) arr_16 [i_0] [(_Bool)1])))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned char) ((short) var_6)))));
                    var_32 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((arr_19 [i_0] [(unsigned char)10] [i_0] [i_0]), (((/* implicit */unsigned int) var_11))))) ? (((((/* implicit */_Bool) arr_22 [i_18] [2LL])) ? (((/* implicit */int) arr_47 [i_0] [i_0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_42 [i_1] [i_0])))), (((((arr_4 [i_0]) >= (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (arr_15 [i_0] [i_1] [i_1] [i_18] [23ULL] [i_18])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_20 = 0; i_20 < 24; i_20 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((var_15) | ((-(((/* implicit */int) var_1)))))))));
                            arr_62 [i_0] [i_19] [i_18] [i_0] [i_0] = (-((+(arr_57 [i_0] [i_0] [i_0] [i_1]))));
                            var_34 = ((/* implicit */short) var_3);
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_18] [i_18] [i_1] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned char)7] [(unsigned char)7] [i_18] [i_19]))) : (var_2)))) ? (((/* implicit */unsigned long long int) arr_19 [i_19] [i_18] [i_1] [i_0])) : (((arr_4 [i_1]) + (arr_4 [14])))))));
                        }
                        for (signed char i_21 = 0; i_21 < 24; i_21 += 2) /* same iter space */
                        {
                            var_36 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_5 [i_21] [i_21] [i_18] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_21] [i_19] [i_0] [i_1] [i_0] [i_0])))))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_26 [i_0] [i_0] [i_0] [i_1] [i_18]))))));
                            var_37 = ((/* implicit */_Bool) var_4);
                        }
                        arr_67 [i_0] [i_1] [i_0] [i_19] = ((/* implicit */unsigned int) ((((arr_35 [11] [i_19] [i_0] [i_19] [i_19]) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_50 [i_19] [i_19] [i_0] [i_0] [(unsigned short)8] [(unsigned short)8])) : (((/* implicit */int) arr_56 [i_0] [i_19] [i_19] [i_19]))))) : (arr_43 [i_0] [i_0] [i_18] [i_0])));
                        var_38 ^= ((/* implicit */unsigned int) arr_43 [(unsigned short)0] [i_18] [i_0] [i_0]);
                    }
                }
                var_39 = ((/* implicit */long long int) ((unsigned char) ((unsigned char) (+(((/* implicit */int) var_1))))));
                var_40 -= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_63 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_1])), (arr_59 [i_0] [i_0] [22ULL]))) & (var_5)));
                var_41 = ((/* implicit */long long int) ((int) ((long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_1] [i_1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_1] [(signed char)17] [i_1] [i_1] [i_0] [(signed char)17])))))));
            }
        } 
    } 
}
