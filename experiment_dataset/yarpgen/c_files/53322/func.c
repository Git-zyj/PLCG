/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53322
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
    var_12 &= ((/* implicit */signed char) ((max((((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) var_11))))), (((((/* implicit */_Bool) var_6)) ? (var_3) : (var_2))))) >> (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-18)))))));
    var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(var_8)))) ? (min((((/* implicit */long long int) var_8)), (var_6))) : (min((var_6), (((/* implicit */long long int) var_5)))))), (((/* implicit */long long int) min((((((var_5) + (2147483647))) << (((((/* implicit */int) var_1)) - (51436))))), (((var_2) % (((/* implicit */int) (signed char)12)))))))));
    var_14 = ((/* implicit */unsigned char) var_8);
    var_15 = ((/* implicit */unsigned char) min((-2147483646), (((((/* implicit */_Bool) 484968U)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_10))))))));
}
