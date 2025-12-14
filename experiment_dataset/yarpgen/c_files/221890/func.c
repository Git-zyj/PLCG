/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221890
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
    var_11 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_3)) : (var_2))) : (((/* implicit */unsigned long long int) var_3)))), (var_2)));
    var_12 |= ((/* implicit */unsigned short) var_2);
    var_13 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3)))) ? (((long long int) var_4)) : (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) min((var_9), (var_9)))) : (((/* implicit */int) var_8)))))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((min((var_6), (((/* implicit */long long int) min((((/* implicit */unsigned int) (-2147483647 - 1))), (var_3)))))), (((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) var_1)) : (var_10))), ((~(var_7)))))))))));
}
