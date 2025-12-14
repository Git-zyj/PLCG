/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245251
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
    var_12 = ((/* implicit */_Bool) var_9);
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+(var_9))))));
    var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (((((/* implicit */_Bool) 576460752303390720ULL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_2))) ? (max((((/* implicit */unsigned int) var_6)), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(var_5))))));
}
