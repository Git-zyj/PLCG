/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204862
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            var_11 = ((((arr_0 [i_0]) ? (((/* implicit */long long int) 766298516)) : (arr_2 [i_0] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))));
            var_12 = ((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_0] [2LL]));
            var_13 += ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(unsigned char)16] [i_1])) ? (arr_2 [8U] [i_1]) : (arr_2 [(unsigned char)22] [i_1 - 1])));
        }
        var_14 = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_0]) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_3 [(unsigned char)16] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : (((long long int) arr_3 [i_0] [(signed char)2]))));
    }
    var_15 += ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_7))));
}
