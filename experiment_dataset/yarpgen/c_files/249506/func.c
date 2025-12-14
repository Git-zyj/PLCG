/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249506
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
    var_17 = var_3;
    var_18 |= ((/* implicit */short) max(((+(((/* implicit */int) ((short) (signed char)-63))))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_5)))))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) var_3)), (var_7)))))));
    var_20 = ((/* implicit */unsigned int) max(((-(min((((/* implicit */long long int) var_16)), (9223372036854775807LL))))), (((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) var_7))), (((((/* implicit */int) var_2)) >> (((var_10) - (1724383585U))))))))));
}
