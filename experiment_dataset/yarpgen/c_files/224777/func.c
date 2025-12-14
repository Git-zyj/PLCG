/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224777
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_13)) ^ (var_7)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) var_16))))) : (((((/* implicit */int) var_13)) / (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_17))))))))));
    var_21 = ((/* implicit */short) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_22 = ((/* implicit */int) max((var_22), (var_7)));
        var_23 = ((/* implicit */signed char) var_9);
    }
    var_24 ^= ((/* implicit */unsigned int) var_2);
    var_25 = ((/* implicit */short) max((((/* implicit */unsigned int) (-(var_7)))), (max((min((var_5), (var_6))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)54002)))))))));
}
