/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217760
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_7 [i_0] = (i_0 % 2 == zero) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (177124306U) : (((/* implicit */unsigned int) arr_4 [23] [(signed char)7] [i_1]))))) ? ((+(1380807237))) : (((/* implicit */int) var_7))))) - (min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_0 [i_0]))))), ((~(arr_2 [i_0] [i_0]))))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (177124306U) : (((/* implicit */unsigned int) arr_4 [23] [(signed char)7] [i_1]))))) ? ((+(1380807237))) : (((/* implicit */int) var_7))))) - (min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_0 [i_0]))))), ((~(arr_2 [i_0] [i_0])))))));
                var_15 = ((/* implicit */int) (short)-17176);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((max((14032746031262364266ULL), (((/* implicit */unsigned long long int) var_1)))) / (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((signed char) max((14032746031262364249ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))))));
    var_17 = ((/* implicit */unsigned int) var_11);
}
