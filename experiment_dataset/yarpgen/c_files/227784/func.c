/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227784
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
    var_14 = ((/* implicit */long long int) var_6);
    var_15 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) arr_0 [i_0]);
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_18 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((long long int) arr_1 [i_1]));
        arr_7 [10LL] = ((/* implicit */long long int) arr_2 [i_1]);
        var_19 = ((/* implicit */signed char) arr_0 [i_1]);
    }
}
