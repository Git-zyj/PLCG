/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207821
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
    var_20 = ((((/* implicit */int) var_18)) - (max(((+(var_12))), ((+(var_1))))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */int) var_8)), (var_7))))));
    var_22 = ((/* implicit */int) max((var_22), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */int) var_17))))) ? ((+(var_7))) : (((((/* implicit */_Bool) var_1)) ? (2147483647) : (((/* implicit */int) var_18)))))), ((-(((((/* implicit */int) var_19)) << (((/* implicit */int) (_Bool)1))))))))));
}
