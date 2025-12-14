/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222893
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
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (((((/* implicit */_Bool) (unsigned char)78)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))), ((~(((/* implicit */int) (unsigned char)165))))));
    var_14 = ((/* implicit */unsigned int) var_9);
    var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) & (var_11)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((unsigned char) min((var_3), (((/* implicit */unsigned int) (unsigned char)9)))))) : (((/* implicit */int) var_10))));
    var_16 &= min((min((var_7), (var_3))), (max((((var_11) * (var_5))), (min((var_11), (((/* implicit */unsigned int) var_4)))))));
}
