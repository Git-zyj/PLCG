/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220945
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 *= ((/* implicit */unsigned long long int) ((arr_0 [i_0] [11ULL]) ? (((/* implicit */int) arr_0 [i_0] [9])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) arr_6 [i_2]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (+((+((-9223372036854775807LL - 1LL))))));
                        var_18 = ((/* implicit */unsigned short) (-((-(8931632229687748733ULL)))));
                        arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_3]))));
                        arr_11 [i_0] [i_1] [i_3] = ((/* implicit */short) ((arr_2 [i_0] [i_3]) << (((arr_1 [i_0]) - (941320539)))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        var_19 &= ((/* implicit */unsigned char) ((int) arr_7 [i_1] [3] [i_1] [i_0] [i_0]));
                        arr_15 [i_0] [2LL] [i_2] [i_2] [i_4] = ((arr_8 [i_4] [i_2] [i_0] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [i_0])));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned short) arr_13 [i_0] [i_0] [i_2] [i_2] [i_0])))));
                        arr_16 [6U] [i_2] [i_1] [i_0] &= ((/* implicit */short) ((((/* implicit */int) arr_5 [i_4] [i_2] [i_1] [i_0])) == (((/* implicit */int) arr_5 [i_0] [(signed char)3] [i_2] [i_2]))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 2; i_6 < 14; i_6 += 2) 
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_1] [i_2] [i_5] [i_6 + 2] = ((/* implicit */unsigned long long int) (-(arr_7 [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6] [i_6])));
                            arr_22 [i_0] [i_1] |= ((/* implicit */unsigned long long int) var_8);
                            arr_23 [(signed char)13] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (var_9) : (((((/* implicit */_Bool) arr_13 [(signed char)7] [i_1] [i_2] [i_5] [i_6])) ? (((/* implicit */int) arr_3 [i_1] [i_2] [i_5])) : (arr_2 [i_0] [i_1])))));
                            arr_24 [(_Bool)1] [7LL] [i_2] [i_5] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_6 + 2] [i_6] [i_6] [i_6] [i_6]))));
                        }
                        arr_25 [(unsigned char)10] = ((/* implicit */int) ((((((/* implicit */int) arr_20 [i_0] [i_5] [i_2] [i_0] [15U] [i_1])) < (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [(short)7] [i_1] [i_0]))) : (9223372036854775807LL)));
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            arr_29 [i_0] [i_0] [i_0] [(unsigned char)10] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [12ULL] [(_Bool)1] [i_5]))) : (arr_4 [i_0])));
                            arr_30 [i_0] [i_1] [i_2] [i_5] [i_0] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_0] [i_0]))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(arr_6 [i_7])));
                            arr_32 [i_0] [i_0] [i_2] [i_5] [i_2] = ((/* implicit */long long int) ((_Bool) (~(arr_1 [i_0]))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_6 [i_2]))));
                        }
                        for (unsigned char i_8 = 4; i_8 < 14; i_8 += 2) 
                        {
                            arr_36 [i_0] [i_0] [i_2] [i_5] [i_5] [5LL] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_5] [i_8 - 3] [i_8 - 2] [i_8] [i_8 - 2])) ? (arr_7 [i_2] [i_8 + 1] [i_8 + 1] [i_8 - 4] [i_8 - 2]) : (arr_7 [i_1] [i_8 - 4] [i_8 - 2] [i_8] [i_8])));
                            arr_37 [i_2] [i_8] [i_8] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            arr_38 [i_1] [i_1] = ((((/* implicit */_Bool) arr_3 [i_8 - 3] [i_1] [i_0])) ? ((+(arr_13 [(_Bool)1] [i_1] [i_2] [i_1] [i_8]))) : (arr_13 [i_0] [i_1] [i_2] [i_5] [3LL]));
                            arr_39 [i_0] [i_1] [i_2] [i_5] [i_5] [i_8] [i_8] = (-(((/* implicit */int) arr_0 [i_8 - 1] [i_8 - 3])));
                        }
                        arr_40 [i_1] [i_2] [1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_13 [i_0] [i_1] [i_2] [i_2] [i_2]);
                    }
                    arr_41 [i_2] = ((/* implicit */signed char) (-(9223372036854775807LL)));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        arr_45 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_0] [i_1] [i_2] [i_9])) <= ((~(((/* implicit */int) var_3))))));
                        arr_46 [i_0] [i_1] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) ((_Bool) -9223372036854775788LL));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_10 = 1; i_10 < 14; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                {
                    var_22 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_11] [i_10] [i_10] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_10] [(signed char)2] [i_11] [i_11])) : (((/* implicit */int) arr_12 [2ULL] [2ULL]))));
                    arr_52 [i_0] [i_0] [i_0] = arr_5 [i_0] [i_0] [i_10] [i_0];
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) 
    {
        for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            {
                arr_57 [i_12] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) arr_19 [i_12] [i_12] [i_12] [i_13] [i_13])) - (((((/* implicit */_Bool) arr_28 [i_12] [i_13] [i_12] [i_13] [i_12] [i_12])) ? (9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_12] [i_12] [(_Bool)1] [i_12])))))))));
                arr_58 [i_12] [i_12] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_14 [i_12] [i_13] [i_13] [i_13])) == (((/* implicit */int) arr_28 [i_13] [i_13] [i_12] [6U] [i_12] [(unsigned short)4])))))));
                /* LoopSeq 3 */
                for (unsigned char i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    arr_61 [(unsigned short)6] [(unsigned short)6] = ((/* implicit */signed char) max((9223372036854775807LL), ((+((-9223372036854775807LL - 1LL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        for (short i_16 = 1; i_16 < 11; i_16 += 4) 
                        {
                            {
                                arr_67 [i_12] [i_12] [i_12] [i_12] [i_16] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_16 + 1] [i_16 + 2])) ? (3468626912749802866LL) : (-9223372036854775807LL)))), (((unsigned long long int) arr_42 [i_16] [i_16] [i_16 + 2] [i_16 + 1] [i_16 + 2]))));
                                arr_68 [i_12] [i_13] [i_16] [i_14] [2U] [i_16] = ((/* implicit */long long int) (signed char)0);
                                arr_69 [i_16] [i_12] [i_13] [i_14] [i_15] [11U] [i_16 + 1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_54 [i_16] [i_16 - 1])))) != (((/* implicit */int) arr_54 [i_16 + 1] [i_16 + 1]))));
                            }
                        } 
                    } 
                    arr_70 [i_12] [i_13] [i_13] [i_14] = (~((~((~(arr_17 [i_12] [i_12] [3ULL] [0U]))))));
                }
                for (unsigned int i_17 = 3; i_17 < 9; i_17 += 4) /* same iter space */
                {
                    arr_75 [0] [i_13] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_62 [i_12])) ? (((((/* implicit */_Bool) -1806205945)) ? (7660150370051207432ULL) : (((/* implicit */unsigned long long int) 2064384)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_43 [i_12] [11ULL] [11ULL] [i_12]) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_71 [i_12])))))))))));
                    arr_76 [i_13] [i_17] [i_17] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_3 [i_12] [i_12] [i_17 + 1])) ? (((((/* implicit */_Bool) 3U)) ? (-9223372036854775793LL) : (((/* implicit */long long int) -1684202217)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (_Bool)0)) : (1684202205))))))));
                    arr_77 [i_12] [i_12] [i_13] [i_17] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) -986456700)), (max((((/* implicit */long long int) arr_73 [i_12] [i_13] [i_17])), (-4957725596907615345LL))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                }
                for (unsigned int i_18 = 3; i_18 < 9; i_18 += 4) /* same iter space */
                {
                    arr_81 [3U] [i_18] [i_18 + 4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((-9223372036854775807LL - 1LL)) : ((-(var_0)))));
                    var_24 = ((/* implicit */short) var_7);
                }
                arr_82 [i_12] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_42 [i_12] [i_12] [i_12] [i_12] [(_Bool)1])) * (((/* implicit */int) arr_42 [i_13] [2ULL] [i_13] [i_13] [i_13])))), (((/* implicit */int) arr_42 [(_Bool)1] [(_Bool)1] [i_13] [i_13] [2ULL]))));
                /* LoopNest 3 */
                for (unsigned long long int i_19 = 3; i_19 < 11; i_19 += 4) 
                {
                    for (long long int i_20 = 0; i_20 < 13; i_20 += 2) 
                    {
                        for (unsigned int i_21 = 0; i_21 < 13; i_21 += 2) 
                        {
                            {
                                arr_92 [i_21] [i_20] [i_19] [i_12] |= ((/* implicit */_Bool) arr_33 [i_12] [i_19] [i_19] [i_21]);
                                arr_93 [i_12] [(signed char)7] [i_21] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1382532592U))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */long long int) (((~(((/* implicit */int) var_3)))) | (((/* implicit */int) var_8)))))));
}
