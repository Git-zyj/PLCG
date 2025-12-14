/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54251
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
    var_20 = ((/* implicit */short) (+(var_9)));
    var_21 = ((/* implicit */int) var_17);
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_15) <= (var_1))) ? (((((/* implicit */int) var_3)) % (var_15))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) max((min((((/* implicit */int) var_14)), (var_1))), (var_2)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_9)))) ? (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) var_1))))));
    var_23 = ((/* implicit */_Bool) ((max((min((((/* implicit */int) var_0)), (var_1))), (max((var_1), (((/* implicit */int) var_0)))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) var_15)) : (4503599627370495ULL))))))));
}
