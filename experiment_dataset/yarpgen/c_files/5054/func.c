/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5054
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
    var_18 = ((/* implicit */unsigned int) ((4294967295U) > (127U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        arr_2 [(_Bool)0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [2U])) >> (((((/* implicit */int) ((unsigned short) var_1))) - (14250)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((var_9) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [(unsigned short)2] [(unsigned short)2] = ((/* implicit */int) ((short) arr_1 [(unsigned short)10]));
        arr_5 [(short)12] = ((/* implicit */short) ((((/* implicit */unsigned int) var_15)) + (125U)));
    }
}
