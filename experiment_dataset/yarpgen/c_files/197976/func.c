/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197976
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
    var_11 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (var_2)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (18446744073709551615ULL) : (18446744073709551615ULL))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_2) : (var_3))))));
    var_12 ^= ((/* implicit */signed char) max((((((/* implicit */int) var_0)) - (((/* implicit */int) var_10)))), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) var_8)) - (144)))))))));
    var_13 &= ((/* implicit */_Bool) var_8);
    var_14 = ((/* implicit */unsigned int) var_4);
}
