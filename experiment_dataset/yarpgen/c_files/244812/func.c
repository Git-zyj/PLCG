/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244812
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
    var_20 &= ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) 18446744073709551615ULL);
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
            arr_6 [i_0] = ((/* implicit */short) (unsigned char)128);
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) 11744761616121421780ULL);
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((int) arr_3 [i_2] [i_0] [i_2])))));
        }
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_0]), (arr_8 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) var_16)) ? (arr_8 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
        var_25 += ((/* implicit */int) ((((((((/* implicit */_Bool) arr_3 [22ULL] [2] [22ULL])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0])))) || ((!(((/* implicit */_Bool) var_4)))))) ? (max((max((18013298997854208ULL), (2108056529919121344ULL))), (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_26 ^= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22219))) : (var_9))) / (((/* implicit */unsigned long long int) var_1)))) / (max((((/* implicit */unsigned long long int) arr_7 [i_0])), (((4ULL) << (((1392384774) - (1392384722)))))))));
    }
    var_27 = ((/* implicit */unsigned long long int) var_15);
}
