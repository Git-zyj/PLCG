/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223349
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), (max((((/* implicit */unsigned short) var_11)), (var_5)))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6811597204601647611ULL)) ? (7855734032837589075ULL) : (((/* implicit */unsigned long long int) var_3))))) ? (var_0) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] [(signed char)8] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) : (arr_1 [i_0] [i_0]));
        var_14 -= ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_3))));
}
