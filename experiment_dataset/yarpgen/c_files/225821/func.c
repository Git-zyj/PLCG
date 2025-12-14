/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225821
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
    var_16 &= ((/* implicit */short) var_3);
    var_17 -= ((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_2))));
    var_18 = ((min((max((((/* implicit */int) var_3)), (var_11))), (var_11))) / (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)52)) - (var_10)))) ? (max((var_11), (var_5))) : (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) var_14)) : (var_10))))));
    var_19 *= ((/* implicit */signed char) var_0);
}
