/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220582
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_17 *= (+(arr_0 [8U]));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) 9223372036854775804LL);
                        var_19 *= (-(arr_3 [i_0] [0U] [i_2 + 1]));
                    }
                    for (unsigned short i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        arr_12 [i_0] [i_1] [i_2] [i_0] [i_2 + 1] [i_4] = ((/* implicit */int) var_1);
                    }
                    for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) arr_14 [i_5] [i_1] [i_0]);
                        var_22 ^= var_6;
                        arr_17 [i_0] [i_0] [i_2 - 3] [(unsigned short)9] = ((/* implicit */long long int) ((arr_15 [i_0] [2U] [i_2 - 2] [i_0] [i_2 + 1] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        var_23 *= ((/* implicit */short) (unsigned short)14714);
                        arr_18 [i_0] [i_0] [i_2 + 1] [i_5] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((arr_22 [i_0] [i_1] [i_2] [i_6] [i_6] [i_7] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9)))));
                            arr_23 [i_0] [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_7 [i_0])))) - (((/* implicit */int) ((unsigned short) var_4)))));
                            arr_24 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 2] [(short)2] [i_2 - 3]))));
                            arr_25 [i_0] [i_0] [i_0] [(unsigned char)6] [6U] [i_6] [10] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : ((+(((/* implicit */int) var_7))))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) arr_13 [i_0] [i_1] [i_2 - 2] [i_0] [i_2 - 2] [i_8]);
                            var_26 = ((/* implicit */unsigned short) var_1);
                            arr_28 [i_0] [i_6] [i_2] [i_0] = ((/* implicit */int) ((var_1) % (((/* implicit */unsigned long long int) 9223372036854775787LL))));
                        }
                        for (unsigned short i_9 = 3; i_9 < 10; i_9 += 3) 
                        {
                            arr_33 [i_2] [i_0] [i_2] [i_6] [i_9] [i_0] = ((/* implicit */unsigned short) arr_13 [7U] [i_1] [i_1] [i_0] [i_1] [i_1]);
                            arr_34 [(unsigned short)0] [i_1] [i_0] [i_0] [i_6] [i_9] = arr_15 [i_9 + 1] [i_6] [i_0] [i_0] [i_0] [i_0];
                        }
                        for (signed char i_10 = 1; i_10 < 8; i_10 += 3) 
                        {
                            var_27 = ((/* implicit */long long int) var_12);
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned int) -9223372036854775792LL));
                            arr_38 [6U] [(unsigned short)5] [i_2] [i_0] [i_10 + 1] = ((/* implicit */long long int) var_13);
                            arr_39 [i_0] [i_1] [i_2 + 1] [i_6] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((var_16) > (((/* implicit */long long int) var_6)))))));
                        }
                        arr_40 [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
                        var_29 *= ((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) arr_8 [i_0] [i_6])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 1; i_11 < 7; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) var_2);
                                var_31 = ((/* implicit */unsigned short) ((unsigned int) var_16));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [9U]))))) || (((/* implicit */_Bool) (+(var_0))))));
                    var_33 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
        {
            arr_47 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_14 [i_0] [i_0] [i_13]))));
            arr_48 [i_0] [i_0] = ((1669440233U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14744))));
        }
        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
        {
            var_34 = ((/* implicit */short) var_10);
            var_35 = (+(arr_44 [i_0] [i_0] [i_14] [i_0] [i_14] [i_14]));
        }
    }
    var_36 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_0))))), (var_2))))));
    var_37 = ((/* implicit */unsigned short) max((1072693248U), (((/* implicit */unsigned int) ((unsigned char) 3465240484U)))));
}
