/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21261
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
    var_15 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))), (var_2)))) || (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_5))) >> (((/* implicit */int) ((_Bool) var_12))))))));
    var_16 = ((/* implicit */unsigned short) var_14);
    var_17 += ((/* implicit */unsigned short) (-((~(((var_14) / (((/* implicit */unsigned long long int) var_11))))))));
    var_18 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) var_8)) ? (var_7) : (var_2))), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) min((((long long int) var_13)), (((/* implicit */long long int) min((((/* implicit */int) var_1)), (var_9)))))))));
}
