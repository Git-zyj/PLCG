/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204437
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))))))) : (var_6)));
    var_20 = ((min((((var_14) % (((/* implicit */int) (unsigned short)16383)))), (((((/* implicit */int) var_16)) % (((/* implicit */int) var_17)))))) <= (((/* implicit */int) var_9)));
    var_21 = ((/* implicit */short) var_14);
}
