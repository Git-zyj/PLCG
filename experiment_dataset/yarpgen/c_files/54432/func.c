/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54432
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
    var_13 += ((/* implicit */signed char) var_12);
    var_14 = ((/* implicit */signed char) var_0);
    var_15 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((min((arr_0 [(signed char)9] [i_0]), (((311632721U) << (((((/* implicit */int) (signed char)108)) - (80))))))) > ((-(3983334576U)))));
        arr_3 [(unsigned char)16] = ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) >> (((((((/* implicit */_Bool) 311632729U)) ? (((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */unsigned long long int) 38579595)) : (6534988245354469092ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (signed char)43))))))) - (38579580ULL))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1]);
        var_17 = ((/* implicit */short) arr_4 [i_1]);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
        {
            arr_9 [10LL] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)5))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                for (unsigned char i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) arr_13 [i_1] [i_2] [(unsigned short)14] [i_3] [i_3] [i_3]);
                        var_19 += ((/* implicit */unsigned long long int) arr_1 [i_1]);
                        var_20 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_4 - 1] [(signed char)17] [(signed char)10] [i_4 - 3] [i_4 - 3] [i_4]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            arr_16 [i_5] [i_3] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */signed char) arr_14 [i_1] [i_3] [i_4 + 2] [i_5]);
                            arr_17 [17LL] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) ((arr_14 [(unsigned short)5] [(_Bool)1] [(_Bool)1] [i_4 + 2]) > (((/* implicit */unsigned long long int) arr_13 [i_4] [i_4 - 3] [i_4] [i_4] [i_4 - 2] [i_3]))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) arr_18 [i_1] [i_2] [i_2] [i_3] [i_3] [i_6 - 1] [i_6])) : (arr_14 [i_2] [(signed char)11] [i_2] [(short)15]))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_3] [i_4] [i_4])))))));
                            var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_4 + 2] [i_4 - 3] [i_6 - 1]))));
                            var_22 = ((/* implicit */short) arr_7 [i_1] [i_1] [i_1]);
                        }
                    }
                } 
            } 
            arr_21 [i_1] [i_2] = ((/* implicit */unsigned short) (-(arr_7 [i_1] [i_1] [i_1])));
            arr_22 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_1] [i_2]))));
        }
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
        {
            arr_25 [i_1] [i_7] = ((/* implicit */unsigned int) (+(arr_15 [i_1] [i_7])));
            /* LoopSeq 4 */
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [7U] [i_7] [i_7] [i_8] [i_7] [i_8])) ? (((/* implicit */unsigned long long int) arr_13 [i_1] [i_7] [(short)12] [i_8] [i_9] [i_8])) : (arr_4 [i_1])))) ? (arr_27 [i_1] [i_7] [(unsigned char)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_9] [16U] [i_8] [i_1] [i_1] [i_1])))));
                    arr_30 [17U] [i_7] [i_8] [i_9] = (-(arr_0 [i_7] [i_9]));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_9] [i_9] [i_9]))) : (arr_13 [i_1] [i_8] [i_7] [i_1] [i_1] [i_1])));
                }
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(signed char)5] [i_7] [i_10])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_10])) : (((/* implicit */int) arr_8 [i_1] [i_7] [i_10]))));
                    arr_33 [i_1] [4] [i_8] [i_10] = ((/* implicit */unsigned long long int) arr_32 [i_10] [i_7] [i_7] [i_1]);
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_1] [i_7] [i_1] [i_10] [(signed char)10] [i_10])) ? (arr_13 [i_1] [i_7] [i_8] [i_8] [(short)10] [i_1]) : (arr_13 [i_8] [(signed char)2] [i_8] [i_7] [(unsigned char)14] [i_8])));
                }
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    var_27 = ((/* implicit */_Bool) ((arr_26 [i_1] [i_7] [i_11]) | (arr_26 [i_1] [i_7] [i_7])));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [(unsigned short)15] [i_1] [i_8] [i_8])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_11] [i_11] [i_11] [i_11] [16U] [i_11]))));
                }
            }
            for (unsigned int i_12 = 1; i_12 < 16; i_12 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned short) arr_26 [i_1] [i_7] [i_12]);
                var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_37 [i_12 + 2] [i_12 - 1] [i_12 - 1] [i_12 + 2])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_1] [4LL] [i_7] [i_12 - 1])))))));
            }
            for (unsigned int i_13 = 1; i_13 < 16; i_13 += 3) /* same iter space */
            {
                arr_41 [i_7] [i_13] = ((/* implicit */long long int) ((((arr_31 [i_1]) >> (((/* implicit */int) arr_24 [i_13 + 1] [i_1])))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    arr_44 [i_13] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_38 [i_1] [i_7] [i_13 + 2] [i_14]))))) == (arr_0 [i_13 - 1] [i_13 + 1])));
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) ((arr_40 [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [0U] [i_1] [i_1])))))) == (((/* implicit */int) ((((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [17U] [i_13 + 1] [i_1])) < (((/* implicit */int) arr_37 [(signed char)8] [i_7] [i_13] [i_14]))))))))));
                    arr_45 [i_1] [i_13] [i_13] [i_14] = ((/* implicit */signed char) ((arr_14 [13U] [i_7] [i_13 + 1] [i_14]) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_1] [i_7] [i_13] [i_14])) || (((/* implicit */_Bool) arr_26 [i_7] [(unsigned short)15] [(unsigned short)15])))))));
                }
                /* LoopSeq 2 */
                for (int i_15 = 1; i_15 < 14; i_15 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_16 = 2; i_16 < 15; i_16 += 2) 
                    {
                        arr_54 [i_1] [i_15 - 1] [i_13] [i_13] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) (short)-12789)) : (((/* implicit */int) (unsigned short)61625))));
                        arr_55 [i_1] [i_16] [i_13] [i_1] [i_16 - 2] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_15] [i_15 - 1] [i_15] [i_13] [i_16] [i_16 - 1])) || (((/* implicit */_Bool) arr_13 [i_13 + 1] [i_13] [i_13] [i_13 - 1] [i_15 + 2] [i_13]))));
                        arr_56 [i_7] [i_13] [(signed char)2] [i_7] [2ULL] [10U] = (+(arr_13 [i_15] [i_15] [i_15 - 1] [i_15] [i_15 + 4] [i_13]));
                    }
                    for (unsigned int i_17 = 0; i_17 < 18; i_17 += 2) 
                    {
                        var_32 = ((/* implicit */signed char) arr_11 [i_15 + 1] [i_15 + 3] [i_15 - 1]);
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_1] [i_13 + 1] [i_15 + 3] [i_15 + 2])) / (((/* implicit */int) arr_38 [i_1] [i_13 + 1] [(unsigned char)10] [i_15 + 2]))));
                        arr_61 [i_1] [i_7] [i_13] [i_13] [i_17] = (i_13 % 2 == 0) ? (((/* implicit */unsigned char) ((arr_57 [i_13] [i_13 + 1] [i_15 + 4] [i_17] [i_17]) >> (((arr_57 [i_13] [i_13 + 2] [i_15 + 3] [i_15 + 3] [6U]) - (2062274256)))))) : (((/* implicit */unsigned char) ((((arr_57 [i_13] [i_13 + 1] [i_15 + 4] [i_17] [i_17]) + (2147483647))) >> (((((arr_57 [i_13] [i_13 + 2] [i_15 + 3] [i_15 + 3] [6U]) + (2062274256))) - (813414277))))));
                        arr_62 [i_1] [i_7] [i_1] [i_7] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_1] [i_7] [(signed char)1] [i_13] [i_15 + 1] [i_17])) ? (arr_28 [i_1] [i_7] [i_13]) : (((/* implicit */unsigned long long int) arr_34 [i_1] [i_1] [i_7] [i_13] [i_15] [i_15]))));
                    }
                    arr_63 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_58 [i_1] [i_13] [i_13 - 1] [i_13] [(unsigned char)0])) * (((/* implicit */int) arr_47 [i_1] [i_13] [i_7] [i_13 + 2] [i_15 + 1]))))) - (((((/* implicit */_Bool) arr_42 [(unsigned short)1] [i_7] [i_13 + 1] [i_7])) ? (arr_15 [i_7] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_1] [i_7] [i_1] [i_15])))))));
                }
                for (long long int i_18 = 1; i_18 < 17; i_18 += 2) 
                {
                    var_34 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_13 - 1] [i_13 - 1] [i_18 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_13 + 2] [i_13 - 1] [i_18 - 1] [i_18] [i_18]))) : (arr_7 [i_13 - 1] [16U] [i_18 + 1])));
                    /* LoopSeq 1 */
                    for (signed char i_19 = 1; i_19 < 16; i_19 += 4) 
                    {
                        arr_70 [i_1] [i_13] [i_7] [i_13] [i_18] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_58 [i_19] [i_19] [i_19 + 1] [(unsigned char)7] [i_13 + 2])) ? (((/* implicit */int) arr_58 [i_19] [i_19] [i_19 + 2] [i_13 - 1] [i_13 + 2])) : (((/* implicit */int) arr_58 [i_19 + 1] [(unsigned char)3] [i_19 + 2] [i_13] [i_13 + 1]))));
                        var_35 = ((arr_64 [i_19 + 2]) != (arr_64 [i_19 - 1]));
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)158)))))));
                        arr_71 [i_1] [i_7] [i_13] [i_13] [i_13 - 1] [i_18] [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_58 [i_19 + 2] [i_18 + 1] [i_18] [i_18 - 1] [i_13 + 1]))));
                    }
                    arr_72 [i_13] = ((/* implicit */signed char) arr_0 [i_1] [i_7]);
                }
            }
            for (unsigned int i_20 = 2; i_20 < 17; i_20 += 1) 
            {
                var_37 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_60 [i_1] [i_20 - 1] [i_20]))) / (((((/* implicit */_Bool) arr_8 [i_20] [i_7] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_7] [i_7] [i_20] [i_20 - 1]))) : (arr_15 [i_7] [i_20])))));
                arr_75 [i_1] [i_7] [1U] = ((arr_11 [i_20 - 2] [i_20 + 1] [i_20 + 1]) / (((/* implicit */unsigned long long int) arr_13 [i_20] [i_20 + 1] [i_20 - 1] [i_20] [(signed char)12] [i_1])));
            }
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 18; i_21 += 3) 
            {
                for (signed char i_22 = 0; i_22 < 18; i_22 += 1) 
                {
                    {
                        arr_81 [(signed char)5] [i_7] [i_21] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_21] [i_22])) ? (((/* implicit */int) arr_23 [i_1] [i_21])) : (((/* implicit */int) arr_23 [5U] [i_7]))));
                        arr_82 [i_1] [i_7] [i_21] [i_7] [i_22] = ((((/* implicit */int) arr_8 [i_1] [i_7] [i_22])) > (((/* implicit */int) arr_74 [i_1] [i_1])));
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) arr_15 [i_1] [i_1]))));
                        arr_83 [i_1] [i_7] [i_21] [i_22] = ((/* implicit */short) arr_48 [i_1] [i_7] [i_7] [i_1] [(signed char)4] [i_22]);
                        /* LoopSeq 1 */
                        for (unsigned short i_23 = 2; i_23 < 15; i_23 += 1) 
                        {
                            var_39 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_1] [i_1] [i_21] [i_22] [i_23] [i_23] [i_23]))) % (arr_27 [i_1] [i_21] [i_22])))) ? (((/* implicit */unsigned long long int) arr_57 [i_1] [i_23] [i_23 - 1] [(signed char)0] [i_23 + 3])) : (arr_84 [i_23 + 1] [i_23 - 2] [i_23])));
                            arr_86 [i_1] [i_1] [i_7] [i_21] [i_22] [i_1] [i_23 - 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_57 [i_1] [i_1] [10ULL] [i_23 + 2] [i_23 + 3])) ? (arr_57 [i_1] [i_1] [i_21] [i_23 + 1] [i_23 - 2]) : (arr_57 [i_1] [i_1] [i_7] [i_23 + 3] [i_23 + 3])));
                            arr_87 [i_1] [2U] [2U] [i_1] [i_23] = ((/* implicit */short) arr_23 [i_23 - 1] [i_7]);
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_23 - 2] [i_23 - 2] [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_23 + 2] [i_23] [i_23 + 2] [i_23 + 1] [i_23 + 2] [i_23 + 2]))) : (arr_34 [i_7] [i_7] [i_23 - 2] [i_1] [i_22] [i_7])));
                            var_41 |= ((/* implicit */short) (+(971091220U)));
                        }
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (signed char i_24 = 0; i_24 < 18; i_24 += 2) 
    {
        arr_90 [i_24] [i_24] = ((/* implicit */signed char) ((arr_4 [i_24]) & (arr_4 [i_24])));
        arr_91 [i_24] = ((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_24] [i_24] [i_24] [i_24])) * (((/* implicit */int) arr_49 [i_24] [i_24] [i_24] [i_24]))));
    }
    var_42 = ((/* implicit */signed char) var_4);
}
