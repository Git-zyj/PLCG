/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200025
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
    var_13 = var_7;
    var_14 = var_12;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] = arr_7 [i_0] [i_1] [i_2 - 2] [i_3 + 1];
                        arr_15 [12U] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) 1470576113U);
                        var_15 = min((arr_2 [i_1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]))))));
                        arr_16 [8ULL] [i_1] [i_1] [2ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_10 [i_3 + 1] [i_3 - 1] [i_3] [i_2 + 1]) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((((/* implicit */_Bool) arr_11 [i_3 + 1] [4U] [i_3 - 1] [i_2 - 2])) ? (arr_8 [i_0] [i_0] [i_2] [i_3]) : (((9091965673731698995ULL) & (8556436399369520501ULL))))) : (((unsigned long long int) arr_11 [i_1] [i_1] [i_2 - 2] [10ULL])));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_0] [i_2 + 1] [i_2 - 2] [i_2]))) ? (((/* implicit */int) ((arr_12 [i_0] [i_1] [i_2] [i_2 - 2]) < (arr_12 [i_0] [16ULL] [11U] [i_2 - 1])))) : (((/* implicit */int) ((arr_8 [i_0] [i_2 - 2] [i_2] [i_2 - 1]) == (((2221129419984816710ULL) & (arr_10 [i_4] [i_4] [i_4] [i_4]))))))));
                        arr_20 [i_4] [i_4] [i_2 + 1] [i_1] [i_0] = ((unsigned int) arr_0 [i_4] [i_2 - 1]);
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (6ULL)));
                        arr_21 [i_4] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                        var_18 = 9091965673731698995ULL;
                    }
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        var_19 &= max((max((((/* implicit */unsigned long long int) ((arr_22 [i_0] [i_0] [i_0] [i_2] [i_5 + 1]) <= (3848290697216ULL)))), (arr_9 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (-(2938346397U)))));
                        arr_25 [i_0] &= (+(6185454879788452797ULL));
                        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_13 [i_0]) : (arr_13 [i_0])))) ? (max((min((((/* implicit */unsigned long long int) 1356620913U)), (18446744073709551613ULL))), (((/* implicit */unsigned long long int) 1356620898U)))) : ((~(arr_1 [i_0] [i_0])))));
                    }
                    for (unsigned int i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        var_21 *= ((/* implicit */unsigned long long int) 981492054U);
                        arr_29 [i_1] [i_1] [i_2] [i_6] |= ((((/* implicit */_Bool) ((29ULL) | (arr_23 [i_0] [i_0] [7ULL] [i_0])))) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_0] [i_6])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_23 [i_0] [i_1] [i_2 + 1] [i_6 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_0] [i_1] [i_2 - 2] [i_6 + 2]) != (arr_23 [i_0] [i_0] [i_2 - 2] [i_6]))))));
                    }
                    arr_30 [i_2] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_2 - 2] [0ULL] [i_2 - 2] [i_2 + 1]))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [0ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 + 1] [i_0])))))) : (((((/* implicit */unsigned long long int) 3818378678U)) * (arr_5 [13ULL] [i_1] [i_1]))))) : (min((((/* implicit */unsigned long long int) 3341866653U)), (arr_11 [2U] [i_2] [i_2 - 1] [i_1]))));
                }
            } 
        } 
        var_22 = ((arr_4 [12U] [i_0]) * (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_23 = ((max((arr_0 [i_0] [i_0]), (3341866653U))) << (((arr_4 [i_0] [i_0]) - (1555332163479801378ULL))));
    }
}
