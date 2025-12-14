/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48030
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 264241152U)) : (67104768LL)))) ? (var_1) : (((/* implicit */unsigned long long int) 1610612736))));
    var_15 = ((/* implicit */long long int) 2097152U);
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) 18446744073709551615ULL))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
}
