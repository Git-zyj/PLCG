/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245815
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_3))));
    var_13 = ((/* implicit */unsigned char) 9U);
    var_14 -= ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)32367)) : (((/* implicit */int) var_7)))), ((((_Bool)0) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (short)13520)))))), (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_3))))))));
}
