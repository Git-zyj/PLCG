/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218125
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) min((((/* implicit */short) var_4)), (var_13))))));
    var_17 = (((+(((((/* implicit */_Bool) 3607744778U)) ? (687222519U) : (((/* implicit */unsigned int) var_11)))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned short) var_3))))) ? (((((/* implicit */int) var_15)) % (var_9))) : (var_11)))));
    var_18 |= ((/* implicit */signed char) ((unsigned long long int) ((var_11) * (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
}
