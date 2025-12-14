/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200152
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
    var_15 = ((/* implicit */int) max((((unsigned int) var_4)), (((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) var_4)))))));
    var_16 = ((/* implicit */long long int) min((((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) ^ (((var_13) ? (1859239324U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) ((var_2) - (((((/* implicit */_Bool) (signed char)127)) ? (var_2) : (((/* implicit */int) var_0)))))))));
    var_17 = var_8;
    var_18 -= ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) (short)10561)) ? (1859239324U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (var_2)))), ((+(var_8)))))));
}
