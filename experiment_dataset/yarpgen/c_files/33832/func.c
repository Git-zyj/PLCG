/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33832
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (0U)));
    var_16 = ((/* implicit */int) var_8);
    var_17 = ((((/* implicit */_Bool) var_6)) ? (min((4294967295U), (((/* implicit */unsigned int) (short)8473)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) / (var_12)))));
    var_18 = ((/* implicit */unsigned short) var_6);
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) max((max((var_14), (2611178011U))), (((1U) | (4294967281U)))))) ? (((((((/* implicit */unsigned long long int) 24U)) | (16391383692903368654ULL))) ^ (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) 4294967295U)))))));
}
