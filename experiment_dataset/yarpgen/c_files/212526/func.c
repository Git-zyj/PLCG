/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212526
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
    var_13 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((var_9) & (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (var_11) : (((/* implicit */unsigned int) var_7)))))));
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((unsigned long long int) (short)-18172)))));
    var_15 = ((/* implicit */unsigned long long int) (~(var_11)));
}
