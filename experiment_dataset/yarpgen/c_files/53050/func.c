/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53050
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
    var_14 = ((/* implicit */_Bool) ((unsigned char) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)77))))), (max((((/* implicit */unsigned long long int) var_13)), (var_7))))))))));
        arr_2 [i_0] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) (unsigned short)26820)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) var_10)))))))));
    }
}
