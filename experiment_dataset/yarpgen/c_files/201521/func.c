/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201521
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
    var_10 = ((/* implicit */short) var_8);
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)40)));
    var_12 = ((/* implicit */long long int) min((((/* implicit */int) var_9)), ((+(((/* implicit */int) ((unsigned char) var_1)))))));
    var_13 &= ((/* implicit */short) min((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) (-(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) var_7))))))));
}
