/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194920
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
    var_14 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((min((3464125115409773010ULL), (14982618958299778606ULL))) <= (((/* implicit */unsigned long long int) (-(var_6))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) || (((/* implicit */_Bool) 964788692916574600LL))))) : (((/* implicit */int) var_2)))) * (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 2])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_15 = ((short) ((arr_0 [i_0] [i_2]) << (((((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */unsigned long long int) 964788692916574574LL)) : (arr_7 [10] [i_1] [i_2] [12LL]))) - (964788692916574529ULL)))));
                    arr_8 [i_0] = ((/* implicit */unsigned char) min(((~(max((14982618958299778587ULL), (arr_7 [i_0] [(short)2] [i_0 + 2] [9U]))))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) arr_4 [i_0])))))));
                    var_16 = ((/* implicit */long long int) ((arr_7 [i_0 + 1] [i_0] [i_0] [i_0 + 1]) << (((((((/* implicit */_Bool) 3464125115409773010ULL)) ? (var_1) : (((/* implicit */int) var_4)))) - (806658579)))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_4 [i_0]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_18 = ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_3] [i_3]))))) ^ (arr_9 [i_3] [i_3]));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (long long int i_5 = 3; i_5 < 22; i_5 += 2) 
            {
                {
                    arr_17 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5 - 2] [i_5 - 2] [i_5])) ? (arr_16 [i_5 + 1] [i_5] [i_5]) : (arr_16 [i_5 - 2] [i_5 - 3] [i_5])));
                    var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (arr_14 [i_5 - 2] [i_5 - 3])));
                    arr_18 [i_5] [i_5] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5 + 2] [i_5] [i_5 - 3])) && (((/* implicit */_Bool) (unsigned char)195))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16332290456445340731ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-86)) ^ (((/* implicit */int) (short)-6066))))) : (max((var_13), (((/* implicit */unsigned long long int) var_8))))))) ? (((((((/* implicit */_Bool) (short)-6078)) ? (var_13) : (((/* implicit */unsigned long long int) -1392483789)))) ^ (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) -1310771935)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1392483785) | (var_0)))) ? (((/* implicit */long long int) ((int) 3402645459U))) : (max((-5904305664498741325LL), (((/* implicit */long long int) var_3)))))))));
}
