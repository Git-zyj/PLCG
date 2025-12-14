/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219696
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
    var_11 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [13ULL])) ? (arr_3 [i_0] [4ULL] [i_0]) : (((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */_Bool) arr_2 [(unsigned short)0])) ? (((/* implicit */int) arr_4 [i_0] [(unsigned char)12] [i_1])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (arr_4 [i_0] [0LL] [(unsigned short)6]))))))) ? (((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_2 [i_0])))) ? (arr_3 [(unsigned short)6] [(unsigned short)6] [i_1]) : (((((/* implicit */_Bool) arr_4 [2U] [(unsigned short)12] [i_0 - 1])) ? (arr_3 [i_0] [6LL] [i_0]) : (arr_3 [i_0] [(short)8] [(signed char)6]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [12LL] [12LL])) ? (((/* implicit */int) arr_4 [i_1] [(short)2] [i_0])) : (arr_3 [i_0 - 1] [10U] [i_0 - 1])))) ? (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned char) arr_0 [(unsigned char)12]))))) : (((/* implicit */int) arr_2 [i_1]))))));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [(signed char)4] [i_0] [(short)7])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [(_Bool)1] [i_0] [i_1])))), (((/* implicit */int) arr_4 [8ULL] [i_0] [i_0]))))) ? (arr_3 [i_1] [i_0] [i_0]) : (min((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0 - 1])))), (arr_3 [(short)2] [i_0] [(short)2])))));
                var_13 = ((/* implicit */unsigned char) min((arr_0 [i_0]), (arr_0 [i_0])));
                arr_6 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) (short)16323)) : (((/* implicit */int) (unsigned char)209)))), (((/* implicit */int) (short)16323))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_8 [i_2] [i_2]), (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (arr_8 [i_2] [i_2])))))) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_4])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_4]))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)18315)) ? (4293853701565499483ULL) : (((/* implicit */unsigned long long int) 4049104624U))));
                        var_17 = ((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_16 [i_2])));
                        var_18 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) arr_7 [(unsigned char)5])))), (((((/* implicit */_Bool) arr_15 [i_2] [i_3] [4U] [i_4] [(unsigned char)11] [i_5])) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_10 [i_2]))))))) ? (((/* implicit */int) max((((/* implicit */short) arr_2 [i_2])), (max((((/* implicit */short) arr_12 [i_2] [i_5])), (arr_4 [i_2] [i_3] [i_5])))))) : (((/* implicit */int) arr_1 [5U])));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) arr_21 [i_6]);
                    arr_25 [i_6] [i_7] [i_6] [i_7] = ((((/* implicit */_Bool) arr_22 [(unsigned char)20] [(unsigned char)20] [16])) ? (((/* implicit */int) arr_20 [i_6] [i_6])) : (((/* implicit */int) arr_20 [i_6] [i_6])));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 1; i_9 < 21; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 20; i_10 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_6] [i_7] [i_7] [i_7])) ? (((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (((/* implicit */int) arr_29 [i_6])) : (((/* implicit */int) arr_22 [i_6] [i_8] [(signed char)9])))) : (((/* implicit */int) arr_22 [i_9] [i_7] [i_7]))));
                                var_21 = ((/* implicit */signed char) arr_23 [i_6] [i_6]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */int) arr_27 [i_6] [i_6]);
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_21 [i_6]) ? (((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_19 [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_6] [(signed char)17] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_27 [i_6] [i_6])) : (((/* implicit */int) arr_19 [i_6]))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6]))) : (17877472920679106285ULL)))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 2; i_11 < 23; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                {
                    var_24 ^= ((/* implicit */unsigned long long int) arr_34 [i_6]);
                    var_25 *= ((/* implicit */unsigned char) arr_34 [i_6]);
                }
            } 
        } 
    }
}
