/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190017
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
    var_13 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_4 [0ULL] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_4)) ? (448971193U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)8]))))));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) | ((~(((/* implicit */int) arr_3 [i_0])))))))));
        var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((~(((/* implicit */int) var_4))))));
        arr_5 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [4ULL] [i_0])) && (((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) ((unsigned char) var_2)))));
    }
}
