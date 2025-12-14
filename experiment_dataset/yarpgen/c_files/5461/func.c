/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5461
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 7; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 7; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 2]))) + (arr_7 [i_0 - 1] [i_1] [i_0 + 1] [(signed char)8] [i_3 + 2] [i_1]))), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((signed char) (signed char)31))), ((short)-23063)))))))));
                        arr_10 [4] [i_1] [i_2 + 1] [i_3] = ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) (short)-4629)), (982997161805272334ULL))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */signed char) arr_6 [0ULL] [i_0] [i_0] [i_0] [i_0]);
    }
    /* LoopSeq 3 */
    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
        {
            var_18 = ((((((/* implicit */_Bool) 1890974449)) || (((/* implicit */_Bool) (short)-4642)))) ? (arr_11 [i_4] [i_4]) : (((/* implicit */unsigned long long int) var_13)));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) 497814664)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) : (arr_11 [i_4] [i_5]))))));
        }
        for (short i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_7 = 4; i_7 < 9; i_7 += 1) 
            {
                for (int i_8 = 1; i_8 < 6; i_8 += 4) 
                {
                    {
                        arr_26 [i_4] [i_6] [i_7] [i_4] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_5 [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [(signed char)9] [7ULL]))))));
                        var_20 = ((/* implicit */short) (~(min((((int) var_7)), (((((/* implicit */int) var_4)) >> (((var_12) + (1900712959)))))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_4] [(signed char)2])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_4] [2]))))) : (var_10))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)4622)) : (555791313)))))))))));
        }
        for (short i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
        {
            arr_29 [i_4] [i_9] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4]))) : (((unsigned long long int) var_4))));
            var_22 = (((((!(((/* implicit */_Bool) arr_18 [i_4] [i_4])))) ? (((/* implicit */int) ((short) (signed char)-110))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4] [i_4]))))))) >> (((((/* implicit */int) var_14)) + (10899))));
        }
        var_23 ^= ((/* implicit */int) arr_3 [i_4] [i_4] [i_4]);
        arr_30 [i_4] = ((/* implicit */unsigned long long int) ((short) arr_8 [i_4] [6] [i_4] [5]));
        arr_31 [i_4] = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (arr_11 [(signed char)6] [0ULL])))));
    }
    for (short i_10 = 2; i_10 < 22; i_10 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_11 = 2; i_11 < 23; i_11 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                for (int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */int) ((signed char) ((((/* implicit */int) ((short) (signed char)6))) / ((-2147483647 - 1)))));
                            var_25 = ((/* implicit */signed char) min(((~(var_10))), (((/* implicit */unsigned long long int) (short)4642))));
                            arr_45 [i_10] [16ULL] [i_12] [12] [i_14] &= var_8;
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                arr_49 [i_10] [i_11] [i_11] [i_15] = var_0;
                var_26 = ((/* implicit */int) arr_48 [i_10] [i_11] [11ULL]);
                var_27 = ((/* implicit */signed char) ((((unsigned long long int) (signed char)-34)) >> ((((~(var_9))) - (11941267976701237418ULL)))));
                /* LoopNest 2 */
                for (signed char i_16 = 2; i_16 < 23; i_16 += 1) 
                {
                    for (short i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) var_14);
                            arr_56 [i_17] [i_16] [(signed char)18] [i_16] [i_10] = ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) (signed char)104)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 4) 
                {
                    arr_59 [i_18] = ((/* implicit */signed char) ((short) arr_42 [i_11] [i_11 - 1] [i_11 - 2] [i_11 - 2] [i_10 - 1]));
                    var_29 &= ((unsigned long long int) 194157293);
                }
            }
            var_30 = ((/* implicit */short) ((unsigned long long int) ((((arr_57 [i_10 + 1] [i_10] [i_10] [i_10] [4] [i_11]) + (2147483647))) << (((((arr_57 [i_10] [(short)17] [i_10] [i_10 + 2] [i_10] [i_10]) + (963818681))) - (4))))));
        }
        for (int i_19 = 2; i_19 < 23; i_19 += 3) /* same iter space */
        {
            arr_63 [i_10 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_10])) ? ((+(((/* implicit */int) (short)-30213)))) : (((/* implicit */int) ((short) arr_47 [(signed char)3] [i_10 + 1])))));
            /* LoopSeq 1 */
            for (short i_20 = 0; i_20 < 24; i_20 += 4) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_21 = 2; i_21 < 23; i_21 += 2) 
                {
                    arr_68 [i_10] [(short)16] [19] [i_19] [i_20] [i_21] = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) var_13))));
                }
                for (signed char i_22 = 0; i_22 < 24; i_22 += 1) /* same iter space */
                {
                    arr_73 [i_10] [i_19 + 1] [(signed char)18] [i_10] |= ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_46 [i_10] [i_10] [i_20])) ^ (((/* implicit */int) arr_46 [i_19 + 1] [i_20] [i_22])))));
                    var_32 &= ((signed char) (~(((/* implicit */int) arr_66 [i_10 - 2] [i_19 - 1]))));
                }
                /* vectorizable */
                for (signed char i_23 = 0; i_23 < 24; i_23 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */int) (signed char)(-127 - 1));
                    var_34 = ((/* implicit */short) ((unsigned long long int) ((signed char) (signed char)-8)));
                    arr_77 [(signed char)17] [i_19 - 1] [i_19] [(signed char)21] [i_23] = ((/* implicit */signed char) arr_41 [i_10] [i_10] [i_19] [4] [i_23] [i_23]);
                }
                for (unsigned long long int i_24 = 0; i_24 < 24; i_24 += 4) 
                {
                    var_35 = ((int) arr_44 [16ULL] [16ULL] [i_20] [i_24] [i_24] [(short)9]);
                    var_36 &= ((((/* implicit */_Bool) ((min((var_5), (((/* implicit */unsigned long long int) var_1)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-11)) && (((/* implicit */_Bool) arr_79 [(short)11]))))))))) ? (125829120) : (((((/* implicit */_Bool) (~(arr_75 [i_10] [i_10] [(short)12] [i_24])))) ? (var_12) : (((/* implicit */int) ((signed char) var_8))))));
                }
                var_37 &= ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_62 [i_10 - 2])))) ? (arr_72 [i_10] [i_10] [i_10] [i_19 - 2] [(signed char)11] [i_20]) : (((int) arr_33 [i_10 + 2]))));
            }
        }
        /* vectorizable */
        for (int i_25 = 2; i_25 < 23; i_25 += 3) /* same iter space */
        {
            arr_84 [i_25] [i_10 - 2] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (var_13)))) ? (((/* implicit */int) arr_66 [i_25] [(short)22])) : ((+(((/* implicit */int) (signed char)127))))));
            /* LoopSeq 1 */
            for (int i_26 = 1; i_26 < 23; i_26 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_27 = 4; i_27 < 20; i_27 += 4) 
                {
                    for (signed char i_28 = 0; i_28 < 24; i_28 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 281474976710655ULL)) ? (((/* implicit */int) var_4)) : (arr_50 [i_25] [i_26] [i_27 + 3] [i_28])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_48 [7ULL] [i_26] [i_28])) & (((/* implicit */int) arr_46 [i_10] [i_25 - 2] [i_27]))))) : (var_10)));
                            arr_94 [i_28] [6ULL] [i_25] [i_10 + 2] [i_10 + 2] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))));
                        }
                    } 
                } 
                arr_95 [i_10] [i_25] [i_25] [i_26] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_69 [i_10] [i_25] [i_26])) ? (5812166407267414226ULL) : (arr_81 [6ULL] [i_25] [i_25]))));
                arr_96 [i_25] [i_25] [i_25] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_87 [i_25]))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)4626))));
                /* LoopNest 2 */
                for (unsigned long long int i_29 = 0; i_29 < 24; i_29 += 4) 
                {
                    for (unsigned long long int i_30 = 4; i_30 < 23; i_30 += 2) 
                    {
                        {
                            arr_104 [i_30] [i_10] [i_26] [i_10] [i_10] &= ((/* implicit */short) (signed char)39);
                            var_39 &= ((/* implicit */short) (+(arr_88 [i_30 + 1] [i_30] [i_30] [i_10 + 2])));
                            arr_105 [i_25] = ((/* implicit */int) ((((/* implicit */_Bool) 17420951806991706771ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_92 [i_25] [i_29]))) : (((((/* implicit */_Bool) arr_86 [i_25] [8ULL] [i_26] [i_25])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                            arr_106 [i_10 - 2] [i_25] [i_26] [4] [13ULL] = ((/* implicit */unsigned long long int) ((var_0) <= (((/* implicit */int) arr_83 [i_10 + 1]))));
                            arr_107 [i_10] [i_25] [i_29] [i_30] = ((/* implicit */short) ((int) arr_81 [i_25 - 1] [i_26 + 1] [i_25]));
                        }
                    } 
                } 
            }
        }
        for (int i_31 = 2; i_31 < 23; i_31 += 3) /* same iter space */
        {
            var_40 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_12) < (((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) arr_60 [i_10])) ? (((/* implicit */unsigned long long int) (~(262143)))) : (((((/* implicit */_Bool) arr_91 [20ULL] [20ULL] [i_10] [i_31] [i_31])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [10ULL] [i_10] [i_10 + 2] [i_31] [i_31 - 2]))))))) : (arr_64 [i_31 - 2] [i_31] [i_31] [i_10]));
            var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((((/* implicit */_Bool) arr_92 [i_10] [(short)2])) ? (((/* implicit */unsigned long long int) ((arr_44 [11] [i_31] [i_31] [i_10] [i_10 + 1] [i_10 - 1]) & (((/* implicit */int) (short)14631))))) : (var_5))) >= (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-10))))) ? (((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_92 [i_10] [i_31]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))))))));
        }
        arr_111 [i_10] [i_10] = ((/* implicit */int) arr_79 [i_10]);
        /* LoopSeq 1 */
        for (int i_32 = 0; i_32 < 24; i_32 += 2) 
        {
            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_4))) || (((/* implicit */_Bool) ((signed char) 262154)))));
            var_43 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_42 [i_10] [i_10] [21ULL] [i_32] [i_32])) : (arr_58 [i_10] [i_10])))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) arr_52 [i_10] [i_10] [i_10] [i_10]))));
            /* LoopNest 2 */
            for (unsigned long long int i_33 = 3; i_33 < 22; i_33 += 4) 
            {
                for (signed char i_34 = 1; i_34 < 23; i_34 += 1) 
                {
                    {
                        var_44 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_65 [i_34 + 1] [i_33 - 1] [i_10 - 1] [i_10 - 2])) && (((/* implicit */_Bool) arr_65 [i_34 + 1] [i_33 - 1] [i_10 - 1] [i_10 - 2])))))));
                        arr_119 [i_33] [i_32] [i_33 + 2] [i_34] = ((/* implicit */unsigned long long int) var_0);
                        var_45 ^= ((/* implicit */short) min((((int) (short)11675)), (((min((((/* implicit */int) var_14)), (var_7))) + ((-(((/* implicit */int) var_8))))))));
                    }
                } 
            } 
            arr_120 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_85 [i_10] [12] [i_10] [i_32])) ? (((/* implicit */int) ((min((((/* implicit */int) (short)-11675)), (1101210114))) >= (((/* implicit */int) arr_98 [(short)10] [i_10] [i_10] [i_10] [(short)12]))))) : (((var_7) - (((/* implicit */int) ((short) arr_36 [(signed char)12] [i_32] [i_32])))))));
        }
    }
    for (int i_35 = 3; i_35 < 9; i_35 += 4) 
    {
        /* LoopNest 2 */
        for (short i_36 = 0; i_36 < 10; i_36 += 3) 
        {
            for (int i_37 = 0; i_37 < 10; i_37 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_38 = 0; i_38 < 10; i_38 += 3) 
                    {
                        for (int i_39 = 0; i_39 < 10; i_39 += 1) 
                        {
                            {
                                arr_139 [i_35] [i_36] [i_36] [i_38] [i_39] = ((/* implicit */unsigned long long int) ((signed char) ((arr_127 [i_36]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_36]))))));
                                var_46 = ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */int) arr_9 [i_35] [i_36] [i_38])) ^ (((/* implicit */int) arr_55 [i_36]))))) - (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_42 [i_35 - 2] [0ULL] [i_37] [i_38] [i_39])) ^ (((/* implicit */int) var_15)))), (((((/* implicit */_Bool) arr_1 [i_35])) ? (arr_130 [i_36] [(signed char)3] [i_36] [i_39]) : (arr_78 [2ULL] [i_36] [i_37] [i_38] [i_39] [i_39]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_40 = 2; i_40 < 7; i_40 += 4) 
                    {
                        for (unsigned long long int i_41 = 1; i_41 < 7; i_41 += 2) 
                        {
                            {
                                arr_146 [i_36] [i_36] [i_37] = ((/* implicit */short) (~(arr_60 [i_41 + 1])));
                                var_47 = arr_141 [i_35] [i_35] [i_37] [i_40];
                                var_48 = ((/* implicit */signed char) var_6);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_42 = 2; i_42 < 8; i_42 += 3) 
                    {
                        arr_149 [i_35] [i_36] [i_42] = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */int) (short)-4629)), ((-(((/* implicit */int) arr_17 [i_35] [i_36] [(short)9])))))));
                        var_49 = ((/* implicit */int) ((var_9) - (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_80 [i_35] [i_35] [i_36] [i_36] [i_37] [i_42]))) : (arr_128 [i_35] [i_36]))), (((/* implicit */unsigned long long int) ((short) var_4)))))));
                        arr_150 [i_35] [i_36] [6] [(short)4] [i_36] = ((/* implicit */int) ((unsigned long long int) (((+(-1415307117))) - (((/* implicit */int) var_6)))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_43 = 0; i_43 < 10; i_43 += 1) 
        {
            for (unsigned long long int i_44 = 0; i_44 < 10; i_44 += 1) 
            {
                for (int i_45 = 0; i_45 < 10; i_45 += 2) 
                {
                    {
                        arr_158 [i_44] [i_43] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)28186))));
                        arr_159 [i_45] [i_43] [i_44] [i_43] [i_35] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_122 [4] [i_35])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_9)))))));
                    }
                } 
            } 
        } 
        arr_160 [i_35] [i_35] = var_6;
    }
}
