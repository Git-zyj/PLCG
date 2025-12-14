/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199494
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
    var_16 = ((/* implicit */_Bool) (~(min((((/* implicit */int) (signed char)63)), ((~(((/* implicit */int) var_2))))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((signed char)78), ((signed char)63)))) ? (((/* implicit */int) ((signed char) ((signed char) var_1)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1)))))));
}
