/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244737
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
    var_14 = ((/* implicit */signed char) (((-((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))))) != (((/* implicit */int) (!(((/* implicit */_Bool) 4288942663U)))))));
    var_15 += ((/* implicit */signed char) min((((/* implicit */short) ((_Bool) max((var_7), (var_3))))), (var_12)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_16 += ((/* implicit */signed char) arr_1 [i_0]);
        var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((signed char) ((arr_0 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_13))))))) : (max((((((/* implicit */_Bool) 6024633U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))))));
    }
}
