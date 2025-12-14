/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32389
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
        for (long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4060379772U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11176))) : (-4218267137528041917LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) max((arr_6 [i_0] [i_2]), (arr_8 [i_0] [i_0] [i_0] [24])))) ? (min((((/* implicit */long long int) var_8)), (-4218267137528041917LL))) : (((/* implicit */long long int) ((arr_3 [(unsigned short)11] [i_1] [i_2]) + (var_8)))))));
                    var_14 += ((/* implicit */_Bool) (-(((/* implicit */int) (short)11177))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_15 = arr_11 [8U] [i_0] [(signed char)14] [i_0] [i_3];
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 3; i_4 < 24; i_4 += 1) 
                        {
                            arr_16 [i_2] = ((/* implicit */unsigned long long int) arr_10 [(_Bool)1] [i_1 + 2] [i_2] [i_3] [i_4 - 1]);
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_1] [(signed char)12] [i_4 - 1]))) : (arr_5 [i_1 + 1] [i_1 + 2] [i_4 + 1])))));
                            var_17 = ((/* implicit */signed char) arr_7 [i_0] [i_2]);
                        }
                    }
                }
                for (signed char i_5 = 2; i_5 < 24; i_5 += 2) 
                {
                    arr_19 [i_0] [i_0] [(_Bool)1] [(unsigned char)14] = ((/* implicit */_Bool) arr_10 [20] [20] [20] [7U] [19LL]);
                    arr_20 [i_0] [i_1] [i_5] = ((/* implicit */long long int) var_5);
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_18 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_22 [0] [i_1 - 2] [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 268435452)) ? (641965513) : (((/* implicit */int) (short)(-32767 - 1)))))) : (var_0)));
                    /* LoopSeq 2 */
                    for (short i_7 = 3; i_7 < 24; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)65519)))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -641965519)) ? (((long long int) arr_3 [(_Bool)1] [i_1 + 1] [(_Bool)1])) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 3] [i_7 - 1] [12U])))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 24; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_23 [i_0] [i_0])) >> (((((/* implicit */int) var_1)) - (7264))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((arr_15 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]) + (2147483647))) << (((((((/* implicit */int) arr_9 [i_0] [i_0] [i_6] [i_6] [i_8 + 1] [(_Bool)1])) + (13734))) - (19)))));
                    }
                    var_23 = ((/* implicit */signed char) (-(arr_21 [i_0] [2] [(unsigned char)3] [i_6])));
                    var_24 = 8796093022207LL;
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [i_1]))) + (-4218267137528041900LL)))) ? (arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-17743)))));
                }
                /* LoopNest 3 */
                for (short i_9 = 2; i_9 < 23; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_26 &= ((/* implicit */unsigned long long int) (-(((326018209U) >> (((/* implicit */int) (unsigned short)0))))));
                                arr_37 [i_10] [i_10] [i_10] [3LL] = 3968949106U;
                                arr_38 [(unsigned char)15] [(_Bool)1] [i_9] [21U] [i_11] = ((/* implicit */unsigned int) min((max((arr_21 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1 - 2]), (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))), (((/* implicit */int) arr_11 [i_0] [8LL] [(_Bool)1] [i_0] [i_0]))));
                                arr_39 [i_0] [i_0] [i_9] [i_9] = ((/* implicit */_Bool) (-(arr_18 [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 *= ((/* implicit */short) max((((/* implicit */unsigned int) (signed char)-45)), (max((((/* implicit */unsigned int) var_3)), (max((((/* implicit */unsigned int) (unsigned short)65535)), (var_10)))))));
    var_28 = ((/* implicit */unsigned char) var_5);
}
