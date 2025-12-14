/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232739
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
    var_16 = ((/* implicit */_Bool) var_0);
    var_17 |= ((/* implicit */unsigned short) max((((/* implicit */long long int) var_6)), (max((((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) var_14))))), (var_15)))));
    var_18 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (arr_0 [i_0] [i_0 + 2]) : (arr_0 [i_0] [i_0 + 1]))), (((/* implicit */long long int) ((var_7) || (((/* implicit */_Bool) arr_1 [i_0] [i_0 + 2])))))));
        var_20 = min((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) arr_1 [i_0 + 3] [i_0 + 3])) : ((+(3678457743986469489LL))))), (-2138986699867828933LL));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        arr_13 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_2 + 2] [i_1] [(signed char)0]);
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_0)) ? (arr_4 [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                        arr_15 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (-(arr_4 [i_1] [i_1])));
                    }
                    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) && (((/* implicit */_Bool) arr_2 [i_1 + 1]))));
                        arr_19 [i_1] = ((/* implicit */int) arr_2 [i_5]);
                        arr_20 [i_1] [i_3] [i_5] = ((/* implicit */short) arr_16 [i_1] [i_1] [i_1] [i_3] [i_5]);
                    }
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_22 = (!(((/* implicit */_Bool) arr_23 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                        arr_24 [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_2 + 2])) && (((/* implicit */_Bool) var_11))));
                        arr_25 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (arr_1 [i_1 + 1] [i_1 + 1])));
                    }
                    arr_26 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_2 + 2] [i_2] [i_3] [i_2])) >> (((((/* implicit */int) arr_12 [i_2 - 1] [i_2] [i_3] [i_3])) - (96)))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 12; i_7 += 2) 
                    {
                        for (int i_8 = 3; i_8 < 13; i_8 += 2) 
                        {
                            {
                                arr_33 [i_2] [i_2 + 2] [i_1] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7 + 1] [i_7] [i_8] [i_8] [i_8 - 1] [i_8])) || (((/* implicit */_Bool) arr_32 [i_8] [i_1 - 1] [i_1]))));
                                var_24 ^= ((/* implicit */unsigned short) (((_Bool)1) ? (((17189938199656388769ULL) >> (((((/* implicit */int) arr_31 [i_3] [i_2] [i_3] [i_2])) - (22517))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1 - 1] [i_2 + 2] [i_7 - 1] [i_7 + 1] [i_7])))));
                                var_25 = ((/* implicit */unsigned short) ((arr_1 [i_1 - 1] [i_2 + 2]) << (((arr_1 [i_1 + 1] [i_2 + 1]) - (201890409U)))));
                            }
                        } 
                    } 
                    arr_34 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)34436)))) ? (((((/* implicit */_Bool) 17189938199656388769ULL)) ? (((/* implicit */long long int) arr_4 [i_2] [i_3])) : (-2138986699867828933LL))) : (((/* implicit */long long int) 1788113674U))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 2; i_9 < 10; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_3] [i_2 + 1] [i_2 - 1] [i_1 + 1])))))));
                                var_27 = ((/* implicit */unsigned long long int) ((-3678457743986469479LL) / (((/* implicit */long long int) -1345165964))));
                                var_28 = ((/* implicit */long long int) max((var_28), (((3678457743986469462LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21970)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_32 [i_1] [i_1 - 1] [i_1 + 1]))));
        var_30 = ((/* implicit */unsigned long long int) (+(arr_22 [i_1] [i_1] [(short)1] [i_1] [i_1 + 1] [i_1])));
    }
}
