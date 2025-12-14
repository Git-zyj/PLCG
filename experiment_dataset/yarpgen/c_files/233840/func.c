/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233840
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_9))))))) < (((/* implicit */int) var_1))));
    var_11 ^= max((((((var_2) <= (((/* implicit */unsigned long long int) var_7)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551615ULL))) : (((var_8) | (var_2))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_4)))) ? (max((((/* implicit */unsigned long long int) var_5)), (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_5)) ^ (var_4)))))));
}
