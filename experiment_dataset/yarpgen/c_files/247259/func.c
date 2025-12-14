/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247259
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
    var_12 &= ((/* implicit */signed char) max((((/* implicit */int) var_6)), ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))));
    var_13 = min((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), ((unsigned char)100))))))));
}
