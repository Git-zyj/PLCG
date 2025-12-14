/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198293
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
    var_20 -= ((/* implicit */unsigned int) (unsigned char)226);
    var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7))))) ? (max((4030714951U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17))))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)36914)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)18425)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) var_3);
        var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1]))))) : (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) var_9)))))), (((/* implicit */unsigned int) min((var_7), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)45))))))))));
    }
}
