/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197436
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
    var_18 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_15)) : (((((/* implicit */_Bool) -763640850)) ? (((/* implicit */long long int) 0U)) : (var_9))))) != (((/* implicit */long long int) ((/* implicit */int) ((4294967295U) <= (4294967284U)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) || (((/* implicit */_Bool) var_17))));
                var_20 = ((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (arr_4 [i_0]))), (((/* implicit */unsigned int) (+((-(763640865))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((max((var_7), (((/* implicit */unsigned long long int) 763640871)))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_13))))))))));
            }
        } 
    } 
}
