/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210397
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) 571957152676052992LL);
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)10))))) || (((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) arr_3 [i_0])))))));
    }
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)-122)))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))))), (var_13)));
    var_18 |= ((/* implicit */int) min((((((/* implicit */long long int) ((var_0) - (var_8)))) - (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (126LL))))), ((-(((((/* implicit */_Bool) 17530311962986718648ULL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    var_19 = (~(((/* implicit */int) var_10)));
}
