/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208177
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
    var_12 = (short)(-32767 - 1);
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_3))));
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((int) ((((((/* implicit */int) var_9)) << (((((/* implicit */int) var_9)) - (42627))))) >> (((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8158499556876065360LL)))))))));
}
