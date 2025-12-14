/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41487
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_9)) != (((((18446744073709551610ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13686))))) ^ ((~(var_4)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_11 = (+(((/* implicit */int) arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 16744448U)) && (((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0]), (arr_2 [i_0]))))) : (min((((((/* implicit */_Bool) 220666215U)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (0LL))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)28)))))))));
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((arr_1 [i_1] [i_1 + 1]) + (arr_1 [i_1] [i_1 + 1]))) << (((max((((/* implicit */unsigned long long int) 220666213U)), (arr_1 [i_1] [i_1 + 1]))) - (2326282650728161181ULL)))));
        arr_7 [i_1 + 1] [i_1] = ((/* implicit */signed char) arr_2 [i_1 + 1]);
        var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -8615158701310932663LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) : (-8615158701310932689LL))) <= (4522195246373176638LL)));
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967295U)) | (950170740725429984ULL))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 2; i_3 < 9; i_3 += 3) 
            {
                var_14 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)37132)) : (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) == (((/* implicit */int) ((var_4) < (var_4))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 7; i_5 += 1) 
                    {
                        {
                            var_15 = (+(((/* implicit */int) var_1)));
                            var_16 &= ((((/* implicit */int) arr_0 [i_1 + 1])) >> (((((/* implicit */int) arr_0 [i_1 + 1])) - (243))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (var_6) : (((/* implicit */long long int) var_7))));
                var_18 = ((/* implicit */signed char) ((arr_12 [i_1] [i_2] [i_3 + 1]) | (arr_12 [i_1] [i_1] [i_1])));
            }
            arr_18 [i_1] [i_2] = ((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 1]);
            arr_19 [i_1] [(unsigned char)9] [i_1] = ((/* implicit */int) (!(((14ULL) < (((/* implicit */unsigned long long int) 4522195246373176642LL))))));
        }
    }
}
