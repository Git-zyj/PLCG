/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23087
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)0)) : (var_9))))) : (((/* implicit */int) ((signed char) min((var_3), (((/* implicit */long long int) var_10))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) (-(max((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)111)) >> (((1209084606821566503LL) - (1209084606821566489LL))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((var_4) & (min((((/* implicit */int) ((((/* implicit */_Bool) 1209084606821566503LL)) || (((/* implicit */_Bool) -1209084606821566504LL))))), ((+(((/* implicit */int) var_8))))))));
    var_16 = ((/* implicit */unsigned int) max(((-((+(((/* implicit */int) (signed char)127)))))), (min((((((/* implicit */_Bool) (unsigned char)232)) ? (var_9) : (((/* implicit */int) var_8)))), ((-(((/* implicit */int) (_Bool)1))))))));
}
