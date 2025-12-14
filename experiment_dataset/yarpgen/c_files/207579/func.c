/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207579
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
    var_18 = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) ((signed char) var_14))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)0));
        arr_5 [i_0] [i_0] = ((/* implicit */int) (((~(var_9))) < ((+(((/* implicit */int) var_3))))));
        arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_16))) ? ((-(var_0))) : (((/* implicit */unsigned int) ((var_9) + (((/* implicit */int) var_10)))))));
    }
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) var_15)))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12)))) / (max((var_2), (var_6)))))));
}
