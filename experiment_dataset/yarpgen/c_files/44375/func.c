/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44375
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
    var_10 += max((var_3), (var_5));
    var_11 = ((/* implicit */unsigned long long int) ((((int) var_6)) ^ (((/* implicit */int) max((var_4), (((/* implicit */short) ((var_1) < (((/* implicit */unsigned long long int) var_7))))))))));
    var_12 = ((/* implicit */signed char) min((min((var_5), (((/* implicit */int) max(((unsigned short)44362), (((/* implicit */unsigned short) (unsigned char)241))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_3))) || (((/* implicit */_Bool) min((1152921504602652672LL), (((/* implicit */long long int) (unsigned char)15))))))))));
    var_13 = ((/* implicit */short) var_3);
}
