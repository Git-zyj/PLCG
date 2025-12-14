/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31105
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
    var_16 *= ((/* implicit */signed char) ((unsigned short) (~(var_4))));
    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_10)))) ? (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned char)189)) : (-7))) : (((/* implicit */int) max((var_8), (var_8))))))) ? (max((((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1000266062822129337LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4281377883U)))))) : (((/* implicit */long long int) min((-746656212), (((/* implicit */int) (unsigned char)141)))))));
    var_18 = ((/* implicit */_Bool) var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        var_19 *= ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned char)6)))), (((/* implicit */int) var_7))));
                        arr_10 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_3]))))), (min((((/* implicit */unsigned long long int) var_1)), (var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_0] [i_3 - 2])) ? (((((/* implicit */_Bool) 2195141999963390506ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)248)))) : (((/* implicit */int) arr_8 [i_0] [i_2 - 1] [i_2 - 1] [i_3 + 1])))))));
                        var_20 = min((((/* implicit */long long int) var_11)), (max((arr_1 [i_3] [i_2 + 1]), (arr_1 [i_3] [i_2 + 1]))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned int) var_12)), (arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_15))))) : (((unsigned long long int) arr_6 [i_1] [i_0] [i_4]))));
                        arr_13 [i_0] [i_1] [11ULL] [(short)5] = ((/* implicit */int) ((((_Bool) arr_6 [i_2] [i_0] [i_2])) ? (((((/* implicit */_Bool) (short)-7402)) ? (8805700130193509752ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2 - 1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)10])))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((arr_0 [i_0]), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                    }
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */short) (+((-(((((/* implicit */int) arr_6 [i_1] [i_0] [i_5])) / (var_1)))))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_23 += ((/* implicit */signed char) max((arr_16 [i_2 - 1] [i_2 + 1] [i_6] [i_2 + 1]), (((/* implicit */unsigned long long int) ((int) arr_16 [i_2 - 1] [i_2 + 1] [i_6] [i_2 - 1])))));
                            arr_19 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)64)), (2357501050U)))) : (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [2ULL] [i_5] [i_0] [i_0]))) : (var_15))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2] [i_5]))))) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [(unsigned char)0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))))));
                            arr_20 [i_2 - 1] [i_0] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_6 [12] [i_0] [i_2 + 1])), (var_10))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_2 + 1])))))));
                        }
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            arr_23 [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_5]);
                            arr_24 [i_7] [i_5] [i_0] [i_1] [i_0] [6ULL] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))) < (3405849865U)))) : (((/* implicit */int) var_8))))), (min((((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))) : (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [i_5] [(signed char)5] [i_7])) ? (var_9) : (((/* implicit */int) arr_17 [i_0] [i_0] [(unsigned char)3] [i_2] [i_5] [i_7])))))))));
                            var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)32563))))), (max((min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_0] [i_5] [i_7])), (var_10))), (((/* implicit */unsigned long long int) var_7))))));
                        }
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [(short)9] [i_2] [i_5] [i_0]))) : (var_15))), (((/* implicit */long long int) arr_6 [i_2 - 1] [i_0] [i_2 - 1]))))), (((((/* implicit */_Bool) var_11)) ? (((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [6ULL] [i_0] [6ULL] [i_2] [i_0] [i_8]))))) : (((/* implicit */unsigned long long int) var_1))))));
                            var_26 -= ((/* implicit */unsigned long long int) var_6);
                        }
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_12)), (var_13))), (min((var_13), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]))))))) ? (min((((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (unsigned char)53)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned short)11] [i_5]))))))) : (max((((((/* implicit */_Bool) (unsigned char)6)) ? (var_1) : (((/* implicit */int) arr_17 [i_5] [i_0] [i_5] [i_2] [i_0] [i_0])))), (((/* implicit */int) arr_15 [i_0] [i_0] [i_2 - 1] [i_5]))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) min((((/* implicit */short) arr_31 [(unsigned short)10])), (arr_7 [(short)10] [(unsigned short)4] [i_2] [(short)12])))), (((unsigned short) var_10))))) ? (((/* implicit */unsigned long long int) min((min((var_15), (((/* implicit */long long int) arr_30 [i_0] [12] [(unsigned short)10])))), (((/* implicit */long long int) arr_6 [i_0] [(unsigned char)8] [i_9]))))) : (((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-87)))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_9] [(short)12] [i_0] [i_9])))))))));
                        arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_27 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (arr_25 [i_1] [i_0]))))) : (min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) var_11)))))) + (((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_5))))) ? (max((((/* implicit */unsigned int) arr_30 [i_0] [i_0] [i_9])), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_2 + 1] [i_2 - 1])))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) var_9);
                            var_30 &= max((((/* implicit */long long int) ((arr_35 [(unsigned short)4] [i_2 + 1] [i_10]) / (arr_35 [(signed char)0] [i_2 - 1] [i_9])))), (max((-1000266062822129337LL), (((/* implicit */long long int) 0U)))));
                            arr_36 [i_0] [i_0] [i_0] [i_9] [i_10] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_0] [i_9] [i_10]), (arr_21 [i_2] [i_2] [i_2] [i_2] [i_0])))), (max((var_3), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [i_2] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)11))) >= (-1000266062822129340LL))))));
                        }
                        for (int i_11 = 3; i_11 < 10; i_11 += 2) 
                        {
                            var_31 *= ((/* implicit */unsigned short) arr_38 [(signed char)6] [(unsigned char)8] [2ULL] [i_9] [(signed char)6]);
                            var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [(signed char)12] [i_9]))) <= ((~(arr_3 [6U] [i_1])))))) : (((/* implicit */int) arr_37 [i_0] [i_1] [2] [i_9] [i_11] [i_11]))));
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15825628448135015421ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (9150179321036636818LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) != (var_3))))) : ((~(arr_38 [i_0] [i_2] [i_0] [i_9] [i_11]))))))));
                        }
                        /* LoopSeq 2 */
                        for (short i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            var_33 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [12] [12] [12])) ? (arr_41 [(short)4] [i_1] [i_2] [(_Bool)1] [i_12]) : (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_21 [i_0] [i_0] [i_2] [i_0] [(short)6]), (((/* implicit */short) var_2)))))) : (max((arr_35 [(short)12] [i_1] [i_1]), (((/* implicit */unsigned int) arr_27 [(signed char)8]))))))) ? (((/* implicit */int) ((short) arr_4 [i_0] [(unsigned char)0]))) : (max((max((((/* implicit */int) var_0)), (var_9))), (((/* implicit */int) arr_4 [0] [0]))))));
                            arr_43 [i_0] [i_1] [0LL] [i_2] [i_9] [i_9] [(unsigned char)0] &= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (arr_3 [2ULL] [i_1])))) ? (((/* implicit */int) max((var_2), (var_0)))) : ((-(((/* implicit */int) var_2)))))));
                            arr_44 [i_12] [i_12] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)237)) > (((/* implicit */int) (short)7401))))) / (((((/* implicit */_Bool) -22)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (_Bool)1))))));
                            arr_45 [i_0] [i_0] [(short)5] [i_9] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_16 [i_12] [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) arr_17 [i_2 - 1] [i_0] [i_2 + 1] [i_2 - 1] [i_2 - 1] [(signed char)3])) : (((/* implicit */int) var_14))))) : (max((max((((/* implicit */unsigned long long int) var_7)), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_12) : (arr_22 [i_0] [i_0] [i_2]))))))));
                        }
                        for (short i_13 = 2; i_13 < 10; i_13 += 1) 
                        {
                            arr_48 [i_13] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-41))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) arr_30 [i_13] [i_0] [i_1])) : (((/* implicit */int) (signed char)-41))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0])) ? (var_15) : (((/* implicit */long long int) var_9))))) ? (arr_16 [i_0] [i_1] [i_0] [(signed char)2]) : (((/* implicit */unsigned long long int) (-(arr_28 [(unsigned short)2] [i_0] [i_0] [i_1]))))))));
                            arr_49 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((1015931875), (((/* implicit */int) (short)26359))))) ? (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) var_5))))) : (min((((/* implicit */long long int) arr_2 [i_0])), (var_15))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)193)), (2385215401728855990ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_2] [i_2] [i_2])) ? (arr_22 [i_13] [i_0] [i_0]) : (var_12)))) : (((((/* implicit */_Bool) 3166901942U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))) : ((-9223372036854775807LL - 1LL))))))));
                        }
                    }
                    for (signed char i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [(unsigned char)1] [i_0] [(signed char)11])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) : (((unsigned int) arr_47 [i_0] [i_1] [i_0] [i_14]))));
                        /* LoopSeq 2 */
                        for (long long int i_15 = 2; i_15 < 11; i_15 += 1) /* same iter space */
                        {
                            arr_56 [4LL] |= ((/* implicit */_Bool) ((signed char) max((var_11), (arr_55 [i_2 + 1] [i_15] [10] [i_15 + 2]))));
                            var_35 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_25 [i_0] [10U])) : (((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2] [(unsigned short)4]))))))), (((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_15 [i_0] [0] [i_0] [i_0])))))));
                            arr_57 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) arr_52 [i_0] [i_2] [i_15 + 2] [i_2]))), (((arr_52 [i_0] [(_Bool)1] [i_15 + 2] [i_15]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_52 [i_0] [(unsigned short)2] [i_15 + 2] [i_0]))))));
                            var_36 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_15])) ? (arr_22 [i_0] [i_0] [i_2 + 1]) : (arr_22 [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_8)) : (arr_22 [(short)4] [i_0] [i_15 - 1])))));
                        }
                        /* vectorizable */
                        for (long long int i_16 = 2; i_16 < 11; i_16 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_0] [i_14] [i_16 + 1])) ? (arr_42 [i_0] [i_14] [i_0]) : (arr_42 [i_0] [i_0] [(unsigned short)5])));
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_2] [i_2 + 1] [i_2] [i_0] [i_2 + 1] [i_2] [i_16 + 1])) ? (((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [i_2 + 1] [i_16 - 2])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (arr_16 [11] [11] [i_0] [i_14])))));
                        }
                    }
                }
            } 
        } 
    } 
}
