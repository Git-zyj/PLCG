/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39266
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
    var_15 = ((/* implicit */signed char) (((((+(var_13))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551586ULL))))), ((+(((/* implicit */int) var_14))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (1048575)))), (max((((/* implicit */unsigned long long int) var_10)), (18446744073709551570ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
}
