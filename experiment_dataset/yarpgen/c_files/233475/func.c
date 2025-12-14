/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233475
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) var_4))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_5)))))))) - (((/* implicit */int) (signed char)-98)))))));
    var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)-98))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49065))))))))) : (max((((/* implicit */unsigned int) var_5)), (var_8)))));
}
