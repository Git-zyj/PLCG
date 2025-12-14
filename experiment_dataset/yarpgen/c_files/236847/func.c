/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236847
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0 - 3] [i_1] [i_1])))) + (2147483647))) >> (((((((/* implicit */_Bool) 1054207813)) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) - (3836421957U)))))) | (((((/* implicit */_Bool) (~(1125899906842622LL)))) ? (((arr_1 [i_0] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((var_6) ^ (((/* implicit */long long int) arr_3 [i_1] [i_1] [i_0 - 3])))))))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-(((((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1] [i_0 + 1])) << (((var_14) - (15364876022291068621ULL))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_8);
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_12))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */short) var_12)), (var_7)))))) : (min((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (short)32736))))), (var_6))))))));
    var_19 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4285941064U)), (min((((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_0)))))));
}
