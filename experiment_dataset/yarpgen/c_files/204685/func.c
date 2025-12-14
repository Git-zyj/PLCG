/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204685
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
    var_17 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) < (max((((/* implicit */unsigned long long int) var_14)), (var_13))))) ? (max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */long long int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 1])));
        var_19 = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_0 + 2]));
        var_20 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) -1319710498)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_0 [i_0 - 3])));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((int) (unsigned char)8)))));
        var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34683)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_1 [i_1 + 1]))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (signed char i_5 = 1; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_2)) == (var_5)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 524287U)))))));
                                var_25 = ((/* implicit */unsigned short) ((int) arr_8 [i_1] [i_1] [i_1] [i_3 + 1]));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) min((var_26), (((int) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))))));
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 12; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52493))) * (arr_21 [i_3] [i_3] [i_3])));
                                var_28 += ((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_1 + 2] [i_6 - 1] [i_1 + 2] [i_6 - 3]))));
                                arr_22 [i_1 + 4] [i_1] [i_1] [(unsigned char)4] [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_7)))))));
                                var_29 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_7)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 12; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (unsigned char)232)) : (arr_28 [i_1 - 2] [i_1 - 2] [(signed char)2] [i_8 - 1])));
                                arr_29 [i_1] [i_2] [i_3] [i_1] [i_9] = ((/* implicit */unsigned long long int) ((int) ((arr_23 [i_1] [i_2] [12] [i_1]) * (((/* implicit */unsigned long long int) var_3)))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_1 + 4] [i_1] [i_3])) / (var_6)));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_10 = 2; i_10 < 7; i_10 += 1) 
    {
        for (signed char i_11 = 1; i_11 < 10; i_11 += 3) 
        {
            {
                arr_34 [i_10] [i_11] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned char) var_10)), (arr_32 [i_10] [i_10 + 1] [i_10 + 4])))))));
                var_32 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) (unsigned short)13031))));
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    var_33 += ((/* implicit */unsigned short) 1U);
                    arr_38 [i_10] [i_10 - 1] [i_11] [i_12] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (arr_21 [i_10 + 3] [i_10 + 4] [i_11]))), (max((arr_21 [i_10] [i_10 - 2] [i_12]), (((/* implicit */unsigned int) arr_36 [i_11 - 1] [i_11 + 1] [i_11] [i_11 + 1]))))));
                }
            }
        } 
    } 
}
