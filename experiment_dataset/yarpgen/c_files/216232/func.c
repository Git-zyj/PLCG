/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216232
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)21)) ? (((((/* implicit */_Bool) (signed char)-5)) ? (336509186U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2383))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
            var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        }
        arr_6 [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_8))));
    }
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) var_4)))))));
}
