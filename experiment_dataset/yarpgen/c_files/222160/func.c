/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222160
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
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (max((((/* implicit */long long int) var_16)), (var_9))) : (((((/* implicit */_Bool) 0ULL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) / (((/* implicit */long long int) (+(var_0))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8))) * (min((var_4), (((/* implicit */unsigned int) var_12))))))) <= (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_14))) / (((var_15) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))))));
}
