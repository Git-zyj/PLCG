/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207909
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
    var_12 = (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_0)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min(((!(((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) var_9))))))));
    var_13 ^= ((/* implicit */unsigned int) var_5);
    var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned long long int) var_2)))), (max((var_6), (((/* implicit */unsigned long long int) var_7))))))) ? (var_11) : (((/* implicit */long long int) (+(((/* implicit */int) min((var_7), (var_4)))))))));
}
