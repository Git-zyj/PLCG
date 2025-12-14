/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202629
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_2] [i_2] [4U])), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))) ? (min((((var_0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (short)-1)))) : (max((max((2030830655), (((/* implicit */int) (unsigned short)43402)))), (((/* implicit */int) ((unsigned char) (signed char)-23)))))));
                                var_12 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_4 [i_4 + 2] [i_4 + 3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_12 [i_3] [i_1] [i_4 + 2] [i_3]) : (arr_12 [i_0] [i_0] [6ULL] [i_3]))))))), (((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153))) : (18446744073709551615ULL)))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned long long int) 4294967295U)), (arr_0 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) min((arr_11 [i_0] [7ULL] [i_2] [i_3] [i_4]), (((/* implicit */unsigned short) var_8)))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */short) arr_7 [i_1] [i_1] [i_1])), ((short)16473)))), (((int) arr_7 [i_0] [i_0] [i_0]))));
                    var_15 &= ((/* implicit */unsigned char) max((((unsigned int) (_Bool)0)), (min((0U), (arr_4 [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) var_8))), (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (var_3))), (((var_0) ? (var_3) : (((/* implicit */int) var_8))))))));
    var_17 = max((var_3), (((/* implicit */int) var_2)));
}
