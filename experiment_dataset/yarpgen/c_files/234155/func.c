/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234155
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_8))));
    var_18 |= ((/* implicit */signed char) min((((/* implicit */int) var_2)), (((((/* implicit */int) ((var_5) <= (((/* implicit */int) var_11))))) * ((+(((/* implicit */int) (unsigned char)243))))))));
}
