/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195198
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
    var_19 = var_8;
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)52534))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 3539675438U)) : (8ULL)))) ? (((/* implicit */int) (unsigned short)5476)) : (((/* implicit */int) ((signed char) (_Bool)1)))))), (max(((~(var_3))), (3797366312U)))));
                arr_4 [i_0] [i_0] = 10U;
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_16))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)6))))) : (arr_5 [i_0] [i_0])));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_2 [i_2]))));
                    arr_7 [i_2] [15LL] [12LL] [i_0] |= ((/* implicit */long long int) var_14);
                    var_25 = ((/* implicit */unsigned long long int) var_13);
                    arr_8 [(short)17] [(short)17] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_0]))));
                }
                for (signed char i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                {
                    arr_11 [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3] [i_1] [i_0] [i_0])) >> (((var_12) - (2126420845)))))) ? (((/* implicit */int) max((arr_9 [(unsigned char)0] [i_3] [i_1] [i_0]), (arr_9 [i_0] [(signed char)4] [i_0] [i_0])))) : (((arr_9 [i_1] [i_1] [i_1] [13LL]) ? (((/* implicit */int) arr_9 [5U] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_3] [16ULL] [9U]))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) var_18)), (arr_10 [(short)15] [(short)15] [(short)15])))))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1])))))) : (((unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_3])), (var_5)))))));
                        arr_14 [i_0] [(_Bool)1] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_13), (arr_13 [i_3])))) ? ((~(arr_13 [i_1]))) : (min((arr_13 [i_1]), (arr_13 [i_3])))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)32767))) & (min((((/* implicit */long long int) arr_2 [5U])), (arr_0 [(unsigned short)3]))))) == (((/* implicit */long long int) var_15)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5 + 4] [i_5 - 1] [i_3])))))) > (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [(unsigned short)15] [(_Bool)1] [i_0]))) * (4294967295U))), (((/* implicit */unsigned int) arr_1 [i_1])))))))));
                            var_29 *= ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), ((~(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) arr_2 [(unsigned short)7])), ((short)0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [8ULL])) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_2)))))));
                            var_30 = ((/* implicit */unsigned int) arr_15 [(signed char)10] [i_4] [i_3] [i_3] [i_0] [i_0]);
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                    {
                        arr_20 [i_0] [i_3] [i_0] = ((max((arr_18 [i_6] [i_3] [i_1] [i_0]), (((/* implicit */long long int) var_17)))) / (((((/* implicit */_Bool) arr_18 [i_3] [i_1] [i_3] [i_6])) ? (arr_18 [i_0] [i_0] [(signed char)0] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))));
                        arr_21 [(unsigned short)10] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-1)), (arr_10 [i_3] [i_1] [i_0])))) ? (((/* implicit */unsigned int) (-(var_13)))) : (4294967295U)));
                    }
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((arr_9 [i_0] [i_1] [(unsigned char)15] [i_7]), ((_Bool)0))) ? (((int) var_13)) : (min((((/* implicit */int) arr_6 [i_0])), ((-2147483647 - 1))))))) ? ((~(((((/* implicit */_Bool) arr_17 [(_Bool)1] [(unsigned short)17] [i_1] [i_0] [i_0])) ? (15444020070992364229ULL) : (((/* implicit */unsigned long long int) 755291859U)))))) : (min((20ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) 1U)) : (var_8)))) ? (((/* implicit */unsigned long long int) arr_10 [12ULL] [12ULL] [i_3])) : (((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned long long int) arr_1 [6LL])), (arr_12 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((var_11) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)0])))))))))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_8 = 2; i_8 < 15; i_8 += 3) 
                    {
                        var_33 += ((max((((((/* implicit */_Bool) (signed char)-124)) ? (arr_19 [i_0] [(short)2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))))), (1056964608U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8] [i_8] [i_8 - 2] [i_1]))));
                        var_34 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) arr_17 [i_3] [i_1] [15U] [8] [9LL]))), (var_0)));
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) arr_25 [i_3] [i_3] [i_3]))));
                    }
                    var_36 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_5 [i_3] [i_0])))));
                    var_37 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                }
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_9] [(unsigned short)9] [i_0] [i_0]))) | (arr_24 [i_9] [i_9] [i_0] [i_0] [(unsigned short)8] [i_9])));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        var_39 = ((/* implicit */short) ((arr_3 [i_0] [17ULL] [11LL]) & (arr_3 [i_0] [i_0] [i_0])));
                        arr_30 [i_0] [i_0] [(unsigned short)2] [i_9] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [12ULL] [i_9] [10LL] [i_1] [i_1] [i_0]))) | (((((/* implicit */_Bool) var_17)) ? (var_10) : (arr_10 [(signed char)5] [i_1] [(unsigned short)1])))));
                        var_40 *= ((/* implicit */unsigned char) arr_26 [i_10] [i_1] [i_0]);
                    }
                }
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned short) var_11);
}
