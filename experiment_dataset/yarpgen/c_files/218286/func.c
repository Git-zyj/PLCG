/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218286
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
    var_10 = ((/* implicit */unsigned short) var_9);
    var_11 |= ((/* implicit */short) ((((/* implicit */_Bool) ((int) max((2702078324U), (((/* implicit */unsigned int) var_1)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */unsigned int) var_5)) <= (((((/* implicit */_Bool) 1592888989U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74))) : (2702078314U))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [(signed char)7] [6] [(unsigned short)2] [i_0]))))), (((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_8 [i_3] [i_1 - 2] [i_0]))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_2] [i_3])) ? (max((0), (1895622692))) : (((/* implicit */int) var_4))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 2) /* same iter space */
                        {
                            var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)46)) ? ((~(((/* implicit */int) (unsigned char)190)))) : (((((/* implicit */_Bool) arr_8 [(short)0] [i_1 - 2] [i_0])) ? (((/* implicit */int) (short)-30905)) : (((/* implicit */int) arr_5 [8ULL] [i_4 - 1]))))));
                            arr_12 [i_0] [i_3] [i_2] [i_1 - 2] [i_0] = ((/* implicit */signed char) (+(arr_7 [i_0] [i_4 - 1] [(short)10] [i_3] [i_4] [i_1 - 2])));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 15; i_5 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_5)))));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30935))) : (7ULL)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)33184))) : (((((/* implicit */int) (unsigned char)248)) >> (((/* implicit */int) arr_13 [i_5] [i_0] [i_2] [(signed char)9] [i_0]))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)52432)) : (((/* implicit */int) arr_2 [i_0]))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_17 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)100)) : (-1895622683))), ((+(max((var_5), (1929911609)))))));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((_Bool) arr_10 [i_0] [i_0] [i_2] [i_3] [i_6])))));
                        }
                    }
                    for (unsigned short i_7 = 4; i_7 < 15; i_7 += 4) 
                    {
                        var_18 = ((/* implicit */_Bool) ((unsigned int) (signed char)-46));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 1) 
                        {
                            var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_0])) ? (((var_9) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)42))))))) ? (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (signed char)-32)))) : (min((((/* implicit */int) ((unsigned short) var_9))), (var_8)))));
                            arr_24 [i_2] [i_0] = ((/* implicit */unsigned char) max((((-1895622715) | (((/* implicit */int) (signed char)-75)))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_7])) ? (((((/* implicit */_Bool) (short)17541)) ? (((/* implicit */int) var_6)) : (arr_3 [i_1] [i_1]))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)66))))))));
                            var_20 = ((/* implicit */unsigned short) var_4);
                            var_21 ^= ((/* implicit */unsigned short) var_0);
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((2702078333U), (((/* implicit */unsigned int) ((arr_15 [i_1 + 2] [i_2] [i_2] [i_7 - 1] [i_2] [(unsigned char)13]) >= ((+(2891772680U)))))))))));
                        }
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)48)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (1317913403U)))) ? (9264068699156064126ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64165))) ^ (1592888989U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)57)))))))));
                        var_24 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-26779)))) ? (((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_1 - 2] [(unsigned char)15] [i_1 + 3] [i_0])) > (((/* implicit */int) arr_23 [i_1] [i_1 - 2] [i_7 - 3] [i_1 - 2] [i_0]))))) : (((/* implicit */int) max((arr_23 [i_1] [i_1 - 2] [i_2] [i_1] [i_0]), ((signed char)8))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1895622699)) == (((((/* implicit */_Bool) (unsigned char)180)) ? (-1LL) : (((/* implicit */long long int) 4294967295U))))));
                        arr_29 [i_0] [i_0] [i_2] [(unsigned char)8] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (2ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_0] [i_9] [i_2] [(signed char)11] [i_1] [11]))))) : (((18446744073709551596ULL) ^ (arr_19 [(short)12] [i_1 + 3] [i_2])))))));
                        var_26 = ((/* implicit */int) 2195623247U);
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((max((((/* implicit */unsigned long long int) (signed char)32)), (5215818515884968873ULL))) == (((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))) : (((arr_7 [i_0] [i_9] [(unsigned char)4] [i_0] [i_0] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-27), (((/* implicit */signed char) (_Bool)1)))))))))))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 15; i_10 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_10 - 1] [i_2] [i_10 + 1] [i_11] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1] [i_10 - 1] [i_1] [i_10 + 1] [i_1] [i_1 - 1]))) : (18446744073709551615ULL))))));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) (short)-2817))))));
                        }
                        arr_35 [i_0] [i_2] [i_2] [i_2] [i_1 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((unsigned int) arr_1 [i_0])), (((/* implicit */unsigned int) (short)-2832))))) > (arr_18 [i_0] [i_1] [i_2] [i_0])));
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) 137405399040ULL)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (unsigned short)63052)))))));
}
