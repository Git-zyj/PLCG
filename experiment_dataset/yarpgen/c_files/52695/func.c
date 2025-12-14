/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52695
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
    for (int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_1] = arr_12 [i_1] [i_1] [i_1] [i_3 - 2] [7LL] [i_3 + 2];
                        var_14 = ((/* implicit */unsigned char) ((unsigned short) arr_10 [i_2] [(short)2] [i_3] [(_Bool)1] [i_3 - 2]));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_1 - 1] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) arr_7 [i_4] [i_3] [i_1] [i_0]);
                            var_15 = ((/* implicit */int) (unsigned short)508);
                        }
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)5461)) == (((/* implicit */int) (unsigned short)60075))));
                            var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((8725724278030336LL) | (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_6 [i_0 - 2] [i_5] [i_5] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [(_Bool)1] [i_3]))))))));
                        }
                    }
                    for (unsigned int i_6 = 2; i_6 < 12; i_6 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 1; i_7 < 10; i_7 += 3) 
                        {
                            arr_27 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)240))) % (134217720LL)));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_4)));
                            arr_28 [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */int) 3888608626U);
                        }
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_19 -= ((/* implicit */int) (unsigned char)55);
                            var_20 = ((/* implicit */unsigned char) ((long long int) arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1]));
                            arr_31 [i_1] [i_1] [i_2] [i_6] = ((/* implicit */long long int) var_11);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */int) (short)-1);
                            arr_34 [i_0] [i_1] [i_2] [i_1] [i_9] = ((/* implicit */int) (-(1758173755U)));
                            var_22 = ((/* implicit */unsigned char) arr_2 [i_2]);
                            arr_35 [i_0] [i_0 - 4] [i_0 - 4] [i_2] [i_1] [0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45357))) : (((((/* implicit */_Bool) (unsigned short)64844)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))) : (-4785424532753711708LL)))));
                        }
                        arr_36 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) + (arr_19 [i_0 - 3] [i_0 + 2] [i_1 + 2] [i_6] [i_6 - 2])));
                        var_23 ^= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_7)))));
                    }
                    arr_37 [i_1] [i_1 + 1] [9] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) | (134217728U))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 2; i_10 < 12; i_10 += 1) 
                    {
                        for (long long int i_11 = 2; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_10 - 1] [i_10] [i_11 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (14825078544748596647ULL)));
                                arr_44 [i_1] [i_1] [i_1] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (arr_26 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_12 = 3; i_12 < 13; i_12 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_1])) * (((/* implicit */int) arr_46 [i_1]))))));
                                var_26 ^= ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                    arr_55 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5461)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3946))) : (((unsigned int) var_11))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        for (unsigned int i_16 = 3; i_16 < 11; i_16 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((_Bool) arr_29 [i_0] [i_0] [(unsigned char)13] [i_12] [i_1]));
                                arr_63 [i_0 - 3] [i_1] [i_12 + 1] [i_15] [i_16] = ((/* implicit */_Bool) ((((var_5) < (((/* implicit */unsigned long long int) arr_32 [i_0])))) ? (((/* implicit */int) arr_29 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_15] [i_1])) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_9)))))));
                                var_28 = ((/* implicit */unsigned short) (~(arr_43 [i_15] [i_16 - 2] [i_12] [i_15] [i_1 - 1])));
                                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) 3221225472U))));
                            }
                        } 
                    } 
                    var_30 = (i_1 % 2 == zero) ? (((((/* implicit */int) arr_38 [i_1] [i_1])) << (((arr_6 [i_1 + 2] [i_1] [i_1] [i_0]) - (2720909913U))))) : (((((/* implicit */int) arr_38 [i_1] [i_1])) << (((((arr_6 [i_1 + 2] [i_1] [i_1] [i_0]) - (2720909913U))) - (1070391668U)))));
                }
                for (long long int i_17 = 2; i_17 < 13; i_17 += 3) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        arr_68 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (2234207627640832ULL) : (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_1 + 1] [i_1]))));
                        arr_69 [i_18] [i_1] [i_1] [i_18] |= ((/* implicit */long long int) var_7);
                        arr_70 [i_0] [i_1] [i_17] [i_18] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (arr_39 [i_1] [i_0] [i_0 + 1] [i_1 - 1] [i_17 + 1] [i_17 - 1]) : (((/* implicit */int) (unsigned short)5461))));
                        var_31 = ((/* implicit */_Bool) var_2);
                    }
                    for (long long int i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        arr_74 [i_0] [i_1] [i_0] [9U] [i_19] [i_0 + 1] = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((min((((var_8) - (((/* implicit */unsigned int) 17544848)))), (((/* implicit */unsigned int) arr_0 [i_1])))) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_1])) >> (((((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1] [i_17] [i_19]))) - (83))))))))) : (((/* implicit */long long int) ((min((((var_8) - (((/* implicit */unsigned int) 17544848)))), (((/* implicit */unsigned int) arr_0 [i_1])))) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_1])) >> (((((((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1] [i_17] [i_19]))) - (83))) - (129)))))))));
                        arr_75 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [0LL] [i_1 - 1] [i_17] [i_17] [i_1]))));
                        arr_76 [i_0 - 1] [i_1] = ((/* implicit */unsigned int) arr_56 [i_0 + 1] [i_17 - 2] [i_17 - 2]);
                    }
                    for (short i_20 = 0; i_20 < 14; i_20 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_0] [i_0 - 1] [i_0 + 1])) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_2))))) + (max((var_8), (var_8)))));
                        arr_79 [i_1] [i_1] [i_17] [i_20] = ((/* implicit */unsigned int) var_5);
                        var_33 = ((/* implicit */short) max(((~(((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_0] [i_0])))), (((/* implicit */int) (unsigned short)3186))));
                    }
                    for (short i_21 = 0; i_21 < 14; i_21 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_22 = 0; i_22 < 14; i_22 += 1) /* same iter space */
                        {
                            arr_85 [i_0] [i_0] [i_0] [i_21] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_1))) << (((/* implicit */int) ((_Bool) max((var_2), (((/* implicit */unsigned char) var_10))))))));
                            var_34 = var_2;
                            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_17] [i_0] [i_0]))));
                        }
                        for (unsigned short i_23 = 0; i_23 < 14; i_23 += 1) /* same iter space */
                        {
                            var_36 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (((((/* implicit */_Bool) 246233537)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((int) ((((/* implicit */_Bool) -1)) ? (var_4) : (((/* implicit */unsigned long long int) var_8))))) : (((int) 960436432U)));
                            var_37 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_42 [i_1] [i_1] [(unsigned short)11] [(unsigned short)11] [i_23]) - (((/* implicit */int) var_1))))), (max((((/* implicit */long long int) 1709792115U)), (507904LL)))))), (((((((/* implicit */int) (unsigned short)52915)) <= (((/* implicit */int) (unsigned short)9653)))) ? (min((var_4), (((/* implicit */unsigned long long int) arr_21 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) arr_42 [i_1] [i_21] [i_17] [i_1] [i_1]))))));
                            arr_88 [i_0] [i_1] [i_17] = ((/* implicit */int) arr_17 [i_0] [i_1]);
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned short)58184)), (min((-7570468594630541685LL), (((/* implicit */long long int) (unsigned char)229)))))))));
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), (min((arr_9 [i_0] [8] [8]), (arr_23 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_65 [i_1 - 1] [i_1 + 1]), (arr_48 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) - (arr_77 [i_0] [12] [i_0] [i_0] [i_23])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_26 [i_0] [i_1])))) : (max((((/* implicit */long long int) var_7)), (1097364144128LL))))))))));
                        }
                        for (unsigned short i_24 = 0; i_24 < 14; i_24 += 1) /* same iter space */
                        {
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) >= (((/* implicit */int) var_9)))) ? (max((((/* implicit */unsigned int) arr_81 [i_0 - 2] [i_0 - 2] [i_0] [i_0])), (arr_6 [i_1] [i_21] [i_21] [i_24]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)5489)))))))));
                            arr_91 [i_24] [i_24] [i_24] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? ((+(arr_39 [i_1] [i_0] [i_0 + 1] [i_1 + 2] [i_0] [i_21]))) : ((((_Bool)1) ? (((/* implicit */int) ((arr_33 [i_0] [i_1] [i_17 - 1] [i_21] [i_21] [i_21] [i_17 - 1]) < (((/* implicit */int) arr_87 [i_0] [i_0] [i_21] [i_21] [i_24]))))) : (((/* implicit */int) max((arr_25 [i_24] [i_21] [i_17] [i_1] [i_0]), (((/* implicit */short) arr_11 [i_1] [i_1])))))))));
                        }
                        arr_92 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)218)) < ((-(((/* implicit */int) (_Bool)1)))))))));
                    }
                    var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (67100672U)))) ? (var_12) : (((/* implicit */int) var_10)))))))));
                    var_42 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_17] [i_0] [i_0]))) <= (var_4))))) >= (((((/* implicit */unsigned long long int) 659106102U)) + (var_5)))))), (min(((+(var_5))), (((/* implicit */unsigned long long int) (+(arr_2 [i_1 + 1]))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_25 = 1; i_25 < 12; i_25 += 3) 
                {
                    for (unsigned short i_26 = 0; i_26 < 14; i_26 += 2) 
                    {
                        {
                            arr_98 [8U] [i_1] = arr_60 [i_0] [i_0] [i_0] [6] [i_25] [i_26];
                            var_43 ^= ((/* implicit */int) ((((unsigned long long int) arr_42 [i_0] [i_0 - 3] [i_1 - 1] [i_25 + 1] [i_26])) != (((max((var_4), (((/* implicit */unsigned long long int) var_0)))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (3926004086U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_44 = ((/* implicit */int) ((1709792131U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60072)))));
    /* LoopNest 2 */
    for (unsigned int i_27 = 0; i_27 < 25; i_27 += 4) 
    {
        for (unsigned int i_28 = 0; i_28 < 25; i_28 += 4) 
        {
            {
                var_45 = ((/* implicit */unsigned short) (unsigned char)15);
                /* LoopNest 2 */
                for (unsigned short i_29 = 1; i_29 < 24; i_29 += 4) 
                {
                    for (unsigned char i_30 = 1; i_30 < 21; i_30 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned int) min((var_46), (arr_107 [i_27] [i_28] [i_27])));
                            var_47 = ((/* implicit */int) min(((_Bool)1), (((((/* implicit */int) min((var_11), (var_1)))) >= (((((/* implicit */_Bool) arr_108 [i_28] [i_28] [i_28] [i_27] [i_29])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
