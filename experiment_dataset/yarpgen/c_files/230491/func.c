/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230491
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
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)32767))));
    var_17 = ((/* implicit */short) max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_10)) ? (var_10) : (var_15)))))));
    var_18 = ((/* implicit */long long int) ((short) max((((long long int) var_13)), (((/* implicit */long long int) var_2)))));
    var_19 = min((((/* implicit */long long int) var_4)), (((var_14) - (((var_7) << (((((((/* implicit */int) var_0)) + (13098))) - (58))))))));
}
