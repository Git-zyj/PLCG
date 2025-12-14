/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232948
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
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 2] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_6 [0ULL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (-1188202336754233768LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (((((/* implicit */_Bool) (+(-583107661)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7406)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [2ULL] [5U]))) | (((((_Bool) arr_16 [i_0] [i_0] [5] [5] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) != (var_0))))) : (arr_6 [i_3]))))))));
                                arr_18 [i_2] [i_3] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) || (((/* implicit */_Bool) ((var_18) + (((/* implicit */unsigned long long int) var_6))))))));
                                var_21 = ((/* implicit */unsigned short) var_17);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (-(((var_18) / (((((/* implicit */_Bool) var_4)) ? (arr_2 [(short)1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))))))))));
                }
                for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min(((-(arr_10 [i_5] [i_1] [i_5]))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_5] [i_0])) : (((/* implicit */int) arr_19 [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((unsigned int) ((arr_1 [i_0 - 2] [i_1 - 1]) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 2])))));
                                arr_28 [i_0] [i_5] [i_5] [i_0] [i_7] [i_6] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-31223))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_14)) ? (arr_26 [i_5] [i_5] [i_0 + 1] [i_6 - 1] [(short)12] [i_7] [i_5]) : (((/* implicit */unsigned int) var_5)))))))));
                                arr_29 [i_7] [i_7] [(_Bool)1] [i_5] [i_1] [i_0 - 1] [i_7] = ((/* implicit */short) ((arr_20 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (((/* implicit */long long int) arr_24 [i_6 + 4] [i_6 + 1] [i_1 - 1] [i_0 - 2] [i_0 + 1] [i_0 - 2]))))))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((long long int) ((((/* implicit */_Bool) var_19)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))))) & ((~(arr_17 [i_7] [i_7] [i_7] [i_6 + 4] [i_0 - 2] [i_1 + 1] [i_0 - 2]))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) 9559111889462373892ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_1 + 1]))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_2 [i_0] [i_0])))))))));
                    var_26 = ((((/* implicit */_Bool) ((arr_23 [i_5] [i_5] [i_1] [i_1] [i_0 - 1] [i_0]) ? (var_0) : (((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (var_14)))) ? (((/* implicit */int) (short)-18084)) : (((/* implicit */int) var_19))))) : (((arr_2 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (arr_5 [i_5] [i_1 - 2]) : (((/* implicit */int) var_7))))))));
                    arr_30 [i_1] [(signed char)2] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0 - 1] [i_1 - 2])) ? (arr_22 [i_0 - 2] [i_0 - 2] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) var_17);
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((~(((/* implicit */int) var_10)))) : (((((/* implicit */int) var_7)) ^ (var_12)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233)))))) ? (var_13) : (max((((/* implicit */long long int) var_12)), (1350986913141362533LL)))))));
}
