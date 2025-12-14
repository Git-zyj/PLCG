/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197929
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
    var_15 = ((/* implicit */signed char) var_11);
    var_16 = ((int) var_2);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_2)) : (((min((var_7), (((/* implicit */long long int) (short)-25553)))) % (((/* implicit */long long int) 1048575U))))));
}
