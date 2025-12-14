/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202354
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
    var_15 ^= ((((((/* implicit */_Bool) ((unsigned int) var_14))) ? (min((var_10), (2095104U))) : (var_12))) % (((((/* implicit */_Bool) min((var_12), (2095104U)))) ? (var_10) : (min((0U), (2095104U))))));
    var_16 = var_1;
    var_17 = ((/* implicit */unsigned int) min((var_17), (var_2)));
}
