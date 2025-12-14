/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228358
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((short) ((unsigned char) (short)-1)));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), ((short)1))))));
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3)) ? (max((-1LL), (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1))))))) ? (((long long int) ((short) 2LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                arr_11 [i_0] [i_1] = ((((/* implicit */int) (short)-1)) > (((((/* implicit */int) min((((/* implicit */short) (signed char)-1)), (arr_6 [i_1])))) * (((/* implicit */int) arr_2 [i_1] [i_2])))));
                arr_12 [i_1] = ((/* implicit */signed char) var_3);
            }
            /* LoopNest 2 */
            for (long long int i_3 = 2; i_3 < 21; i_3 += 1) 
            {
                for (long long int i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_12 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_8)), (arr_15 [10U])))))) & (arr_15 [i_3 - 1])));
                        arr_18 [i_0] [i_1] [i_3] [i_4] [i_0] [i_4] = ((/* implicit */signed char) arr_7 [i_0] [(unsigned short)17] [i_3]);
                        var_13 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */int) ((unsigned char) ((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)65535)) : (-1))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))))));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                arr_24 [i_6] = ((/* implicit */unsigned long long int) min(((-(((((/* implicit */_Bool) arr_19 [(unsigned char)20] [20ULL])) ? (((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_5] [(unsigned char)19] [i_0])) : (((/* implicit */int) (unsigned char)255)))))), ((-(((int) arr_13 [i_6] [i_5] [(signed char)6] [i_6]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (signed char)1))));
                    var_16 = ((/* implicit */unsigned short) ((short) ((unsigned char) (unsigned short)8)));
                }
            }
        }
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) var_5);
            arr_29 [i_0] = ((/* implicit */signed char) arr_28 [i_0] [7LL] [i_0]);
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [15LL] [i_9])) ? (((/* implicit */int) arr_2 [i_0] [i_9])) : (arr_13 [i_0] [i_0] [i_9] [i_9])));
            arr_33 [i_0] [i_9] [i_9] = ((/* implicit */long long int) arr_8 [i_0] [i_9] [(unsigned short)2] [i_9]);
        }
    }
    for (unsigned char i_10 = 3; i_10 < 12; i_10 += 2) 
    {
        var_19 = ((/* implicit */long long int) ((unsigned short) (~(arr_27 [i_10] [i_10 + 1] [i_10]))));
        /* LoopNest 3 */
        for (short i_11 = 3; i_11 < 14; i_11 += 2) 
        {
            for (unsigned int i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 15; i_14 += 2) 
                        {
                            arr_48 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10]))) : (var_4))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_36 [i_10])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_13] [i_13] [i_10 - 1] [i_11 - 2])))))));
                            var_20 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */long long int) (signed char)-1))));
                            arr_49 [i_10] [i_10] [14LL] [i_12] [i_10] [i_14] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (min((arr_10 [i_10 + 3] [(short)15] [i_12]), (((/* implicit */unsigned long long int) (~(var_9))))))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) (((((!((_Bool)1))) ? (min((((/* implicit */long long int) (_Bool)1)), (-1LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_11 - 3] [i_12] [i_13]))))))) > (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_22 = ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_10 - 1] [i_11] [i_12] [i_15]))) * (((long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-10))))));
                            arr_52 [(unsigned short)5] [i_11] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_10 + 3])) + (((/* implicit */int) arr_34 [i_10]))));
                        }
                        var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (_Bool)1)))))) : (((unsigned long long int) -1LL))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_50 [i_10] [(_Bool)1] [i_12] [i_13] [i_11 - 2] [i_10 + 3] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_50 [i_10] [(unsigned short)2] [(_Bool)0] [i_13] [i_11 - 1] [i_13] [i_10 - 3]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
    {
        arr_57 [i_16] |= ((/* implicit */unsigned short) arr_43 [(unsigned short)10] [i_16] [(unsigned short)6]);
        /* LoopSeq 3 */
        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 1) /* same iter space */
        {
            var_24 = ((((/* implicit */_Bool) (-(var_9)))) ? (arr_13 [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */int) arr_30 [i_17])));
            /* LoopSeq 2 */
            for (long long int i_18 = 2; i_18 < 8; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_19 = 1; i_19 < 9; i_19 += 4) 
                {
                    for (unsigned char i_20 = 2; i_20 < 8; i_20 += 4) 
                    {
                        {
                            arr_68 [i_16] [i_16] [i_18] [i_19] [i_19] = ((/* implicit */long long int) arr_31 [i_16 - 1] [i_17] [i_16 - 1]);
                            arr_69 [i_16] [(unsigned short)7] [i_18] [i_19] [i_16] [i_19] [3LL] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_25 = ((/* implicit */long long int) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
                    arr_73 [i_21] [0] [i_17] [i_21] = ((/* implicit */unsigned short) (signed char)-1);
                }
            }
            for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 4) 
            {
                arr_76 [i_16 - 1] [i_17] [i_17] [i_22] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 8388607LL)) ? (((/* implicit */int) arr_60 [i_16 - 1] [i_16 - 1])) : (((/* implicit */int) arr_60 [i_16 - 1] [i_17]))));
                arr_77 [i_22] = ((/* implicit */int) arr_27 [i_16 - 1] [i_17] [i_22]);
            }
        }
        for (unsigned int i_23 = 0; i_23 < 11; i_23 += 1) /* same iter space */
        {
            var_26 += ((/* implicit */signed char) (-(((/* implicit */int) arr_59 [i_16] [i_16 - 1]))));
            arr_82 [i_23] [i_23] = ((/* implicit */unsigned long long int) (signed char)9);
        }
        for (signed char i_24 = 0; i_24 < 11; i_24 += 1) 
        {
            arr_85 [i_24] = ((/* implicit */long long int) (_Bool)1);
            var_27 = ((/* implicit */unsigned long long int) arr_7 [i_16 - 1] [i_16 - 1] [i_16 - 1]);
            arr_86 [i_24] [i_24] = ((/* implicit */long long int) var_8);
        }
        /* LoopNest 3 */
        for (short i_25 = 0; i_25 < 11; i_25 += 4) 
        {
            for (signed char i_26 = 0; i_26 < 11; i_26 += 3) 
            {
                for (int i_27 = 0; i_27 < 11; i_27 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_71 [i_25] [i_26]))));
                        var_29 = (!(((/* implicit */_Bool) arr_41 [i_16 - 1])));
                        var_30 = ((/* implicit */unsigned char) (!((_Bool)1)));
                        arr_96 [i_16] [i_25] [i_26] = ((/* implicit */int) ((long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_0)))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_16] [i_16 - 1] [i_16] [i_16 - 1])) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_90 [i_16 - 1] [i_16 - 1] [i_16]))));
    }
    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_4) : (((/* implicit */unsigned long long int) ((int) var_3)))));
    /* LoopNest 2 */
    for (signed char i_28 = 2; i_28 < 8; i_28 += 1) 
    {
        for (unsigned char i_29 = 0; i_29 < 10; i_29 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_30 = 0; i_30 < 10; i_30 += 4) /* same iter space */
                {
                    var_33 = ((/* implicit */signed char) (~((~((~(var_10)))))));
                    var_34 = ((/* implicit */signed char) -1);
                }
                for (unsigned long long int i_31 = 0; i_31 < 10; i_31 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned char)243)))), (1073741823)));
                    /* LoopNest 2 */
                    for (int i_32 = 0; i_32 < 10; i_32 += 3) 
                    {
                        for (unsigned short i_33 = 1; i_33 < 6; i_33 += 3) 
                        {
                            {
                                arr_113 [(unsigned short)6] [(unsigned short)6] [i_31] [i_32] [i_31] [i_32] |= (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_28])) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) (unsigned short)4095)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */signed char) var_6)))))))));
                                arr_114 [i_28] [i_29] [i_28 - 1] [i_32] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_6)))))) ? (var_4) : (((/* implicit */unsigned long long int) max((arr_92 [i_28 + 1] [i_28 + 1] [i_31]), (((/* implicit */unsigned int) min((arr_59 [(unsigned short)3] [i_29]), (((/* implicit */short) var_7)))))))));
                                var_36 = arr_98 [i_32];
                                var_37 = ((/* implicit */unsigned short) ((short) ((unsigned short) (signed char)-1)));
                                arr_115 [i_28 - 1] [4] [i_29] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_5))))))), (min((((/* implicit */unsigned long long int) ((unsigned short) (signed char)-1))), (min((18446744073709551615ULL), (18446744073709551615ULL)))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                {
                    var_38 += (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4ULL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_110 [i_29] [i_34])))))) ? (((long long int) (signed char)-1)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_34])))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_35 = 1; i_35 < 7; i_35 += 4) 
                    {
                        arr_122 [i_28] [i_34] [i_29] [i_29] [6ULL] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-1LL)))) ? (min((((/* implicit */unsigned long long int) 4194303)), (2ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_83 [(signed char)5] [i_29])) & (arr_121 [i_28] [i_29])))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-1)) ? (arr_89 [i_28] [i_29] [i_34]) : (((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_36 = 0; i_36 < 10; i_36 += 3) 
                        {
                            var_39 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_42 [i_35 + 2]), (((/* implicit */int) min((((/* implicit */unsigned char) arr_65 [i_28] [(unsigned short)7] [i_34])), (var_3))))))), ((-(-1LL)))));
                            var_40 = ((/* implicit */long long int) max((var_40), (((((/* implicit */_Bool) ((unsigned long long int) arr_112 [i_28] [i_28 - 2] [i_28 - 2] [i_35 + 1]))) ? (((/* implicit */long long int) max((arr_112 [i_28] [i_28 - 1] [i_28 - 1] [i_35 + 2]), (((/* implicit */int) (short)-1))))) : ((~(arr_107 [i_28 - 2] [i_35 - 1] [i_35 + 2] [i_36])))))));
                            var_41 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) (~(arr_101 [i_29] [(short)2] [0])))))));
                        }
                        arr_125 [i_28] [i_29] [i_29] [i_35] = ((((/* implicit */_Bool) arr_83 [10] [i_29])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned short)511))))))) : (((arr_102 [i_28] [(_Bool)1] [i_34]) ? (((/* implicit */unsigned long long int) ((int) -1LL))) : (arr_27 [i_28] [i_28 + 2] [i_35 + 2]))));
                        var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((268435455ULL) > (((/* implicit */unsigned long long int) -1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_35 + 1] [i_35 + 1] [i_34] [i_28 - 2]))) : (max((((/* implicit */long long int) (unsigned short)65535)), (9LL)))))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -1)))))))));
                        var_43 |= ((/* implicit */short) var_4);
                    }
                    var_44 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_56 [i_28 + 2])) - (((/* implicit */int) arr_56 [i_28 - 2]))))) ? (((unsigned long long int) -10LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_28 - 2])))));
                }
                var_45 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_55 [i_28 - 2] [i_29])) ? (((/* implicit */int) arr_55 [i_28 - 2] [5LL])) : (((/* implicit */int) arr_55 [i_28 + 1] [i_29])))));
            }
        } 
    } 
}
