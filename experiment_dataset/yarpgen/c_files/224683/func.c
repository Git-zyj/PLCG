/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224683
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */_Bool) 14585298807774124871ULL)) ? (((/* implicit */int) arr_2 [i_1] [0ULL])) : (((/* implicit */int) var_6)))) == (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_6)))))))), (((((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2])) / (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2]))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned short) var_2))));
            }
        } 
    } 
    var_18 -= ((/* implicit */short) min((var_14), (((/* implicit */unsigned short) var_11))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    arr_17 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_14 [i_3 - 3]), (arr_14 [i_3 - 1])))) ? (((long long int) arr_11 [i_2])) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) arr_11 [i_2]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((short) (-(((2951237033357807865LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))))));
                        var_20 = ((int) 49152);
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(unsigned char)12] [i_5 - 1]))) == (3861445265935426739ULL))))));
                        arr_20 [i_5] [i_3] [i_5] [i_5] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */int) ((_Bool) arr_18 [(short)1] [i_2] [11U] [i_2]))) ^ (((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_2])), (arr_16 [i_2] [(unsigned short)6]))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_19 [i_2] [i_3]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_2])) - (((/* implicit */int) arr_15 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [(unsigned short)14] [(unsigned char)12] [i_6] [i_6]))))) : (min((3861445265935426739ULL), (3861445265935426768ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_13 [i_3 + 1] [i_3 - 3] [i_3 + 1]))))));
                                var_23 = ((/* implicit */short) 0LL);
                                arr_27 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((max((var_16), (((arr_23 [i_2] [i_6]) + (526138620551247547ULL))))) << (((((((/* implicit */_Bool) (unsigned short)59283)) ? (((/* implicit */int) (unsigned short)58655)) : (((/* implicit */int) (short)32767)))) - (58615)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 2; i_8 < 13; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            {
                                arr_33 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
                                var_24 -= ((/* implicit */short) ((unsigned short) ((unsigned char) ((arr_31 [i_2] [i_2] [i_2] [i_9] [i_2] [i_2]) ? (arr_8 [i_9] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_9])))))));
                                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                                var_26 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(arr_29 [i_9] [i_3] [i_3])))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4]))) * (((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_3] [i_4] [i_3] [i_9])) ? (((/* implicit */unsigned long long int) 2231860137260458665LL)) : (var_4)))))));
                            }
                        } 
                    } 
                    arr_34 [i_2] = (-(((arr_23 [i_2] [i_3 - 3]) / (((/* implicit */unsigned long long int) var_12)))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) (-(((max((((/* implicit */unsigned long long int) var_13)), (14585298807774124871ULL))) / (((/* implicit */unsigned long long int) var_12))))));
    /* LoopSeq 4 */
    for (long long int i_10 = 3; i_10 < 24; i_10 += 2) 
    {
        arr_37 [14U] [(_Bool)1] = ((/* implicit */unsigned short) arr_36 [i_10] [i_10 - 2]);
        var_28 = ((/* implicit */short) 1051252356U);
        var_29 = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) arr_36 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) arr_36 [i_10 - 3] [(short)1])) : (3861445265935426718ULL))), (((arr_35 [i_10]) - (((/* implicit */unsigned long long int) arr_36 [i_10] [i_10])))))), (((((/* implicit */_Bool) var_0)) ? (arr_35 [i_10 - 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_9)))))))));
    }
    for (long long int i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        arr_41 [i_11] [i_11] = ((3323213381U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61278))));
        var_30 = ((/* implicit */unsigned char) (-(max((arr_8 [i_11] [i_11]), (((/* implicit */unsigned long long int) arr_11 [i_11]))))));
        var_31 = ((/* implicit */short) var_1);
        var_32 = ((/* implicit */unsigned int) var_3);
    }
    for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
    {
        arr_45 [i_12] = ((/* implicit */short) arr_31 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]);
        var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
        /* LoopNest 2 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (short i_14 = 1; i_14 < 14; i_14 += 2) 
            {
                {
                    arr_53 [i_14] [(unsigned char)3] [i_12] = ((/* implicit */unsigned char) ((arr_31 [i_13 - 1] [i_14] [i_14] [i_12] [i_14 + 1] [i_14 + 1]) ? (((/* implicit */int) arr_31 [i_13 - 1] [i_13 - 1] [(_Bool)1] [i_12] [i_14 + 1] [i_14])) : (((arr_31 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_12] [i_14 + 1] [i_14 + 1]) ? (((/* implicit */int) arr_31 [i_13 - 1] [i_13 - 1] [i_13] [i_12] [i_14 + 1] [i_14])) : (((/* implicit */int) (short)32767))))));
                    arr_54 [i_12] [i_13] [2ULL] [i_12] = ((/* implicit */short) ((_Bool) (short)17353));
                }
            } 
        } 
        var_34 = arr_52 [i_12] [7ULL] [i_12];
        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) min((arr_29 [i_12] [i_12] [i_12]), (((/* implicit */long long int) ((((/* implicit */int) (short)11252)) * (((/* implicit */int) (unsigned char)136))))))))));
    }
    /* vectorizable */
    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_16 = 0; i_16 < 23; i_16 += 2) 
        {
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_15] [i_15] [i_15]))) != (var_3)));
            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) arr_58 [i_15]))));
        }
        /* LoopNest 3 */
        for (short i_17 = 0; i_17 < 23; i_17 += 4) 
        {
            for (unsigned int i_18 = 0; i_18 < 23; i_18 += 4) 
            {
                for (int i_19 = 0; i_19 < 23; i_19 += 1) 
                {
                    {
                        var_38 = ((/* implicit */unsigned char) ((unsigned long long int) (short)11259));
                        arr_69 [i_19] [i_15] [i_15] [i_18] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-11259)) / (((/* implicit */int) arr_59 [i_15] [i_15] [i_18]))));
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (+(((/* implicit */int) arr_60 [i_15] [i_17])))))));
                        /* LoopSeq 2 */
                        for (signed char i_20 = 0; i_20 < 23; i_20 += 3) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((unsigned short) var_9))));
                            var_41 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)30116))));
                            arr_72 [i_19] = ((/* implicit */unsigned short) -774183403);
                            var_42 -= ((/* implicit */long long int) ((short) arr_68 [i_15] [i_15] [(unsigned short)20] [i_15] [i_15] [i_18]));
                        }
                        for (signed char i_21 = 0; i_21 < 23; i_21 += 3) /* same iter space */
                        {
                            arr_75 [i_15] [i_15] [i_18] [i_19] [i_17] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) == (arr_36 [i_17] [i_18])));
                            arr_76 [i_21] [i_19] [i_19] [i_19] [(unsigned char)22] [i_19] [(unsigned char)22] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_19] [i_19] [i_19] [i_15] [i_17] [i_19]))) / (arr_62 [i_21] [i_19] [i_17])));
                            arr_77 [(short)12] [i_17] [i_18] [i_18] [i_18] [i_19] [i_15] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_71 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_17])) ? (arr_71 [i_15] [i_15] [i_15] [2ULL] [i_15] [i_15] [i_17]) : (arr_71 [i_15] [i_17] [i_18] [i_17] [i_15] [i_19] [i_15])));
                        }
                        arr_78 [i_15] [i_15] [i_17] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_65 [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_17]))) : (var_12)));
                    }
                } 
            } 
        } 
    }
}
