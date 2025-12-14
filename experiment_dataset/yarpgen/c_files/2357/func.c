/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2357
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
    var_12 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */_Bool) (short)15872);
                    var_14 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) var_8))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((short) arr_0 [i_0])))))), (min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) : (arr_5 [i_0] [11U]))), (((/* implicit */unsigned long long int) ((arr_4 [i_2] [i_2] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))))));
                }
            } 
        } 
    } 
}
