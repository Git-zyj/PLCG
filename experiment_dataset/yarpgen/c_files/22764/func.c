/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22764
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
    var_19 = ((/* implicit */_Bool) ((unsigned long long int) var_8));
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((_Bool) var_15))), (var_11)))), ((~(var_7)))));
    var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((var_7) <= (((/* implicit */unsigned long long int) var_3))))), (((unsigned char) var_14))))) ? (((/* implicit */int) var_17)) : (8192)));
    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_4)), (var_7))), (min((((/* implicit */unsigned long long int) var_0)), (var_7)))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7615))))) == (((/* implicit */int) var_11))))) : (((int) (signed char)99))));
    var_23 *= ((/* implicit */long long int) ((var_1) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))) >= ((~(var_13))))))));
}
