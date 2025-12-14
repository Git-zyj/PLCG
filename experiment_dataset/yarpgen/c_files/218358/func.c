/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218358
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
    var_20 = ((/* implicit */signed char) 2147483647);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) (+(min((arr_3 [i_0 - 2]), (((/* implicit */int) var_15))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_16 [(_Bool)1] [i_4] = ((/* implicit */long long int) min(((~((+(var_10))))), (((((/* implicit */_Bool) min((((/* implicit */int) (short)29566)), (133955584)))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) >= (7680)))) : (((/* implicit */int) (unsigned short)7235))))));
                                arr_17 [12ULL] [(short)6] [i_2] [i_3] [i_4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [1U])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)0))))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7235))) : (var_18))))), (((/* implicit */unsigned int) 7680))));
                                arr_18 [i_4] [i_1] [i_1] [i_1] [6U] [15LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) ((7680) ^ (-85279431)))))));
                                var_21 = ((/* implicit */unsigned int) (+(min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_11 [3ULL] [i_0] [i_0] [i_0])) / (var_18))))))));
                            }
                        } 
                    } 
                    arr_19 [11] [i_1] [i_1] [(unsigned short)11] |= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((arr_9 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (581966801U)))) != (((unsigned long long int) -7681)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)0), (((/* implicit */short) ((2255417472U) <= (var_6)))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) (unsigned short)65535))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(short)6] [i_1] [i_1] [i_1]))) - (0ULL)))))));
                    arr_20 [(unsigned short)3] [i_1] [12] [(_Bool)1] = ((/* implicit */int) ((long long int) ((((var_5) + (9223372036854775807LL))) << (((((arr_12 [i_0 - 2] [i_0] [i_1] [i_2 + 1]) + (1644910116))) - (23))))));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */unsigned short) var_5);
    var_23 = ((/* implicit */unsigned char) (unsigned short)27864);
}
