/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231158
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (unsigned char)100))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_15))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)2047)))) - (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))))) : (var_15)));
}
