/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24302
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
    var_18 = ((/* implicit */unsigned long long int) var_17);
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) max((var_11), (((/* implicit */unsigned char) var_2)))))) ? (((var_1) % (((/* implicit */unsigned long long int) 4194240)))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)109)), ((short)32767))))) : (5841618301186214999ULL)))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)-109)))));
    var_21 = ((/* implicit */signed char) ((var_14) == ((~(((/* implicit */int) var_13))))));
}
