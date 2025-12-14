/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39054
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
    var_20 += ((/* implicit */unsigned int) var_0);
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 131071))));
    var_22 = ((/* implicit */unsigned int) ((unsigned char) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))))));
    var_23 = var_15;
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((var_4) >= (((/* implicit */int) var_0)))))));
}
