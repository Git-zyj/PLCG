/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244844
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
    var_20 = ((/* implicit */signed char) (+(var_1)));
    var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) 4U)) ? (((/* implicit */int) ((((/* implicit */_Bool) max((4294967292U), (4294967280U)))) && (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((2U), (4294967288U)))) && (((/* implicit */_Bool) ((unsigned long long int) var_16))))))));
    var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) ((var_16) < (((/* implicit */unsigned int) max((var_10), (1904846385))))))), ((((~(var_16))) ^ (var_12)))));
    var_23 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)163)), (var_17))))))));
}
