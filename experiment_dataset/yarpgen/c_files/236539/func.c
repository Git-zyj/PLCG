/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236539
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                var_20 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) min((arr_3 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)-32284)), (arr_5 [i_0] [i_0] [i_0])))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))) | (arr_0 [i_0]))) - (1143496661U))))))))) : (((/* implicit */unsigned char) min((arr_3 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)-32284)), (arr_5 [i_0] [i_0] [i_0])))) >> (((((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))) | (arr_0 [i_0]))) - (1143496661U))) - (176539625U)))))))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_0])) > (((unsigned long long int) arr_1 [i_0]))))) * (((/* implicit */int) arr_4 [i_1] [i_0]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((2633337797U) - (1661629499U)))) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (arr_2 [(short)15] [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2] [i_2])) % (((/* implicit */int) (short)32269)))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_2]);
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) 
        {
            arr_13 [(_Bool)0] |= ((/* implicit */long long int) (short)32294);
            arr_14 [i_2] [i_2] = ((/* implicit */short) ((unsigned long long int) arr_2 [i_3 - 2] [i_2]));
            arr_15 [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) (-(3696911915U)));
            var_22 = ((/* implicit */short) ((arr_0 [i_2]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_2] [i_2] [i_3])))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) arr_12 [i_2])))));
            arr_20 [i_2] [i_2] [i_2] = ((/* implicit */short) (+(arr_8 [i_2])));
            arr_21 [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2])) && (((/* implicit */_Bool) arr_5 [i_2] [(unsigned short)0] [i_4]))))) << (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2]))) / (arr_6 [i_4])))));
        }
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_5]))));
            arr_25 [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_3 [i_5]) | (((/* implicit */unsigned int) arr_16 [i_2]))));
            arr_26 [i_2] = ((/* implicit */int) arr_11 [i_2]);
            arr_27 [i_2] [i_2] [i_2] = ((/* implicit */short) arr_6 [i_5]);
        }
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 2; i_8 < 24; i_8 += 1) 
                {
                    {
                        arr_34 [i_2] [i_2] [i_2] [i_2] = (short)24576;
                        var_25 ^= ((/* implicit */short) (-(arr_0 [22LL])));
                        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) 14175212478527087937ULL)))));
                        arr_35 [i_2] [i_6] [i_2] = ((/* implicit */unsigned int) ((long long int) ((unsigned char) arr_3 [i_6])));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                {
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_31 [i_2] [i_2] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 3; i_11 < 22; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            {
                                arr_46 [i_2] [i_9] [i_10] [i_2] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_42 [i_9] [i_11] [i_11 - 3] [i_11]))));
                                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_18 [i_2] [i_12]) ? (((/* implicit */int) arr_19 [i_2])) : (((/* implicit */int) arr_4 [i_9] [i_9])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
