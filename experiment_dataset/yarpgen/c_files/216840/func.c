/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216840
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((unsigned short) arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [2LL]) : (arr_1 [i_0])))) ? (1958784926) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    var_11 = ((/* implicit */unsigned short) 1958784918);
    var_12 ^= ((/* implicit */unsigned short) var_0);
}
