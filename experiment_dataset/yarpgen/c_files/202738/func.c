/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202738
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_11 = max((min((((/* implicit */long long int) var_1)), ((~(var_5))))), (var_6));
        var_12 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)32765))) < (min((((((/* implicit */_Bool) var_5)) ? (var_6) : (var_4))), ((-(var_7)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_13 = ((/* implicit */long long int) (_Bool)1);
            arr_6 [i_1] [i_2] |= ((/* implicit */unsigned long long int) var_4);
        }
        for (int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (_Bool)1))));
            var_15 = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_3]))) - (arr_9 [i_1 - 1] [i_3] [21ULL])))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (unsigned char i_5 = 4; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_16 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_1 - 1] [i_5 - 4]))));
                        var_17 *= ((/* implicit */long long int) (_Bool)1);
                        var_18 ^= ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-5129638305564669872LL)))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 4) 
        {
            arr_18 [i_1] [i_6] = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 4; i_7 < 23; i_7 += 2) 
            {
                var_19 = (_Bool)1;
                var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_6] [i_6 + 3] [i_7] [(unsigned char)17] [(signed char)16])) ? (((/* implicit */long long int) ((int) var_0))) : (arr_12 [i_1] [i_1 + 1] [i_6 + 1] [i_7 + 2])));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_10)) - (88))))))));
            }
            var_22 = ((/* implicit */unsigned int) arr_3 [i_6]);
            var_23 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned long long int i_8 = 3; i_8 < 22; i_8 += 1) 
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (8092992402595274385ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37)))))) ? (arr_10 [i_1 - 1] [i_1 + 1] [i_8 + 1] [i_8 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [i_8 + 2] [i_8 + 2])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))))));
            var_25 = ((((/* implicit */_Bool) 789435472U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17137))) : (4049649652726367431ULL));
        }
        arr_23 [i_1] = var_8;
    }
    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (3302927331U)));
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_13 [18ULL] [i_9] [i_9] [i_9] [i_9])) * (14360156925031104623ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)228)), ((unsigned short)42641))))) : (arr_13 [i_9] [i_9] [i_9] [i_9] [i_9])));
    }
    for (short i_10 = 2; i_10 < 13; i_10 += 1) 
    {
        arr_32 [i_10] = ((((/* implicit */_Bool) (~(arr_30 [i_10 + 2] [i_10 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (2695221599U)))) : (((((/* implicit */_Bool) arr_30 [i_10 - 1] [i_10 + 2])) ? (arr_30 [i_10 - 1] [i_10 - 1]) : (arr_30 [i_10 - 2] [i_10 + 1]))));
        /* LoopNest 2 */
        for (long long int i_11 = 3; i_11 < 11; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                {
                    arr_39 [i_10] [i_11 - 3] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */long long int) var_3))))) ? (((/* implicit */unsigned long long int) 9085634981880839318LL)) : (((((/* implicit */_Bool) arr_25 [i_11] [i_12])) ? (9892901107989743132ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8092992402595274385ULL))))))))));
                    arr_40 [i_10] [i_10] [i_12] [i_12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_24 [i_12])) != (((/* implicit */int) ((_Bool) (signed char)7))))))));
                    var_28 = ((/* implicit */short) max((471320960U), (((/* implicit */unsigned int) 520712353))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */signed char) var_9);
}
