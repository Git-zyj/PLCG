/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246181
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
    var_19 = ((/* implicit */unsigned short) (unsigned char)0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_20 = ((((/* implicit */_Bool) (unsigned char)40)) ? (arr_3 [i_0 + 2] [i_0 - 1]) : (arr_3 [i_0 + 1] [i_0]));
        arr_4 [i_0] = ((unsigned short) (unsigned char)62);
    }
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        var_21 = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_18), (((/* implicit */unsigned short) (unsigned char)0)))))) : (((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60975))) : (2973728239U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) (unsigned short)49392)) : (((/* implicit */int) (unsigned char)143))))));
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37117)) >> (((((/* implicit */int) (unsigned short)49364)) - (49353)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16144))) : (min((((/* implicit */unsigned int) ((unsigned short) 3941685730U))), (4294967280U))));
    }
}
