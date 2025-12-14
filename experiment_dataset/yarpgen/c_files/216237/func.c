/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216237
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_20 = max((max((max((-6824183270827875707LL), (arr_3 [i_2]))), (min((-7851961955417938552LL), (arr_1 [i_0] [i_1]))))), (((long long int) arr_0 [i_0 - 1] [i_0 + 3])));
                    var_21 = (((((+(var_5))) + (arr_6 [i_0] [i_0 + 4]))) / ((+((-(-2568211131721744032LL))))));
                }
            } 
        } 
    } 
    var_22 = var_2;
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_5 = 1; i_5 < 12; i_5 += 2) 
                {
                    var_23 = ((max((var_2), (arr_8 [i_3]))) | ((~(arr_8 [i_3]))));
                    arr_14 [4LL] [i_4] |= ((long long int) (~(var_4)));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 3; i_7 < 14; i_7 += 1) 
                    {
                        arr_21 [0LL] [10LL] [10LL] |= ((((/* implicit */_Bool) arr_20 [i_7 - 1] [i_7 - 1] [14LL] [i_7 - 2])) ? ((~(arr_13 [i_3] [8LL] [i_6] [10LL]))) : (arr_10 [i_7 - 1] [i_7 - 2] [2LL]));
                        var_24 = ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7 - 2] [i_3])) ? ((~(1673518731089315327LL))) : (arr_11 [4LL]));
                    }
                    var_25 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_2))))));
                    arr_22 [i_3] [i_3] = (i_3 % 2 == zero) ? (((((arr_9 [i_3] [i_3]) >> (((arr_19 [i_3] [i_4] [i_6] [i_3]) + (2889629293853053055LL))))) | (((long long int) arr_20 [i_3] [i_4] [i_3] [i_3])))) : (((((((arr_9 [i_3] [i_3]) + (9223372036854775807LL))) >> (((arr_19 [i_3] [i_4] [i_6] [i_3]) + (2889629293853053055LL))))) | (((long long int) arr_20 [i_3] [i_4] [i_3] [i_3]))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 11; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) min((var_26), (var_0)));
                                var_27 = (+(((long long int) arr_15 [i_3])));
                                var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 216030760272062991LL)) ? (1673518731089315325LL) : (var_0)))) ? (arr_16 [i_8 - 2] [i_8 + 3]) : (((((/* implicit */_Bool) -1673518731089315328LL)) ? (-25LL) : (-1LL))));
                                arr_29 [i_3] [6LL] [i_6] [i_8 - 1] [i_8] = ((long long int) ((var_3) ^ (arr_18 [7LL] [i_6] [i_4])));
                            }
                        } 
                    } 
                }
                for (long long int i_10 = 1; i_10 < 14; i_10 += 3) 
                {
                    arr_33 [8LL] [i_4] [8LL] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((+(var_6))))))));
                    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_30 [i_10 + 1] [i_10 - 1] [i_10] [i_10]), (arr_30 [i_10 - 1] [i_10 - 1] [i_10] [12LL]))))));
                }
                var_30 = (~(max((var_6), (((long long int) var_5)))));
                var_31 = (i_3 % 2 == zero) ? (max((((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (max((var_15), (arr_23 [i_3] [5LL] [i_3]))) : (4692524658400179880LL))), (((var_13) - (arr_9 [i_3] [i_3]))))) : (max((((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (max((var_15), (arr_23 [i_3] [5LL] [i_3]))) : (4692524658400179880LL))), (((var_13) + (arr_9 [i_3] [i_3])))));
            }
        } 
    } 
    var_32 = var_18;
}
