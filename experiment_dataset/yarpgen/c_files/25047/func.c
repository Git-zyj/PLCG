/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25047
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) arr_0 [1ULL] [i_0])) : ((+(max((((/* implicit */long long int) (short)-3259)), (var_2)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((unsigned char) -4680135270164008312LL));
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-3259))))))), (((/* implicit */int) ((((/* implicit */_Bool) (short)3284)) || (arr_2 [i_2])))))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (_Bool)1))));
            var_14 = ((/* implicit */long long int) arr_6 [i_3] [i_3]);
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_3]))))), ((-(((((/* implicit */_Bool) 7696581394432ULL)) ? (4680135270164008312LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) -4680135270164008312LL);
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    {
                        arr_20 [i_3] [i_5] = ((/* implicit */_Bool) arr_15 [i_3]);
                        var_17 = ((/* implicit */signed char) var_7);
                    }
                } 
            } 
        }
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    {
                        arr_29 [i_3] [i_3] [i_10] = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_3 [i_3]))))));
                        var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_10]))))), (((((((/* implicit */_Bool) -4680135270164008312LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_9))) >> ((((~(var_1))) - (1731553525)))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                arr_33 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)12252))));
                            arr_39 [i_3] [(short)5] [i_3] = var_5;
                        }
                    } 
                } 
            }
            arr_40 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (unsigned short)63757);
        }
        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
        {
            arr_45 [i_3] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) min(((unsigned char)175), (((/* implicit */unsigned char) (_Bool)0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)46)))))))));
            /* LoopNest 3 */
            for (short i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    for (unsigned int i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) arr_51 [i_3] [i_3] [i_14] [i_15] [i_16] [i_17])) ? (((/* implicit */long long int) 1247381468)) : (-4680135270164008293LL));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((arr_38 [(short)2] [i_15] [i_3]), (((((/* implicit */_Bool) (short)3862)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)30126)))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                arr_59 [8] [i_18] [8] [i_3] = ((/* implicit */long long int) (+(arr_38 [i_14] [i_3] [i_18])));
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    for (int i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_20] [i_19] [i_3] [i_3] [3] [i_3])) ? (((/* implicit */int) (_Bool)0)) : (var_1)))) != (var_6)));
                            var_23 -= ((/* implicit */unsigned short) (+(4680135270164008286LL)));
                        }
                    } 
                } 
                var_24 *= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)158))));
                /* LoopSeq 2 */
                for (int i_21 = 0; i_21 < 12; i_21 += 2) 
                {
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (+(((/* implicit */int) arr_30 [i_21])))))));
                    /* LoopSeq 2 */
                    for (short i_22 = 0; i_22 < 12; i_22 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) ((int) arr_54 [i_22] [i_21] [i_18] [i_14] [i_3]));
                        var_27 = ((/* implicit */int) arr_55 [i_22]);
                        arr_73 [i_3] [i_3] [i_14] [i_21] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_14] [i_3]))));
                        var_28 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 6401063132678404320LL))));
                    }
                    for (short i_23 = 0; i_23 < 12; i_23 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */short) (((+(4680135270164008312LL))) == (((((/* implicit */_Bool) (unsigned short)55699)) ? (3459224472900734554LL) : (((/* implicit */long long int) arr_51 [(unsigned short)1] [i_14] [i_14] [(_Bool)1] [i_14] [i_14]))))));
                        var_30 = ((/* implicit */signed char) arr_23 [i_14] [i_18] [i_23]);
                        var_31 ^= ((/* implicit */_Bool) arr_44 [i_14] [i_21]);
                    }
                }
                for (int i_24 = 0; i_24 < 12; i_24 += 4) 
                {
                    arr_81 [i_3] [i_14] [i_18] [i_3] [i_3] [i_18] = (~(arr_71 [i_3] [i_3] [i_24] [i_3] [i_14] [11]));
                    arr_82 [i_3] [i_14] [i_14] [i_3] [i_24] = ((/* implicit */unsigned char) (+(arr_63 [i_3] [i_14])));
                    var_32 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) arr_64 [10] [i_14] [i_14] [i_14] [i_24] [10] [(short)2]))));
                }
            }
            for (long long int i_25 = 0; i_25 < 12; i_25 += 3) 
            {
                var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -724929845221804699LL)) ? (-724929845221804699LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_3] [i_14] [i_14] [i_25] [i_25]))))))));
                arr_87 [i_3] [8LL] [i_25] [i_3] = ((/* implicit */long long int) var_8);
                /* LoopNest 2 */
                for (long long int i_26 = 0; i_26 < 12; i_26 += 2) 
                {
                    for (short i_27 = 0; i_27 < 12; i_27 += 4) 
                    {
                        {
                            arr_92 [i_3] [6ULL] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_0)))))), (((arr_91 [i_3] [i_3] [i_25]) / (arr_91 [i_3] [i_3] [i_26])))));
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) (+(var_2)))) < (arr_79 [i_3] [i_14] [i_26] [i_26])))))));
                            var_35 = ((/* implicit */unsigned long long int) min((3291567883441336840LL), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_80 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])), (min(((unsigned short)65457), (((/* implicit */unsigned short) (short)-3259)))))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */long long int) arr_26 [i_3] [i_14] [i_3] [i_25]);
                var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) var_6))));
            }
        }
        arr_93 [i_3] = ((/* implicit */int) arr_72 [i_3] [i_3] [i_3]);
        /* LoopSeq 3 */
        for (short i_28 = 0; i_28 < 12; i_28 += 3) 
        {
            arr_98 [i_3] = ((/* implicit */signed char) (!(max(((_Bool)1), ((_Bool)0)))));
            var_38 = ((/* implicit */int) (-((-(var_9)))));
        }
        /* vectorizable */
        for (unsigned char i_29 = 0; i_29 < 12; i_29 += 4) /* same iter space */
        {
            arr_101 [i_3] [i_3] [i_29] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)-3259)))) != (((/* implicit */int) arr_56 [i_29]))));
            var_39 = ((arr_99 [i_3]) ? (((/* implicit */int) arr_99 [i_3])) : (((/* implicit */int) (short)18956)));
            /* LoopSeq 3 */
            for (int i_30 = 0; i_30 < 12; i_30 += 3) 
            {
                var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_97 [2] [i_29] [i_3])) ? (((/* implicit */int) arr_17 [i_30] [i_30] [i_30] [i_29] [i_3])) : (-989293518)));
                arr_104 [i_3] [i_30] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(4680135270164008311LL))))));
            }
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((-201159975) <= (((/* implicit */int) (short)-21759)))))));
                /* LoopSeq 2 */
                for (long long int i_32 = 0; i_32 < 12; i_32 += 3) 
                {
                    var_42 = ((/* implicit */long long int) (_Bool)1);
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) arr_15 [i_3]))));
                    var_44 = ((/* implicit */_Bool) (-(-3291567883441336840LL)));
                }
                for (int i_33 = 0; i_33 < 12; i_33 += 1) 
                {
                    arr_115 [i_3] [i_33] [i_33] [i_33] [i_33] = 9000980308800539599LL;
                    var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) (-(var_2))))));
                    arr_116 [i_3] [i_31] [i_3] = ((/* implicit */unsigned char) ((arr_97 [i_31] [i_29] [i_31]) % (arr_97 [i_33] [i_33] [i_29])));
                }
                var_46 = ((/* implicit */long long int) (~(((/* implicit */int) arr_43 [i_3]))));
            }
            for (signed char i_34 = 0; i_34 < 12; i_34 += 2) 
            {
                var_47 = ((/* implicit */signed char) (+(((/* implicit */int) arr_109 [i_29] [i_29] [i_34] [11LL]))));
                /* LoopNest 2 */
                for (unsigned long long int i_35 = 0; i_35 < 12; i_35 += 4) 
                {
                    for (unsigned char i_36 = 0; i_36 < 12; i_36 += 1) 
                    {
                        {
                            arr_124 [i_3] [i_35] [i_34] [(short)8] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) arr_15 [i_3]))));
                            var_48 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_29]))));
                            arr_125 [i_3] [i_29] [8LL] [i_35] [i_36] = ((/* implicit */unsigned long long int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3])))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) ((arr_95 [6LL]) != (((/* implicit */int) arr_107 [i_3] [i_3] [i_29] [i_34]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_3] [i_3] [i_3] [i_3] [i_3])))))));
                var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) (!(((/* implicit */_Bool) 16760832U)))))));
                var_51 = ((/* implicit */int) arr_118 [i_3]);
            }
            var_52 = ((/* implicit */unsigned int) var_1);
            var_53 = ((/* implicit */unsigned short) ((arr_99 [i_3]) ? (((/* implicit */unsigned long long int) arr_51 [i_3] [i_3] [i_3] [i_29] [i_3] [i_29])) : ((+(arr_66 [i_3] [1U] [i_3] [i_3] [1U] [1U])))));
        }
        /* vectorizable */
        for (unsigned char i_37 = 0; i_37 < 12; i_37 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_38 = 0; i_38 < 12; i_38 += 1) 
            {
                arr_130 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_3] [i_3]))));
                /* LoopNest 2 */
                for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                {
                    for (unsigned int i_40 = 0; i_40 < 12; i_40 += 2) 
                    {
                        {
                            var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3291567883441336839LL)) ? (((/* implicit */int) arr_1 [i_3])) : (arr_26 [i_3] [i_3] [i_39] [i_39])));
                            arr_138 [i_3] [i_37] [i_38] [i_37] [i_40] = ((/* implicit */int) (unsigned short)34485);
                            arr_139 [i_3] = ((/* implicit */unsigned char) (_Bool)1);
                            var_55 = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) (short)-3259))) == (arr_61 [i_3] [i_3] [(unsigned short)5] [i_38] [(short)11] [(unsigned short)5])))));
                        }
                    } 
                } 
            }
            var_56 = ((/* implicit */short) arr_2 [i_3]);
            /* LoopSeq 2 */
            for (int i_41 = 0; i_41 < 12; i_41 += 2) 
            {
                var_57 = ((/* implicit */unsigned short) 6903174281083434674LL);
                /* LoopSeq 2 */
                for (unsigned int i_42 = 0; i_42 < 12; i_42 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_43 = 0; i_43 < 12; i_43 += 4) 
                    {
                        var_58 ^= ((/* implicit */unsigned short) (+(var_0)));
                        var_59 = ((/* implicit */_Bool) min((var_59), (((/* implicit */_Bool) (unsigned char)27))));
                    }
                    for (long long int i_44 = 0; i_44 < 12; i_44 += 1) 
                    {
                        arr_150 [i_3] [i_3] [i_41] [(short)6] [i_44] = ((/* implicit */signed char) arr_24 [i_44] [i_42] [i_41] [i_37]);
                        var_60 = ((/* implicit */int) var_5);
                        var_61 = ((/* implicit */unsigned long long int) ((arr_34 [i_3] [i_42] [i_3] [i_37] [6]) ? (((((/* implicit */_Bool) (short)-8883)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_103 [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_113 [i_3])))));
                    }
                    arr_151 [(unsigned short)3] [i_3] [i_41] [(unsigned short)3] [i_3] [(unsigned short)3] = ((/* implicit */int) arr_141 [3] [i_37] [i_41] [i_3]);
                }
                for (signed char i_45 = 0; i_45 < 12; i_45 += 3) 
                {
                    arr_154 [i_3] [i_3] [7ULL] [i_41] [i_41] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_3] [i_37] [i_37] [i_37])) % (((/* implicit */int) ((((/* implicit */int) (signed char)-54)) < (arr_97 [i_3] [i_41] [i_45]))))));
                    arr_155 [i_3] [i_37] [i_37] [i_37] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_61 [i_3] [i_37] [i_41] [i_41] [(unsigned char)3] [i_45]))));
                }
            }
            for (long long int i_46 = 0; i_46 < 12; i_46 += 3) 
            {
                var_62 |= ((/* implicit */unsigned int) arr_42 [i_3]);
                var_63 = ((/* implicit */signed char) ((((/* implicit */_Bool) 685645833)) || (((/* implicit */_Bool) arr_50 [i_3] [i_37] [i_46] [i_46]))));
                /* LoopNest 2 */
                for (unsigned short i_47 = 0; i_47 < 12; i_47 += 1) 
                {
                    for (unsigned short i_48 = 0; i_48 < 12; i_48 += 2) 
                    {
                        {
                            var_64 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_74 [i_48] [i_37] [i_46] [i_47] [i_46] [i_46])) ? (arr_4 [i_46] [i_37]) : (((/* implicit */int) (short)24833))));
                            arr_166 [i_3] [i_37] [i_3] [i_47] [i_48] [i_37] [i_46] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_34 [i_48] [i_47] [i_3] [i_37] [8LL]))));
                            arr_167 [i_47] [i_47] [i_46] [i_3] [i_47] = ((/* implicit */unsigned int) arr_91 [i_3] [i_3] [i_48]);
                            var_65 = ((/* implicit */long long int) arr_123 [i_47] [i_37] [i_37] [i_3] [i_48]);
                            var_66 = ((/* implicit */unsigned int) ((arr_57 [i_37] [i_47]) / ((~(3291567883441336838LL)))));
                        }
                    } 
                } 
            }
            arr_168 [i_3] [i_37] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_3] [i_3] [i_3] [i_37] [0])) ? (var_6) : (3291567883441336831LL)));
        }
    }
    var_67 = ((/* implicit */signed char) (+(var_4)));
    var_68 = (_Bool)1;
}
