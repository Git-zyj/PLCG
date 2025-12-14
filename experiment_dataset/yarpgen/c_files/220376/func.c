/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220376
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
    var_10 -= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) max((var_8), ((_Bool)1)))) < (((/* implicit */int) (_Bool)1)))))));
    var_11 = ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_6)));
    var_12 = ((/* implicit */_Bool) min((max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) (_Bool)0)))), ((-(((var_6) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))));
    var_13 -= var_6;
}
