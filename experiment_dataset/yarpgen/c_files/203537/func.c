/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203537
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) arr_1 [i_2] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [(unsigned short)9] [i_2] [i_4]);
                                arr_14 [i_2] [i_1] [i_1] [2U] [i_4] |= ((/* implicit */unsigned char) arr_0 [i_0] [i_1]);
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_6 [(unsigned short)2] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [11LL])) : (((/* implicit */int) ((short) arr_8 [(short)10] [3] [i_2]))))));
                    /* LoopSeq 4 */
                    for (int i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        var_12 = ((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_2] [i_5]);
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_20 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_0] [i_1]))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_10 [i_0] [(unsigned short)0] [7U] [i_5] [i_2] [(unsigned char)2]) : (arr_10 [i_0] [i_1] [i_2] [i_5] [i_6] [i_1]))) : (((/* implicit */unsigned long long int) ((int) arr_4 [i_1] [i_1]))))));
                            arr_21 [i_1] = ((/* implicit */signed char) ((unsigned int) arr_18 [i_0] [i_1] [i_6] [(short)3] [i_6] [i_2] [10LL]));
                        }
                        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 1) 
                        {
                            arr_25 [i_7] [i_5] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_11 [i_0] [i_5 + 1] [i_2] [i_5] [i_7]);
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_23 [i_0] [i_1] [i_7]) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_5] [i_2])) ? (((/* implicit */int) arr_2 [i_1])) : (arr_1 [(unsigned short)0] [i_5]))) : (((/* implicit */int) arr_2 [i_1]))))) ? (arr_7 [i_7] [i_1]) : (((arr_4 [i_5] [i_0]) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_7 [i_1] [i_7]) : (arr_22 [i_2] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_7] [i_5])) ? (arr_11 [i_0] [i_1] [i_0] [i_5] [(_Bool)1]) : (((/* implicit */unsigned int) arr_18 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [4] [(unsigned char)9] [i_0]))))))));
                        }
                        for (unsigned char i_8 = 4; i_8 < 8; i_8 += 1) 
                        {
                            var_14 = ((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_1] [i_0] [i_1] [i_0]);
                            arr_29 [i_5] [i_5] [i_1] [i_5] [i_8] = ((((/* implicit */_Bool) ((int) arr_8 [(short)4] [9U] [9U]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_0] [11U])) ? (arr_3 [(unsigned char)5]) : (((/* implicit */int) arr_0 [3U] [9ULL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_17 [i_0] [i_1])))) : (((unsigned int) arr_5 [i_2] [(signed char)1] [i_8])))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_17 [i_2] [i_2])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned short)5] [i_2])))))));
                            arr_30 [i_1] [(unsigned short)8] [i_5] [i_2] [5ULL] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((arr_4 [4] [(unsigned short)10]) ? (arr_24 [i_0] [i_1] [i_1] [i_1] [i_8 - 3] [i_1]) : (((/* implicit */unsigned long long int) arr_26 [6U] [11] [i_2] [i_5] [i_5] [i_8])))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_26 [i_0] [i_1] [(_Bool)1] [i_2] [i_5] [i_8]))) : (arr_17 [i_8] [i_8])));
                            var_15 = ((/* implicit */int) arr_24 [(unsigned short)7] [i_1] [i_2] [i_5] [(short)8] [i_8]);
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 1; i_9 < 10; i_9 += 1) 
                    {
                        arr_35 [(_Bool)0] [i_1] [(_Bool)0] [0] [i_1] [i_0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_26 [3] [i_1] [i_1] [i_1] [i_1] [(unsigned char)3])) ? (arr_10 [i_0] [(_Bool)1] [i_2] [i_2] [(unsigned char)5] [i_0]) : (((/* implicit */unsigned long long int) arr_5 [(_Bool)1] [(_Bool)1] [(_Bool)1])))));
                        var_16 = ((/* implicit */int) arr_12 [i_2] [i_1] [i_0]);
                        arr_36 [9] [i_1] [(unsigned char)1] [i_1] = ((/* implicit */short) arr_32 [9U] [i_9] [i_9]);
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_19 [i_0] [0] [i_0] [7LL] [i_0]))));
                    }
                    for (unsigned long long int i_10 = 3; i_10 < 10; i_10 += 3) 
                    {
                        arr_41 [i_1] [i_1] [i_2] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_10] [i_1] [i_0])) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [(unsigned short)6] [i_2] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_10] [i_2] [i_1]))) : (arr_6 [i_0] [i_1] [i_2] [i_10])))))));
                        arr_42 [i_2] [i_1] [9U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_28 [i_0] [i_1] [(unsigned char)2] [(_Bool)1]))) ? (arr_22 [i_10] [2U] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_0] [i_1] [i_2] [i_10])) ? (((/* implicit */int) arr_12 [i_0] [i_2] [i_10])) : (((/* implicit */int) arr_2 [i_1])))))))) ? (((((/* implicit */_Bool) arr_11 [i_10] [i_2] [i_1] [10U] [i_0])) ? (((unsigned long long int) arr_24 [i_0] [i_10] [i_1] [i_2] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0] [i_1])))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) arr_40 [i_10] [(_Bool)0] [9] [8LL] [8LL]))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_22 [i_10] [i_1] [i_0])) ? (((arr_23 [i_10] [9ULL] [i_1]) ? (arr_3 [i_0]) : (arr_40 [i_0] [i_1] [i_2] [i_10] [7]))) : (((/* implicit */int) ((unsigned short) arr_10 [i_0] [2LL] [i_0] [i_0] [i_0] [i_0])))))))));
                        var_19 *= arr_38 [i_0] [(_Bool)1] [i_1] [i_2] [i_10];
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [i_2] [i_2] [11LL] [i_1] [(signed char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_1] [i_10]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [8] [i_1] [(signed char)2] [i_1] [5ULL] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0]))) : (arr_34 [i_0] [9ULL])))) ? (arr_34 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [0ULL] [(short)5]))))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_11] [i_11] [i_1])) ? (((/* implicit */int) arr_37 [i_11] [i_2] [6LL] [i_0])) : (arr_28 [i_11] [i_2] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_2] [i_2] [i_11] [i_11])) ? (arr_24 [i_0] [10] [i_1] [i_2] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_11] [i_2] [10] [i_1] [6U] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [8ULL] [i_2]))) : (arr_5 [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_2] [11U]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [2] [6]))) : (arr_43 [i_11] [i_11] [i_2] [(signed char)5] [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [8U] [(unsigned char)7])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_8 [2ULL] [(short)3] [i_11])))) : (((int) arr_44 [i_0] [i_0] [i_1] [i_0] [i_0])))))));
                        arr_45 [i_0] [4U] [i_1] [i_1] [i_2] [i_11] = ((/* implicit */unsigned char) arr_4 [i_2] [i_1]);
                    }
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */unsigned long long int) var_7);
}
