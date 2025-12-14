/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243411
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_1)))))));
    var_13 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1 - 1])) > (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            var_15 = ((long long int) 528960514U);
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (+((-9223372036854775807LL - 1LL))));
        }
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45775)) ? (arr_1 [i_0 - 2] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1])))));
        var_17 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (5702446837986215202LL) : (((((/* implicit */_Bool) 4220810984U)) ? (((/* implicit */long long int) var_1)) : (arr_1 [8ULL] [i_0]))));
    }
}
