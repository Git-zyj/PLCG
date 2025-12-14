/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44490
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
    var_20 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) ^ (var_1))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_13), (var_13)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (+(max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)37)), (var_2)))), (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])), (arr_0 [i_0] [(unsigned char)9]))))));
                var_21 += ((/* implicit */unsigned short) (~(((long long int) ((short) var_12)))));
                arr_6 [i_1] [i_1] [i_1] = (!(((/* implicit */_Bool) ((int) ((9223372036854775808ULL) >> (((arr_0 [i_0] [i_0]) - (17930323892231875406ULL))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_2] [(short)0] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((signed char) (!(((/* implicit */_Bool) 9223372036854775831ULL))))));
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((((unsigned char) 9223372036854775794ULL)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_4] [i_1 + 2] [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_0]))))))))));
                                var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 2]))))) != (((/* implicit */long long int) ((/* implicit */int) (signed char)96)))));
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (9223372036854775795ULL) : (var_9)))) ? ((+(arr_9 [3ULL] [i_1] [i_2] [i_4 - 1]))) : (max((9223372036854775808ULL), (((/* implicit */unsigned long long int) var_0)))))))))));
                                var_25 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 9223372036854775774ULL)) ? (((/* implicit */unsigned long long int) arr_4 [i_3 - 1] [i_3 - 1])) : (var_9))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_11 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [(signed char)7])), (arr_14 [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [3U]))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) (+(((var_12) - (((/* implicit */long long int) ((/* implicit */int) (signed char)69)))))));
                    arr_16 [1LL] [i_1] [(signed char)6] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_11 [i_2] [i_1 - 1] [i_1 + 2] [6ULL] [i_1 + 2] [i_1 - 1])) ? (((/* implicit */long long int) arr_4 [i_1 + 2] [i_1 - 1])) : (2502665217421178093LL))), (((/* implicit */long long int) max((((/* implicit */int) arr_10 [i_1] [7ULL] [i_1 + 2] [i_1 - 1])), (arr_11 [i_1 - 1] [i_1 - 1] [(_Bool)1] [(_Bool)1] [i_1 + 2] [i_1 - 1]))))));
                }
                var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) max(((signed char)-86), (((/* implicit */signed char) var_6))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((var_15), (((/* implicit */long long int) (signed char)86))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((int) var_6))) : (min((((/* implicit */long long int) var_6)), (var_15)))))));
}
