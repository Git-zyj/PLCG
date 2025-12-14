/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40770
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned int) ((int) var_4)))), (((long long int) var_1))));
    var_12 ^= ((/* implicit */unsigned short) ((unsigned long long int) var_6));
    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((max((var_2), (((/* implicit */short) var_9)))), (var_5)))), (((unsigned int) var_3))));
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) max((var_0), (((/* implicit */unsigned char) var_6))))))));
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)83)) ? (min((((/* implicit */unsigned long long int) (short)-26757)), (4676532207839717388ULL))) : (4642161012520057369ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-120)))))))))));
}
