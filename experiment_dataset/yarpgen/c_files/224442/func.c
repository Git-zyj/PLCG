/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224442
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_4 = 3; i_4 < 10; i_4 += 4) 
                            {
                                var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1] [i_2 - 1] [i_3]))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)3] [i_2])) ? (arr_2 [i_0 + 2] [i_1 + 1] [i_2 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(signed char)9] [i_1] [i_1]))))))));
                                var_11 = ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) 4294967295U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1 + 2] [i_2] [i_3] [(unsigned short)10] [i_4])))))))));
                                var_12 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned short)15872))) == (((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) ^ (((/* implicit */int) arr_1 [5LL])))))))) * ((((!(((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)4] [5] [i_3] [i_4 - 3])))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_2])) ? (((/* implicit */long long int) arr_6 [(unsigned short)9] [(unsigned short)9])) : (9223372036854775793LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [0]))))))))));
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned long long int) (+(((((-9223372036854775793LL) + (9223372036854775807LL))) >> (((33553920U) - (33553881U)))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                            {
                                arr_17 [i_0] [i_0] [i_0] [5] = ((/* implicit */signed char) arr_10 [i_5] [i_3] [i_2 + 1] [i_1] [i_0]);
                                var_13 = ((((/* implicit */_Bool) ((signed char) arr_7 [0] [i_3] [i_2] [i_2 - 2] [i_1] [i_0]))) ? ((-(((/* implicit */int) arr_15 [(unsigned short)6] [i_1] [i_2] [i_3] [i_3] [i_5] [i_5])))) : (((((/* implicit */_Bool) (unsigned short)3584)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_1 [i_0 + 3])))));
                                var_14 = ((/* implicit */unsigned short) ((18446744073709551608ULL) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) | (arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] [i_5])))));
                            }
                            var_15 = ((/* implicit */unsigned char) ((unsigned long long int) (~(((unsigned long long int) arr_16 [i_0 + 3] [i_1] [i_1] [i_2 - 3] [i_3])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned short)2] [i_1] [(unsigned short)2])) ? ((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1])))) : (((/* implicit */int) (signed char)116)))))));
                    arr_20 [i_0] [i_0] [(unsigned short)7] [i_0] = (~(((((((/* implicit */_Bool) arr_1 [(signed char)8])) ? (4261413375U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (2147483647) : (((/* implicit */int) var_7))))))));
                    var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)126)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_18 [i_1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) - (arr_2 [i_0] [i_0] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [10U] [i_0] [i_0] [i_6]))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [(signed char)6] [i_0 + 2] [i_0]))))) : (max((((/* implicit */unsigned int) arr_7 [i_6] [i_1 + 1] [i_6] [i_1 + 2] [i_1 + 1] [i_0])), (4261413375U)))))) : (max((arr_11 [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 3] [i_0] [i_0 - 1]), (arr_11 [i_0] [i_0 + 1] [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_0])))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_6]))) == (max((((((/* implicit */_Bool) arr_3 [(signed char)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (33553910U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)120)))))))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [10LL] [4] [4ULL] [3ULL] [i_6])) ? ((-(2147483647))) : (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0] [i_0] [i_1] [i_6] [i_6])))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        {
                            arr_26 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((long long int) 4261413367U))) : (max((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_8 [i_0 - 1] [i_0] [i_0 - 1] [i_0])))))) ? (((unsigned long long int) (~(-2147483641)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))));
                            var_20 = ((/* implicit */signed char) arr_10 [(signed char)3] [i_1] [(unsigned char)8] [(unsigned char)8] [(unsigned short)0]);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_1 + 1] [i_0 + 2] [i_0 - 1]))) ? (max((((/* implicit */unsigned long long int) (unsigned char)11)), (arr_18 [i_0 + 2]))) : ((-(arr_18 [i_0 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            {
                arr_31 [(signed char)1] [(unsigned char)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 33553920U)) ? (((((/* implicit */_Bool) 4294967295U)) ? (max((((/* implicit */long long int) (short)384)), (9223372036854775793LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (arr_30 [1ULL])));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-64)), (((((/* implicit */_Bool) (short)32)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_9] [i_9]))) : (4261413375U)))))) || (((/* implicit */_Bool) arr_30 [i_10]))));
                arr_32 [i_9] [i_10] = (unsigned short)15872;
            }
        } 
    } 
}
