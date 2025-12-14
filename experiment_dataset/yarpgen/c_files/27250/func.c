/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27250
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
    var_17 = ((/* implicit */unsigned long long int) (-(((unsigned int) ((unsigned long long int) 2550141631U)))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (var_10)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_19 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((2550141631U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))))));
            arr_5 [i_1] [i_0] = arr_4 [i_0 - 1];
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            arr_17 [(unsigned char)2] [i_2] [i_3] [12ULL] |= 2924460362U;
                            arr_18 [i_0] [13ULL] [i_0] [i_3] [13ULL] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)200)) || (((/* implicit */_Bool) 4294967295U))))) >= ((~(((/* implicit */int) (unsigned char)225))))));
                        }
                    } 
                } 
            } 
        }
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_0 [12U])) : (((/* implicit */int) (unsigned char)231))));
        var_21 *= ((arr_13 [i_0 + 1] [i_0 - 1] [9ULL] [i_0 - 1] [i_0 - 1]) ^ (arr_13 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    var_22 *= ((unsigned char) arr_21 [i_7]);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 3; i_8 < 12; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((10U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171)))));
                                arr_33 [i_5] [i_5] [i_5] [i_5] [(unsigned char)11] = ((/* implicit */unsigned long long int) ((unsigned char) (+(arr_29 [0U] [i_5] [i_8] [i_9]))));
                                var_24 &= (+(8388797397410002072ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) (~((+(arr_2 [i_5])))));
    }
    for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 4) 
    {
        arr_37 [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_35 [i_10 - 1] [i_10 - 1])) ? (arr_35 [i_10 + 2] [12U]) : (arr_35 [i_10 + 3] [i_10 + 3]))) + ((-(arr_35 [i_10] [i_10 - 1])))));
        var_26 = ((/* implicit */unsigned long long int) 1744825675U);
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 3) 
        {
            for (unsigned char i_12 = 1; i_12 < 21; i_12 += 1) 
            {
                {
                    arr_43 [i_12] [i_11 + 1] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) 5116279557912250060ULL))) > (((unsigned long long int) arr_39 [(unsigned char)19] [(unsigned char)19] [i_10 + 1]))));
                    var_27 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))) % (4194303U)));
}
