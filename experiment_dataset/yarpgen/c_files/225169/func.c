/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225169
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_11 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1])))) : ((+(((((/* implicit */_Bool) -5737558550112131865LL)) ? (6607601001139495782LL) : (-6607601001139495799LL)))))));
                        arr_13 [(unsigned short)2] [(short)0] [i_1] [(unsigned short)2] = ((/* implicit */short) arr_8 [i_3] [i_2] [i_1] [i_0]);
                        var_12 ^= ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) min((var_1), (var_3)))), (arr_7 [i_0] [i_2] [i_3]))) + (9223372036854775807LL))) >> (((min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (-6607601001139495764LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (6607601001139495802LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) + (6607601001139495800LL)))));
                        var_13 = ((/* implicit */long long int) arr_6 [i_0]);
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2])) ^ (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_10 [i_2] [i_1])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((5720787853268767800LL) < (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_2] [i_1] [i_0]))))))))));
                    }
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))), (min((arr_3 [i_1]), (((/* implicit */unsigned long long int) var_10))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_5)))) : (((/* implicit */int) max((var_4), (var_1)))))) : ((~(arr_9 [i_2] [i_0] [i_0] [i_0]))))))));
                }
                var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_0] [i_0])), (6607601001139495796LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_7))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_12 [i_1]), (arr_12 [i_0])))))))));
                arr_14 [i_0] [i_1] |= ((/* implicit */short) ((((/* implicit */int) var_1)) >> (((arr_10 [i_0] [(signed char)23]) + (7535634495993041155LL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (((~(((7757354703255149335LL) + (((/* implicit */long long int) ((/* implicit */int) var_4))))))) & (((((min((((/* implicit */long long int) (unsigned short)51547)), (var_7))) + (9223372036854775807LL))) >> ((((-(((/* implicit */int) var_3)))) + (40120)))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (((((/* implicit */_Bool) ((var_7) / (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((unsigned int) (signed char)-99))))));
}
