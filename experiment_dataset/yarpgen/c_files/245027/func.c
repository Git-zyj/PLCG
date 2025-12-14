/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245027
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
    var_16 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((var_12) | (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) var_8))))) && (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned char)185))))))))));
    var_18 = ((/* implicit */short) max((((/* implicit */unsigned char) ((max((((/* implicit */long long int) var_6)), (var_12))) < (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (min((((/* implicit */unsigned char) ((var_13) != (4798518835114160522ULL)))), (var_9)))));
}
