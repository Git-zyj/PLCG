/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242014
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((var_2) << (((((/* implicit */int) (unsigned char)60)) - (60))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)67)) : (98827153)))) ^ (var_2))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) var_4);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_13 += min(((-(((/* implicit */int) arr_10 [i_3])))), (((/* implicit */int) arr_3 [i_0 + 1] [i_1])));
                                var_14 = ((/* implicit */signed char) max((var_14), (var_0)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        var_15 *= ((/* implicit */unsigned char) (((+(arr_2 [i_5]))) + (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-60))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_1)))) : (((/* implicit */int) max(((signed char)-33), (arr_7 [i_5] [i_5] [13U]))))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) || (((/* implicit */_Bool) min((arr_10 [i_5]), (((/* implicit */unsigned char) var_0))))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (int i_7 = 3; i_7 < 10; i_7 += 3) 
            {
                {
                    arr_21 [i_5] &= ((/* implicit */unsigned int) var_6);
                    /* LoopSeq 3 */
                    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        arr_25 [i_5] [8LL] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_5 [i_7]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_10 [i_5])) : (((/* implicit */int) var_8))))) ? (0U) : (((/* implicit */unsigned int) arr_18 [i_7 + 2] [i_7 + 3])))) : (((/* implicit */unsigned int) (+((-2147483647 - 1)))))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_10))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            arr_31 [i_5] [i_6] [i_7] [i_7] [i_9] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_14 [i_6] [i_6])) % (((((/* implicit */_Bool) 1729376688U)) ? (2565590578U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145)))))));
                            arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (signed char)-21);
                        }
                        var_18 = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) 2147483632)))), (min((((/* implicit */long long int) arr_3 [i_9] [i_6])), (var_3)))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((var_10), (var_7))) ? (((((/* implicit */_Bool) arr_12 [12] [i_6] [i_7] [i_9] [i_6] [i_6] [i_9])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32743)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)60))))))) ? (((((/* implicit */int) (unsigned short)59005)) - (((/* implicit */int) arr_1 [i_7 - 2])))) : (((/* implicit */int) arr_23 [i_5] [12U] [i_7 - 1] [i_5]))));
                        arr_33 [i_5] [i_7] [i_6] [i_5] = ((/* implicit */unsigned char) ((max((var_4), (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) arr_4 [i_5])))))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 13; i_11 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) -481655873))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)))) == (((/* implicit */int) (signed char)32)))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_24 [6] [(unsigned char)13] [(unsigned char)2]))))) * ((~(var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                        arr_36 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (((((~(var_2))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_4 [i_5])) ? (max((((/* implicit */unsigned int) var_0)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7 - 2]))))) - (3962084026U)))));
                        var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max(((signed char)122), ((signed char)120)))), (((max((var_6), (((/* implicit */long long int) (signed char)-107)))) + (((/* implicit */long long int) max((1729376705U), (((/* implicit */unsigned int) var_1)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            arr_39 [i_12] [(_Bool)1] [(signed char)9] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_7) ? (var_2) : (((/* implicit */long long int) var_4)))))));
                            arr_40 [(unsigned char)12] [i_7 + 3] = ((/* implicit */unsigned long long int) arr_8 [2U] [i_7] [i_11] [8]);
                            var_23 = ((/* implicit */unsigned char) ((((_Bool) 10000982592204657091ULL)) ? (((/* implicit */long long int) 2147483647)) : (arr_13 [i_7 + 1] [i_7 + 1] [i_7 + 3] [i_7 + 2] [i_7 + 4] [i_11 + 1])));
                            var_24 = ((/* implicit */unsigned short) var_6);
                        }
                        for (signed char i_13 = 0; i_13 < 14; i_13 += 3) 
                        {
                            arr_44 [(signed char)5] [i_6] [(unsigned char)3] [i_11] [i_13] [i_6] [i_13] &= ((/* implicit */unsigned int) max(((-(var_2))), (((/* implicit */long long int) (((~(4249937158U))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [3LL] [i_6] [i_6] [i_6]))) - (var_4))))))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_7 - 2])) ? (((((/* implicit */int) (signed char)-32)) + (((/* implicit */int) (short)-31657)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_13] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_7 + 1]))))))))));
                        }
                    }
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */long long int) 2147483635)) : (3825477969639863596LL))))));
                }
            } 
        } 
        var_27 = ((/* implicit */int) ((((/* implicit */long long int) arr_43 [i_5] [i_5] [i_5] [i_5] [8])) < ((~(((long long int) arr_15 [i_5]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            for (signed char i_15 = 0; i_15 < 14; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_54 [(short)3] [i_14] [i_14] [i_14] [i_14] = 4249937162U;
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10000982592204657071ULL)) ? (((((/* implicit */long long int) arr_5 [i_17])) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2))))) : (((/* implicit */long long int) max(((~(((/* implicit */int) (signed char)0)))), (((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 1; i_18 < 13; i_18 += 4) 
                    {
                        arr_57 [i_18] = 2147483647;
                        var_29 -= ((int) (signed char)64);
                        arr_58 [i_18] [(unsigned char)9] [i_15] [i_15] [i_14] [i_18] = ((/* implicit */int) var_9);
                        var_30 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-91)) ? (-165634044) : (((/* implicit */int) (signed char)-8))))) ^ ((~(3384713428729317778LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                        /* LoopSeq 2 */
                        for (int i_19 = 2; i_19 < 12; i_19 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) var_6);
                            var_32 = ((/* implicit */unsigned int) (((((_Bool)0) ? (3280165987064261353ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_55 [i_18])) ? (4886788672569429207LL) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_18]))))))))));
                        }
                        for (int i_20 = 4; i_20 < 13; i_20 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned char) max((((unsigned short) ((unsigned char) arr_0 [i_5] [i_5]))), (((/* implicit */unsigned short) arr_45 [(short)0]))));
                            var_34 = ((/* implicit */short) arr_20 [i_5] [i_5] [i_15] [i_20 - 1]);
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_5 [i_20 - 4]) ^ (arr_5 [i_20 - 3])))) ? (((((/* implicit */_Bool) arr_41 [i_18 + 1] [i_20 - 2] [i_20 - 1])) ? (((/* implicit */int) var_1)) : (arr_41 [i_18 + 1] [i_20 + 1] [i_20 - 3]))) : (((/* implicit */int) max(((signed char)36), ((signed char)-52))))));
                            var_36 = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) (short)11435))))), (-3384713428729317778LL)));
                            arr_63 [i_18] [4] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned int) (signed char)-122)), (4294967295U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) (signed char)-122))))))))));
                        }
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_67 [i_21] [i_21] [i_21] [i_5] = ((((/* implicit */_Bool) max((arr_14 [i_5] [i_15]), (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_16 [i_5] [(signed char)8] [i_15])) : (((/* implicit */int) var_1)));
                        arr_68 [(signed char)7] [i_21] [i_15] [i_21] [3] = ((/* implicit */unsigned short) arr_50 [i_5] [0U] [i_5] [(unsigned char)1]);
                        arr_69 [i_21] [(unsigned char)12] [i_15] [i_15] [2ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_37 [i_5] [0] [i_14] [(signed char)8] [i_21] [(unsigned short)0])), (var_9)))) ? (((/* implicit */int) ((signed char) arr_14 [i_21] [(unsigned char)0]))) : (((/* implicit */int) (signed char)-109))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_22 = 0; i_22 < 14; i_22 += 4) 
                        {
                            arr_72 [(unsigned short)13] [i_14] [i_15] [i_21] [i_22] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) != (((((/* implicit */_Bool) var_5)) ? (arr_20 [i_5] [i_14] [i_5] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_5])))))));
                            var_37 |= ((/* implicit */int) var_1);
                            var_38 = ((/* implicit */short) var_9);
                        }
                        for (signed char i_23 = 2; i_23 < 12; i_23 += 4) 
                        {
                            var_39 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_71 [i_23] [i_23 - 2] [i_15] [i_15] [i_23])))) ? (((/* implicit */long long int) 1376216351U)) : ((-(max((var_6), (((/* implicit */long long int) var_0))))))));
                            arr_75 [i_21] [i_14] [i_15] [i_21] = ((/* implicit */short) (~((~(arr_27 [i_5] [i_14] [i_15] [(unsigned char)8])))));
                            var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)7114))));
                            arr_76 [i_21] [i_14] [i_15] [i_21] [i_23 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) 18155832955583982952ULL)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (signed char)122))));
                        }
                        arr_77 [i_5] [i_14] [i_21] [1LL] = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)29)) - (((/* implicit */int) min((arr_47 [i_15] [i_21]), ((unsigned char)190)))))) % (((/* implicit */int) (signed char)36))));
                    }
                }
            } 
        } 
    }
    var_41 = ((/* implicit */int) var_7);
    var_42 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((var_10) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) (!(((var_2) <= (((/* implicit */long long int) var_4))))))) : (max((((/* implicit */int) var_10)), ((-(((/* implicit */int) var_5)))))));
}
