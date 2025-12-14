/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237616
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
    var_15 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)19), ((signed char)-20))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_5)))))));
    var_16 += ((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) var_13))));
}
