/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209045
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) + (min((((/* implicit */unsigned int) (unsigned short)32768)), (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_0] [i_1 - 2] [i_1] [i_2 - 1]) : (((/* implicit */unsigned int) var_8))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [4U]))) : (-2653299751230031034LL))) : (((/* implicit */long long int) arr_5 [i_2] [i_1] [i_1] [i_0])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2 - 2] [i_3] [(_Bool)1] = ((/* implicit */short) arr_4 [(signed char)9] [(signed char)7] [i_2] [i_3]);
                                var_16 = ((/* implicit */unsigned char) ((signed char) arr_10 [i_3] [i_2 - 2] [i_1 - 1] [i_0]));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)2047)), (((arr_2 [i_2 - 1]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                                var_17 = ((/* implicit */unsigned int) var_10);
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_12 [i_2] [i_1 - 2] [i_2]))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1 - 1] [i_2 + 2])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 15; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        arr_25 [i_7] [i_5] [i_7] = ((/* implicit */short) (!((!(arr_2 [i_0])))));
                        var_20 = ((((/* implicit */_Bool) (short)14164)) ? (((/* implicit */int) arr_9 [i_0] [i_5 + 2] [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_17 [i_5 + 2] [i_5 + 2])));
                        var_21 = arr_8 [i_0] [i_5 - 1] [i_6] [i_7];
                        var_22 = ((/* implicit */unsigned short) arr_23 [i_0] [(signed char)16]);
                        arr_26 [i_7] [i_5] [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_23 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_29 [i_5] [i_5 - 1] [i_5] [i_5 + 2]) >> (((((/* implicit */int) var_5)) + (138))))))));
                        arr_31 [i_6] [i_5 - 1] [i_6] [i_5] [0U] = ((/* implicit */_Bool) (unsigned short)2050);
                    }
                    for (long long int i_9 = 2; i_9 < 16; i_9 += 2) 
                    {
                        var_24 |= ((/* implicit */unsigned int) var_13);
                        var_25 = ((/* implicit */int) arr_8 [i_9 - 2] [i_9 - 1] [i_9 - 1] [i_9 - 1]);
                        var_26 ^= ((/* implicit */signed char) (-(23182550U)));
                        var_27 ^= max((((/* implicit */short) (signed char)53)), ((short)-9250));
                    }
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        var_28 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((3191726388U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)9527))))))));
                        arr_37 [i_0] [i_5] [i_6] [i_10] = ((/* implicit */signed char) max((((((/* implicit */int) arr_2 [i_10])) << (((((((/* implicit */_Bool) var_11)) ? (2097151U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5 - 1] [i_10]))))) - (2097145U))))), (((/* implicit */int) min((arr_23 [i_5 - 1] [i_5 + 2]), (arr_23 [i_5 + 2] [i_5 + 1]))))));
                    }
                    arr_38 [i_0] [i_0] [i_0] [i_5] = ((((/* implicit */_Bool) arr_4 [i_6] [i_5] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2719))))) || (((/* implicit */_Bool) max((arr_27 [i_0] [i_5] [i_6] [i_5]), (arr_24 [i_0] [i_5 - 1] [i_5] [i_6])))))))) : (max(((-(arr_36 [i_0] [i_5] [i_6] [i_5]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_5]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 16; i_12 += 2) 
                        {
                            {
                                arr_46 [i_5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_10 [16] [i_5 + 1] [i_11] [i_12 - 1])) ? (arr_10 [i_5 + 2] [i_5 - 1] [i_6] [i_12 + 1]) : (arr_10 [i_5] [i_5 - 1] [i_11] [i_12 + 1]))), ((-(arr_10 [(short)8] [i_5 + 1] [i_5] [i_12 + 1])))));
                                var_29 = ((/* implicit */int) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) 1739344753)) ? (((/* implicit */int) (_Bool)1)) : (arr_21 [i_0] [i_5] [i_0] [i_5] [i_12 + 1])))), (min((((/* implicit */long long int) arr_9 [i_0] [i_6] [(unsigned short)9] [i_12])), (-4577357436597677099LL))))), (((/* implicit */long long int) max((arr_10 [(short)4] [i_12 + 1] [i_12 - 1] [i_12 - 1]), (((/* implicit */int) (unsigned short)15055)))))));
                                arr_47 [i_0] [i_5 + 1] [i_5] [(_Bool)1] [i_12 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [3LL] [i_0] [i_6] [i_12 - 1] [i_12]))))) || (((/* implicit */_Bool) ((long long int) arr_42 [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12])))));
                            }
                        } 
                    } 
                    arr_48 [i_0] [i_5] = ((/* implicit */unsigned int) var_11);
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
    {
        arr_53 [i_13] = ((/* implicit */signed char) (!((!((_Bool)1)))));
        var_30 = ((/* implicit */_Bool) max((((/* implicit */int) arr_20 [i_13])), (((((/* implicit */int) max((arr_20 [i_13]), (((/* implicit */unsigned char) (_Bool)1))))) * (((/* implicit */int) ((((/* implicit */unsigned int) arr_33 [i_13] [i_13] [(signed char)11] [i_13] [i_13])) == (var_7))))))));
    }
    for (int i_14 = 0; i_14 < 25; i_14 += 4) 
    {
        arr_56 [(_Bool)1] [i_14] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_14]))))) <= (arr_54 [i_14]));
        arr_57 [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_54 [i_14]))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) var_5))));
        arr_58 [i_14] &= ((/* implicit */unsigned short) arr_54 [i_14]);
    }
}
