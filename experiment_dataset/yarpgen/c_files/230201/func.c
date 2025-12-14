/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230201
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
    var_11 = ((/* implicit */int) var_6);
    var_12 += var_9;
    var_13 = ((/* implicit */short) var_1);
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_3))));
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((((/* implicit */unsigned long long int) var_9)), ((((-(var_6))) / (var_8))))))));
}
