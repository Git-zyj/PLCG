/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208350
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) (signed char)-55)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 10479989824183207123ULL)) || (((/* implicit */_Bool) 4294967278U)))))) ? (min((((/* implicit */long long int) min((var_15), (4294967291U)))), (((long long int) 4294967278U)))) : (((((/* implicit */long long int) ((1198354789U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) / (var_4)))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294967277U)) ? (8846463569400241789LL) : (((/* implicit */long long int) -1972737740)))) * (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) var_13)) : (var_4))) > (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967271U)) ? (((/* implicit */unsigned int) -10)) : (3952970989U)))))))))))));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) 991968652)) : (523577868U)))) ? (((/* implicit */long long int) ((unsigned int) -10))) : (var_4)))) ? (((4294967295U) * (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
}
