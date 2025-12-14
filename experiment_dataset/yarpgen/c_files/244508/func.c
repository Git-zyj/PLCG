/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244508
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_8)))))));
        var_13 &= ((((arr_1 [(unsigned short)12]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) >= (((/* implicit */unsigned int) var_2)));
        arr_4 [i_0] = ((((/* implicit */int) var_9)) < (((/* implicit */int) var_7)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_14 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_1))));
        var_15 = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
    }
    var_16 = var_12;
}
