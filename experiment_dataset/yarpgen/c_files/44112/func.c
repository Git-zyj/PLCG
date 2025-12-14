/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44112
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
    var_12 = ((/* implicit */short) var_8);
    var_13 &= ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_6)))), (((-302281459) + (((/* implicit */int) (signed char)43))))));
    var_14 &= ((/* implicit */_Bool) max((var_11), (min((((/* implicit */unsigned int) (short)(-32767 - 1))), (1230134901U)))));
}
