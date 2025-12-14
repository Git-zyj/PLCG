/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213673
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 += ((/* implicit */unsigned long long int) min((((unsigned int) arr_2 [i_1])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [(_Bool)1] [i_1]))))))));
                var_12 = ((/* implicit */unsigned long long int) ((arr_2 [i_1]) / ((-((~(((/* implicit */int) arr_5 [i_0]))))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    var_13 += ((/* implicit */_Bool) min(((~(arr_7 [i_2 - 1] [i_2 + 2] [i_0]))), (((/* implicit */int) min(((unsigned short)4095), (((/* implicit */unsigned short) (short)21573)))))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_7 [i_2 + 1] [i_1] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) : (((arr_7 [i_2 + 1] [i_2] [i_2]) / (arr_7 [i_2 + 2] [(signed char)12] [i_1])))));
                }
                for (signed char i_3 = 3; i_3 < 14; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (2141157944)))) ? (((/* implicit */int) min(((unsigned short)22123), ((unsigned short)19786)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)50752))))));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 447386567)) || (((/* implicit */_Bool) (unsigned short)14784))))) | (((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 2] [i_3 + 3])) ? (((/* implicit */int) arr_10 [i_3] [i_3 + 4] [i_3 - 2])) : (((/* implicit */int) arr_10 [16U] [i_3 - 3] [i_3 + 4]))))));
                }
                for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    var_16 = ((arr_7 [i_0] [i_0] [(signed char)15]) - (((arr_7 [i_0] [i_1] [(unsigned short)2]) - (arr_7 [i_0] [5U] [i_4 + 1]))));
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 4; i_5 < 14; i_5 += 2) 
                    {
                        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_5] [i_5 - 1])), (((((/* implicit */_Bool) arr_14 [i_5] [(unsigned char)6])) ? (((/* implicit */int) arr_3 [i_5] [i_5])) : (arr_2 [(short)13])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (short)-21045))))) : (((((/* implicit */int) ((unsigned char) arr_16 [i_0] [i_1]))) * (((/* implicit */int) arr_10 [i_5 - 4] [i_4 - 1] [i_4 + 1]))))));
                        var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (signed char)7)), (4294967295U)));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4 - 1] [(short)2] [i_5])) ? (arr_7 [i_4 + 1] [(short)4] [i_4 + 1]) : (arr_7 [i_4 - 1] [i_1] [i_0])))) / (((arr_14 [i_0] [i_5 + 2]) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)14160)))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_21 [i_6] [i_6] [(unsigned char)10] [i_0] = ((/* implicit */unsigned char) (~(0U)));
                        arr_22 [i_6] [i_0] [i_4 + 1] [i_4] [i_0] [4U] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (0ULL))) * (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_11 [i_0] [i_1] [i_4] [i_6])) * (((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                        arr_23 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (~(arr_13 [i_0])))) | (((((/* implicit */unsigned long long int) arr_9 [17U] [i_1] [(signed char)13])) | (arr_14 [i_0] [10U]))))) * ((((+(arr_6 [i_0]))) >> (((((arr_2 [i_0]) / (((/* implicit */int) arr_1 [i_0])))) - (49645)))))))) : (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (~(arr_13 [i_0])))) | (((((/* implicit */unsigned long long int) arr_9 [17U] [i_1] [(signed char)13])) | (arr_14 [i_0] [10U]))))) * ((((+(arr_6 [i_0]))) >> (((((((arr_2 [i_0]) / (((/* implicit */int) arr_1 [i_0])))) - (49645))) - (100120))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [10])))))));
                            var_21 = ((/* implicit */unsigned char) arr_8 [i_4 + 1] [i_4] [(unsigned char)0] [i_4]);
                        }
                        for (unsigned int i_8 = 1; i_8 < 16; i_8 += 1) 
                        {
                            arr_28 [i_0] [(_Bool)1] [i_4 + 1] [i_6] [(_Bool)1] [i_8] [i_0] |= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_25 [(unsigned char)13])) ? (((/* implicit */int) arr_25 [i_0])) : (((/* implicit */int) arr_25 [(unsigned char)14]))))));
                            var_22 = ((unsigned char) min((arr_8 [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 1]), (((/* implicit */int) arr_1 [i_0]))));
                        }
                        for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            arr_33 [i_0] [i_1] [(short)2] [i_6] [(unsigned char)14] = ((/* implicit */unsigned short) min((1919541704U), (((/* implicit */unsigned int) (unsigned short)14784))));
                            arr_34 [i_0] [0U] [(short)0] [i_6] [i_9] |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)231)) >> (((((/* implicit */int) ((unsigned char) 2215035114U))) - (223)))));
                        }
                    }
                    for (unsigned char i_10 = 3; i_10 < 15; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) (+((((-(((/* implicit */int) arr_10 [(short)15] [i_4] [i_4])))) * (((/* implicit */int) arr_11 [i_10 + 3] [i_10 + 3] [i_4] [15]))))));
                        arr_38 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_16 [i_0] [i_10]), (arr_15 [(unsigned char)15] [i_1] [i_4] [i_10]))))))) | (((((/* implicit */_Bool) arr_17 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 28413684U)) || (((/* implicit */_Bool) (signed char)0)))))) : (arr_35 [i_10] [i_10] [(unsigned char)15] [i_10])))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            arr_43 [(signed char)6] [i_11] [(short)0] [i_1] [i_0] &= ((/* implicit */unsigned char) (~(arr_13 [4U])));
                            var_24 = ((/* implicit */unsigned short) ((signed char) min((((((/* implicit */_Bool) arr_20 [0ULL] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [(signed char)10] [i_0] [i_12])) : (((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) 0ULL))))))));
                            var_25 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)62662)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])))) / (((/* implicit */int) arr_16 [i_1] [i_1]))));
                        }
                        arr_44 [i_0] [7ULL] [(short)5] [i_0] = ((/* implicit */unsigned char) arr_42 [0U] [i_1] [i_1]);
                        arr_45 [i_0] [0U] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                        arr_46 [(short)11] [i_1] [i_1] [i_0] [i_1] [(short)5] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0] [i_1]))))))), (((/* implicit */int) arr_24 [(short)11]))));
                        var_26 = ((/* implicit */unsigned short) arr_31 [i_1]);
                    }
                }
                arr_47 [i_0] [(short)16] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 13934971090219362063ULL)) ? (((/* implicit */int) (unsigned short)50889)) : (((/* implicit */int) (signed char)9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30280))) : (4294967295U)))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) var_9);
    var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
    var_29 = ((/* implicit */unsigned int) var_3);
}
