/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25427
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
    var_14 = ((/* implicit */unsigned int) max((var_7), (var_7)));
    var_15 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 0LL)) ? (131071U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
    var_16 = ((long long int) min((((/* implicit */int) var_10)), (var_13)));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((5U), (min((var_4), (((/* implicit */unsigned int) var_11))))))) ? (max((((/* implicit */int) min((var_6), (var_3)))), (((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) var_7))));
}
