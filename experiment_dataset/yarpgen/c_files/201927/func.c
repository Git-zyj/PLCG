/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201927
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
    var_19 = ((/* implicit */_Bool) (~(min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_10))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) min((var_9), (var_9)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_13)) + (2147483647))) << (((var_6) - (7205840058245230307ULL)))))))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((var_6), (var_16))))));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) - (var_1))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_16))))) > (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_3)))), (((((/* implicit */int) var_3)) << (((var_6) - (7205840058245230303ULL)))))))))))));
}
