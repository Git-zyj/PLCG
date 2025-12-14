/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208882
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
    var_14 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 13644056870240061087ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((short)-3230), (((/* implicit */short) (signed char)-96))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [5]))))) ? (max((((/* implicit */unsigned long long int) ((signed char) arr_3 [i_0] [i_0]))), (((((/* implicit */unsigned long long int) 2147483647)) / (arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_0] [i_0 - 1] [i_0])), (arr_2 [i_1] [i_0]))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    arr_9 [(_Bool)1] [i_0] [i_2] = ((((/* implicit */_Bool) arr_8 [i_2] [(_Bool)1] [i_1] [4U])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (short)3252))))), (14060876664673837995ULL))) : (((/* implicit */unsigned long long int) arr_4 [i_0] [0] [i_0])));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_0 - 1] [i_0]) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0]))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (0U)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_7 [i_1] [i_2] [4LL] [(short)16]))));
                        arr_12 [3] [i_1] [i_0] [i_3] = ((arr_10 [i_0 + 1] [i_0 - 1]) | (arr_10 [i_0 + 1] [i_0 - 1]));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_0 - 1] [i_1 - 1] [(unsigned short)10] [i_1 - 1] [i_1 - 1]))));
                            arr_18 [i_0] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)60259)) : (((/* implicit */int) arr_15 [i_1] [i_0] [7]))))) ? (((/* implicit */unsigned long long int) arr_6 [(unsigned char)13] [i_4] [i_2] [(signed char)9])) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_3 [i_0] [i_1 - 1]) : (((/* implicit */unsigned long long int) -350537742581434474LL))))));
                            var_19 = ((/* implicit */unsigned long long int) (+(arr_2 [i_1 - 1] [8])));
                        }
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned int) arr_3 [i_0] [i_6]);
                            var_21 = ((/* implicit */int) max((var_21), (((int) 9223372036854775807LL))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_4] [i_2]))) ? (arr_2 [11] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_4])))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */int) ((arr_2 [i_0 - 1] [i_0 - 1]) - (arr_2 [i_0 + 1] [i_0 - 1])));
                            var_24 = ((/* implicit */int) arr_11 [i_0 + 1] [(unsigned char)0] [i_0 + 1] [i_0]);
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3841)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (arr_2 [i_1 - 1] [i_2])))) ? ((+(arr_2 [i_2] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)66))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((arr_20 [i_0 - 1] [7U] [i_0] [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_0]) / (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17))) : (arr_20 [(signed char)10] [i_1] [i_1] [i_1] [i_1] [(unsigned short)10] [i_1]))))))));
                            arr_25 [i_0] [i_1] [i_0] [i_4] [i_8] [(_Bool)0] = ((/* implicit */unsigned long long int) ((((_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_8])) || (((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1] [4LL] [i_8]))))) : (((((/* implicit */int) arr_8 [i_0] [(unsigned char)5] [i_4] [i_4])) / (arr_4 [i_0] [i_1] [i_0])))));
                        }
                        var_27 ^= ((/* implicit */unsigned int) arr_8 [16LL] [16LL] [16LL] [i_4]);
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_28 = max((arr_26 [i_0] [2] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)0)));
                        arr_28 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0] [i_0])) ? (arr_6 [i_0 - 1] [(unsigned short)11] [i_9] [i_9 - 1]) : (arr_6 [i_0 - 1] [i_0] [i_0] [i_9 - 1])))) : (min((((((/* implicit */_Bool) 3831999471U)) ? (1930375376U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15900))))), (((/* implicit */unsigned int) 2147483647))))));
                        var_29 *= ((/* implicit */unsigned short) arr_3 [i_1 - 1] [i_9]);
                        var_30 = ((/* implicit */unsigned int) arr_17 [i_0] [i_1] [(unsigned short)2] [(unsigned short)10] [i_9 - 1]);
                        var_31 |= ((/* implicit */long long int) arr_5 [10] [i_2]);
                    }
                }
                /* LoopNest 2 */
                for (signed char i_10 = 1; i_10 < 15; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        {
                            var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) 3106302857U))), (arr_20 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [15U] [i_1 - 1] [i_10 + 3])))) ? (min((((/* implicit */long long int) arr_32 [i_0] [i_0] [i_11])), ((~(arr_30 [(unsigned char)9] [(unsigned char)9] [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-24899)))));
                            var_33 = ((unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(signed char)7])) : (((/* implicit */int) arr_13 [i_10]))))) ? (((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [8U] [i_0]))) : (arr_26 [i_11] [i_10 + 3] [i_0]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)0)), (0U))))));
                        }
                    } 
                } 
                arr_34 [i_0] [i_0] [(unsigned short)15] = ((/* implicit */long long int) max((((/* implicit */int) arr_5 [i_1 - 1] [i_0])), (((arr_5 [i_1 - 1] [i_0]) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_0])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_12 = 3; i_12 < 19; i_12 += 2) 
    {
        for (signed char i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            {
                arr_41 [i_12] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_37 [i_12 - 1] [i_12])), (((((/* implicit */_Bool) ((short) arr_39 [i_12] [i_12] [i_13]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2623)) >> (((2147483647) - (2147483625)))))) : (max((10ULL), (((/* implicit */unsigned long long int) -1605570729))))))));
                var_34 &= ((/* implicit */signed char) arr_37 [i_13] [i_13]);
                var_35 = ((/* implicit */int) min((var_35), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (short)-12224))))), ((unsigned char)68)))) ? (((/* implicit */int) arr_36 [i_12] [i_13])) : (((/* implicit */int) ((min((arr_39 [i_12 + 1] [13ULL] [15]), (arr_39 [i_12] [i_12] [i_13]))) < (arr_39 [i_12 - 2] [i_13] [i_13]))))))));
                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) 9223372036854775807LL))));
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned char) ((-963253384) / (((int) 3295479230739584987LL))));
}
