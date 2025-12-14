/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20309
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (short)(-32767 - 1)))));
    var_18 = ((/* implicit */int) var_9);
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((var_13), (var_1))))));
}
