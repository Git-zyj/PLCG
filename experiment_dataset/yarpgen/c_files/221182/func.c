/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221182
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
    var_16 |= ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) var_3);
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_2 + 2] [i_3 + 2] [i_4])) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) (unsigned char)103))))) ? (((arr_1 [i_0 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 2] [i_3 + 2] [i_4 - 2])) ? (arr_1 [i_4 - 1]) : (arr_1 [i_0 + 1]))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) arr_4 [i_0 + 1]);
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((((4294705152U) * (4294705152U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)28672))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) max((max((((/* implicit */unsigned int) ((unsigned char) 4294705152U))), ((~(var_9))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_14))))) <= (var_1))))));
}
