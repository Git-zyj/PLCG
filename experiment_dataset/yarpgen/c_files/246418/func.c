/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246418
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
    var_12 |= ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned char) ((18446744073709551613ULL) ^ (((/* implicit */unsigned long long int) 619211154U))));
                        var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_15 += ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_10 [i_0 - 1])) : (var_6));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1] [16ULL])) : (((/* implicit */int) arr_3 [i_1] [i_2 - 1] [(unsigned char)1]))));
                    }
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 23; i_5 += 1) 
                    {
                        var_17 += ((((_Bool) (_Bool)1)) ? ((~(((/* implicit */int) (signed char)0)))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [23] [i_0] [i_1])) ? (1050279458) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_5 + 1])))));
                        arr_19 [i_0] [i_1] [i_5] [i_2] [i_0] = ((/* implicit */int) ((unsigned short) (_Bool)1));
                    }
                    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) max((arr_15 [i_0] [i_0 - 1] [i_2 + 1] [20ULL] [10LL]), (arr_15 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_2] [(signed char)0])))) == (((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 1] [i_2 - 1] [i_2] [i_2 - 1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14931)))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) max((max((var_1), (((/* implicit */long long int) arr_10 [i_0 - 1])))), (((/* implicit */long long int) ((_Bool) var_6)))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (signed char i_7 = 2; i_7 < 21; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    {
                        arr_28 [i_0] [i_0] [i_8] [3LL] [i_0 - 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) arr_10 [i_8]))), (((arr_22 [i_7 - 2] [i_6] [i_7 + 1] [i_8]) ? (arr_10 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 - 1] [16ULL] [i_7] [16ULL])))))));
                        arr_29 [i_0 - 1] [i_8] [i_6] [i_6] [i_7 + 3] [15ULL] = arr_26 [i_7 + 2] [i_7 + 1] [i_7 - 2] [i_7 + 3];
                        var_20 += ((/* implicit */long long int) (short)1021);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        var_21 = ((/* implicit */long long int) (+(arr_30 [i_9])));
        var_22 = ((/* implicit */_Bool) ((signed char) var_3));
    }
}
