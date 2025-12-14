/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193173
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
    var_15 &= ((/* implicit */signed char) min((((/* implicit */unsigned short) var_6)), (min((((/* implicit */unsigned short) var_8)), (var_11)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((((long long int) var_8)) <= (arr_1 [i_0] [i_0])));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (arr_1 [i_0] [i_0])));
        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_14))));
        var_17 = ((/* implicit */unsigned int) var_5);
        arr_6 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
    }
}
