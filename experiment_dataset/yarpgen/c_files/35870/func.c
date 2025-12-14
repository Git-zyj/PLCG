/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35870
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
    var_16 *= ((/* implicit */short) (+((-(((/* implicit */int) (short)17015))))));
    var_17 = ((/* implicit */signed char) 3185144865U);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) >= (((((/* implicit */_Bool) var_8)) ? (3185144860U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) ((arr_2 [i_0]) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((signed char) (signed char)52))), (var_14)));
}
