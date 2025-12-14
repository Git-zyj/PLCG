/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36539
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
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_9))))) : (((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1 + 3]))))), (max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned char) arr_3 [i_2])))))))));
                    arr_9 [i_1] [(unsigned short)7] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) 4473042254476225796ULL)) ? (((/* implicit */int) arr_6 [(unsigned short)10] [8ULL] [i_2])) : (((/* implicit */int) arr_0 [i_0] [(short)15])))), (((/* implicit */int) arr_6 [i_2] [3] [i_0])))), (((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (short)-23097)) + (23123)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (signed char i_4 = 3; i_4 < 17; i_4 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_13 [i_4 - 2] [i_4 + 1]), (((/* implicit */unsigned long long int) (short)23091))))) ? (min((((/* implicit */unsigned long long int) max(((short)-10753), (arr_10 [i_3] [i_3])))), (max((((/* implicit */unsigned long long int) var_2)), (arr_13 [i_3] [i_3]))))) : (var_5)));
                arr_14 [i_3] [(signed char)12] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)64))))), (var_2)))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-23091))))) ? (((((/* implicit */_Bool) (short)-25491)) ? (arr_11 [i_3] [(short)8]) : (((/* implicit */unsigned long long int) var_13)))) : (min((((/* implicit */unsigned long long int) var_0)), (var_5)))))));
                arr_15 [i_3] [i_4] = (+(max((467431357554808375ULL), (17979312716154743240ULL))));
                var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (short)11344)), (var_5)));
            }
        } 
    } 
    var_18 = min((max((((/* implicit */unsigned int) max((var_8), (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_10)) ? (2569150314U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32765))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((17979312716154743240ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (var_10) : ((-(((/* implicit */int) var_9))))))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_13))));
}
