/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198934
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
    var_14 = ((/* implicit */long long int) var_13);
    var_15 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_4))))) < (var_0))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (var_2))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) var_11)) - (var_5))))))));
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_12))));
}
