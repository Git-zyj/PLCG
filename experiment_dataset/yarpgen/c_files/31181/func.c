/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31181
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = arr_1 [i_0];
        arr_3 [10LL] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_2 [(_Bool)1] [i_0 - 1]))));
        arr_4 [i_0] [i_0] = ((arr_0 [i_0 - 1]) && (((/* implicit */_Bool) var_13)));
    }
    var_18 = ((/* implicit */_Bool) (((+(((/* implicit */int) var_0)))) << (((/* implicit */int) ((short) (_Bool)1)))));
}
