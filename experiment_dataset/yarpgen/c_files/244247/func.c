/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244247
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
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (((~(var_13))) + (((unsigned long long int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_8)) + (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_1])), (var_16))))))));
                var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_18)), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [12] [i_1]))) : (var_1))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [0U])))))))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) 57344U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (18446744073709551615ULL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) 
                            {
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) arr_14 [i_3] [i_4]))) + (((((/* implicit */_Bool) (signed char)-109)) ? (3827233956206023101LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-93)))))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_10 [i_6 - 1]), (((/* implicit */unsigned short) var_15))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (~(var_0)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))) * (8248162097587928322ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (arr_7 [i_4])))) ? (3827233956206023115LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [18] [5ULL] [5ULL] [18] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10975))) : (4294967295U)))))))));
                            }
                            for (unsigned short i_7 = 4; i_7 < 21; i_7 += 3) 
                            {
                                var_26 ^= ((/* implicit */int) var_11);
                                var_27 ^= ((/* implicit */unsigned int) (-((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19145))) : (0ULL)))))));
                                arr_25 [(short)6] [i_3] [i_3] [i_7] [(short)6] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-109))));
                                arr_26 [i_2] [i_2] [i_2] [(unsigned short)7] [8U] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [10] [10])) ? (var_7) : (((/* implicit */unsigned long long int) (-(arr_16 [i_2] [i_3] [i_3] [i_5]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) arr_22 [(unsigned short)20] [i_3] [i_3] [(unsigned short)20]))), (((((/* implicit */int) var_16)) * (((/* implicit */int) var_15))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [9] [9] [i_3] [i_7]))) : (var_10)))) ? (((/* implicit */unsigned long long int) 4294967267U)) : (((((/* implicit */unsigned long long int) var_9)) + (arr_19 [(unsigned short)0])))))));
                            }
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) min((max((1743740007643825927ULL), (((/* implicit */unsigned long long int) arr_22 [i_5] [i_5] [(unsigned short)2] [i_5])))), (((/* implicit */unsigned long long int) ((3827233956206023092LL) + (((/* implicit */long long int) min((-1), (((/* implicit */int) arr_8 [i_3] [14ULL])))))))))))));
                            arr_27 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [3ULL] [i_3])) + (((/* implicit */int) (signed char)-53))));
                        }
                    } 
                } 
                arr_28 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 1302013873)), (4294967295U)))), (((unsigned long long int) var_13))))) ? ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max((arr_18 [i_3] [i_3]), (((/* implicit */unsigned short) (short)-1))))))) : (((/* implicit */int) (short)-20993))));
                var_29 = arr_22 [i_2] [i_2] [i_3] [i_3];
            }
        } 
    } 
}
