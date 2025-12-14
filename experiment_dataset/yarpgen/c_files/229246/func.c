/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229246
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
    var_15 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((max((var_7), (((/* implicit */int) (signed char)(-127 - 1))))), (min((((/* implicit */int) var_13)), (520093696))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((short)6039), ((short)6039))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27659)) ? (((arr_3 [i_0] [i_0] [i_0 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), ((short)30564)))))))) : (min((((/* implicit */unsigned long long int) arr_6 [i_0])), (arr_5 [i_0 - 1] [i_1 - 3] [i_2 + 1])))));
                    var_16 = ((/* implicit */unsigned short) arr_6 [i_0]);
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */unsigned short) min((var_11), (((/* implicit */long long int) var_8))));
    var_18 ^= ((/* implicit */int) var_0);
    var_19 = ((/* implicit */signed char) var_7);
}
