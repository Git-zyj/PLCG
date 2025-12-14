/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30171
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) (((_Bool)1) ? (var_9) : (2147483647))))))) : (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)16352))) ? (((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)36341)))) : (((/* implicit */int) var_1))))));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_6))));
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
}
