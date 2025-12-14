/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213638
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
    var_10 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))) < (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)66))))), (var_8))))));
    var_11 = min((min((var_9), (((/* implicit */long long int) var_4)))), (max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (((var_2) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)200))))))));
}
