/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220664
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
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */short) var_16)), (var_2)));
    var_20 += ((/* implicit */int) (unsigned char)250);
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ ((+(((/* implicit */int) var_17)))))))));
    var_22 += ((/* implicit */int) (-(min((((((/* implicit */_Bool) var_13)) ? (var_18) : (((/* implicit */unsigned long long int) 8388607)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4U))))))));
}
