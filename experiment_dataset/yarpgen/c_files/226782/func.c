/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226782
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
    var_11 = ((/* implicit */_Bool) ((int) var_6));
    var_12 = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned char) ((signed char) var_7))), (((unsigned char) var_10)))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) max((((/* implicit */short) min((var_1), (var_0)))), ((short)-3433))))));
    var_14 = min((((/* implicit */unsigned int) min((min((var_6), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (unsigned char)255))))), ((-(min((var_7), (((/* implicit */unsigned int) var_8)))))));
}
