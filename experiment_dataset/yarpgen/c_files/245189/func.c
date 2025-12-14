/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245189
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
    var_16 = ((/* implicit */unsigned short) (~(var_6)));
    var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) var_8)) | (1073741823))), (((((/* implicit */_Bool) var_6)) ? (-1073741823) : (((/* implicit */int) var_12))))))) ? (1073741808) : (((((/* implicit */_Bool) min((var_10), (var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_9))))));
    var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) + (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) var_10)))))));
    var_19 = ((/* implicit */unsigned int) min((max((((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) max((var_14), (var_14)))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -1073741823)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
}
