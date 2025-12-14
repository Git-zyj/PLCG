/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204012
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 |= ((/* implicit */_Bool) var_12);
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((18U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)85)))))));
                        arr_9 [i_3] = ((((/* implicit */int) (unsigned char)80)) * (((/* implicit */int) (unsigned char)127)));
                        arr_10 [16U] [i_2] [12U] [i_3] [i_0] |= (short)(-32767 - 1);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_4] [i_2] [i_1] [i_0])) >> (((((/* implicit */int) (unsigned char)85)) - (71))))))));
                        arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_4 [i_0] [6] [i_0]);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_3 [i_5])))), (((/* implicit */int) arr_2 [i_0])))))));
                        arr_19 [i_1] [i_1] [i_2] [i_1] [15ULL] [i_5] = var_16;
                        var_22 = ((/* implicit */unsigned int) arr_2 [1U]);
                        arr_20 [(unsigned char)8] [i_1] [i_2] |= ((/* implicit */unsigned char) arr_7 [i_1] [i_1] [i_1] [0ULL] [i_1] [i_1]);
                    }
                    var_23 = ((/* implicit */unsigned long long int) var_1);
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)101)) / (((/* implicit */int) arr_5 [i_1] [i_1] [i_2] [i_2]))));
                    var_25 *= ((/* implicit */unsigned long long int) arr_5 [i_2] [i_1] [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12))));
    /* LoopSeq 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 1; i_8 < 16; i_8 += 4) 
            {
                for (unsigned short i_9 = 1; i_9 < 15; i_9 += 2) 
                {
                    {
                        arr_34 [i_7] [i_7] [i_8 + 1] [i_9] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_4 [i_8 - 1] [(unsigned short)19] [(unsigned char)13])) + (((/* implicit */int) arr_4 [i_8 + 2] [i_8 - 1] [14LL]))))));
                        var_27 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_33 [i_6] [i_8] [i_6] [i_9 + 2])) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_33 [i_6] [12ULL] [i_6] [i_9 + 2]))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) ((min((var_3), (((/* implicit */int) var_5)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_6])))))))) << (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_4))))));
                    }
                } 
            } 
        } 
        arr_35 [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [(unsigned short)2] [i_6] [(unsigned short)2]))));
        arr_36 [11ULL] = ((/* implicit */int) var_16);
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_11 = 2; i_11 < 15; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                for (int i_13 = 3; i_13 < 14; i_13 += 4) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) arr_7 [i_13] [i_13] [i_13] [i_13] [i_11 - 2] [i_10]);
                        var_30 = ((/* implicit */int) arr_13 [i_11] [15ULL] [i_11] [(unsigned char)10]);
                        var_31 = ((/* implicit */unsigned char) arr_33 [3ULL] [i_11 + 1] [i_12] [i_13]);
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_12]))) | (((arr_11 [i_13 + 4] [i_11 + 2] [i_11 - 1] [i_11]) | (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                        arr_49 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) var_15);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                var_33 |= ((/* implicit */unsigned int) var_10);
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_16 = 3; i_16 < 16; i_16 += 4) 
                    {
                        arr_57 [i_10] [i_10] [9U] [i_10] = ((/* implicit */long long int) min((min((arr_0 [i_11 - 2]), (arr_0 [i_11 + 2]))), (var_15)));
                        var_34 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_10] [i_11 + 3] [i_14]))) | (arr_53 [i_10] [i_11 + 3] [i_10] [i_15] [i_10] [i_15]))) | (arr_53 [i_15] [i_11 + 3] [(_Bool)1] [i_10] [i_10] [i_10])));
                        arr_58 [i_10] = ((/* implicit */unsigned short) arr_27 [i_10]);
                    }
                    /* vectorizable */
                    for (unsigned char i_17 = 0; i_17 < 18; i_17 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned int) var_8);
                        var_36 = ((/* implicit */_Bool) ((arr_46 [i_15] [(unsigned char)10] [i_15] [i_10]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10] [i_11 + 2] [i_10])))));
                    }
                    for (unsigned short i_18 = 3; i_18 < 15; i_18 += 1) 
                    {
                        var_37 = ((/* implicit */_Bool) min((arr_1 [i_18]), (((/* implicit */unsigned long long int) 0U))));
                        var_38 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_4 [i_10] [i_11] [i_14])) | (((/* implicit */int) arr_52 [i_10] [i_10] [i_10]))))));
                        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) arr_55 [i_18] [(unsigned char)8] [i_14] [(unsigned char)8] [i_10]))));
                        arr_64 [i_10] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_26 [i_10] [i_10]) && (var_1))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_14] [i_11 + 3] [i_10] [i_10]))) / (2005840554545256821ULL))));
                        var_40 = ((/* implicit */unsigned int) ((-5177198663919058555LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9)))));
                    }
                    arr_65 [14ULL] [i_14] [i_10] [i_15] = ((/* implicit */_Bool) min((((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)39425)))), (((/* implicit */int) arr_54 [i_15] [i_14] [i_11] [i_11] [i_10]))));
                    var_41 = ((/* implicit */unsigned short) min((-5177198663919058563LL), (((/* implicit */long long int) arr_63 [i_10] [i_10] [i_10] [i_10] [i_15]))));
                }
            }
            /* LoopSeq 3 */
            for (unsigned int i_19 = 1; i_19 < 16; i_19 += 3) /* same iter space */
            {
                arr_69 [(unsigned short)5] [i_10] [i_19 + 1] = ((/* implicit */unsigned long long int) arr_53 [i_19 - 1] [i_10] [i_10] [i_11] [i_10] [i_10]);
                var_42 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_7 [i_19 - 1] [i_11 + 2] [i_11] [6U] [i_10] [i_10])) ^ (max((var_0), (((/* implicit */unsigned long long int) arr_30 [i_10] [i_19 + 1]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_20 = 0; i_20 < 18; i_20 += 1) 
                {
                    var_43 = ((/* implicit */long long int) arr_25 [i_20]);
                    arr_73 [i_10] [i_10] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (118244513U)));
                    arr_74 [i_10] [i_11] [(_Bool)1] [i_10] = ((/* implicit */unsigned char) (!(var_5)));
                }
                for (int i_21 = 4; i_21 < 17; i_21 += 1) 
                {
                    arr_79 [(unsigned short)6] [i_11] [i_11] [i_11] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((-2147483641) | (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) arr_51 [7U] [i_11])))))) != (var_8)));
                    /* LoopSeq 2 */
                    for (unsigned int i_22 = 0; i_22 < 18; i_22 += 2) /* same iter space */
                    {
                        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(5112215460515247705ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_10])) + (((/* implicit */int) (unsigned short)1862)))))))) || (((((/* implicit */_Bool) 9223570246774164087ULL)) || (((/* implicit */_Bool) (unsigned short)65535))))));
                        var_45 = ((/* implicit */_Bool) ((((((((/* implicit */int) (unsigned short)65529)) / (((/* implicit */int) (unsigned short)47272)))) * (((/* implicit */int) arr_76 [14U] [i_19 + 1] [i_19 + 1])))) | (((/* implicit */int) var_16))));
                        var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) ^ (1188327643U))) << (((((var_9) << (((11181789606825667699ULL) - (11181789606825667697ULL))))) - (833242170U))))))))));
                    }
                    for (unsigned int i_23 = 0; i_23 < 18; i_23 += 2) /* same iter space */
                    {
                        arr_85 [(unsigned char)1] [i_11 + 2] [i_11] [(short)11] [i_10] = arr_4 [(_Bool)1] [i_21 - 3] [6LL];
                        var_47 |= ((/* implicit */unsigned short) var_15);
                    }
                    /* LoopSeq 1 */
                    for (int i_24 = 0; i_24 < 18; i_24 += 4) 
                    {
                        var_48 = ((/* implicit */_Bool) arr_84 [i_10] [i_10]);
                        arr_88 [(short)3] [i_11] [i_10] [(unsigned short)15] [i_24] = arr_61 [i_10] [i_21] [i_10] [i_21];
                        arr_89 [i_10] [i_19] [i_19] [i_10] [i_10] [5U] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_70 [i_19 + 1] [i_19 + 2] [i_10]) == (arr_70 [i_11] [i_19 - 1] [i_10]))))));
                        arr_90 [i_21] [i_21 + 1] [i_21] [(short)2] [(short)2] [i_24] [i_21 - 2] &= ((/* implicit */long long int) 9223173826935387537ULL);
                    }
                }
            }
            for (unsigned int i_25 = 1; i_25 < 16; i_25 += 3) /* same iter space */
            {
                var_49 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)7236)) * (((/* implicit */int) (_Bool)1))));
                var_50 &= ((/* implicit */unsigned short) min((min(((+(((/* implicit */int) arr_30 [i_10] [i_11])))), (((/* implicit */int) arr_30 [i_10] [i_11])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)26)) == (((/* implicit */int) arr_71 [i_25] [i_25] [14U] [i_10] [i_10])))))));
                var_51 = ((/* implicit */unsigned short) var_15);
            }
            for (unsigned int i_26 = 1; i_26 < 16; i_26 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) arr_4 [i_26] [i_11] [i_10]))));
                    arr_100 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_40 [i_10] [(unsigned short)11] [i_26 - 1])), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)220))))));
                    arr_101 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) var_9);
                    var_53 = (_Bool)0;
                }
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    arr_104 [i_10] [i_10] [i_26 + 1] = ((/* implicit */_Bool) min((((arr_44 [i_10] [i_10] [i_10]) / (arr_44 [i_10] [i_11] [(unsigned short)14]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_55 [i_11 + 3] [i_10] [i_26] [i_28] [i_10])) * (((/* implicit */int) (_Bool)1)))))));
                    arr_105 [i_10] [i_10] [7ULL] [(_Bool)1] [i_10] [i_28] = ((/* implicit */unsigned int) min((9223173826935387528ULL), (((/* implicit */unsigned long long int) -1570849868))));
                    arr_106 [i_10] [i_26] [i_11] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_87 [i_11 + 2] [i_10] [i_11] [i_10] [i_10])), (var_8)));
                    var_54 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
                }
                arr_107 [i_10] [i_11] [i_10] = ((/* implicit */unsigned int) min((((/* implicit */int) ((14255444242352902616ULL) <= (((/* implicit */unsigned long long int) arr_39 [i_26] [i_10]))))), (((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_6)))) / (((/* implicit */int) arr_45 [i_11 - 1] [i_11 + 2] [i_11 - 2] [i_11 + 3]))))));
                var_55 = ((/* implicit */unsigned short) (((((-2147483647 - 1)) * (((/* implicit */int) arr_86 [i_11] [i_11] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11])))) / (((/* implicit */int) arr_43 [i_11 + 1] [i_10]))));
                var_56 = ((/* implicit */unsigned long long int) max((var_56), (arr_67 [i_10] [i_26 + 2] [i_11 + 3])));
                arr_108 [i_10] [i_11] [i_10] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_72 [9ULL] [15LL] [i_11] [i_10])) || (((/* implicit */_Bool) arr_63 [(unsigned short)14] [(unsigned short)14] [i_10] [(unsigned short)14] [i_26])))) && (((/* implicit */_Bool) (unsigned char)88)))))));
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_29 = 0; i_29 < 18; i_29 += 2) 
        {
            var_57 ^= ((/* implicit */unsigned int) arr_42 [i_10] [i_10] [i_10] [i_10]);
            /* LoopSeq 1 */
            for (unsigned long long int i_30 = 2; i_30 < 15; i_30 += 2) 
            {
                var_58 = ((/* implicit */_Bool) max((var_58), (((/* implicit */_Bool) arr_37 [i_30 - 2]))));
                arr_114 [13ULL] [(unsigned char)9] [i_30] [i_10] = ((/* implicit */_Bool) arr_25 [i_10]);
            }
            arr_115 [i_10] [i_10] [i_10] = ((/* implicit */long long int) var_12);
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_31 = 0; i_31 < 10; i_31 += 1) 
    {
        for (int i_32 = 3; i_32 < 9; i_32 += 1) 
        {
            for (unsigned short i_33 = 2; i_33 < 9; i_33 += 1) 
            {
                {
                    var_59 = ((/* implicit */_Bool) var_2);
                    var_60 ^= min(((unsigned short)27163), (((/* implicit */unsigned short) (_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned int i_34 = 0; i_34 < 10; i_34 += 3) 
                    {
                        for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                        {
                            {
                                var_61 = (!(((/* implicit */_Bool) max((arr_1 [i_31]), (arr_1 [i_31])))));
                                arr_131 [i_31] = arr_26 [i_31] [i_31];
                            }
                        } 
                    } 
                    arr_132 [i_31] [i_32] [i_33] = var_13;
                }
            } 
        } 
    } 
}
