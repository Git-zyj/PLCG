/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28970
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
    var_16 = ((/* implicit */signed char) var_11);
    var_17 += ((/* implicit */short) max((var_12), (((/* implicit */unsigned char) (signed char)-1))));
    var_18 = ((/* implicit */signed char) var_12);
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_3)))))) : (min((((/* implicit */unsigned long long int) (signed char)113)), (365144090124740850ULL)))))) ? (((/* implicit */int) (signed char)-26)) : (min((var_8), (((((/* implicit */int) (signed char)-125)) | (((/* implicit */int) (signed char)113))))))));
}
