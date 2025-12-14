/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29218
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (0LL) : (-64LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_2), (var_2))))) : (((((/* implicit */_Bool) 63LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31400))) : (0LL)))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 4) /* same iter space */
                    {
                        var_14 = max((max((arr_4 [i_3] [i_3] [2ULL] [i_3 + 1]), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) (_Bool)1))))))), (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) : (var_6))))));
                        arr_9 [i_0] [i_0] [i_0] [i_2] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((arr_7 [i_0] [i_1 + 1] [i_0]), (arr_7 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) var_8)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_1 + 2] [i_2] [i_3] [i_3] [i_4] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_4 [i_3 + 1] [15LL] [i_3 + 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (64LL) : (var_12))))));
                            var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) arr_5 [i_0] [i_3 - 1] [i_3 - 2])) : (((((/* implicit */_Bool) var_6)) ? (0LL) : ((-9223372036854775807LL - 1LL))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 21; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)128))));
                            var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_1)) : (arr_5 [i_3] [i_3] [i_2])))) : ((((_Bool)0) ? (0LL) : (((/* implicit */long long int) arr_1 [i_3] [i_1 + 1]))))));
                            var_20 += ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) (short)-4096)) : ((((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-127)))));
                        }
                        arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_3))))) ? (max((((/* implicit */int) arr_11 [(unsigned short)12] [23LL] [23LL] [(unsigned short)12] [(unsigned short)12] [i_2] [(unsigned short)12])), (-1))) : (((/* implicit */int) max((var_10), ((unsigned short)0))))));
                        arr_17 [i_0] [(_Bool)1] [i_0] [i_0] [(unsigned short)8] [i_0] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7)))), (arr_4 [(signed char)23] [15LL] [i_1] [i_1 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)39))) : ((((_Bool)1) ? (arr_13 [i_0] [i_0]) : (((/* implicit */long long int) arr_8 [i_0] [i_2] [i_0])))))))));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 4) /* same iter space */
                    {
                        var_21 *= ((/* implicit */signed char) min((min((var_12), (arr_13 [i_6 - 2] [i_0]))), (max((2549632147184338988LL), (arr_13 [i_1 + 1] [i_6])))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0)))))));
                        var_23 *= ((/* implicit */signed char) max((((/* implicit */long long int) min(((unsigned short)39955), (arr_2 [i_0] [i_1] [i_2])))), (min((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL))))));
                        arr_21 [i_1] [i_0] [i_6] = max((max((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [8LL] [i_2] [i_6 - 1])), (var_12)))))), (((/* implicit */unsigned long long int) min((6598336961619094244LL), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))))));
                        var_24 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1] [i_2] [i_6] [(_Bool)0] [i_0] [i_6 - 2])) ? (140737488355072ULL) : (((/* implicit */unsigned long long int) arr_13 [i_1 + 1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_0]), (((/* implicit */long long int) (signed char)63))))) ? (((/* implicit */int) max(((signed char)-63), (var_11)))) : (min((arr_8 [i_0] [i_1 - 1] [i_2]), (arr_15 [i_0] [20LL] [i_2] [i_6] [i_6] [13] [i_6 - 2]))))))));
                    }
                    arr_22 [i_0] [16ULL] [2ULL] |= ((((/* implicit */_Bool) max((2305843008945258496ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))) ? ((((_Bool)1) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))) : (3659312433U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */long long int) (signed char)-63)), (arr_13 [i_0] [(unsigned short)10]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 3; i_8 < 22; i_8 += 1) 
                        {
                            {
                                arr_29 [i_1] [4] [i_2] [i_8] [i_8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-63), (((/* implicit */signed char) arr_19 [i_0] [(unsigned char)0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_6 [(_Bool)1] [(_Bool)1] [i_1 + 1] [(_Bool)1])) ? (((/* implicit */unsigned int) arr_1 [(unsigned short)10] [12])) : (0U)))))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)62)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8 - 3] [i_8 - 3] [0U] [0U] [14U])) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) min((((/* implicit */int) (signed char)-121)), (arr_1 [2] [i_1])))) : (8795958804480LL)))));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) 8505393473921083997LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (140737488355072ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_8 - 2] [i_0] [i_7] [i_8 - 2])) ? (max((-1), (((/* implicit */int) (signed char)(-127 - 1))))) : (max((arr_15 [(unsigned char)12] [(unsigned char)12] [i_2] [i_7] [(_Bool)1] [7] [(unsigned short)5]), (((/* implicit */int) (unsigned char)39)))))))));
                                var_25 |= ((/* implicit */signed char) max(((unsigned short)16384), (((/* implicit */unsigned short) (signed char)-39))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
