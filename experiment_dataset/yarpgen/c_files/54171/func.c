/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54171
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
    var_17 = ((/* implicit */unsigned short) var_14);
    var_18 |= ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) max((arr_1 [i_1 - 2] [i_1 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))) : (max((((/* implicit */int) arr_4 [i_1] [i_1] [i_0])), (2011799351))))))));
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (max((arr_1 [i_1 - 1] [i_1]), (arr_1 [i_1 - 2] [6ULL])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_19 -= ((/* implicit */unsigned long long int) ((unsigned short) var_16));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_2] = arr_5 [i_0] [(unsigned char)12];
                                var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)945)) : (((/* implicit */int) (unsigned short)57535))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) arr_13 [i_1])) : (((/* implicit */int) arr_13 [i_1]))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_2] [(unsigned char)4])) : (((/* implicit */int) arr_5 [i_3 + 1] [i_1 + 1])))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                            {
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_17 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3] [i_1]))));
                                arr_18 [i_3 - 1] [i_1] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1] [i_1 - 1] [i_3 + 1])) ? (arr_12 [i_1 - 2] [i_1] [(unsigned char)15] [(unsigned char)5] [i_1] [i_1 - 1] [i_3 + 1]) : (arr_12 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 1] [i_3 + 1])));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)223)) < (((/* implicit */int) arr_4 [i_3 - 1] [i_0] [i_0])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 4) 
        {
            for (int i_8 = 4; i_8 < 21; i_8 += 3) 
            {
                {
                    arr_28 [i_6] [i_6] = ((/* implicit */unsigned int) (unsigned short)23151);
                    arr_29 [i_6] [i_7] [i_6] [11U] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)64591))))) ? (arr_26 [i_7] [i_7] [i_6]) : (((/* implicit */int) ((((/* implicit */_Bool) 1593747621U)) || (((/* implicit */_Bool) (unsigned char)33))))))), (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)43)) ? (arr_22 [9ULL] [i_6]) : (((/* implicit */unsigned int) arr_27 [i_6] [i_7] [(unsigned short)0] [i_7])))) < (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
                    arr_30 [(unsigned char)21] [i_7] [(unsigned char)21] [(unsigned char)21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2897502351340373049ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18011))) : (5U)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 17; i_9 += 1) 
    {
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            for (unsigned char i_11 = 2; i_11 < 18; i_11 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_34 [i_9])) ? (var_9) : (var_9))), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */int) max((((unsigned char) var_5)), (((/* implicit */unsigned char) ((((/* implicit */int) var_11)) < (var_15))))))) : (((/* implicit */int) var_14))));
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_33 [i_11 - 1])) ? (arr_33 [i_11 - 1]) : (arr_38 [2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [i_9 + 1]) <= (((/* implicit */unsigned long long int) arr_22 [i_9 + 1] [i_11 - 1]))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_12 = 2; i_12 < 16; i_12 += 4) 
                    {
                        var_27 *= arr_25 [i_9] [i_9] [i_9];
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((((/* implicit */int) (unsigned short)11694)) ^ (((/* implicit */int) (signed char)44)))) <= (var_15))))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_9 + 1] [i_9 + 1] [i_9] [i_9])) ? (((unsigned int) arr_36 [i_9])) : (((/* implicit */unsigned int) ((((var_8) + (2147483647))) >> (((((/* implicit */int) var_12)) - (106))))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 3) 
                        {
                            arr_49 [i_9] [(unsigned short)5] [i_11] [(unsigned char)9] [i_9] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_25 [i_11 - 2] [i_11 - 1] [i_9 + 2]))));
                            arr_50 [i_9] [i_11] [i_11] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_41 [i_9 - 1] [i_11 - 1] [i_11 - 1] [i_13]), (((/* implicit */unsigned long long int) arr_34 [i_9]))))) ? (arr_20 [i_9]) : (((/* implicit */int) arr_42 [5] [i_10] [i_11] [i_14] [i_10]))));
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((((((/* implicit */unsigned int) arr_46 [i_9] [i_11] [4U] [i_14])) == (var_3))) ? (((/* implicit */unsigned int) ((int) arr_46 [i_14] [i_13] [i_11] [i_13]))) : (((arr_33 [(unsigned char)8]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))))))) < (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_9 + 1] [i_9 - 2] [i_11 - 2] [11] [i_14])) || (((/* implicit */_Bool) arr_41 [(unsigned char)0] [(unsigned short)0] [i_10] [i_9]))))), (arr_48 [i_9 - 2] [i_9 - 1] [i_10] [i_11 - 2] [(unsigned char)14]))))))))));
                            arr_51 [i_9] [i_9] [i_11] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_24 [i_9] [i_10] [i_13])) * (max((arr_25 [i_9] [i_9] [i_14]), (var_7)))))) ? (-1647807431) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_33 [14ULL]), (((/* implicit */unsigned int) arr_34 [i_9]))))))))));
                        }
                        arr_52 [i_9] [i_9] [i_9] [15U] [i_9] = ((unsigned char) arr_41 [4] [i_10] [i_11] [4]);
                        arr_53 [i_13] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [(unsigned short)1] [(unsigned short)1] [i_11])) ? (((((/* implicit */_Bool) (unsigned char)233)) ? (var_3) : (((/* implicit */unsigned int) arr_24 [i_11] [i_11] [i_11])))) : (((/* implicit */unsigned int) var_0))))) == (((((((/* implicit */_Bool) arr_45 [i_13])) ? (arr_43 [i_9] [i_10] [i_11 + 1] [i_10]) : (((/* implicit */unsigned long long int) arr_32 [i_13])))) * (var_4)))));
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) var_3))));
                    }
                    /* vectorizable */
                    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        var_32 &= ((/* implicit */unsigned char) (+(arr_41 [i_9] [i_9] [i_9] [i_9 - 2])));
                        var_33 ^= ((/* implicit */unsigned char) var_15);
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 3) 
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2090000530)) ? (arr_56 [3ULL] [i_10] [i_10] [i_10] [i_10]) : (arr_56 [i_11 - 2] [i_11] [i_11 - 2] [i_11 - 2] [i_11 - 2])));
                        arr_58 [i_9] [i_9] [i_9 + 2] [i_9] [i_9] = ((/* implicit */unsigned int) arr_36 [i_9]);
                        var_35 = ((/* implicit */int) arr_38 [i_9]);
                        var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64590)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196))) : (arr_47 [i_9] [i_9] [i_9] [i_9] [i_9]))))));
                        var_37 = ((/* implicit */unsigned char) ((arr_19 [i_9 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169)))));
                    }
                }
            } 
        } 
    } 
}
