/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30425
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
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))))), (((/* implicit */unsigned long long int) arr_0 [i_0])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_6 [(short)4] |= ((/* implicit */signed char) (((_Bool)0) ? (arr_5 [(signed char)8]) : (((/* implicit */unsigned long long int) arr_3 [i_0 - 1]))));
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (short)0))) ? (((((/* implicit */_Bool) var_4)) ? (137338308) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_2 [i_0 - 3]))));
            var_14 = ((/* implicit */short) ((arr_5 [i_1]) ^ (arr_5 [i_1])));
        }
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) < (16777215U)))), (((((/* implicit */unsigned long long int) 9223372036854775807LL)) / (arr_5 [i_2]))))), (((/* implicit */unsigned long long int) 1097889197U))));
            arr_10 [i_2] [i_2] |= ((/* implicit */unsigned int) arr_3 [i_0 - 3]);
        }
    }
    var_16 = ((/* implicit */long long int) min((((/* implicit */short) var_2)), (min((((/* implicit */short) var_8)), (var_9)))));
    var_17 = ((/* implicit */_Bool) 3509317153U);
}
