/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222321
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
    var_17 = ((/* implicit */unsigned char) min((max((((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) var_7)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (var_13))))) : ((+(var_10)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    arr_8 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)125)) - (120)))))) ? (arr_2 [i_2]) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_0 [i_1])))));
                    var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))));
                    var_19 = ((/* implicit */signed char) arr_7 [(unsigned short)4] [(unsigned short)4]);
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                {
                    arr_13 [(signed char)3] [i_1] [(_Bool)1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (short)-32227))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [4])) ? (arr_2 [7U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4294967277U))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_0 [(signed char)7]))) > ((~(((/* implicit */int) arr_11 [i_0] [i_1] [i_3] [i_3]))))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                    {
                        arr_16 [i_4] [10LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [6LL] [i_3] [(signed char)10] [(signed char)10])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_4] [(_Bool)1] [(signed char)0]))) * (arr_7 [i_4] [i_0]))) : (((/* implicit */unsigned long long int) arr_0 [i_1]))));
                        var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(signed char)2] [i_3] [i_1]))) : (821596900U)))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1])) | (((/* implicit */int) (signed char)-36))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 4616577127916096332ULL))))));
                            arr_19 [i_4] = ((/* implicit */signed char) ((unsigned char) (!(var_7))));
                            var_24 = ((((-6611114440891994146LL) * (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned char)5] [i_1] [i_4] [i_4] [i_5]))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49505))));
                        }
                    }
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                    {
                        var_25 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_3] [i_6] [i_3] [i_1]))) == (18446744073709551615ULL)));
                        var_26 = ((/* implicit */long long int) ((arr_10 [i_0] [(unsigned short)1]) ? (((((/* implicit */int) arr_4 [i_1] [(_Bool)0])) * (((/* implicit */int) arr_14 [i_0] [i_1] [(signed char)4] [i_6])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_1] [i_1])) : (((/* implicit */int) arr_14 [3ULL] [3ULL] [i_1] [i_0]))))));
                    }
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_24 [i_7] [i_3] [4ULL] [9LL])))));
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (197578797486326974ULL)))) ? (((6484277770606019426ULL) % (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (((/* implicit */unsigned long long int) 3163570432U))));
                        arr_26 [(signed char)7] [(signed char)8] [i_7] [i_3] [i_1] [3U] = arr_7 [i_3] [i_1];
                        var_29 += var_9;
                    }
                }
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            {
                                arr_36 [i_0] [i_1] [i_8] [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_29 [i_10] [i_9] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (var_9))), (((/* implicit */unsigned long long int) min((344063328), (arr_32 [i_0] [i_1] [i_9] [i_10]))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_9] [i_9] [i_10])), ((unsigned char)31)))) : ((-(((/* implicit */int) min((arr_9 [i_8] [i_9] [i_10]), (((/* implicit */unsigned char) arr_14 [i_10] [i_1] [i_8] [i_1])))))))));
                                arr_37 [i_10] [i_9] [i_8] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5680298378581886591LL)) ? (min((((/* implicit */long long int) var_3)), (arr_3 [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_17 [i_0] [i_1] [i_8] [i_0] [i_9] [i_1])))))))) ? (arr_22 [i_9]) : (((/* implicit */unsigned long long int) ((arr_23 [i_8] [i_1] [i_8] [i_9] [i_10]) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [(signed char)0] [i_9] [i_10]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        for (unsigned short i_12 = 1; i_12 < 11; i_12 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) (+((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_20 [i_12 - 1] [i_12 - 1])) : (0ULL)))));
                                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_12 + 1])))) - (((arr_10 [i_12] [i_12 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_12 + 1]))) : (18446744073709551615ULL))))))));
                                arr_42 [i_0] [i_1] [1ULL] [i_11] [1ULL] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) + ((-(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_38 [i_8]))))))));
                            }
                        } 
                    } 
                }
                for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    var_32 = ((/* implicit */long long int) (-2147483647 - 1));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_1]) : (arr_2 [i_0]))))));
                        arr_50 [i_14] [i_13] [i_14] [i_1] [i_0] = ((/* implicit */unsigned char) arr_48 [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
                        {
                            arr_54 [i_14] [i_14] [i_14] [i_14] [i_14] [i_15] [i_15] = ((/* implicit */short) (+(var_12)));
                            var_34 = ((/* implicit */signed char) arr_18 [i_14] [i_1] [i_0] [i_14] [i_15] [i_15]);
                            arr_55 [i_14] [(unsigned char)10] [i_13] [i_14] [8ULL] [i_0] |= ((/* implicit */unsigned short) ((var_16) / (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1])))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) /* same iter space */
                        {
                            arr_59 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_13]))) : ((+(arr_20 [i_0] [i_16])))));
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_13] [i_14] [i_16])) || (var_7)));
                        }
                        /* LoopSeq 1 */
                        for (short i_17 = 0; i_17 < 12; i_17 += 4) 
                        {
                            var_36 = ((/* implicit */unsigned short) ((var_0) >> (((/* implicit */int) (!(arr_10 [i_17] [i_0]))))));
                            var_37 = arr_1 [i_13] [i_14];
                        }
                    }
                }
                for (unsigned long long int i_18 = 2; i_18 < 11; i_18 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        for (signed char i_20 = 0; i_20 < 12; i_20 += 4) 
                        {
                            {
                                var_38 = max((((/* implicit */short) var_1)), (arr_46 [(signed char)0] [i_1] [i_18] [i_19]));
                                var_39 = ((/* implicit */unsigned char) arr_3 [i_0]);
                                var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((-4548253403470524910LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-91))))) ? (max((11636093174564344684ULL), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) arr_31 [i_1])))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_68 [i_20] [i_20] [i_20] [i_18 - 2] [2] [i_18 - 1] [i_18])), (((((/* implicit */_Bool) -5067073089451675719LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_60 [i_20] [(short)0] [i_18] [i_1] [i_0])))))) : (max((((/* implicit */unsigned long long int) arr_33 [(signed char)3] [i_0] [i_18] [i_18] [i_18] [i_1])), (((var_9) / (((/* implicit */unsigned long long int) var_3))))))));
                            }
                        } 
                    } 
                    arr_71 [(signed char)11] = ((/* implicit */signed char) (+((+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)72))))))));
                    /* LoopNest 2 */
                    for (signed char i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        for (int i_22 = 4; i_22 < 11; i_22 += 4) 
                        {
                            {
                                var_41 = ((((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) + (var_8))) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-64), (arr_12 [i_22] [i_18 + 1] [i_18 + 1] [i_0]))))))) | (((/* implicit */long long int) ((/* implicit */int) arr_14 [10LL] [i_21] [i_18] [i_0]))));
                                arr_76 [i_22 - 3] [i_22] [i_21] [i_18] [i_0] [0LL] [i_0] = ((/* implicit */unsigned char) (signed char)12);
                            }
                        } 
                    } 
                    var_42 = arr_65 [i_18 - 1] [i_1] [i_18] [(short)5] [i_18] [i_1];
                }
                var_43 = ((/* implicit */int) (-((-(((((/* implicit */_Bool) arr_56 [8LL] [i_0] [i_0] [i_1] [i_1])) ? (arr_45 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                arr_77 [(unsigned char)5] [i_0] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))) * (min((18185174633205173598ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_23 = 2; i_23 < 19; i_23 += 4) 
    {
        var_44 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_79 [i_23 - 2])))));
        var_45 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_79 [i_23 + 1])) ? (((/* implicit */int) arr_79 [i_23 + 1])) : (((/* implicit */int) arr_79 [i_23 + 3]))))));
    }
    for (long long int i_24 = 3; i_24 < 17; i_24 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_25 = 0; i_25 < 18; i_25 += 1) 
        {
            for (unsigned char i_26 = 0; i_26 < 18; i_26 += 3) 
            {
                for (unsigned char i_27 = 3; i_27 < 17; i_27 += 3) 
                {
                    {
                        var_46 ^= ((/* implicit */_Bool) arr_80 [i_25]);
                        arr_89 [i_24] [i_26] [i_26] [i_26] [i_24] [i_24] = (!(((/* implicit */_Bool) (unsigned char)221)));
                        var_47 = ((/* implicit */short) var_0);
                        var_48 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_85 [i_24 - 1] [i_26] [i_24 - 1])) - (((/* implicit */int) arr_87 [i_24] [i_26] [i_26] [i_25]))))), (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-91)) / (((/* implicit */int) var_14))))), (((long long int) arr_81 [i_26] [i_25]))))));
                    }
                } 
            } 
        } 
        var_49 += ((/* implicit */unsigned long long int) arr_83 [i_24] [(_Bool)1]);
        var_50 = ((/* implicit */signed char) (-((+(max((((/* implicit */unsigned long long int) arr_88 [i_24] [i_24 - 3] [14U] [i_24] [i_24 - 1])), (arr_82 [8LL])))))));
    }
    for (unsigned long long int i_28 = 0; i_28 < 18; i_28 += 4) 
    {
        arr_92 [i_28] [i_28] = ((/* implicit */signed char) var_12);
        var_51 -= ((/* implicit */unsigned char) max((((var_10) >> (((11606876155523018202ULL) - (11606876155523018187ULL))))), (((/* implicit */unsigned int) min((arr_83 [i_28] [i_28]), (((/* implicit */unsigned char) (_Bool)1)))))));
    }
}
