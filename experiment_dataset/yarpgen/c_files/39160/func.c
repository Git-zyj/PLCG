/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39160
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [(unsigned char)9] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_17))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((((int) var_11)) != (((/* implicit */int) var_18))))));
        arr_5 [i_0] [i_0] = ((unsigned short) (unsigned short)39659);
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))))))));
        var_22 = ((/* implicit */unsigned short) ((((unsigned int) var_4)) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))))));
    }
    var_23 = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */short) ((signed char) var_3))), (((short) var_9)))));
    var_24 = ((/* implicit */_Bool) ((long long int) var_17));
}
