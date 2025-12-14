/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19333
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
    var_16 = ((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))));
    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_3)) & (max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1)))))), (var_15)));
}
