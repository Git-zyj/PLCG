/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245268
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
    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((((var_8) <= (((/* implicit */long long int) var_1)))) ? (((((/* implicit */int) var_2)) >> (((var_3) - (2139224570U))))) : (((/* implicit */int) (short)-29924))))) : (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (-1)))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (var_2)))))))));
    var_14 = (-(var_7));
    var_15 = max(((-(var_1))), (((/* implicit */int) (!(max((var_5), (var_9)))))));
    var_16 *= ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 750594233))))))));
                                var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_1 [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_7 [(short)22] [(short)22] [(short)22]))))) ? (((arr_8 [i_1] [i_1] [i_1]) % (var_1))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? ((~(((/* implicit */int) arr_4 [i_2] [i_2 + 2] [i_4 - 3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [(unsigned char)10] [i_0] [(unsigned char)10] [i_0] [i_0] [i_0])))))));
                                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_14 [i_4] [i_4] [i_4] [i_4] [i_4 - 2]) - (arr_14 [i_4] [i_4] [i_4] [i_4] [i_4 + 1])))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-29956), ((short)-29924)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+((((+(var_3))) / (((/* implicit */unsigned int) ((((var_1) + (2147483647))) << (((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) - (1))))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
            }
        } 
    } 
}
