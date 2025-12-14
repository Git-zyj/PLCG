/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233174
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))), (min((((/* implicit */int) (unsigned char)125)), (var_18)))))));
                arr_7 [i_0] [i_0] [i_0] = arr_1 [i_1];
                arr_8 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((((_Bool)1) ? (1256844816U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) ((unsigned short) 9223372036854775807LL))) ? (min((arr_5 [i_1]), (((/* implicit */unsigned int) arr_0 [i_0])))) : (min((1256844816U), (((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_0]))))))));
                var_20 = ((/* implicit */long long int) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (signed char i_3 = 4; i_3 < 11; i_3 += 1) 
        {
            {
                arr_15 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 12288464962722979835ULL)) && (((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (_Bool)0)), (6327629402293537823ULL))))))));
                var_21 = ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_2] [i_3] [i_3]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            {
                arr_20 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((max((((((/* implicit */int) var_5)) / (arr_17 [i_4] [i_4]))), (((((/* implicit */_Bool) -1609725271)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0)))))) << (((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_19 [i_5] [i_4] [i_4])))) * ((-(var_1))))) - (10338849293969122383ULL))))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((arr_19 [i_4] [i_5] [i_4]) + (2340687196298250268LL)))));
                arr_21 [i_5] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_17 [i_5] [i_4]) ^ ((~(((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) (+(var_13)))) ? (max((arr_16 [i_4] [i_5]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(arr_19 [i_5] [i_4] [i_4]))))))));
                var_24 = ((/* implicit */_Bool) (+(((((/* implicit */long long int) arr_17 [i_4] [i_5])) ^ ((~(arr_19 [i_4] [i_4] [i_5])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            for (int i_8 = 4; i_8 < 17; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    {
                        var_25 |= ((/* implicit */short) arr_22 [i_6]);
                        arr_31 [i_6] [i_6] [i_6] [(signed char)7] = ((/* implicit */_Bool) max((arr_24 [(unsigned char)6]), (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)1)) * (((/* implicit */int) var_7))))), ((+(arr_25 [i_6] [(unsigned char)14] [(short)17])))))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) min(((!((!(((/* implicit */_Bool) arr_17 [i_8] [i_7])))))), (arr_30 [i_8 + 1] [i_7] [i_8] [i_9]))))));
                        var_27 = ((/* implicit */signed char) (-(min((((/* implicit */long long int) (_Bool)1)), (((var_13) - (((/* implicit */long long int) ((/* implicit */int) arr_22 [14])))))))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */short) (+(max((arr_24 [(unsigned short)2]), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))))));
    }
    /* vectorizable */
    for (signed char i_10 = 1; i_10 < 9; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 12; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 3; i_12 < 12; i_12 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_39 [i_10] [i_11] [10] [i_11 - 3]))));
                        arr_41 [(unsigned char)12] [(_Bool)1] [i_11 - 3] [i_11] [i_10] [i_13] = ((/* implicit */unsigned char) var_8);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        for (short i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            {
                                var_30 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_29 [i_10] [i_10] [i_12] [i_15]))));
                                var_31 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_29 [i_10] [i_10] [i_10 + 1] [i_10 + 2])));
                                var_32 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_36 [i_10] [i_11] [(unsigned short)8])))));
                                arr_48 [i_10] [i_15] [i_14] [i_10 - 1] [i_11] [i_10] [i_10] = ((/* implicit */unsigned int) var_6);
                                arr_49 [i_10 + 2] [i_14] [i_10] [i_10 + 2] [i_10 + 2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) (short)32750)) : (((/* implicit */int) arr_34 [i_14]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 1; i_16 < 12; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 1; i_17 < 11; i_17 += 4) 
                        {
                            {
                                arr_55 [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) arr_38 [i_12])) : (((/* implicit */int) var_11)))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_16]))) == (arr_16 [i_11 - 3] [i_11 - 3]))))));
                                var_33 |= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_23 [i_10 + 3])) + (((/* implicit */int) var_0)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (long long int i_19 = 0; i_19 < 13; i_19 += 4) 
                        {
                            {
                                arr_61 [(short)8] [i_19] [i_19] [i_12] [i_19] [i_10] [i_10] |= ((/* implicit */short) (-(((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) arr_39 [i_10] [i_19] [i_19] [i_10])) - (104)))))));
                                var_34 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) arr_39 [i_10 + 3] [i_11] [i_10] [i_10])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_10 + 2] [i_10 + 4] [i_10 - 1] [i_10] [i_10 + 3])) ? (((/* implicit */int) arr_23 [i_10 + 1])) : (((/* implicit */int) arr_40 [i_10 + 4] [i_10 + 3] [i_10 + 4] [i_10] [i_10]))));
        /* LoopNest 2 */
        for (unsigned short i_20 = 3; i_20 < 12; i_20 += 4) 
        {
            for (int i_21 = 0; i_21 < 13; i_21 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 13; i_22 += 1) 
                    {
                        for (unsigned int i_23 = 3; i_23 < 11; i_23 += 4) 
                        {
                            {
                                arr_73 [i_10] [2U] [i_10] [i_22] [i_23] = ((/* implicit */signed char) ((((/* implicit */int) arr_58 [i_22] [i_22])) & (((/* implicit */int) arr_60 [(_Bool)1] [i_22] [i_20] [i_20] [i_10]))));
                                var_36 = ((/* implicit */long long int) ((signed char) var_16));
                            }
                        } 
                    } 
                    arr_74 [i_10 + 2] [i_21] [i_21] |= ((((/* implicit */_Bool) arr_38 [i_10 + 4])) ? (((/* implicit */int) arr_38 [i_10 + 4])) : (((/* implicit */int) arr_38 [i_10 + 3])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_24 = 0; i_24 < 13; i_24 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            for (unsigned int i_26 = 0; i_26 < 13; i_26 += 1) 
            {
                {
                    arr_85 [i_24] [i_24] |= ((/* implicit */short) (~((+(arr_32 [i_24])))));
                    /* LoopNest 2 */
                    for (unsigned short i_27 = 2; i_27 < 10; i_27 += 1) 
                    {
                        for (int i_28 = 3; i_28 < 12; i_28 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) arr_88 [i_27 + 2] [i_28] [i_26] [i_28 - 2] [(signed char)8] [i_26] [i_28 - 2]);
                                var_38 = ((/* implicit */int) var_9);
                                var_39 += ((((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_24] [i_24] [i_26] [i_27] [i_28 - 1] [i_27 - 1] [i_25])) || (((/* implicit */_Bool) (signed char)-105))))) << (((4774302318513245183LL) - (4774302318513245163LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_29 = 0; i_29 < 13; i_29 += 3) 
                    {
                        for (long long int i_30 = 1; i_30 < 12; i_30 += 4) 
                        {
                            {
                                arr_94 [(signed char)8] [i_25] [i_26] [i_29] [i_26] = ((/* implicit */signed char) (-(arr_56 [i_30 - 1])));
                                arr_95 [i_24] [i_25] [i_26] [i_29] [i_26] = ((/* implicit */unsigned long long int) 3212404369U);
                            }
                        } 
                    } 
                    arr_96 [i_26] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_66 [(unsigned char)4])) >> (((((/* implicit */int) (signed char)-104)) + (113)))));
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (short)16))))));
        /* LoopNest 2 */
        for (unsigned long long int i_31 = 0; i_31 < 13; i_31 += 4) 
        {
            for (short i_32 = 3; i_32 < 12; i_32 += 3) 
            {
                {
                    var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_39 [i_24] [6ULL] [i_31] [i_32])) ? (((/* implicit */int) arr_43 [(signed char)11] [i_31] [i_32 - 3] [i_32] [i_31])) : (var_18))) : (((/* implicit */int) var_11))));
                    arr_101 [i_32 - 3] [i_31] [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) 2064193294611779043ULL)) ? (arr_45 [i_32] [i_32] [i_32] [i_32] [i_31] [i_24] [i_24]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_24] [i_31])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_70 [i_24])))))));
                    /* LoopNest 2 */
                    for (signed char i_33 = 1; i_33 < 12; i_33 += 2) 
                    {
                        for (short i_34 = 2; i_34 < 12; i_34 += 3) 
                        {
                            {
                                var_42 = ((/* implicit */short) arr_17 [i_34] [i_31]);
                                var_43 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 108624600)) ? (((/* implicit */int) (short)25618)) : (((/* implicit */int) arr_28 [i_24] [i_31] [i_32] [i_33] [i_34]))))) && (((/* implicit */_Bool) arr_83 [i_34 - 2] [i_34 - 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
