/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28327
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) ((short) var_3))))) : (((/* implicit */int) ((_Bool) 0U)))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (4294967295U) : (min((((/* implicit */unsigned int) (unsigned short)65535)), (4294967295U)))));
    var_15 = ((((/* implicit */_Bool) max((0U), (((((/* implicit */_Bool) -218999387)) ? (1U) : (835906599U)))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((max((var_3), (var_8))) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
}
