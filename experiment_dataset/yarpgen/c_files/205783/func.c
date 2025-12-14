/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205783
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
    var_20 = ((/* implicit */unsigned short) var_12);
    var_21 = ((/* implicit */unsigned long long int) var_12);
    var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))));
        var_23 = ((/* implicit */unsigned short) 1997525988U);
        var_24 ^= ((/* implicit */signed char) ((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
}
