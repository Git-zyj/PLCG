/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235984
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
    var_11 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_2);
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned int) ((arr_0 [i_0 - 4] [i_0 - 2]) / (((/* implicit */long long int) max((arr_1 [i_0 - 3]), (arr_1 [i_0 + 3]))))));
        arr_4 [(unsigned char)19] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_0 [i_0 - 3] [i_0 + 1]) : ((+(var_6))))), (((arr_0 [i_0 - 1] [i_0]) >> (((arr_0 [i_0] [i_0]) - (3052274954491531256LL)))))));
    }
    for (long long int i_1 = 4; i_1 < 20; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    {
                        arr_17 [i_4] = ((/* implicit */_Bool) max(((signed char)120), ((signed char)117)));
                        /* LoopSeq 3 */
                        for (int i_5 = 2; i_5 < 18; i_5 += 4) 
                        {
                            arr_20 [i_1] = ((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_3] [i_4] [i_1]);
                            arr_21 [(unsigned char)14] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) max((max((-131806525), (1938497390))), (arr_18 [i_1] [i_1] [i_4])));
                            arr_22 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */int) (!((_Bool)1)));
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 20; i_6 += 3) 
                        {
                            arr_26 [i_6] [i_6 - 3] [i_6 - 1] = ((/* implicit */unsigned long long int) ((arr_8 [i_1] [i_2 + 1] [i_3]) ^ (((/* implicit */int) arr_16 [i_6 - 2] [i_4 + 1]))));
                            arr_27 [i_3] [i_6] = ((/* implicit */_Bool) arr_18 [15U] [i_2] [i_2]);
                            arr_28 [i_2] [i_2] [i_2] [i_4] [(_Bool)1] [i_6] [i_6] = ((/* implicit */signed char) arr_23 [(unsigned short)12] [i_2 + 1] [(unsigned short)12] [i_6 - 3] [i_6] [i_3 - 1]);
                            arr_29 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_2] [i_4 - 1])) ? (((/* implicit */int) arr_25 [i_1 - 2] [i_2 + 1])) : (((/* implicit */int) arr_25 [i_1 + 1] [i_1 - 3]))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            arr_33 [(unsigned char)11] [i_2] [i_7] [i_7] [i_2] = ((/* implicit */int) arr_7 [i_7 - 1] [i_2 - 3]);
                            arr_34 [i_7] [i_2] [i_7] [i_7] [i_7 + 2] [i_7 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_2 + 1])), (var_6)))) ? (min((((/* implicit */long long int) max((arr_12 [i_4 + 1] [i_7 + 2]), (((/* implicit */int) arr_13 [i_2] [i_4] [0U]))))), ((~(var_9))))) : (min((max((((/* implicit */long long int) var_7)), (arr_31 [i_7] [i_2] [i_1] [i_4] [i_4]))), (arr_10 [i_3 - 1])))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_42 [i_8] [i_8] [8ULL] [i_9] = ((/* implicit */unsigned int) var_9);
                        arr_43 [i_9] = ((/* implicit */signed char) arr_36 [i_1] [i_1] [i_8]);
                    }
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        arr_48 [i_1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_9] [i_9])) && (((/* implicit */_Bool) (unsigned short)25530))));
                        arr_49 [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)121)) ? (131806552) : (((/* implicit */int) (signed char)-1))));
                    }
                    arr_50 [i_9] = ((/* implicit */unsigned int) var_1);
                    arr_51 [i_1] [i_9] [i_8] [i_9] = ((/* implicit */unsigned char) (-(var_10)));
                }
            } 
        } 
    }
    for (int i_12 = 1; i_12 < 21; i_12 += 4) 
    {
        arr_55 [i_12] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_53 [i_12 + 1] [i_12 + 2])) ? (arr_53 [i_12 - 1] [i_12 + 1]) : (max((arr_52 [i_12]), (((/* implicit */unsigned int) var_10)))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_12 - 1] [i_12 - 1])))));
        arr_56 [i_12] [i_12 + 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_52 [i_12 + 2])) && (((/* implicit */_Bool) arr_52 [i_12 + 2])))) ? (((((/* implicit */_Bool) var_2)) ? (arr_52 [i_12 - 1]) : (arr_52 [i_12 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_10)) != (arr_53 [i_12 - 1] [i_12 + 2])))))));
        arr_57 [20ULL] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (signed char)116))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 4) 
    {
        arr_61 [i_13] = ((/* implicit */unsigned int) arr_5 [i_13]);
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            for (unsigned short i_15 = 3; i_15 < 12; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_16 = 1; i_16 < 10; i_16 += 3) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 13; i_17 += 3) 
                        {
                            {
                                arr_71 [i_13] = ((/* implicit */short) arr_7 [i_13] [i_17]);
                                arr_72 [i_14] [0LL] = ((/* implicit */long long int) ((arr_8 [i_15 + 1] [i_16 + 1] [i_16 - 1]) > (arr_58 [i_15 + 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 13; i_18 += 2) 
                    {
                        for (unsigned short i_19 = 2; i_19 < 10; i_19 += 2) 
                        {
                            {
                                arr_79 [i_13] [i_14] [i_15] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
                                arr_80 [i_13] [i_14] [11U] = ((/* implicit */unsigned short) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_20 = 0; i_20 < 13; i_20 += 3) 
        {
            for (int i_21 = 3; i_21 < 10; i_21 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_22 = 0; i_22 < 13; i_22 += 2) 
                    {
                        arr_90 [i_22] [i_20] [i_20] [i_20] [i_13] [i_13] = ((/* implicit */signed char) (-(arr_67 [i_22] [i_22] [i_22] [i_22] [i_21 + 1])));
                        arr_91 [i_13] [i_13] [i_13] [(_Bool)1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_85 [i_13]))));
                        arr_92 [i_13] [i_20] [i_20] [6U] [i_20] [i_22] &= ((/* implicit */int) arr_32 [i_13] [i_21 - 1] [i_13] [i_22]);
                        arr_93 [i_13] [i_13] [i_21] [i_22] = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                    }
                    for (unsigned int i_23 = 0; i_23 < 13; i_23 += 1) 
                    {
                        arr_96 [i_13] [1] [i_23] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_21 - 1] [i_21 - 1])) - (((/* implicit */int) var_7))));
                        arr_97 [i_23] [i_21] [i_13] [i_13] = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                        arr_98 [i_13] [i_13] [i_20] [i_21] [0] = (+(((/* implicit */int) var_2)));
                        arr_99 [i_13] [i_20] [i_21] [i_23] [i_23] = ((/* implicit */long long int) var_7);
                    }
                    arr_100 [i_21] [i_20] [i_13] = ((/* implicit */short) arr_76 [i_13] [i_21 - 1] [i_21 - 2] [i_21 + 3] [i_21 + 1] [i_21 + 1] [i_21]);
                    /* LoopSeq 1 */
                    for (signed char i_24 = 2; i_24 < 11; i_24 += 4) 
                    {
                        arr_103 [i_13] [i_13] [i_20] [i_21] [i_24] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_13] [i_13] [i_21])) ? (arr_1 [i_24]) : (arr_1 [i_13])))) > (arr_75 [i_13] [i_24] [i_21 + 2] [i_24 - 2] [(signed char)8])));
                        arr_104 [i_13] [i_13] [i_21] [(signed char)10] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_68 [i_24] [i_24 + 2] [i_21] [i_21]))));
                    }
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 13; i_25 += 2) 
                    {
                        for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 4) 
                        {
                            {
                                arr_112 [i_21] [i_21] [i_26] = (+(arr_66 [i_21] [i_21] [i_21 + 2] [i_21] [i_21 - 3] [i_21 + 2]));
                                arr_113 [i_20] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_86 [i_13] [i_20] [i_25] [i_21 + 1]))) | (arr_53 [i_21 + 1] [i_21 - 2])));
                                arr_114 [1U] [(_Bool)1] [i_21 - 1] [i_21 - 2] [i_21] [i_21] [i_21 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_76 [i_13] [i_20] [i_21 + 3] [i_21 + 3] [i_25] [i_25] [i_26]))));
                                arr_115 [i_13] [i_13] [i_21] [i_25] [i_26] = arr_58 [i_13];
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_116 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [(signed char)5] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_13] [i_13]))) : (var_6)));
    }
}
