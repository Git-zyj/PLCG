/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50725
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((arr_1 [i_0] [i_0]) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (-1923322386) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) (unsigned short)60115)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_2 [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) arr_1 [0ULL] [i_0]);
    }
    var_16 = ((/* implicit */long long int) var_3);
}
