/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30098
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (unsigned short)63))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1323398643)) && (var_15)));
    var_21 ^= ((/* implicit */short) ((signed char) var_1));
    var_22 *= min((((/* implicit */unsigned int) ((short) (-(((/* implicit */int) var_1)))))), (min((((/* implicit */unsigned int) (signed char)127)), (min((((/* implicit */unsigned int) var_1)), (var_4))))));
}
