/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218511
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
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 2] [(unsigned short)2])) - (((/* implicit */int) arr_0 [i_0 - 1] [i_0]))))) ? (max((((/* implicit */int) max((arr_2 [i_0 + 2] [i_0 + 1]), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(signed char)11] [i_0])))))) : (((((/* implicit */_Bool) arr_1 [i_0] [(signed char)4])) ? ((+(((/* implicit */int) arr_0 [(unsigned char)18] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) arr_2 [i_0 + 3] [i_0])))))))));
        var_12 = ((/* implicit */unsigned short) (~(((((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) arr_2 [i_0] [i_0])))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0 + 2]))))));
        arr_3 [i_0 + 3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 3] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 3])))), ((+(((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1]))))));
    }
    var_13 *= var_4;
}
