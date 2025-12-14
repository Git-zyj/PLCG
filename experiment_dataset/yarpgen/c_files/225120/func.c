/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225120
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
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))));
    var_14 -= ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-8444)))))));
    var_15 *= ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((var_2), (var_12)))))) & (min((min((((/* implicit */unsigned int) var_11)), (var_1))), (((/* implicit */unsigned int) (~(var_8)))))));
    var_16 = ((/* implicit */long long int) ((((((/* implicit */int) max(((short)8444), (((/* implicit */short) var_12))))) ^ (((/* implicit */int) var_2)))) < (((/* implicit */int) var_7))));
}
