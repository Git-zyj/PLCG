/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204135
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
    var_11 |= max((((/* implicit */long long int) ((((/* implicit */int) var_9)) % (((((/* implicit */_Bool) (signed char)63)) ? (-1) : (((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */long long int) var_0)), (-464421511724124121LL))) : (max((0LL), (2LL))))));
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
}
