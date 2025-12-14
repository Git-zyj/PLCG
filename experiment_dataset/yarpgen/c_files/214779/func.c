/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214779
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
    var_17 = ((/* implicit */unsigned short) var_16);
    var_18 = ((/* implicit */long long int) (_Bool)0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 += ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) arr_6 [(short)11])) ? (((/* implicit */int) (short)13721)) : (((/* implicit */int) var_14)))))), (((/* implicit */int) var_5))));
                    var_20 |= ((/* implicit */unsigned char) (-(arr_2 [i_2] [i_1])));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 4; i_3 < 23; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_6 [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_0])) - (217)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (arr_4 [i_3] [i_2] [i_1] [i_0]))))));
                        arr_9 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) 2147483647);
                    }
                    for (long long int i_4 = 2; i_4 < 23; i_4 += 1) 
                    {
                        arr_13 [i_0] [i_1] [i_2 + 1] [i_4] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) arr_0 [i_2 + 3]))), (((2147483647) / ((-2147483647 - 1))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-32749)) || (((/* implicit */_Bool) var_10))))))))));
                        var_22 = ((/* implicit */long long int) ((unsigned char) ((long long int) arr_10 [i_0] [i_1] [i_2 - 1] [i_4 + 1])));
                    }
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) var_15);
                        arr_18 [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (short)-13722)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_0] [i_0]))) : (arr_12 [(short)3] [i_2 + 1] [i_0]))));
                        var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_6 [i_0])))))) ? (((((arr_6 [i_5]) + (9223372036854775807LL))) << (((((/* implicit */int) var_0)) - (18097))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_5]), (((/* implicit */short) arr_5 [i_0] [i_1] [i_5]))))) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */int) (unsigned char)127)) % (((/* implicit */int) var_14)))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_6 = 1; i_6 < 19; i_6 += 2) /* same iter space */
    {
        arr_22 [i_6 + 1] [i_6] = ((/* implicit */short) (~(((/* implicit */int) ((arr_3 [i_6 + 1]) < (arr_3 [i_6]))))));
        var_25 &= arr_20 [i_6];
        arr_23 [(short)4] [(short)4] |= ((long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)13721))))), ((-9223372036854775807LL - 1LL))));
        arr_24 [i_6] = arr_6 [(signed char)0];
    }
    /* vectorizable */
    for (long long int i_7 = 1; i_7 < 19; i_7 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_7])) ? (((/* implicit */int) arr_26 [i_7])) : (((/* implicit */int) (short)-26604))));
        var_27 = ((/* implicit */int) min((var_27), (2147483642)));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_21 [i_7])))) ? (((/* implicit */int) ((unsigned short) (unsigned char)6))) : (((/* implicit */int) (unsigned short)43418))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            for (long long int i_9 = 2; i_9 < 19; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        arr_34 [i_7] = ((/* implicit */long long int) arr_29 [i_9] [i_9 + 1]);
                        /* LoopSeq 3 */
                        for (long long int i_11 = 3; i_11 < 19; i_11 += 1) 
                        {
                            arr_37 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_7] [5LL] [(unsigned short)10])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */int) (short)-13722)) * (((/* implicit */int) arr_20 [i_7 + 1]))));
                        }
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            var_30 -= arr_39 [i_12];
                            arr_42 [i_7] [i_8] [i_7] [(unsigned short)7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_7] [i_7 - 1] [i_9 - 2] [i_10])) / (((/* implicit */int) arr_10 [i_7 + 1] [i_8] [i_9 - 1] [i_10]))));
                        }
                        for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            var_31 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)13702)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_7 - 1]))) : (arr_7 [i_7 + 1] [i_7] [i_7] [i_7 - 1])));
                            arr_46 [i_7] [i_8] [i_7] [i_10] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [(unsigned short)23] [i_9 - 2] [(unsigned short)23] [(unsigned short)23])))) / ((-9223372036854775807LL - 1LL))));
                            arr_47 [i_7] [i_8] [i_8] [i_7] [i_9] [i_10] [i_7] = arr_5 [i_7] [i_8] [i_13];
                            arr_48 [i_7] [i_10] [i_10] [i_9] [i_8] [i_8] [i_7] = ((/* implicit */short) (signed char)-34);
                            var_32 = ((/* implicit */short) (!(arr_20 [(short)13])));
                        }
                        var_33 -= ((/* implicit */short) arr_41 [i_10] [i_7]);
                    }
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_27 [i_7 - 1] [i_9])) : (arr_2 [i_7 - 1] [i_7 - 1])));
                    var_35 = (+(arr_2 [i_7 + 1] [i_9 + 1]));
                    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (!(((/* implicit */_Bool) arr_26 [(signed char)18])))))));
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        arr_52 [i_7] [i_7] [(short)18] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_7 + 1] [i_7] [i_7] [i_7 - 1] [i_7])) * (((/* implicit */int) arr_16 [i_7] [i_7] [i_7] [i_7 + 1] [i_7]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            var_37 += ((/* implicit */long long int) var_8);
                            arr_55 [i_7] [i_8] [i_9] [i_14] [i_7] = ((/* implicit */_Bool) arr_19 [i_7 + 1] [i_9]);
                        }
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            arr_59 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_3 [i_14]))) + (((((/* implicit */_Bool) arr_56 [2ULL] [i_8] [(short)2] [i_14] [i_16 - 1] [i_9 - 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_38 [i_7]))))));
                            var_38 |= ((/* implicit */short) (-(((/* implicit */int) arr_44 [i_7 + 1]))));
                        }
                        var_39 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_9 - 2] [i_7 + 1])) ? (((/* implicit */int) arr_58 [i_7 - 1] [i_9 + 1] [i_14] [i_14] [(signed char)14])) : (((/* implicit */int) arr_27 [i_9 + 1] [i_7 + 1]))));
                        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((unsigned char) arr_10 [i_7] [0] [i_8] [i_14])))));
                    }
                }
            } 
        } 
    }
}
