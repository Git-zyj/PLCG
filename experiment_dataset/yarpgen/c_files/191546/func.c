/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191546
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-891865423) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (unsigned char)144))));
        arr_2 [(short)11] [(unsigned char)18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 15958442927355529739ULL))) ? ((+(var_4))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)72)))))))) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) (unsigned char)64))))));
}
