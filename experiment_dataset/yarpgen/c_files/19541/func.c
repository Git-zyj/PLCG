/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19541
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
    var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned long long int) 141315095U))))) ? (min((var_3), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) < ((-(-762063514)))))) : (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) + (((/* implicit */int) arr_2 [i_2] [i_1])))), ((-(((/* implicit */int) var_2)))))))));
                    var_16 += (short)6102;
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_13 [7] [7] [i_1] [i_0] [(unsigned short)2] [i_4 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-6080)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64)))));
                                var_17 = ((/* implicit */long long int) arr_8 [i_0] [(unsigned char)9] [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) (signed char)93);
                            }
                        } 
                    } 
                    var_18 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_5 [(unsigned char)9] [i_1] [i_0]))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_13)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_6 [i_0])))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */int) var_6)), (((-153168936) / (((/* implicit */int) var_7))))))) - (var_9)));
}
