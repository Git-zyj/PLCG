/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52457
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
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (short)-32764))))) | ((-(((/* implicit */int) var_5))))))) ^ (((((/* implicit */_Bool) 5938747232228557032LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (5938747232228557032LL)))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) -1281881886474550192LL)) && ((!(((/* implicit */_Bool) 5938747232228557033LL))))));
                var_20 = ((/* implicit */unsigned int) (((~(min((((/* implicit */long long int) arr_3 [i_1])), (5938747232228557059LL))))) | (((((/* implicit */_Bool) var_11)) ? (-5938747232228557031LL) : (arr_1 [i_0 - 2])))));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (+(((/* implicit */int) var_13))))), ((~(-5938747232228557032LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_11)))));
}
