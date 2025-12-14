/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233035
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
    var_14 = ((/* implicit */_Bool) var_7);
    var_15 = (~(min((var_1), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))));
    var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((_Bool) min(((_Bool)0), ((_Bool)1))))), (min((max((((/* implicit */unsigned long long int) var_10)), (var_1))), (((/* implicit */unsigned long long int) var_5))))));
}
