/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35832
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
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)99))))) + (arr_3 [i_0] [i_0]))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (unsigned char)204)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 3) /* same iter space */
                    {
                        var_13 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_3 - 1])))) ? (((/* implicit */int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) arr_11 [12ULL] [(short)16] [i_2] [i_0])))))) : (((/* implicit */int) arr_6 [i_3 - 1] [i_1 - 1]))));
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [i_3 - 1] [i_2 + 1])) ? (((/* implicit */int) (unsigned char)216)) : (arr_8 [i_0] [i_1 - 1] [i_3 - 1] [i_2 + 3])));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 1; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [(signed char)0] [i_2 + 2])) ? (arr_5 [i_1 - 1] [4U] [i_2 + 2]) : (arr_5 [i_1 - 1] [12LL] [i_2 + 2])));
                        var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) arr_7 [i_4 + 1] [i_2 + 1])) : (var_0)));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 4) 
    {
        for (unsigned char i_6 = 3; i_6 < 20; i_6 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        for (short i_9 = 2; i_9 < 19; i_9 += 3) 
                        {
                            {
                                arr_31 [i_5] = ((/* implicit */unsigned char) arr_22 [i_5 + 1]);
                                var_17 ^= ((/* implicit */short) 13359241741793776457ULL);
                                arr_32 [(signed char)0] [i_5] [(unsigned char)16] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5]))) : (arr_22 [i_5 + 1])));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((arr_30 [i_6 - 2] [i_6 - 3] [i_6 + 1] [i_6 + 1] [i_5 + 1]) ? (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_5]))))) : (arr_16 [i_5 - 1] [i_5 + 1]))))));
                }
                arr_33 [i_5] = ((max((((/* implicit */unsigned long long int) arr_24 [i_5])), (arr_26 [i_6] [i_6] [i_6 - 3] [i_6] [i_5 - 1] [i_5 + 1]))) + (((((/* implicit */_Bool) (unsigned char)216)) ? (arr_26 [i_5] [i_5] [i_5] [5ULL] [(unsigned short)1] [i_5 + 1]) : (arr_26 [17U] [i_6] [(short)17] [0U] [i_5 + 1] [i_6]))));
                var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_28 [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5]), (arr_28 [4LL] [i_5] [i_5 - 1] [i_6] [i_5]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((var_3) * (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (var_11))))));
    var_21 = ((/* implicit */unsigned short) var_9);
}
