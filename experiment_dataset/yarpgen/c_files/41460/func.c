/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41460
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (32767) : (-32767)))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -769604529))))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) | (((var_10) ? (8388607) : (((/* implicit */int) var_2))))))) : (max((((/* implicit */long long int) ((unsigned short) var_8))), (((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */long long int) 8388616))))))));
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_5))))) ? (var_6) : ((-(((/* implicit */int) (short)16383))))))))));
}
