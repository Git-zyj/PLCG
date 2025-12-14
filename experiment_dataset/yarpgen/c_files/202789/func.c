/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202789
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
    var_14 = ((/* implicit */_Bool) max((((/* implicit */int) ((var_13) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))), (((((/* implicit */int) ((unsigned short) var_1))) % (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))));
    var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((var_3) * (var_13)))) ? (((/* implicit */int) min((((/* implicit */short) var_1)), (var_5)))) : (((/* implicit */int) var_2))))));
}
