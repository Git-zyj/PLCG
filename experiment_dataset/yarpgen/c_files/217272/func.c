/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217272
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 2579260374U))) & (((/* implicit */int) (unsigned char)69))))) : ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))) / (var_16)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) var_14);
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 4) /* same iter space */
                        {
                            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_7 [i_1 - 1]), (arr_7 [i_1 + 1])))) == (((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (((/* implicit */int) arr_7 [i_1 - 1])) : (((/* implicit */int) (unsigned char)195))))));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4 - 2] = ((/* implicit */unsigned int) min((arr_2 [i_3] [i_0] [i_0]), (((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) arr_7 [i_2]))))))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_0] [i_2] [i_1] [(unsigned char)10] [i_2] [i_0] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)48)) % (((/* implicit */int) (unsigned short)2047)))) <= (((((/* implicit */int) arr_6 [i_0 - 1] [i_1 - 1] [i_2 + 1])) * (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) (unsigned char)205)))))))));
                            arr_20 [i_0] [(unsigned short)9] [i_2 - 1] [i_0] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_12 [i_0] [i_1] [11U] [i_3] [i_5])) * ((+(831747496U)))))), (min((((/* implicit */unsigned long long int) var_15)), (min((3ULL), (((/* implicit */unsigned long long int) var_15))))))));
                            arr_21 [i_0 + 2] [i_0 + 2] [i_1] [i_2] [i_3] [i_3] [13] = ((/* implicit */unsigned long long int) arr_4 [i_0 + 1]);
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 2) /* same iter space */
                        {
                            arr_24 [i_6] [i_1 + 1] [i_2] [i_1 + 1] [i_0] [(unsigned short)11] = ((/* implicit */unsigned char) (!(((((arr_11 [13U] [i_1 - 1] [6ULL] [i_1 - 1] [(unsigned short)9]) >= (((/* implicit */long long int) ((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((unsigned char) (short)3306)))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6 - 2] [i_2] [(unsigned short)2]))) - (12ULL)))))) : (((((/* implicit */_Bool) arr_4 [i_3])) ? (((((/* implicit */unsigned long long int) 5U)) / (arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(short)0])) ? (((/* implicit */int) arr_22 [i_3] [i_2 - 1] [i_2])) : (((/* implicit */int) var_10))))))))))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((arr_11 [15U] [(unsigned char)16] [i_2] [i_1] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))))))) ? (((((/* implicit */int) arr_10 [15LL] [(unsigned char)15] [15LL] [2U])) >> ((((-(4U))) - (4294967274U))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)3322)) && (((/* implicit */_Bool) (unsigned char)8)))) && (((/* implicit */_Bool) ((unsigned int) arr_2 [i_0 + 2] [i_1] [i_0 + 1]))))))));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 2) /* same iter space */
                        {
                            var_23 = ((short) min((arr_12 [i_1] [i_1] [i_3 + 1] [i_7 + 3] [(unsigned char)15]), (((/* implicit */int) (unsigned char)46))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) 26U))));
                            arr_27 [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) ((unsigned short) (unsigned char)252))), (-5746638702828381584LL)))));
                        }
                        arr_28 [i_3] [i_2 + 1] [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) arr_3 [i_1] [i_0]))))))) - (min((2222306282U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_2] [(unsigned short)4])) : (((/* implicit */int) arr_3 [i_3] [i_3])))))))));
                        var_25 = ((/* implicit */unsigned long long int) (-(7U)));
                        arr_29 [i_0] [i_1] [(short)0] [i_3] [i_3] [i_3] = ((long long int) ((int) min(((unsigned char)169), ((unsigned char)127))));
                    }
                    arr_30 [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)23040)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) - (arr_11 [i_2] [(unsigned char)6] [i_1] [i_1 + 2] [i_1]))) + (((/* implicit */long long int) arr_12 [i_0] [i_0] [(short)3] [i_2] [i_2]))))) : ((+(((5ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))))));
                }
            } 
        } 
    }
    for (short i_8 = 1; i_8 < 8; i_8 += 2) 
    {
        arr_35 [i_8] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 6U)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) 8U))))));
        var_26 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_8] [i_8] [13ULL]))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8] [i_8] [i_8 - 1] [i_8] [i_8]))) == (var_11))) ? (((((/* implicit */_Bool) var_7)) ? (1939286284U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) : (min((((unsigned int) var_6)), (((/* implicit */unsigned int) arr_34 [i_8] [i_8 - 1]))))));
        arr_36 [i_8 - 1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 3250222064U))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (arr_4 [i_8])))) ? (max((5U), (((/* implicit */unsigned int) arr_33 [(unsigned char)8] [i_8])))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_22 [i_8] [2LL] [2LL])))))))) : (min((((/* implicit */long long int) (unsigned char)255)), (753722575455296261LL)))));
    }
}
