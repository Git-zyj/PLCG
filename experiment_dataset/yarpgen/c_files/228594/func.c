/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228594
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
    var_14 = ((/* implicit */short) ((max((((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max((var_8), ((short)32767)))))) - (((/* implicit */int) var_5))));
    var_15 = ((/* implicit */_Bool) min((min((max((var_8), (((/* implicit */short) var_1)))), (((/* implicit */short) min((var_10), (((/* implicit */unsigned char) (_Bool)1))))))), (((/* implicit */short) var_10))));
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (max(((((_Bool)1) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) max(((short)23515), ((short)-32764))))))));
}
