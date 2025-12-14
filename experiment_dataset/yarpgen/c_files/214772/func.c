/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214772
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_11 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_3] [i_0] [i_0])) + (1646683056))) << ((((((~(((/* implicit */int) arr_12 [i_0] [i_3] [i_1] [i_1] [i_0])))) + (38761))) - (25)))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_3] [i_0] [i_0])) + (1646683056))) << ((((((((~(((/* implicit */int) arr_12 [i_0] [i_3] [i_1] [i_1] [i_0])))) + (38761))) - (25))) - (38112))))));
                                var_12 = ((arr_4 [i_0] [i_0] [(short)7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_2 + 1] [i_3 + 1] [i_0]))));
                            }
                        } 
                    } 
                    var_13 &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [i_2 - 1] [(short)10] [i_2 - 1]))));
                }
                var_14 = ((/* implicit */long long int) (!(arr_9 [i_0] [i_0] [i_1] [i_0])));
                var_15 = ((/* implicit */unsigned short) max(((~((~(((/* implicit */int) var_9)))))), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_16 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (((((/* implicit */unsigned int) ((/* implicit */int) min((var_9), ((short)-31501))))) + (var_2)))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (int i_6 = 1; i_6 < 9; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_5] [i_7] [(short)6] [6ULL]))))), (max((5893442041438060614LL), (((/* implicit */long long int) var_1))))))) ? (((/* implicit */int) ((unsigned short) (-(4294967295U))))) : (((/* implicit */int) ((unsigned char) min((arr_19 [6ULL] [(unsigned short)0] [6ULL]), (((/* implicit */unsigned long long int) arr_3 [14U] [12U] [14U]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 3; i_8 < 11; i_8 += 1) 
                    {
                        arr_25 [i_5] [i_5] [(unsigned short)6] [i_8 - 2] = ((/* implicit */unsigned int) min((((/* implicit */short) ((_Bool) arr_10 [i_6] [i_6 + 2] [i_6 + 2] [i_8] [i_5]))), (var_9)));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_14 [2ULL])) >> (((((/* implicit */int) arr_22 [(signed char)2] [i_6 + 1] [i_8 - 1])) + (10105))))) * (((((/* implicit */_Bool) arr_3 [i_6 + 1] [i_6] [4])) ? (((/* implicit */int) arr_13 [i_5] [i_6 + 3] [4])) : (((/* implicit */int) arr_10 [i_7] [4ULL] [(unsigned short)12] [i_8 - 3] [8])))))))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_10))));
                    }
                    arr_26 [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) min((var_5), (((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_5] [i_6 + 1] [i_5])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_9 = 2; i_9 < 11; i_9 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            var_20 = ((((/* implicit */_Bool) 15)) ? (arr_23 [1U] [i_10] [i_9 - 1] [i_9] [8U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9] [8U] [i_9 - 1]))));
            var_21 |= ((/* implicit */unsigned short) ((var_5) + ((+(arr_11 [(unsigned char)8] [i_10] [i_9] [i_10] [6])))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [4ULL] [i_10] [i_10])) || (((/* implicit */_Bool) arr_14 [(unsigned short)6])))))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) arr_19 [i_9] [(unsigned short)10] [(short)10])))) ? (arr_27 [i_9]) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (var_3))))))));
            /* LoopSeq 2 */
            for (int i_12 = 4; i_12 < 10; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    for (int i_14 = 3; i_14 < 10; i_14 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) 10);
                            arr_43 [i_12] [i_9] [i_11] [i_12 - 1] [i_13] [i_14] = ((/* implicit */short) ((arr_39 [i_9 + 1] [i_12 + 2] [(unsigned short)0] [i_13] [i_14 - 3] [i_14]) & (((/* implicit */unsigned long long int) arr_29 [i_9] [i_9]))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((arr_20 [i_12 - 4] [(unsigned char)0] [i_12 - 1]) + (arr_20 [i_12 - 1] [(unsigned short)6] [i_12 + 1]))))));
                        }
                    } 
                } 
                arr_44 [i_11] [i_12] = ((/* implicit */unsigned short) ((arr_30 [i_9] [i_9 - 1] [i_12 - 1]) ? (((/* implicit */int) arr_30 [i_9] [i_9 + 1] [i_12 - 4])) : (((/* implicit */int) arr_30 [i_9] [i_9 + 1] [i_12 - 3]))));
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_9] [i_11] [i_12] [i_9 - 2] [i_12 + 1] [i_12 + 1])) ? (arr_27 [i_12 - 2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (-15) : (14))))));
            }
            for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) 
            {
                var_27 = var_6;
                arr_47 [2U] [i_15] |= ((/* implicit */unsigned int) 15);
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17))) : (arr_20 [i_9] [4U] [i_15]))))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 1) 
            {
                for (unsigned int i_17 = 0; i_17 < 12; i_17 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_41 [0U] [i_11] [i_16] [i_17]))) ? ((~(((/* implicit */int) arr_18 [i_17] [i_17])))) : (((/* implicit */int) arr_14 [i_17]))));
                        var_30 = ((/* implicit */unsigned short) ((unsigned long long int) arr_15 [i_9 - 2] [i_9 + 1]));
                        arr_52 [i_9 + 1] [i_17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
                        var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [(unsigned short)4] [i_17])) ? (arr_37 [6] [i_11]) : (arr_37 [(signed char)2] [(signed char)2])));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 12; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                {
                    var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9 - 2] [i_18] [i_18]))) <= (arr_11 [i_18] [i_9] [i_9] [i_18] [i_19])))), (((((/* implicit */_Bool) arr_54 [i_9])) ? (arr_45 [i_9 - 2] [i_18] [i_9 - 2] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                    /* LoopNest 2 */
                    for (signed char i_20 = 0; i_20 < 12; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) (_Bool)1)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) -15)))))));
                                var_34 = ((/* implicit */short) ((arr_0 [i_9] [i_18]) == (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (arr_60 [i_18]) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 552309670047505094ULL)) ? (((/* implicit */int) arr_40 [i_18])) : (((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                    arr_65 [i_18] = (+(((/* implicit */int) ((((((/* implicit */int) arr_6 [i_9 - 2] [i_19] [9U] [i_18])) <= (((/* implicit */int) arr_13 [i_9] [i_9] [i_18])))) && (((/* implicit */_Bool) arr_16 [i_9]))))));
                    var_35 = ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_9 + 1]))) > (max((arr_37 [i_18] [i_18]), (((/* implicit */unsigned long long int) arr_54 [i_18])))))));
                    /* LoopNest 2 */
                    for (short i_22 = 1; i_22 < 10; i_22 += 1) 
                    {
                        for (int i_23 = 0; i_23 < 12; i_23 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) arr_31 [i_9] [i_9] [i_9])), (var_5))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_42 [i_22] [i_22] [i_18] [i_22 + 1] [i_22 - 1]) : (arr_34 [i_18] [3U] [3U] [(unsigned short)9])))) ? ((~(((/* implicit */int) arr_38 [i_9] [i_18] [i_19] [i_18] [i_22 + 2])))) : (((/* implicit */int) (unsigned char)240))))));
                                var_37 = -853969813;
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_71 [i_9 - 1] [i_9 + 1] = ((/* implicit */unsigned short) min((((((((/* implicit */unsigned long long int) 14)) | (var_5))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_34 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) var_6)) : (arr_45 [i_9 - 2] [i_9] [i_9] [i_9]))) + (((/* implicit */unsigned int) (~(-12)))))))));
        var_38 -= ((/* implicit */short) (~(((((((/* implicit */int) var_9)) + (2147483647))) << (((var_2) - (4179068417U)))))));
    }
}
