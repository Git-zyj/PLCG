/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224324
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
    var_15 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) | (var_1)))))), (var_5));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 2784239485U)) ? (1510727811U) : (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)81)) >> (((-79893035) + (79893052))))), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 17930754296753452308ULL)))))))) ? (var_1) : (((/* implicit */unsigned int) var_11))));
}
