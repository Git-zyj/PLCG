/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38696
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = (unsigned char)15;
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0])) : (((/* implicit */int) var_9))))));
            arr_6 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned int) var_9);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_0] [i_2] [i_2] &= ((/* implicit */long long int) var_7);
            var_14 = var_11;
            arr_10 [i_2] = ((/* implicit */signed char) var_3);
            var_15 ^= ((/* implicit */short) var_11);
        }
        for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_16 &= ((/* implicit */short) (unsigned char)15);
            /* LoopNest 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_6 = 1; i_6 < 15; i_6 += 2) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_4 - 1] [6LL] [i_6 - 1] = arr_12 [i_6] [i_6] [i_6];
                            var_17 -= ((/* implicit */unsigned char) var_8);
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 1; i_7 < 15; i_7 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)235))))) ? (((((/* implicit */_Bool) 134217727ULL)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0])))) : (((arr_13 [i_0] [i_0] [i_4]) ? (((/* implicit */int) arr_21 [i_7] [i_5] [i_3] [i_0])) : (((/* implicit */int) var_6)))))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)4))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_0))));
                        }
                        for (unsigned short i_8 = 1; i_8 < 15; i_8 += 2) /* same iter space */
                        {
                            arr_26 [i_0 - 1] [i_3] [i_4 - 1] [i_5] [i_8] = ((/* implicit */unsigned int) (unsigned char)44);
                            arr_27 [i_8] [i_0 - 1] [i_4] [i_0 - 1] [i_8] = ((/* implicit */unsigned char) ((min((arr_14 [i_4 - 1] [i_8] [i_4] [i_4 - 1]), (arr_14 [i_8] [i_5] [i_5] [i_4 - 1]))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_5] [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_14 [i_8] [i_8] [i_8] [i_4 - 1])))) : (((arr_14 [i_8] [(_Bool)1] [i_8] [i_4 - 1]) ? (var_8) : (((/* implicit */int) arr_14 [i_4 - 1] [(signed char)0] [i_4 - 1] [i_4 - 1]))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_8] [i_0] [i_3] [i_0])) ? (((((/* implicit */_Bool) arr_5 [i_3])) ? (((((/* implicit */_Bool) (signed char)-63)) ? (2274038931U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))))) : (min((var_2), (((/* implicit */unsigned int) var_6)))))) : (((((/* implicit */_Bool) arr_22 [i_5] [i_0] [i_3] [i_0])) ? (262128U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)56)))))))));
                            arr_28 [i_0 - 1] [i_0 - 1] [i_8] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2047ULL)) ? (((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5]))))) : (var_1)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-95)), (((var_11) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_3])))))))));
                            var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_11)), ((unsigned char)241)));
                        }
                        arr_29 [i_0] [i_3] [i_4 - 1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) min((arr_12 [i_4] [i_0] [i_0]), (arr_19 [i_3] [i_3])))), (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_5])) ? (((((/* implicit */_Bool) 18446744073709549555ULL)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (signed char)124)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))))) : (arr_2 [i_5])));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-23438)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (_Bool)1)))))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                var_25 += ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))));
                arr_38 [i_9] [i_9] [i_11] = ((/* implicit */signed char) var_1);
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 3; i_13 < 22; i_13 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_33 [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_9] [i_10] [i_11] [i_10] [i_13]))) : (((((/* implicit */_Bool) arr_44 [i_9] [i_9] [i_9] [i_9] [(short)11] [i_9])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                        var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_13 + 1] [i_10] [1ULL] [i_10] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_44 [i_13 - 2] [i_9] [(signed char)12] [i_13 - 3] [i_12] [i_9])));
                        var_28 = arr_32 [i_9] [i_12] [i_13 - 1];
                        var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_9])) ? (arr_44 [21LL] [i_12] [i_12] [i_11] [21LL] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    }
                    arr_45 [i_9] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_35 [i_9] [i_11] [i_9])) : (var_5)));
                }
            }
            for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
            {
                arr_49 [i_9] [i_9] [i_14] [i_10] |= ((arr_42 [i_9] [i_9] [i_10] [i_14]) ? (((/* implicit */int) arr_41 [i_9] [i_10] [i_10] [i_14])) : (((/* implicit */int) var_11)));
                var_30 = ((/* implicit */unsigned char) var_11);
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_9] [i_9] [i_10] [i_14] [i_14] [i_14])) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_14] [i_10] [16ULL])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))))));
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_33 [14LL]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [(signed char)6] [(signed char)6] [(signed char)6] [(signed char)6] [i_14])) ? (var_8) : (((/* implicit */int) var_4))))) : (arr_35 [i_9] [i_10] [i_9])));
            }
            for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7168)) ? (2274038931U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))))))));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (unsigned short)51752)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_53 [i_15])) : (((/* implicit */int) var_10))))));
                        var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))) : (arr_35 [i_16] [i_16] [i_15])))) ? (((arr_42 [i_9] [i_15] [i_15] [i_17]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_53 [(unsigned short)18])) : (((/* implicit */int) var_4))))));
                        arr_58 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_9] [i_10] [i_10] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_9] [i_10] [i_15] [i_16]))) : (8U)));
                    }
                    for (int i_18 = 0; i_18 < 23; i_18 += 4) 
                    {
                        arr_62 [i_9] [i_15] [i_15] = ((/* implicit */signed char) var_3);
                        arr_63 [i_9] [i_9] [i_15] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_57 [i_9] [i_10] [i_15] [i_9] [i_9] [i_15])))) : (((/* implicit */int) var_6))));
                        var_36 = ((/* implicit */long long int) arr_35 [i_9] [i_10] [i_9]);
                        var_37 = ((/* implicit */unsigned long long int) var_3);
                        var_38 += (unsigned char)29;
                    }
                    for (int i_19 = 0; i_19 < 23; i_19 += 2) 
                    {
                        arr_68 [i_19] [i_19] [i_15] [i_15] [i_10] [i_19] [i_9] |= ((/* implicit */short) var_7);
                        arr_69 [i_9] [i_15] [i_15] [i_16] [i_19] = ((/* implicit */int) arr_47 [i_9] [i_9] [(short)16] [i_19]);
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 1) 
                    {
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_61 [i_16] [i_15] [i_10] [i_9])))) ? (((((/* implicit */_Bool) arr_51 [i_9] [i_9] [i_9] [i_20])) ? (((/* implicit */int) arr_50 [i_15] [i_16] [(unsigned char)1] [i_15])) : (((/* implicit */int) arr_70 [i_9] [i_9] [i_15] [i_16])))) : (((arr_56 [i_9] [i_9] [i_9] [i_16] [i_9] [i_16] [i_20]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))));
                        var_40 = ((/* implicit */unsigned int) min((var_40), (arr_35 [i_9] [(signed char)20] [i_9])));
                        var_41 = ((/* implicit */unsigned short) var_5);
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_60 [(short)21] [i_15] [i_15] [i_20]))))));
                        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) arr_52 [i_9] [i_10] [i_15] [i_9]))));
                    }
                    var_44 += ((/* implicit */long long int) arr_70 [i_9] [i_10] [i_15] [i_16]);
                }
                /* LoopSeq 1 */
                for (unsigned short i_21 = 0; i_21 < 23; i_21 += 4) 
                {
                    arr_74 [i_15] [i_15] [i_15] = ((/* implicit */_Bool) var_8);
                    var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_66 [i_9])) ? (((((/* implicit */_Bool) var_9)) ? (2370372519355412340ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_9] [i_10] [i_10] [i_21]))))))));
                }
            }
            var_46 += ((/* implicit */long long int) arr_43 [i_9] [i_9] [i_10] [i_10] [i_10]);
        }
        for (short i_22 = 0; i_22 < 23; i_22 += 1) 
        {
            arr_77 [i_9] [i_9] [i_9] &= ((/* implicit */unsigned char) arr_73 [i_9] [i_9] [i_22] [i_22]);
            /* LoopNest 2 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                for (unsigned char i_24 = 0; i_24 < 23; i_24 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_25 = 0; i_25 < 23; i_25 += 2) 
                        {
                            var_47 = ((/* implicit */unsigned short) var_4);
                            var_48 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_9] [(unsigned char)11] [i_9])) ? (arr_87 [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_9] [i_9] [i_9] [i_9] [i_9]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_26 = 0; i_26 < 23; i_26 += 1) 
                        {
                            var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16777215LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) arr_67 [i_26] [i_23] [i_23] [i_22] [i_9]))))) : (var_2)));
                            var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_57 [i_9] [i_26] [i_9] [4LL] [i_22] [i_9])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))));
                        }
                        var_51 = ((/* implicit */unsigned short) arr_83 [i_24] [i_9]);
                    }
                } 
            } 
        }
        arr_91 [i_9] = ((/* implicit */int) arr_43 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_9] [i_9]);
    }
    /* vectorizable */
    for (unsigned char i_27 = 0; i_27 < 14; i_27 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_28 = 0; i_28 < 14; i_28 += 2) 
        {
            for (unsigned int i_29 = 3; i_29 < 12; i_29 += 3) 
            {
                {
                    var_52 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_27] [i_29])) ? (arr_11 [i_27] [i_29 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-115)))));
                    arr_99 [i_27] [i_27] [i_27] [i_27] = ((/* implicit */signed char) var_1);
                }
            } 
        } 
        arr_100 [i_27] = ((((/* implicit */_Bool) arr_30 [i_27] [i_27])) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))));
        arr_101 [i_27] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_27] [i_27] [i_27] [i_27] [i_27])) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) 18446744073709549569ULL)) ? (((/* implicit */int) arr_70 [(unsigned char)0] [i_27] [(unsigned char)0] [(unsigned char)0])) : (((/* implicit */int) var_6))))));
        /* LoopNest 2 */
        for (signed char i_30 = 0; i_30 < 14; i_30 += 3) 
        {
            for (unsigned short i_31 = 3; i_31 < 13; i_31 += 2) 
            {
                {
                    arr_108 [i_27] [i_30] [i_27] [i_27] = ((/* implicit */unsigned char) var_7);
                    arr_109 [i_30] [i_30] [i_30] [i_30] = ((/* implicit */unsigned int) arr_85 [i_27] [i_27] [i_30] [i_31 - 1]);
                    arr_110 [i_30] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) : (8U)))) ? (arr_75 [i_31 - 1] [i_31 - 1]) : (((/* implicit */unsigned long long int) arr_94 [i_31 - 3]))));
                    var_53 *= ((/* implicit */signed char) var_1);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_32 = 0; i_32 < 24; i_32 += 2) 
    {
        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
        {
            {
                arr_116 [i_33] [i_32] = ((/* implicit */short) arr_111 [i_32] [i_32]);
                arr_117 [i_33] [i_33] [i_33] = ((/* implicit */signed char) var_1);
            }
        } 
    } 
    var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))));
    var_55 = ((/* implicit */int) var_9);
}
