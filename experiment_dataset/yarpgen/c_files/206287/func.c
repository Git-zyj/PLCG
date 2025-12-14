/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206287
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
    var_10 |= ((/* implicit */short) var_1);
    var_11 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) % (((((/* implicit */int) var_4)) | (((/* implicit */int) var_4)))))) >> (((((/* implicit */_Bool) 371590627)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) : (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_9)))))))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (var_5)));
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) -2147483647))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), ((~(8191ULL)))));
}
