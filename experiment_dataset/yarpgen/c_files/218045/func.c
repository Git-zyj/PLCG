/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218045
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
    var_10 = ((/* implicit */int) var_8);
    var_11 = ((/* implicit */unsigned long long int) var_6);
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 6446165614818244427LL)) ? (max((((/* implicit */long long int) var_9)), (min((((/* implicit */long long int) var_7)), (6405865314293396065LL))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (max((((/* implicit */unsigned int) var_3)), (var_2)))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = (-(((((/* implicit */_Bool) ((arr_0 [i_0]) >> (((((/* implicit */int) var_5)) - (29547)))))) ? (((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20669))))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned int) 17725611786295399749ULL);
            arr_5 [10] [10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)8191))))) ? ((~(arr_4 [i_0] [i_1 - 3] [(_Bool)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 3] [i_0])) && (((/* implicit */_Bool) 3623219088U))))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (((((/* implicit */_Bool) ((short) (short)8191))) ? (((arr_0 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8192))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [10ULL]))))))));
            arr_7 [i_0] [5U] [5U] = ((/* implicit */signed char) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (~((+(arr_3 [i_0]))))))));
        }
        for (short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [(signed char)3] [i_2])), (arr_1 [i_0])))) ? (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [11LL] [i_2] [i_2]))))), ((short)8192)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)8192)))))) <= (((288230238712758272ULL) ^ (((/* implicit */unsigned long long int) arr_10 [i_0] [i_2])))))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                var_15 = (!(((/* implicit */_Bool) (short)32767)));
                var_16 = (_Bool)1;
                var_17 = ((/* implicit */signed char) ((unsigned long long int) (_Bool)0));
                var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)3)) < (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))));
            }
            for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) 
            {
                var_19 = ((/* implicit */unsigned int) ((int) (-((-(((/* implicit */int) (short)8191)))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 9; i_5 += 3) 
                {
                    for (unsigned int i_6 = 2; i_6 < 9; i_6 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_4] [i_5])) || (((/* implicit */_Bool) (+(17725611786295399749ULL))))))), ((short)32767)));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */short) arr_21 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1])), (arr_8 [i_5 + 3] [i_4 - 1] [i_4 + 1])))))))));
                            arr_22 [i_0] [(unsigned char)9] = ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
                arr_23 [(unsigned char)9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_17 [i_0] [i_0] [i_4] [i_2] [i_2] [i_2]))))) < (arr_1 [i_4 + 1])))) | (((/* implicit */int) ((_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_0]))))))));
                var_22 = ((/* implicit */unsigned short) ((unsigned char) arr_21 [i_4 - 2] [i_4] [i_2] [i_2] [i_0]));
            }
        }
        /* vectorizable */
        for (long long int i_7 = 3; i_7 < 11; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 11; i_9 += 3) 
                {
                    for (unsigned short i_10 = 2; i_10 < 10; i_10 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) arr_32 [1] [i_9 - 1] [i_7 - 2] [i_7] [i_7 - 2] [i_7]);
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1657854423)) ? (((3703216688361250229ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_10 + 2]))))) : (((((/* implicit */_Bool) arr_13 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) 63108228639048471LL)) : (14743527385348301386ULL)))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0] [i_10 + 1] [i_8] [i_9 + 1] [i_9 + 1])) ? (((/* implicit */int) arr_16 [i_0] [i_10 + 1] [i_0] [i_9] [i_9 + 1])) : (((/* implicit */int) arr_16 [i_0] [i_10 + 1] [i_9] [i_9] [i_9 + 1]))));
                            var_26 -= arr_18 [i_0] [i_7 - 1] [11LL] [i_7 - 1];
                            arr_36 [i_0] [i_0] [i_0] [i_0] [4U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) -323604651))) || (((/* implicit */_Bool) ((short) arr_3 [8LL])))));
                        }
                    } 
                } 
                arr_37 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [(signed char)8]))) : (-6687573343206847771LL)))));
            }
            /* LoopNest 3 */
            for (short i_11 = 1; i_11 < 8; i_11 += 2) 
            {
                for (signed char i_12 = 3; i_12 < 10; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */int) arr_33 [i_7 + 1] [i_12 + 1] [i_13 + 1] [i_13]);
                            arr_45 [i_0] [i_7] [i_7] [i_11] [i_11 + 2] [i_12] = ((/* implicit */short) (+(((unsigned long long int) (short)32767))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_14 = 3; i_14 < 11; i_14 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 8; i_15 += 2) 
            {
                for (int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_17 = 2; i_17 < 8; i_17 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)-3272))) != (arr_24 [(_Bool)1] [i_14 + 1] [i_14]))) ? (arr_44 [i_17 - 2] [i_17 - 2] [i_17 - 2] [i_17 - 2] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [(_Bool)1] [i_0]))))))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) 721132287414151867ULL))));
                            arr_57 [i_0] [i_14 + 1] [(signed char)3] [i_14 + 1] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-8188)) ? (63108228639048471LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8188)))));
                            var_30 = ((/* implicit */unsigned long long int) arr_51 [i_16]);
                            arr_58 [i_14] [i_14] [(unsigned short)3] [(unsigned short)3] [i_17] [i_14 - 3] = ((short) 17725611786295399723ULL);
                        }
                        for (unsigned int i_18 = 2; i_18 < 8; i_18 += 4) /* same iter space */
                        {
                            var_31 ^= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_29 [3] [i_14 - 3] [i_18 + 4])) : (((/* implicit */int) arr_27 [i_14 - 1] [i_15 + 2]))));
                            arr_61 [i_14 + 1] [i_15 + 2] [i_16] [i_14 + 1] = ((/* implicit */unsigned long long int) arr_27 [i_0] [i_14]);
                            var_32 = ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_14 - 2] [i_15 + 3] [i_18 + 2]))));
                            arr_62 [i_14] [i_15] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)57495))));
                        }
                        var_33 = ((/* implicit */int) (-(arr_14 [i_14 - 1])));
                        arr_63 [i_0] |= ((/* implicit */_Bool) ((unsigned char) arr_9 [i_14 - 1] [i_0]));
                    }
                } 
            } 
            var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24499)) ? (arr_38 [i_0] [5ULL] [i_0]) : (((/* implicit */unsigned int) -398500539)))))));
            var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0] [2ULL] [(short)2] [i_0] [i_14]))) > (var_1))))) > (arr_38 [i_14 + 1] [i_14] [i_0])));
            var_36 = ((/* implicit */signed char) (-(arr_44 [i_0] [6] [i_0] [6] [i_0])));
            var_37 = (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)201)) != (((/* implicit */int) (_Bool)1)))))) : (((long long int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
        /* LoopSeq 1 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_38 = ((/* implicit */unsigned short) arr_4 [i_0] [i_19] [i_19]);
            /* LoopSeq 2 */
            for (long long int i_20 = 0; i_20 < 12; i_20 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_21 = 1; i_21 < 9; i_21 += 2) 
                {
                    for (long long int i_22 = 0; i_22 < 12; i_22 += 4) 
                    {
                        {
                            var_39 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((11606249002183331609ULL) % (6840495071526220000ULL)))) || (((/* implicit */_Bool) ((unsigned char) arr_9 [(_Bool)1] [i_19])))))), (((((/* implicit */_Bool) arr_71 [i_21] [i_21 + 2] [i_21] [i_21])) ? (((/* implicit */unsigned long long int) arr_71 [(_Bool)1] [i_20] [(_Bool)1] [i_21 + 1])) : (arr_28 [i_20] [i_20] [i_21 - 1] [i_20]))));
                            arr_75 [(_Bool)1] [i_19] = (+(arr_55 [i_0] [(short)5] [i_20] [i_22] [i_22]));
                            var_40 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_46 [i_0] [i_19] [i_19]))));
                        }
                    } 
                } 
                arr_76 [i_0] [i_19] [i_19] [i_19] = ((/* implicit */long long int) arr_53 [i_20]);
            }
            for (long long int i_23 = 0; i_23 < 12; i_23 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_24 = 3; i_24 < 11; i_24 += 2) 
                {
                    for (signed char i_25 = 3; i_25 < 11; i_25 += 1) 
                    {
                        {
                            var_41 &= ((/* implicit */unsigned int) arr_59 [i_0] [(unsigned short)10] [(unsigned short)10] [i_24] [i_25 + 1] [5]);
                            arr_84 [i_0] [i_24] [(short)6] [i_24 - 3] [i_25 - 1] = ((/* implicit */unsigned short) max((((long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)18)))), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_82 [i_0] [i_0] [i_0] [i_24] [i_25 - 3])) > (712379891303748829ULL))) ? (3042493755U) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_27 = 3; i_27 < 9; i_27 += 4) 
                    {
                        var_42 -= (+(2567407637470921629ULL));
                        arr_91 [i_0] [i_27] = ((/* implicit */unsigned char) ((((arr_60 [i_26] [i_26] [i_26 - 1] [i_26 - 1]) | (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (_Bool)1))));
                        arr_92 [(unsigned char)11] [i_0] [1LL] [i_27] [i_0] = var_8;
                    }
                    var_43 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)13)))))));
                    var_44 = ((/* implicit */long long int) -1666302102);
                    var_45 = 2081869438U;
                    /* LoopSeq 2 */
                    for (unsigned short i_28 = 2; i_28 < 11; i_28 += 2) 
                    {
                        var_46 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) arr_89 [i_28 - 1] [i_28] [i_28] [i_28 - 2] [i_28 - 1] [i_28 - 1] [i_26 - 1])) ? (arr_89 [i_28] [i_28] [i_28] [i_28 - 1] [i_28 - 1] [i_28 - 2] [i_26 - 1]) : (arr_89 [i_28] [i_28 - 2] [(signed char)4] [i_28 + 1] [i_28 + 1] [i_28 - 2] [i_26 - 1])))));
                        var_47 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) arr_39 [i_0] [i_0] [i_0]))), ((-(((/* implicit */int) var_9))))))), (min((((/* implicit */long long int) arr_18 [i_0] [i_19] [i_26 - 1] [i_26 - 1])), (arr_44 [i_0] [i_19] [i_26 - 1] [i_26] [i_28])))));
                    }
                    /* vectorizable */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (_Bool)0)))));
                        arr_101 [i_0] [i_19] [i_23] [i_26] [3] = (!(((/* implicit */_Bool) (~(-1666302105)))));
                    }
                }
                /* vectorizable */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    var_49 -= ((/* implicit */int) ((((/* implicit */long long int) 368391305U)) / (-7864131479475578239LL)));
                    var_50 = arr_81 [(signed char)2] [(signed char)2] [i_23] [i_23] [(signed char)2] [i_23];
                    var_51 = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) (_Bool)1)))));
                    var_52 = ((/* implicit */unsigned long long int) ((arr_85 [i_0] [i_19] [i_19] [i_19] [i_23]) <= (((/* implicit */unsigned long long int) 1617293292U))));
                }
                for (unsigned int i_31 = 2; i_31 < 10; i_31 += 1) 
                {
                    var_53 = (~(min(((((_Bool)1) ? (3466577380U) : (737081465U))), (((unsigned int) var_3)))));
                    /* LoopSeq 3 */
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        arr_111 [i_0] [i_19] [i_23] [i_23] [i_31] [2] = ((((/* implicit */unsigned int) 249046551)) > (1617293282U));
                        arr_112 [i_0] [5ULL] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))), (arr_1 [i_0])));
                    }
                    /* vectorizable */
                    for (unsigned short i_33 = 3; i_33 < 10; i_33 += 2) 
                    {
                        var_54 = ((/* implicit */short) arr_18 [5U] [i_19] [i_23] [i_31 - 2]);
                        var_55 = ((/* implicit */short) 6254192633893561911LL);
                        arr_115 [i_0] [i_0] [i_19] [i_0] [i_31] [i_0] [8] &= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) (+(arr_13 [i_23] [i_31 + 2])))) : (((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_98 [i_0] [i_0] [i_31] [i_31] [i_33])))))));
                    }
                    for (signed char i_34 = 3; i_34 < 11; i_34 += 2) 
                    {
                        var_56 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_48 [(unsigned short)2] [(unsigned short)2] [i_34 - 2]))) ? (((/* implicit */long long int) -249046552)) : (((((/* implicit */_Bool) arr_105 [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_90 [(short)8] [i_19] [(short)8] [i_31] [i_31] [i_34] [i_34])))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) (short)-19025)) : (((/* implicit */int) (signed char)-1))))));
                        arr_118 [i_0] = ((/* implicit */signed char) (~(((((((/* implicit */unsigned int) arr_53 [i_23])) < (3557885830U))) ? (min((arr_64 [i_19] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (max((2567407637470921629ULL), (((/* implicit */unsigned long long int) (unsigned short)15))))))));
                    }
                }
            }
            var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_13 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)58013))))) ? ((+(((/* implicit */int) arr_114 [i_0] [i_0] [i_19] [i_19] [i_19] [i_19])))) : ((+(((/* implicit */int) (unsigned short)25443))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_102 [i_0] [i_19] [3] [5]))) : (max((((/* implicit */unsigned int) ((unsigned short) (short)-19031))), (min((((/* implicit */unsigned int) arr_106 [i_0] [i_0] [2U])), (368391305U)))))));
            arr_119 [11ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_94 [i_0] [i_0] [i_0] [i_0] [i_19] [i_19] [i_0])))) ? (((unsigned long long int) (short)6880)) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) (short)-28384))), (((((/* implicit */_Bool) arr_103 [i_0] [i_19] [i_0])) ? (arr_10 [i_0] [(unsigned short)5]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        }
    }
    /* vectorizable */
    for (int i_35 = 2; i_35 < 12; i_35 += 4) 
    {
        var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_120 [i_35 + 1])) ? (arr_120 [i_35 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_122 [i_35 - 2])))));
        /* LoopNest 2 */
        for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
        {
            for (unsigned int i_37 = 1; i_37 < 12; i_37 += 3) 
            {
                {
                    var_59 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)19010))));
                    /* LoopNest 2 */
                    for (unsigned short i_38 = 4; i_38 < 13; i_38 += 1) 
                    {
                        for (unsigned short i_39 = 0; i_39 < 14; i_39 += 4) 
                        {
                            {
                                var_60 = ((/* implicit */short) (((~(4294967295U))) | (((/* implicit */unsigned int) arr_127 [i_36] [i_38] [i_36]))));
                                var_61 = ((/* implicit */short) ((((/* implicit */int) var_9)) | (((/* implicit */int) (signed char)-69))));
                                var_62 = ((/* implicit */short) (+(((/* implicit */int) arr_125 [i_37 - 1] [i_36] [i_37 - 1] [i_38 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_63 = ((/* implicit */int) min((var_7), (((/* implicit */short) (signed char)-69))));
}
