/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240489
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)19))) ? ((~(var_11))) : (((/* implicit */unsigned long long int) var_10))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (min((((/* implicit */long long int) var_14)), (var_0))) : (((((/* implicit */_Bool) var_18)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
    var_21 = ((var_11) <= (var_12));
    var_22 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) + (((long long int) var_8))))) ^ (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (min((((/* implicit */unsigned long long int) var_6)), (var_12)))))));
    var_23 = ((/* implicit */signed char) var_5);
    var_24 = ((/* implicit */signed char) var_11);
}
