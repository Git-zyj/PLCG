/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209096
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
    var_10 = (~((~(((((/* implicit */_Bool) var_2)) ? (var_9) : (var_0))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9066222885087889877LL)) ? (((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)3]))) < (-9066222885087889878LL)))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) min(((_Bool)1), (((((/* implicit */int) var_4)) != (((/* implicit */int) arr_0 [i_0])))))))));
        var_11 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-9066222885087889877LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_7)))))) << (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */signed char) var_5)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_1] [(signed char)12])) : ((~(((/* implicit */int) arr_5 [i_1] [i_1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            arr_10 [i_2] = ((/* implicit */short) ((signed char) arr_9 [i_2]));
            var_12 -= ((/* implicit */short) (_Bool)1);
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
            {
                var_13 = ((/* implicit */_Bool) ((unsigned char) 9066222885087889877LL));
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) ^ (9066222885087889877LL)));
            }
        }
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_20 [i_4] [i_4] = ((/* implicit */short) (_Bool)1);
                    var_14 = ((_Bool) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) var_3))));
                }
            } 
        } 
        arr_21 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9066222885087889876LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_22 [i_1] = ((/* implicit */short) var_9);
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 22; i_6 += 3) 
    {
        for (unsigned char i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)149)) ? (2191625806845122140LL) : (2191625806845122140LL)));
                /* LoopSeq 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 4; i_9 < 22; i_9 += 2) 
                    {
                        for (signed char i_10 = 1; i_10 < 22; i_10 += 3) 
                        {
                            {
                                arr_37 [i_6] [i_6] [(_Bool)1] [i_8] [i_7] [i_10] [14LL] = ((/* implicit */unsigned char) arr_31 [i_10 + 1] [i_7 + 1] [i_10 + 1] [i_7]);
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) min(((short)29896), (((/* implicit */short) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10 - 1] [i_9 - 4] [i_6 - 1] [i_6]))) : (arr_29 [i_10] [i_7] [(unsigned char)21] [(_Bool)1])));
                                arr_38 [i_6] [i_7] [i_10 + 1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)29896)) <= (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_26 [i_8] [i_8])) ? (-6896831360093552059LL) : (var_0))))), (arr_29 [i_6 - 1] [i_9 + 1] [i_9] [i_10 + 1])));
                            }
                        } 
                    } 
                    arr_39 [i_6 - 1] [i_7] = ((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)13)) << (((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)62)))) - (55)))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        arr_42 [i_7] [i_7] [i_7 + 1] [i_7] [i_7] [i_7] = ((/* implicit */long long int) arr_34 [i_6 - 1] [i_6 + 1]);
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_35 [i_11] [i_11] [i_11] [i_6])), ((signed char)25)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_8] [(unsigned char)15]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_3)), ((short)-7444))))) : (7445025924201286893LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)22))))))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) arr_26 [i_6] [i_7]);
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_48 [i_6] [i_6] [i_8] [i_12] [i_7] [i_6] = (_Bool)1;
                            arr_49 [(_Bool)1] [i_6 - 1] [i_7] [(_Bool)1] [i_7] [i_12] [i_13] = ((/* implicit */unsigned char) arr_41 [i_6 + 1] [i_7 - 1] [i_6 + 1] [i_6]);
                            arr_50 [18LL] [i_7] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-9066222885087889877LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_6 + 1] [i_7] [i_7] [i_6 + 1]))) : (arr_31 [i_7] [i_8] [i_7 + 1] [i_7])));
                            var_19 = ((((/* implicit */_Bool) -2191625806845122140LL)) ? (-9066222885087889882LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        }
                        for (short i_14 = 1; i_14 < 21; i_14 += 3) 
                        {
                            arr_53 [i_6] [i_6] [(signed char)6] [(signed char)6] [i_12] [i_6] [(signed char)6] |= ((((var_0) & (arr_25 [i_8]))) > (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (9066222885087889877LL))));
                            arr_54 [i_7] [(unsigned char)21] [i_7] [14LL] [i_14] [(_Bool)1] [(unsigned char)21] = ((/* implicit */_Bool) ((((_Bool) arr_29 [i_14 + 1] [i_12] [(short)10] [i_6])) ? (((((/* implicit */_Bool) arr_31 [i_6] [(_Bool)1] [i_8] [i_7])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (var_1)))))));
                            var_20 = var_5;
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)103)) <= (((/* implicit */int) var_8))))) ^ (((((/* implicit */int) arr_51 [i_14 + 2] [i_12] [i_12] [i_8] [i_7 - 1] [i_6])) << (((((/* implicit */int) arr_23 [i_6 - 1] [i_7])) + (69)))))));
                        }
                        arr_55 [i_7] [i_8] [i_6 - 1] [i_6 - 1] [i_7] = ((/* implicit */signed char) arr_45 [i_12] [i_8] [i_8] [i_7 - 1] [i_6] [i_6]);
                        arr_56 [i_7] [i_7] = ((_Bool) arr_46 [i_7] [i_6] [i_6 - 1] [i_6] [i_6]);
                    }
                    for (signed char i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
                    {
                        arr_60 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) -9066222885087889891LL))) != ((-(((/* implicit */int) (signed char)-61))))))) : (((/* implicit */int) (unsigned char)248))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_63 [i_6] [i_7 + 1] [i_7] [(_Bool)1] [i_16] = (!(((/* implicit */_Bool) ((unsigned char) arr_41 [i_6] [(_Bool)1] [i_8] [i_15]))));
                            arr_64 [i_7] [i_7] [i_8] [i_7] [15LL] = ((/* implicit */_Bool) var_4);
                        }
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(9214979613013115275LL)))) ? (((((/* implicit */_Bool) arr_36 [i_7 - 1] [i_8] [i_15] [i_17] [20LL] [i_17 - 1])) ? (((/* implicit */int) arr_36 [i_7 + 1] [i_15] [i_17] [i_17] [i_7 + 1] [i_17 - 1])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) max(((signed char)-57), (var_2))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) max(((_Bool)1), (max(((_Bool)1), (var_6)))))) >> (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)148))))))))))));
                        }
                        for (signed char i_18 = 0; i_18 < 23; i_18 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_40 [i_7] [i_7])))), (max((((/* implicit */int) max((arr_36 [i_6] [i_7 + 1] [i_8] [i_8] [i_15] [i_18]), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */_Bool) arr_68 [i_6 + 1] [i_7])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_52 [i_7]))))))));
                            var_25 ^= ((_Bool) var_6);
                            var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_4)))));
                            arr_72 [i_6 - 1] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((arr_24 [i_6 + 1]), (arr_24 [i_6 + 1])))), (((((/* implicit */_Bool) -2191625806845122140LL)) ? (min((((/* implicit */long long int) (_Bool)0)), (9066222885087889877LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_7] [i_7] [(signed char)1] [i_7] [i_7])))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)10)) ? (9066222885087889891LL) : (-9066222885087889892LL)));
                        }
                        /* vectorizable */
                        for (signed char i_19 = 0; i_19 < 23; i_19 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((_Bool) ((arr_35 [i_6] [i_15] [i_15] [i_19]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            arr_75 [i_19] [i_15] [i_7] [i_7] [i_7] [i_6 + 1] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_47 [i_6] [i_6 - 1] [i_7 + 1])) & (((/* implicit */int) arr_68 [i_6 + 1] [i_7]))));
                            arr_76 [i_7] [i_7 + 1] [i_7] = ((/* implicit */signed char) arr_59 [(_Bool)1] [(unsigned char)12] [i_6 - 1] [i_6 - 1] [i_7 - 1]);
                            arr_77 [i_6] [i_6] [i_6] [i_15] [i_6] [i_6] &= ((/* implicit */short) arr_30 [i_6] [i_6] [i_8] [(unsigned char)3]);
                        }
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_68 [i_7] [i_7])) ? (((/* implicit */int) arr_70 [i_6 - 1] [(unsigned char)9])) : (((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (signed char i_20 = 0; i_20 < 23; i_20 += 2) /* same iter space */
                    {
                        arr_80 [i_6 - 1] [6LL] [i_7] [(unsigned char)16] [(signed char)1] = ((/* implicit */_Bool) ((9066222885087889892LL) >> (((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (arr_29 [i_7 + 1] [i_7 + 1] [i_6 - 1] [i_6 - 1])));
                    }
                    arr_81 [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_58 [i_7] [i_7] [i_7]) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (min((9066222885087889918LL), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) max((var_5), ((_Bool)1))))))) - (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                }
                for (signed char i_21 = 0; i_21 < 23; i_21 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 3; i_22 < 22; i_22 += 3) 
                    {
                        for (signed char i_23 = 0; i_23 < 23; i_23 += 2) 
                        {
                            {
                                var_31 -= ((/* implicit */unsigned char) arr_74 [i_6 + 1] [i_7 - 1] [i_21]);
                                arr_92 [i_6] [i_6] [i_6] [i_6 + 1] [i_7] [i_6 - 1] [(signed char)7] = ((/* implicit */unsigned char) arr_45 [i_6] [i_23] [i_6] [i_22 - 2] [i_22 - 2] [i_6]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        for (short i_25 = 0; i_25 < 23; i_25 += 3) 
                        {
                            {
                                arr_99 [i_6] [i_7 + 1] [i_21] [i_7] [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [1LL] [i_6] [1LL] [i_7])) ? (((/* implicit */int) ((signed char) arr_59 [i_25] [i_24] [(signed char)1] [i_7] [(signed char)14]))) : (((/* implicit */int) (_Bool)1))));
                                arr_100 [i_7] [i_7] = ((/* implicit */_Bool) (signed char)-6);
                                arr_101 [i_25] [i_6] [i_7] [i_7] [i_6] [i_7] [i_6] = (i_7 % 2 == 0) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_57 [i_7 + 1] [i_7 + 1] [(_Bool)1] [i_25]))) & (((((-9066222885087889920LL) + (9223372036854775807LL))) >> (((arr_94 [i_25] [i_7] [i_7] [i_6]) - (1671292801342562818LL))))))) != (((((/* implicit */_Bool) ((arr_88 [i_7] [i_7] [i_21] [i_7]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_85 [i_6] [i_7] [i_21] [i_24]))))) ? (((arr_95 [i_7] [(short)7]) ? (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_6 + 1] [i_7] [i_24]))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_57 [i_7 + 1] [i_7 + 1] [(_Bool)1] [i_25]))) & (((((-9066222885087889920LL) + (9223372036854775807LL))) >> (((((arr_94 [i_25] [i_7] [i_7] [i_6]) - (1671292801342562818LL))) - (251846294227889004LL))))))) != (((((/* implicit */_Bool) ((arr_88 [i_7] [i_7] [i_21] [i_7]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_85 [i_6] [i_7] [i_21] [i_24]))))) ? (((arr_95 [i_7] [(short)7]) ? (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_6 + 1] [i_7] [i_24]))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) (signed char)-27)) ? (((/* implicit */int) arr_32 [i_6 - 1] [i_7] [i_6 - 1] [i_24])) : ((-(((/* implicit */int) var_7))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_52 [i_7]))))), ((unsigned char)176)))) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                    arr_102 [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))) : (var_1))) >= (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_24 [i_7]))))))))));
                    var_33 += ((/* implicit */signed char) ((((/* implicit */int) var_3)) != (((/* implicit */int) ((unsigned char) arr_69 [i_21] [i_7 + 1] [(unsigned char)20] [i_6])))));
                }
                /* vectorizable */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    var_34 -= ((/* implicit */short) ((((/* implicit */int) arr_46 [(_Bool)1] [i_7 + 1] [i_26] [i_6 - 1] [i_26])) ^ (((/* implicit */int) var_5))));
                    arr_106 [i_7] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_7 + 1] [(unsigned char)0] [i_26] [i_26] [i_7 + 1] [i_6 + 1]))));
                    /* LoopSeq 1 */
                    for (_Bool i_27 = 0; i_27 < 0; i_27 += 1) 
                    {
                        arr_109 [i_6] [i_7] [i_6] [i_6] [(short)9] [i_6 - 1] = ((/* implicit */_Bool) (+(((arr_35 [(signed char)19] [i_7] [i_7] [i_27]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_96 [i_7] [(_Bool)1] [i_26] [i_27]))))));
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */int) var_6)) >= (((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (signed char)5)))))))));
                        arr_110 [i_7] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_7] = ((/* implicit */_Bool) ((arr_47 [i_26] [i_7] [i_6 - 1]) ? (((/* implicit */int) (short)-22573)) : (((/* implicit */int) arr_89 [i_6 - 1] [(signed char)21] [i_26] [i_27 + 1]))));
                    }
                }
                arr_111 [i_6 - 1] [i_7] = ((/* implicit */signed char) (_Bool)1);
                /* LoopSeq 1 */
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    arr_114 [i_7] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (unsigned char)179))) << (((((/* implicit */int) min((arr_108 [i_6 - 1] [(signed char)9] [i_7] [i_7 - 1] [i_28]), (arr_108 [i_6 - 1] [i_6 - 1] [i_7] [i_28] [(signed char)8])))) - (114)))));
                    /* LoopNest 2 */
                    for (long long int i_29 = 0; i_29 < 23; i_29 += 3) 
                    {
                        for (unsigned char i_30 = 3; i_30 < 22; i_30 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */long long int) (_Bool)1);
                                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((short) ((arr_41 [i_30 - 3] [i_30 - 1] [i_7 + 1] [i_6 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_41 [(unsigned char)0] [i_30 - 3] [i_7 + 1] [i_6 - 1]))))))));
                                arr_120 [i_7] [i_7] [i_7] [(_Bool)1] = arr_73 [i_6] [i_6 - 1] [i_6];
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (signed char)-116))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (signed char)-3))))))) ? ((-(((/* implicit */int) (unsigned char)77)))) : (((/* implicit */int) var_4))));
    var_39 = ((/* implicit */_Bool) ((signed char) var_4));
}
