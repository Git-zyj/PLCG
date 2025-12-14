/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52750
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
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_0 [i_1]) | (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1]))) : (arr_1 [i_0 - 1])))))), (min((max((((/* implicit */unsigned long long int) arr_1 [i_1 + 4])), (var_9))), (((/* implicit */unsigned long long int) min((arr_2 [18LL] [i_1 + 2]), (((/* implicit */unsigned short) (unsigned char)226)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((5631213591931081475ULL), (((/* implicit */unsigned long long int) arr_7 [(unsigned char)12]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (arr_10 [i_1] [i_2] [i_3]))))) : ((+(9856512215221835857ULL)))))) ? (((unsigned int) max((arr_3 [i_0]), (((/* implicit */signed char) arr_4 [i_2] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
                            arr_12 [i_0] = arr_8 [i_0 + 1];
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                            {
                                var_13 -= ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_3] [i_1 + 3]))))));
                                var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [(short)4] [3ULL] [i_0])) ? (((int) (unsigned short)51291)) : (((/* implicit */int) (unsigned short)51291))));
                            }
                            for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                            {
                                var_15 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 4])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [(unsigned short)2] [i_1] [i_1] [i_1 + 3])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [i_1 + 2] [i_1 + 2]))))) ? (((13235399001347481681ULL) + (((/* implicit */unsigned long long int) 11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)14249)) : (((/* implicit */int) (unsigned char)65))))));
                                var_16 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967274U)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_0])) : (var_4))))) >> ((((((~(arr_7 [i_5]))) << (((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) (_Bool)1))))))) - (690921843)))));
                            }
                            for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 4) 
                            {
                                arr_21 [i_0] [i_0] = ((/* implicit */_Bool) (((_Bool)0) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84)))));
                                arr_22 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6 + 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_0 - 1] [i_6 + 3] [i_0 - 1] [i_6 + 4] [i_3]))) : (4294967273U)))) ? ((-(((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_6 + 1] [i_1] [i_6] [i_3])))) : (((/* implicit */int) min((arr_19 [i_6 + 3] [i_0]), (arr_19 [i_6 - 1] [i_0]))))));
                                var_17 *= ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_2 [i_3] [i_0 - 1])))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0 - 1])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_7] [i_7] [i_7])) << ((((((~(arr_7 [i_7]))) << (((((/* implicit */int) var_8)) & (((/* implicit */int) arr_3 [(_Bool)1])))))) - (345460940)))));
        var_18 = ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2355291141U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 3; i_9 < 8; i_9 += 4) 
            {
                {
                    var_19 *= ((/* implicit */unsigned char) (((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-23)) || (((/* implicit */_Bool) arr_9 [i_8] [i_8] [1LL] [i_9 - 2]))))))) % (var_5)));
                    var_20 -= ((/* implicit */unsigned char) ((min((5211345072362069926ULL), (((/* implicit */unsigned long long int) arr_29 [i_7])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7])))));
                }
            } 
        } 
        var_21 = ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_7] [i_7])) > (((/* implicit */int) arr_17 [i_7] [2ULL] [i_7]))))) >> (((var_5) - (1221849105))));
    }
    /* LoopNest 2 */
    for (long long int i_10 = 1; i_10 < 9; i_10 += 4) 
    {
        for (unsigned int i_11 = 2; i_11 < 9; i_11 += 2) 
        {
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)6875)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190)))));
                var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [2ULL] [i_11 + 2] [i_10 + 2]) ? (((/* implicit */int) arr_10 [9U] [i_11] [i_10 + 1])) : (((/* implicit */int) arr_10 [i_10] [i_11 - 1] [i_10 + 1]))))) ? (((arr_10 [i_10 + 1] [3U] [i_10 + 1]) ? (((/* implicit */int) arr_10 [15LL] [i_10] [i_10 - 1])) : (((/* implicit */int) arr_10 [i_11 + 2] [i_11 + 2] [i_10 - 1])))) : (((/* implicit */int) var_8))));
                var_24 *= ((/* implicit */unsigned short) ((1125625028935680LL) << (((1249648016U) - (1249648011U)))));
            }
        } 
    } 
}
