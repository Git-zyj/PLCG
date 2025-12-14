/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37414
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
    var_16 = ((/* implicit */signed char) max((var_1), (((/* implicit */unsigned int) min((var_13), (((/* implicit */short) var_9)))))));
    var_17 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */long long int) var_15))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))))), (min((min((var_3), (((/* implicit */unsigned int) (unsigned char)0)))), (((/* implicit */unsigned int) var_11))))));
}
