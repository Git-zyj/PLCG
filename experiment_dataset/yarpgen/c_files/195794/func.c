/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195794
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) var_2))));
    var_11 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65531))))), (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_9)) ? (14837831181944240524ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)155), (((/* implicit */unsigned char) (signed char)-80))))))))));
    var_12 |= ((/* implicit */unsigned char) var_3);
    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_0) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) : (var_1)))))) ? (var_1) : (var_0)));
}
