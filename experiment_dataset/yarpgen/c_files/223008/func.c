/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223008
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) var_1))));
    var_11 = ((/* implicit */signed char) var_0);
    var_12 = var_7;
    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (max((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)100)) + (((/* implicit */int) var_7)))))))));
    var_14 = ((/* implicit */_Bool) ((((((((/* implicit */int) max(((_Bool)1), ((_Bool)0)))) - (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (unsigned char)233)))))) + (2147483647))) >> (((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
}
