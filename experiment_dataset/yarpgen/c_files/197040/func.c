/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197040
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [0U] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [(short)7] [i_0] = ((/* implicit */unsigned char) var_2);
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [12U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [6LL]))) : (arr_1 [(short)0]))), (((/* implicit */long long int) ((var_2) > (((/* implicit */unsigned long long int) var_12)))))))))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) var_7);
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_16 [i_1] [i_1] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */long long int) var_4);
                            arr_17 [i_1] [i_2] [i_3] [i_4] [i_1 - 3] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((arr_7 [i_1 - 3]), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_10 [i_1 - 2] [i_1 - 2] [i_5 - 1])), (arr_1 [i_1]))))))) ? (((((/* implicit */_Bool) ((arr_7 [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2])))))) ? (arr_14 [i_1] [i_1 + 1] [i_1] [i_4] [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_3] [i_4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5]))) : (arr_11 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))));
                        }
                        for (unsigned short i_6 = 3; i_6 < 7; i_6 += 1) 
                        {
                            arr_21 [i_1] [i_2] [i_3] [i_3] [i_2] = ((((((/* implicit */_Bool) max((arr_7 [i_4]), (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1 - 3] [i_1] [i_1 + 1] [i_1]))) - (var_6))) : (((/* implicit */unsigned int) ((arr_19 [0ULL] [i_2] [i_1] [i_4] [i_1]) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_3])) : (((/* implicit */int) var_7))))))) % (((/* implicit */unsigned int) var_4)));
                            arr_22 [i_1] [i_4] [i_3] [i_2] [i_1] [3ULL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_7 [i_2])))) ? (arr_11 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1 - 2]))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (var_12)))))))))));
                            var_16 = ((/* implicit */short) arr_5 [i_1] [i_1]);
                        }
                        for (unsigned short i_7 = 3; i_7 < 9; i_7 += 4) 
                        {
                            arr_25 [i_1 - 1] [i_1] [i_1] [i_1 - 2] [5ULL] [i_1 - 3] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_11 [i_1])))) ? (((/* implicit */int) ((arr_11 [i_1]) > (((/* implicit */unsigned int) var_4))))) : (((2147483628) / (2147483628)))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -2147483628)))))));
                            var_18 &= ((/* implicit */short) (+(((((/* implicit */int) arr_13 [i_7] [i_4] [i_3] [(unsigned char)1] [i_1])) * (((/* implicit */int) arr_19 [i_1 + 1] [i_1] [(unsigned short)8] [i_1] [i_1 - 1]))))));
                            arr_26 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (long long int i_8 = 1; i_8 < 9; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_2) / (((/* implicit */unsigned long long int) var_4)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (var_6) : (((/* implicit */unsigned int) -2147483628))))))))) != (((max((134217664ULL), (((/* implicit */unsigned long long int) -2147483628)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_1 - 2])) ? (((/* implicit */int) arr_0 [4LL])) : (((/* implicit */int) arr_24 [i_3] [i_2]))))))))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_3] [i_4] [i_8])) ? (arr_1 [i_1]) : (((/* implicit */long long int) arr_6 [i_1]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_1] [i_4] [i_1] [i_1] [i_1] [i_1]))))) : (((var_13) ? (var_3) : (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_28 [i_1] [i_2] [i_2] [i_4] [i_8]) : (arr_7 [i_2])))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3] [i_4] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_18 [i_1] [i_4] [i_1] [i_1] [i_2] [i_1]))))))))));
                            var_21 = ((/* implicit */unsigned long long int) arr_27 [i_1] [(unsigned char)5] [i_3] [i_4] [i_8]);
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 2; i_9 < 9; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_13 [i_1 - 2] [i_2] [i_3] [i_1 - 3] [(unsigned short)7]))));
                            var_23 *= ((/* implicit */signed char) arr_30 [(unsigned short)0] [i_2] [i_3] [i_3] [i_9]);
                        }
                        for (unsigned char i_10 = 2; i_10 < 7; i_10 += 2) 
                        {
                            var_24 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_33 [i_10] [i_10] [i_10] [i_10] [i_10 + 3] [i_10])) : (((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_2] [i_10 - 1]))))) ^ (arr_30 [i_10] [i_2] [i_10] [i_4] [i_10]))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1 - 1] [i_1 - 1] [i_10] [i_4] [i_10] [i_10 - 2])) ? (arr_14 [i_10] [i_2] [i_2] [i_4] [i_10]) : (arr_14 [i_10] [i_2] [(short)8] [i_4] [i_4])))) ? (max((((/* implicit */unsigned long long int) var_5)), (arr_7 [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_2] [i_2]))) + (arr_20 [i_10] [i_4] [i_10] [i_10] [i_2] [i_1 + 1]))))))));
                            arr_35 [i_1] [1U] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) var_4);
                            var_25 = ((/* implicit */_Bool) var_11);
                        }
                    }
                    for (unsigned short i_11 = 2; i_11 < 9; i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_1] [i_1 + 1] [(short)1] [i_1] [i_3] [i_11 - 1] = ((/* implicit */unsigned int) var_13);
                        /* LoopSeq 4 */
                        for (long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) arr_28 [i_1] [i_1] [i_1] [i_11] [i_11]);
                            var_27 = ((/* implicit */unsigned long long int) arr_31 [i_1] [i_1] [i_3] [i_11] [i_11] [i_1]);
                        }
                        for (unsigned short i_13 = 4; i_13 < 9; i_13 += 1) 
                        {
                            var_28 = ((((/* implicit */_Bool) (~(arr_30 [(unsigned short)6] [i_1 - 2] [i_1 - 3] [i_1] [i_1 - 3])))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_2] [6ULL] [(unsigned char)6] [i_13]))) > (var_5))) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [(unsigned char)2] [i_2] [i_3] [i_3] [i_13] [(unsigned char)2]))) : (arr_31 [i_1 - 1] [i_2] [i_11 + 1] [i_11 + 1] [i_13 - 4] [8U]))) : (((arr_20 [i_1] [i_2] [6U] [i_3] [i_11] [i_13]) + (((/* implicit */long long int) min((arr_11 [8ULL]), (((/* implicit */unsigned int) arr_27 [i_13] [i_2] [i_2] [i_2] [i_1]))))))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((((/* implicit */int) ((var_12) != (arr_6 [0ULL])))) == (((((/* implicit */_Bool) arr_30 [(unsigned short)2] [6ULL] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_10 [i_11] [i_11] [i_11 - 2])) : (((/* implicit */int) arr_0 [(unsigned char)4])))))) ? (((/* implicit */int) arr_13 [i_1] [i_2] [i_1] [5ULL] [i_13 - 4])) : (((/* implicit */int) var_7)))))));
                            var_30 = ((/* implicit */unsigned long long int) ((var_4) % ((~(((/* implicit */int) (unsigned short)248))))));
                            arr_46 [i_1] [i_1] [i_1] [i_1] [3U] = ((/* implicit */_Bool) var_7);
                        }
                        for (unsigned long long int i_14 = 4; i_14 < 7; i_14 += 1) 
                        {
                            arr_49 [i_1] [i_2] [i_1] [i_3] [i_2] [i_11] [5ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_11] [i_2] [i_1] [i_1] [i_14 - 4]))) - (var_3)));
                            var_31 = ((/* implicit */unsigned int) arr_38 [i_1 - 3] [i_1 - 3] [i_1] [i_1]);
                            var_32 -= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [(unsigned short)4])) ? (arr_45 [i_1] [i_2] [(unsigned short)2] [i_2] [(unsigned short)2]) : (arr_1 [(_Bool)0]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_1] [i_1] [4U] [i_1] [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_43 [i_14 - 3] [i_14] [(unsigned char)8] [i_3] [i_2] [i_2] [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_48 [(_Bool)1] [i_2] [i_2] [i_2] [0U]), (((/* implicit */unsigned short) var_13)))))) : (arr_44 [i_1] [(unsigned short)4] [i_3] [(_Bool)1] [i_14 - 2] [0U]));
                            arr_50 [i_1] [i_11 - 2] [i_1] = ((/* implicit */unsigned char) var_6);
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_33 -= ((/* implicit */unsigned char) arr_28 [i_15] [i_11] [(short)6] [i_2] [(short)6]);
                            var_34 = ((/* implicit */short) ((((var_5) + (((arr_5 [i_1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_23 [i_1] [i_11] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [i_1] [i_1 - 3] [i_3]))) : (((((/* implicit */_Bool) arr_18 [i_2] [i_11] [i_1] [i_1] [i_2] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_3]))) : (arr_44 [9ULL] [9ULL] [2U] [i_1] [9ULL] [9ULL])))))));
                        }
                        var_35 = ((/* implicit */long long int) max((((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_1] [i_3] [i_3] [i_1 - 2] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_48 [i_1] [i_11] [i_11] [i_1 - 2] [i_1])) : (((/* implicit */int) (unsigned short)0)))))));
                    }
                    for (unsigned short i_16 = 2; i_16 < 9; i_16 += 1) /* same iter space */
                    {
                        var_36 *= ((/* implicit */unsigned long long int) arr_11 [4U]);
                        var_37 = ((/* implicit */unsigned short) arr_10 [i_16] [i_16] [i_3]);
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_8 [i_1 - 3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_16 - 2])) : (((/* implicit */int) arr_42 [i_3] [i_2] [i_3] [i_16] [i_3]))))))))) : (max((arr_55 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_1] [i_2]), (((/* implicit */long long int) arr_54 [i_16 + 1] [i_16] [i_1] [i_16]))))));
                        arr_56 [i_16 - 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_12);
                    }
                    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        var_39 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_12))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) -2147483628))))))) / (((/* implicit */int) max(((unsigned char)238), (((/* implicit */unsigned char) arr_57 [4] [i_1 - 2] [i_3] [i_1 - 2])))))));
                        arr_59 [i_1 + 1] [i_1] [2U] [i_1 + 1] [i_1 + 1] &= ((/* implicit */long long int) (~((+(((((/* implicit */_Bool) arr_55 [i_1] [i_2] [i_3] [6ULL] [i_1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_17] [(_Bool)1] [(_Bool)1] [i_1 + 1])))))))));
                    }
                    var_40 *= ((/* implicit */unsigned char) arr_4 [i_1] [8]);
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1])) ? ((-(((/* implicit */int) arr_34 [i_1 - 2] [i_1])))) : (((/* implicit */int) ((arr_11 [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1 + 1] [i_1 + 1]))))))));
        arr_60 [i_1] = ((((/* implicit */_Bool) var_8)) ? (max((var_5), (((((/* implicit */_Bool) arr_57 [i_1] [i_1] [(unsigned short)0] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_44 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 2]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_1] [i_1] [i_1] [i_1 - 3] [i_1] [i_1] [i_1 - 3]))) > (var_6)))) % (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_1 - 3] [i_1])) : (((/* implicit */int) arr_57 [i_1] [i_1] [i_1 - 2] [i_1 + 1]))))))));
    }
    var_42 = ((/* implicit */unsigned int) var_11);
    var_43 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)252)), ((unsigned short)15)))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)127))));
    var_44 = var_2;
}
