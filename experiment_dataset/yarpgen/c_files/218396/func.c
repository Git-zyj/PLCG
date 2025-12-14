/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218396
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
    var_15 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114))) : (2984139417U))))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_11))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 &= ((/* implicit */unsigned char) ((arr_1 [i_0 - 1] [i_0 + 1]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2984139412U)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (unsigned char)255)))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) 4141942550U)) >= ((-(var_14)))));
                var_19 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) 1310827878U))))) | (((/* implicit */int) (unsigned char)1))));
                var_20 = ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_1])) : (((/* implicit */int) arr_0 [i_0 - 1])))) : ((+(((/* implicit */int) arr_3 [i_1] [i_1] [i_0 - 1])))));
            }
        } 
    } 
}
