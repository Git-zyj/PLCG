/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32398
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
    var_12 = ((/* implicit */unsigned char) ((_Bool) var_6));
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_7))))));
    var_14 -= ((/* implicit */unsigned int) min(((signed char)40), ((signed char)-40)));
    var_15 = ((/* implicit */short) var_3);
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((signed char)36), ((signed char)40)))), (max((var_3), (((/* implicit */unsigned int) var_11))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))));
}
