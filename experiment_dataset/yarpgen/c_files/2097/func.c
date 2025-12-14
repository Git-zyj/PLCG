/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2097
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (signed char)-125))))))) : ((-(((/* implicit */int) min((var_13), ((short)(-32767 - 1)))))))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((short) var_13)))));
}
