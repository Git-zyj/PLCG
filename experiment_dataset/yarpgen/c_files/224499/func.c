/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224499
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
    var_14 = ((/* implicit */int) ((min((((/* implicit */long long int) (signed char)-55)), (448997029644180653LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), ((unsigned short)36711)))) ? (((/* implicit */int) ((17422198273818935701ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20635)))))) : (((/* implicit */int) var_12)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) (~((((+(((/* implicit */int) var_12)))) * (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)13795))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-125))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5128853096576003055LL)) ? (((/* implicit */int) (unsigned short)7713)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (1438022044U)))));
        var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)35430)) ? (((/* implicit */unsigned long long int) (-(((var_4) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) : (var_10)));
        arr_3 [(unsigned short)7] [(unsigned short)7] = ((/* implicit */signed char) ((_Bool) ((int) (unsigned short)57796)));
    }
    var_17 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))), (var_10)));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_13))));
    var_19 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */short) var_12)))))) * (var_11))), (((/* implicit */unsigned long long int) var_1))));
}
