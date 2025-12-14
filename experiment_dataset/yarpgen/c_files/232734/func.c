/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232734
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) var_13);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) * (((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (-2058116345) : (((/* implicit */int) (signed char)106))))) : (arr_1 [i_0] [i_0])))));
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_5)), (var_11))), (((/* implicit */unsigned int) var_5))))) ? ((+(((/* implicit */int) (unsigned short)8191)))) : (((/* implicit */int) var_1))));
}
