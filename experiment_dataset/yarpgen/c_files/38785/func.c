/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38785
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
    var_14 &= ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((/* implicit */signed char) arr_0 [2LL])), (min(((signed char)-115), ((signed char)120))))))));
                var_16 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1 + 4] [i_1 + 4] [i_1 + 3]))))), (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_0] [16])) ? (arr_5 [i_1 + 3] [i_1] [i_1 + 3]) : (arr_5 [i_1 + 4] [i_1] [18U])))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((short) min((((/* implicit */int) (_Bool)1)), (min((-503734758), (((/* implicit */int) (unsigned char)167)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (signed char i_3 = 3; i_3 < 19; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) < (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_10 [i_2])) : (arr_11 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((300104732) <= (((/* implicit */int) (_Bool)1))))) <= (((((/* implicit */int) arr_12 [i_2] [i_3] [i_3] [i_2])) ^ (((/* implicit */int) var_4)))))))) : (((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned long long int) arr_16 [i_4] [i_3] [i_4] [(signed char)2] [i_6])), (arr_14 [i_5] [i_3] [(unsigned char)20] [i_2] [i_6] [i_3]))) : (((/* implicit */unsigned long long int) arr_8 [i_3]))))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((arr_13 [i_4] [i_3 - 1]) ? (((/* implicit */int) arr_13 [i_2] [i_3 + 1])) : (503734758))) < (((/* implicit */int) min((((/* implicit */short) arr_13 [i_4] [i_3 - 2])), ((short)-19037)))))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_4] [(signed char)8] &= ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (arr_14 [i_3 - 2] [9U] [i_4] [i_2] [(signed char)2] [(unsigned char)11]))), (((/* implicit */unsigned long long int) ((arr_14 [i_3 - 1] [i_3 - 1] [i_4] [(short)3] [i_2] [i_4]) != (((/* implicit */unsigned long long int) arr_9 [i_4])))))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 + 2] [i_3 + 2] [i_3 - 3] [i_4] [i_4] [12ULL])) ? (max((((/* implicit */long long int) (~(((/* implicit */int) (short)11943))))), (max((((/* implicit */long long int) var_2)), (-77323468756720373LL))))) : (((/* implicit */long long int) ((((var_12) ? (2147483647) : (((/* implicit */int) var_1)))) - (((/* implicit */int) (_Bool)1))))))))));
                    arr_18 [i_2] [i_2] [i_3] [15LL] = ((/* implicit */signed char) min((min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */int) var_5)) / (((/* implicit */int) var_0)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))) >= (arr_6 [i_4]))))));
                }
            } 
        } 
    } 
}
