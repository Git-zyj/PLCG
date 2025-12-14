/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222698
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = max(((-(((/* implicit */int) arr_1 [i_0] [i_0])))), (((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [(unsigned char)7])))));
        var_11 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 4; i_2 < 16; i_2 += 1) 
        {
            for (unsigned char i_3 = 3; i_3 < 15; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_12 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_7 [i_1] [i_2 + 1] [i_2 - 3] [i_2 - 3])))) ? (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (unsigned char)254)))) : (((/* implicit */int) arr_7 [i_4] [(unsigned char)6] [i_2 - 3] [i_1]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1] [i_3 - 1] [i_3] [i_3] [i_5] [i_4]))));
                            arr_16 [i_1] [i_2] [i_3] [(unsigned short)11] [i_3 - 2] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_2 - 4] [i_2 - 4]))));
                        }
                        arr_17 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((((arr_15 [i_1] [i_1] [i_1] [i_4]) / (arr_0 [i_4]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_3 - 3]) < (((/* implicit */unsigned long long int) ((unsigned int) 4027039705U)))))))));
                        var_14 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) ((arr_6 [i_1] [(signed char)13] [i_4]) >= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_3] [i_3 + 2] [i_1] [i_4])))))))) + (2147483647))) << (((((arr_4 [i_3 - 2]) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]))))))) - (10405541031030897804ULL)))));
                    }
                } 
            } 
        } 
        arr_18 [i_1] = ((/* implicit */short) (+(arr_4 [i_1])));
        arr_19 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) max((arr_6 [12U] [i_1] [i_1]), (((/* implicit */long long int) (unsigned char)254)))));
    }
    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 1; i_7 < 13; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (min((arr_6 [i_8] [i_8] [i_8]), (((/* implicit */long long int) arr_24 [i_7] [i_8])))) : (min((3081607806315682542LL), (((/* implicit */long long int) arr_11 [i_6] [i_8] [i_6] [i_6])))))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 3; i_9 < 13; i_9 += 4) 
                    {
                        arr_33 [(short)10] [i_9] [i_9] [12ULL] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)16360))));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (+((+(((((/* implicit */_Bool) 4236282462124909165LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [i_6] [i_6]))) : (arr_27 [i_6] [i_8] [i_9]))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 1; i_11 < 16; i_11 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)13)) <= (((/* implicit */int) (unsigned char)254)))))));
                                arr_39 [i_6] [i_6] [i_6] [i_10] [i_6] = 4198892443U;
                                arr_40 [i_8] [i_7] [i_11] [i_10] |= ((/* implicit */signed char) (((~(((((/* implicit */int) (short)-6318)) & (((/* implicit */int) (unsigned short)63165)))))) ^ (((/* implicit */int) ((unsigned char) arr_35 [i_8] [i_8] [i_8] [i_8])))));
                            }
                        } 
                    } 
                    arr_41 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((long long int) max((((((/* implicit */_Bool) arr_24 [i_6] [(unsigned char)5])) ? (((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_8] [i_7 + 1])) : (((/* implicit */int) (short)-15850)))), ((+(((/* implicit */int) arr_29 [i_6] [(unsigned char)1] [i_6])))))));
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) 96074852U);
        var_19 |= ((/* implicit */unsigned int) ((int) (+(arr_3 [i_6] [i_6]))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) max((((/* implicit */short) arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])), ((short)-6295))))) >> (((((/* implicit */int) ((((/* implicit */int) (unsigned char)2)) == (((/* implicit */int) (signed char)-62))))) >> (((((/* implicit */int) ((short) arr_0 [i_6]))) - (31529)))))));
    }
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_3)), ((short)-7764))))))) ^ (min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-4))))), (var_6)))));
}
