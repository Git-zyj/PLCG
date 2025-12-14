/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242347
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
    var_10 -= ((/* implicit */_Bool) max((((var_2) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (unsigned char)255)))))), (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_11 += ((/* implicit */short) (+(((var_5) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)29152))))))))));
        var_12 *= ((/* implicit */unsigned long long int) var_7);
        var_13 = (unsigned short)29152;
    }
    var_14 = ((/* implicit */short) var_9);
    var_15 |= ((/* implicit */short) var_7);
    var_16 = ((/* implicit */_Bool) var_1);
}
