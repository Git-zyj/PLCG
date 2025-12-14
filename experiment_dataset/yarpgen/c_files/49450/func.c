/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49450
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
    var_12 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)32765))))) : (((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_2))))), (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((((/* implicit */_Bool) var_7)) ? (var_0) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_5))));
    var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)8192))))), (var_3))))) ^ (((long long int) var_6))));
    var_15 = ((/* implicit */unsigned int) ((var_2) / (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (max((var_6), (var_6))))))));
}
