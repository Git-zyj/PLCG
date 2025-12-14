/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209193
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)224)))))));
    var_14 = ((/* implicit */short) min((((/* implicit */int) var_4)), (((((((var_9) | (((/* implicit */int) var_5)))) + (2147483647))) >> (((max((((/* implicit */int) (unsigned char)32)), (var_1))) - (32)))))));
    var_15 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)32)))), (((/* implicit */int) (unsigned char)224))));
    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65514)) ? (131071) : (((/* implicit */int) (unsigned char)0))));
}
