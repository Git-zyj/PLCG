/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218161
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
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) % (((/* implicit */int) var_8)))) ^ (((((/* implicit */_Bool) max((36028797018963968ULL), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)38)))) : (((((/* implicit */int) (signed char)35)) ^ (((/* implicit */int) var_6))))))));
    var_13 &= ((/* implicit */int) max((((/* implicit */short) ((((long long int) (_Bool)1)) < (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)55)))))))), (var_2)));
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~(max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) var_4)))))))))));
    var_15 &= ((/* implicit */unsigned int) var_9);
}
