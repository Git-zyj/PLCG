/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25185
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
    var_15 = ((/* implicit */int) min((var_15), (var_3)));
    var_16 |= ((/* implicit */short) min((((((/* implicit */_Bool) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (6917529027641081856LL)))) ? (var_6) : (min((var_6), (((/* implicit */unsigned long long int) 1023LL)))))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_10))))), (var_9))))));
}
