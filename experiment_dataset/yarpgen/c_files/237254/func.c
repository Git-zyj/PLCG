/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237254
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
    var_10 &= ((/* implicit */short) var_4);
    var_11 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 49768742U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)19))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) * (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) var_6))))))));
    var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-32762))));
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_9))));
}
