/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236965
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
    var_14 = ((/* implicit */int) var_6);
    var_15 |= ((/* implicit */signed char) var_12);
    var_16 = ((int) ((max((var_10), (((/* implicit */int) var_6)))) / (var_9)));
    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (!((_Bool)0))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) var_6))))), (min((var_8), (((/* implicit */unsigned short) var_2)))))))));
}
