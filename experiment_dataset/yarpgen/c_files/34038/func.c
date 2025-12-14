/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34038
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
    var_19 = ((/* implicit */short) -392082768);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))) : ((((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(short)5] [i_1] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-4108))))) ? (((/* implicit */int) (_Bool)1)) : (392082767))), (392082768));
                var_21 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) var_13))))) : (((/* implicit */int) ((((/* implicit */int) var_18)) <= (((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((var_8), (var_13)));
}
