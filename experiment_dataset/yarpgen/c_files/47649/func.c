/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47649
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
    var_16 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_1))))) & (((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) >= (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_5))))))))));
    var_17 = ((/* implicit */unsigned char) var_5);
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)65530)), (min((((unsigned int) (unsigned short)30543)), (((/* implicit */unsigned int) var_6))))));
}
