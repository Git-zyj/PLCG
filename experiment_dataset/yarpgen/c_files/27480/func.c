/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27480
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
    var_10 = ((/* implicit */int) ((long long int) max((((/* implicit */int) var_0)), (((((/* implicit */int) (short)32767)) - (2147483647))))));
    var_11 = ((/* implicit */short) ((unsigned long long int) (unsigned short)21));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3)) ? ((-9223372036854775807LL - 1LL)) : (min((((((/* implicit */_Bool) (short)7168)) ? (-3192128352104240848LL) : (var_7))), (max((9223372036854775807LL), (((/* implicit */long long int) (short)16219))))))));
}
