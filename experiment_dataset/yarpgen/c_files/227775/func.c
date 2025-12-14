/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227775
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (var_12))))));
    var_20 = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_17)) >= (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (short)9256)))))))));
    var_21 += ((/* implicit */unsigned char) min((((((/* implicit */int) (short)-9269)) | (((/* implicit */int) (short)9256)))), (((/* implicit */int) (unsigned char)154))));
    var_22 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_16)), (((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (unsigned short)64019)) >> (((/* implicit */int) (_Bool)1))))))));
}
