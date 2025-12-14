/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21526
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4462))) / ((((_Bool)1) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (18446744073709551615ULL)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 2])) ? (arr_2 [i_0 - 2] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        var_16 = ((/* implicit */unsigned long long int) (~(var_3)));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_17 = ((/* implicit */_Bool) ((long long int) ((unsigned int) var_2)));
        arr_8 [i_1] [i_1] = ((/* implicit */short) 3613732693U);
    }
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)41)) / (((/* implicit */int) var_5)))))) - (((/* implicit */int) (unsigned char)215))));
    var_19 = ((/* implicit */int) var_0);
}
