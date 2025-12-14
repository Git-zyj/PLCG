/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215635
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
    var_17 = ((/* implicit */long long int) var_8);
    var_18 |= ((/* implicit */_Bool) var_0);
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_8)), (var_16)))))))) ? (max((var_10), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)121)))) & (((/* implicit */int) var_16)))))));
    var_20 = ((/* implicit */unsigned int) min((var_3), (((/* implicit */short) (_Bool)1))));
    var_21 = ((/* implicit */signed char) min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) var_15))));
}
