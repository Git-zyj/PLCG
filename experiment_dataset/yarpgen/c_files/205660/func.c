/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205660
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
    var_16 = ((/* implicit */unsigned char) ((((min((((int) var_12)), (((((/* implicit */int) var_3)) % (var_8))))) + (2147483647))) << (((((((((/* implicit */_Bool) ((short) var_2))) ? (min((((/* implicit */int) (signed char)63)), (var_8))) : (((var_12) & (((/* implicit */int) var_1)))))) + (93344526))) - (17)))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */long long int) min((var_12), (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) var_8)) ^ (var_7)))))));
    var_18 = ((/* implicit */int) min((min((((/* implicit */unsigned int) min((((/* implicit */int) var_11)), (var_8)))), (max((var_6), (((/* implicit */unsigned int) var_14)))))), (((/* implicit */unsigned int) (_Bool)1))));
}
