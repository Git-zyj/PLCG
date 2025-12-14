/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233897
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
    var_16 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_14), (((/* implicit */short) (_Bool)1)))))))) & ((~(var_13)))));
    var_17 = ((/* implicit */unsigned int) (signed char)25);
    var_18 = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) (signed char)25))))), (((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (var_4)));
    var_19 = ((/* implicit */signed char) var_15);
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) ((2339283318605840023LL) / (-8427108502205312827LL)))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (4410195212598681024ULL) : (((/* implicit */unsigned long long int) 4294967295U)))) : (((/* implicit */unsigned long long int) (-(8427108502205312827LL)))))))))));
}
