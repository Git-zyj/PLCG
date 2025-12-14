/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2088
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(-7770844648484372223LL))) == (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) 10282824251065767392ULL))) == (((((/* implicit */unsigned long long int) var_9)) + (arr_2 [i_1] [i_1] [8U])))));
                arr_5 [1ULL] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? ((+(min((((/* implicit */unsigned long long int) var_18)), (var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86)))));
                var_21 = ((/* implicit */unsigned char) (-(((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) 2434214141110685564ULL);
    var_23 = ((/* implicit */int) var_12);
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) (+(((unsigned long long int) ((arr_4 [i_2] [i_2] [i_2]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15)))))));
        arr_10 [i_2] = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_4 = 3; i_4 < 12; i_4 += 4) 
            {
                var_24 = ((/* implicit */unsigned long long int) -1349864948840414599LL);
                var_25 = ((/* implicit */unsigned int) (-(arr_15 [i_4 - 2] [i_4 - 3] [11U] [i_4 - 1])));
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_4 - 1] [i_4] [6LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173))) : (((var_14) + (var_5)))));
            }
            for (long long int i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_15 [i_6] [i_5] [0LL] [i_2])) ? (arr_17 [i_2] [i_2] [i_2]) : (arr_20 [i_3] [i_3]))) & (((int) var_1)))))));
                    arr_22 [7ULL] [7ULL] [i_3] [(unsigned char)2] [i_2] [i_2] = ((((var_0) | (((/* implicit */unsigned int) var_18)))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_3] [5] [i_2])))))));
                    arr_23 [i_6] [i_5] [10U] [i_2] = ((/* implicit */unsigned char) 16735958956759589021ULL);
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) arr_18 [i_6] [i_5 - 2] [i_2] [i_2]))));
                    var_29 = ((/* implicit */unsigned int) arr_4 [i_2] [i_2] [i_2]);
                }
                var_30 = ((/* implicit */unsigned long long int) (!(arr_4 [0U] [11U] [i_2])));
                arr_24 [i_2] = ((/* implicit */unsigned long long int) ((((_Bool) 2867043679U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (arr_19 [i_2]) : (arr_17 [i_2] [i_3] [i_2])));
            }
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (var_3)));
            var_33 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 578641639U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1737996537U)))) & (((((/* implicit */unsigned long long int) var_5)) & (12ULL)))));
        }
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            arr_28 [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (((+(var_17))) == (((/* implicit */unsigned int) var_10)))))));
            /* LoopSeq 4 */
            for (int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
            {
                arr_31 [i_7] = ((/* implicit */unsigned long long int) (+(((((1719224582U) / (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) + (var_14)))));
                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [11U])) ? (((arr_2 [i_2] [i_2] [14U]) + (((/* implicit */unsigned long long int) -7770844648484372210LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-2114341044728396014LL) < (((/* implicit */long long int) 4294967295U))))))));
            }
            for (int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned short) ((1719224579U) & (((/* implicit */unsigned int) arr_16 [i_7] [i_7] [i_9]))));
                var_36 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_14)) ? (min((arr_16 [i_9] [i_7] [i_2]), (((/* implicit */int) (short)738)))) : (((/* implicit */int) arr_13 [i_2] [6ULL]))))));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
            {
                arr_36 [i_2] [(unsigned char)0] [i_10] = ((var_6) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                var_37 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_5)) & (arr_0 [6LL] [6LL]))) / (((/* implicit */unsigned long long int) ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [8U]))))))));
                arr_37 [i_2] [i_7] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_2] [(unsigned short)6] [i_10])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1024)))));
                arr_38 [12LL] = ((/* implicit */long long int) var_8);
            }
            for (int i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    var_38 = ((/* implicit */unsigned int) var_1);
                    arr_44 [i_2] [i_12] [i_11] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_17)) < (var_2)));
                }
                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (-((((!(((/* implicit */_Bool) var_3)))) ? ((-(arr_33 [i_2] [(_Bool)1] [i_11] [i_11]))) : (((var_0) + (((/* implicit */unsigned int) arr_19 [i_2])))))))))));
            }
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    {
                        var_40 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(4150743568U)))) > (-7770844648484372221LL)));
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_41 -= ((/* implicit */unsigned long long int) 1427923617U);
                            arr_55 [i_14] [i_15] [i_14] [i_13] [(_Bool)1] [i_14] = ((/* implicit */long long int) 3317390372U);
                        }
                        /* vectorizable */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) arr_32 [5] [i_14] [i_7]))));
                            arr_58 [8U] [i_14] [11] [6U] [i_13] [i_14] [4] = ((/* implicit */short) 2575742708U);
                        }
                        for (long long int i_17 = 4; i_17 < 11; i_17 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned short) min((0U), (1719224568U)));
                            arr_62 [i_2] [i_13] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) - (var_2)))) ? (((((/* implicit */_Bool) var_4)) ? (var_5) : (var_8))) : (arr_61 [(unsigned char)3] [i_2])))) ? (((/* implicit */long long int) 2575742708U)) : ((-(-2733773512920309LL)))));
                            var_44 -= (-((+(arr_2 [i_2] [i_13] [i_14]))));
                        }
                        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191)))))) == (min((arr_0 [i_2] [i_14]), (((/* implicit */unsigned long long int) max((-7770844648484372214LL), (((/* implicit */long long int) (unsigned char)50))))))))))));
                        var_46 -= max((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) / (arr_47 [i_2] [i_13] [i_14]))), (((/* implicit */unsigned long long int) -8246866997505846472LL)));
                    }
                } 
            } 
            var_47 -= ((/* implicit */_Bool) (-(((((((/* implicit */int) var_12)) / (var_10))) / (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (arr_49 [i_2] [6U] [i_7] [5U]))))))));
            var_48 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((8883831483755754145ULL), (((/* implicit */unsigned long long int) 0)))) & (min((var_7), (var_3)))))) ? (min((((((/* implicit */_Bool) arr_21 [i_2])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [(unsigned char)3] [(unsigned char)3] [(_Bool)1]))))), (((/* implicit */unsigned long long int) arr_6 [(signed char)2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [i_7] [2ULL] [i_7]))) - (var_8))))));
        }
        /* vectorizable */
        for (unsigned int i_18 = 0; i_18 < 13; i_18 += 4) 
        {
            var_49 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_61 [i_2] [i_18])));
            var_50 -= ((/* implicit */unsigned int) arr_32 [i_2] [i_18] [i_18]);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 1; i_20 < 11; i_20 += 3) 
            {
                {
                    var_51 = ((/* implicit */long long int) ((min((min((var_8), (((/* implicit */unsigned int) var_10)))), (((arr_70 [i_20 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) + (var_0)));
                    var_52 = ((((/* implicit */int) var_16)) + (((arr_35 [i_20 + 1] [i_20 + 2] [i_20 + 2] [i_20]) & (arr_35 [i_20 + 1] [i_20 + 2] [i_20 - 1] [i_20]))));
                }
            } 
        } 
        var_53 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_59 [i_2] [i_2] [i_2] [(short)10] [i_2] [(short)2])))) ? ((-(arr_59 [i_2] [i_2] [12ULL] [i_2] [i_2] [i_2]))) : (((((/* implicit */_Bool) 67107840U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54149))) : (3841354155U)))));
    }
    /* vectorizable */
    for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 1) 
    {
        arr_74 [i_21] [i_21] = ((/* implicit */unsigned int) (-(16547215805260923739ULL)));
        /* LoopSeq 3 */
        for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 2) 
        {
            var_54 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5342996722369137884LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)171))) : (arr_77 [i_21]))))));
            var_55 = ((/* implicit */signed char) ((unsigned long long int) arr_77 [i_22]));
        }
        for (unsigned int i_23 = 3; i_23 < 20; i_23 += 3) 
        {
            arr_81 [i_23] [i_23] = (-(arr_73 [i_23 + 1]));
            var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 486281164U)) ? (((/* implicit */long long int) 67107840U)) : (-5342996722369137884LL)));
        }
        for (unsigned int i_24 = 2; i_24 < 20; i_24 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_25 = 0; i_25 < 22; i_25 += 3) 
            {
                for (long long int i_26 = 0; i_26 < 22; i_26 += 2) 
                {
                    for (unsigned long long int i_27 = 0; i_27 < 22; i_27 += 3) 
                    {
                        {
                            var_57 -= (-(var_7));
                            var_58 = ((/* implicit */unsigned long long int) var_9);
                            var_59 = ((/* implicit */unsigned int) min((var_59), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_88 [(unsigned char)1] [i_24 - 2])))))));
                        }
                    } 
                } 
            } 
            arr_90 [i_24] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_28 = 4; i_28 < 20; i_28 += 1) 
        {
            var_60 -= ((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))) : (13353969118142418270ULL));
            var_61 = ((/* implicit */unsigned short) min((var_61), (((/* implicit */unsigned short) (-(4294967295U))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_29 = 1; i_29 < 21; i_29 += 2) 
        {
            for (long long int i_30 = 1; i_30 < 21; i_30 += 2) 
            {
                {
                    var_62 = ((/* implicit */int) ((arr_85 [i_29 + 1] [i_29 + 1] [i_30 - 1] [i_30 - 1]) + (arr_85 [i_29 + 1] [i_29 + 1] [i_30 + 1] [i_30 - 1])));
                    var_63 = ((/* implicit */unsigned short) arr_84 [i_21] [i_21] [i_29 - 1] [i_30 + 1]);
                    arr_98 [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_80 [i_29 + 1] [i_29 - 1] [i_29 - 1])) & (((/* implicit */int) var_16))));
                    var_64 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) arr_72 [2U])) : (((/* implicit */int) arr_79 [i_30 - 1] [i_29 - 1] [i_29 - 1]))));
                }
            } 
        } 
        var_65 -= ((/* implicit */unsigned short) (unsigned char)90);
    }
    for (long long int i_31 = 0; i_31 < 21; i_31 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_32 = 4; i_32 < 18; i_32 += 4) 
        {
            for (unsigned int i_33 = 3; i_33 < 17; i_33 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_34 = 1; i_34 < 18; i_34 += 3) 
                    {
                        for (unsigned char i_35 = 0; i_35 < 21; i_35 += 1) 
                        {
                            {
                                var_66 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) 0U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (var_9))) / ((-(var_14)))));
                                arr_111 [i_31] [i_32] [i_33] [i_34] [i_35] = ((/* implicit */_Bool) 1U);
                                var_67 = var_3;
                                arr_112 [i_31] [(_Bool)1] [i_31] [i_33] [20ULL] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) | ((~(max((arr_87 [i_35] [15U] [i_32 + 3] [15]), (((/* implicit */unsigned int) var_4)))))));
                            }
                        } 
                    } 
                    var_68 -= ((/* implicit */unsigned int) (unsigned char)55);
                }
            } 
        } 
        var_69 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_2)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (arr_85 [i_31] [i_31] [i_31] [i_31])))) ? (((/* implicit */int) arr_89 [i_31] [7] [i_31] [i_31] [i_31] [(unsigned char)18])) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
        var_70 = ((/* implicit */long long int) arr_77 [i_31]);
        var_71 = ((/* implicit */unsigned char) arr_109 [i_31]);
    }
}
