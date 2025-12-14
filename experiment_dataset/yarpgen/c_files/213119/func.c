/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213119
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) ^ (((/* implicit */int) var_14))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1 + 1] [i_2] = ((/* implicit */signed char) arr_2 [i_2 + 1] [i_0] [i_0]);
                    arr_7 [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23309))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
                    var_19 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_2 - 2] [(short)6]))));
                    arr_8 [i_0] [(signed char)11] [i_2 - 2] [i_2] = ((/* implicit */signed char) ((((unsigned int) var_10)) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1])))))))));
                }
            } 
        } 
        arr_9 [i_0] = (~(((/* implicit */int) (short)-23310)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 17; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((short) arr_10 [i_4 + 1] [i_4 + 1]));
                    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(short)2]))) + (937539419U)))) ? (((/* implicit */int) arr_12 [(_Bool)0])) : (((/* implicit */int) arr_14 [18LL]))));
                    var_22 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [(signed char)12])) ? (((/* implicit */int) arr_12 [8LL])) : (((/* implicit */int) arr_15 [i_3] [(short)14] [i_5])))) % (((((/* implicit */_Bool) (short)-15533)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) var_15))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? ((~(arr_18 [i_7] [i_7]))) : (((/* implicit */int) arr_20 [i_3] [1] [i_3] [i_7 + 1]))));
                    var_24 += ((/* implicit */short) ((_Bool) (signed char)-73));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_7 + 1])) ? (((/* implicit */int) arr_13 [i_7 + 1])) : (((/* implicit */int) arr_13 [i_7 + 1]))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 4; i_8 < 16; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 16; i_9 += 4) 
                        {
                            {
                                var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_3] [i_6] [i_7] [(signed char)14] [i_6])) ? (((/* implicit */int) arr_21 [i_3] [i_6] [10U] [i_8 - 3] [i_6])) : (((/* implicit */int) arr_21 [i_3] [(unsigned char)12] [i_9] [i_8] [i_6]))));
                                arr_27 [i_3] [(unsigned char)18] [(unsigned char)18] [i_8] [i_8] [(signed char)6] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_9 + 3] [i_3] [i_3] [i_7 + 1])) ? (((/* implicit */int) arr_20 [i_9 - 1] [i_3] [i_3] [i_7 + 1])) : (((/* implicit */int) arr_20 [i_9 + 2] [i_3] [i_3] [i_7 + 1]))));
                                var_27 ^= ((((((/* implicit */int) var_4)) >> (((((/* implicit */int) arr_15 [i_9] [(signed char)12] [i_6])) - (189))))) != (((/* implicit */int) (short)15532)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5))));
    }
}
