/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193850
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))) >= (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (unsigned short)54342)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = max((((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]) : (arr_7 [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))), (min((((/* implicit */unsigned long long int) var_18)), (arr_7 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1]))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32210))) : (2ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) max((((unsigned short) (unsigned char)15)), (((/* implicit */unsigned short) ((unsigned char) (unsigned char)246)))))) : (((/* implicit */int) ((signed char) -7525234033209536503LL)))));
                                var_21 ^= ((/* implicit */short) (+(max((max((4112168312123368260ULL), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))))));
                                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_5] [i_6 - 1] [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) ((17688497647978536220ULL) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [(unsigned char)8])), (arr_1 [i_5])))))))));
                                var_23 += ((/* implicit */_Bool) ((((long long int) (+(((/* implicit */int) (unsigned char)42))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)245)))) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_11))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */int) (!(((/* implicit */_Bool) min(((-(18446744073709551609ULL))), (((/* implicit */unsigned long long int) ((short) var_8))))))));
    var_25 = (unsigned char)40;
}
