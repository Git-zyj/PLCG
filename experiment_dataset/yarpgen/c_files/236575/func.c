/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236575
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (var_8) : (((/* implicit */int) var_11))))) : (((((/* implicit */unsigned int) var_18)) * (((unsigned int) var_18))))));
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned char) var_1)))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (unsigned char)220))));
    var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))) & (((((/* implicit */_Bool) max((var_15), (((/* implicit */short) var_11))))) ? (((((/* implicit */_Bool) 3599206878944192479ULL)) ? (25ULL) : (((/* implicit */unsigned long long int) 4160877979U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_5)))))))));
    var_23 &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_12)) > (((/* implicit */int) ((unsigned char) (signed char)-1)))))), (var_17)));
}
