/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228018
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
    var_10 -= ((/* implicit */short) min((((/* implicit */unsigned int) var_4)), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (var_5)))));
    var_11 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), (((/* implicit */int) var_9))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_8))))) ? (min((((/* implicit */int) var_7)), (-1923226742))) : ((-(((/* implicit */int) (_Bool)1))))))) || (var_8)));
}
