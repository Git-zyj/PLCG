/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29034
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
    var_10 = ((/* implicit */int) var_2);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [5]);
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14954))) : (var_1))))) : (((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (var_4) : (((/* implicit */int) arr_0 [1LL]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_1);
                        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) arr_9 [i_3] [(signed char)1] [i_1]))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_17 [(signed char)14] [(signed char)14] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 3096086041171545377LL)) ? (3566089838242965432LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14941)))))))) ? (arr_16 [i_5] [i_5 + 1] [i_4] [i_1] [i_1] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)13] [i_1] [i_1])))));
                                arr_18 [i_4] [i_5] = ((/* implicit */int) (short)17123);
                                var_13 = ((/* implicit */signed char) -3096086041171545377LL);
                                arr_19 [i_0] [i_1] [i_1] [i_2] [i_1] [13] |= ((/* implicit */short) 1251989626);
                                var_14 = ((/* implicit */signed char) ((var_5) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_5 + 1] [i_2])) ? (((/* implicit */long long int) arr_1 [i_5 + 1])) : (-3566089838242965405LL)))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_1] [i_2] = arr_16 [(short)4] [(short)14] [11LL] [(short)4] [i_0] [i_2] [i_1];
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_7 = 2; i_7 < 13; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    {
                        arr_29 [i_6] [i_9] = ((/* implicit */int) 3096086041171545382LL);
                        arr_30 [i_7] = ((/* implicit */long long int) var_3);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 15; i_10 += 3) 
            {
                for (long long int i_11 = 2; i_11 < 14; i_11 += 1) 
                {
                    {
                        arr_38 [i_11] [i_7] [i_11] [i_11 - 2] = ((/* implicit */_Bool) ((long long int) var_6));
                        var_15 = ((/* implicit */signed char) -3566089838242965432LL);
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (int i_12 = 1; i_12 < 13; i_12 += 3) 
        {
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) -159136218404581032LL))));
            /* LoopSeq 4 */
            for (long long int i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                arr_43 [(signed char)10] [(signed char)0] = ((/* implicit */int) ((((/* implicit */_Bool) 3096086041171545380LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14955))) : (-3566089838242965432LL)));
                /* LoopSeq 1 */
                for (short i_14 = 3; i_14 < 16; i_14 += 3) 
                {
                    arr_48 [i_6] [i_14] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((short) (~(-3096086041171545377LL))));
                    var_17 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_12 [(_Bool)0] [i_12] [(_Bool)0] [(_Bool)0])) ? (((/* implicit */unsigned long long int) arr_27 [9] [i_13] [i_12] [i_12] [i_6] [i_6])) : (7072455953884387719ULL))));
                }
            }
            for (short i_15 = 2; i_15 < 14; i_15 += 3) 
            {
                arr_52 [i_6] [i_12] [i_15] = arr_12 [i_6] [6] [i_15] [i_6];
                arr_53 [i_6] = ((/* implicit */int) var_9);
            }
            for (int i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 1; i_17 < 14; i_17 += 3) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_17 + 2] [i_17 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_6] [i_6] [i_12 + 3] [i_6]))));
                    arr_58 [i_17] = ((/* implicit */short) (-(arr_46 [i_6] [i_16] [i_6] [i_17] [i_16])));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(short)6])))));
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                }
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (int i_19 = 0; i_19 < 17; i_19 += 2) 
                    {
                        {
                            arr_65 [i_18] = ((/* implicit */signed char) 162905311);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (short)25263))) : (863044178278156186LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_7))))));
                            var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) 2534145699057789022LL)) ? (-3566089838242965432LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) 3566089838242965431LL))))));
                        }
                    } 
                } 
            }
            for (int i_20 = 0; i_20 < 17; i_20 += 3) /* same iter space */
            {
                var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_6] [i_12 + 3] [i_12 + 3] [i_20])) ? (((/* implicit */int) var_3)) : (arr_56 [i_6] [i_6] [i_6] [i_6] [i_6])));
                /* LoopSeq 3 */
                for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 2) 
                {
                    var_24 = ((/* implicit */unsigned long long int) var_4);
                    arr_71 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) ((long long int) arr_39 [1LL] [(short)16]));
                    arr_72 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -473541017)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_21] [i_12] [2] [0] [i_6] [i_12])) ? (((/* implicit */int) var_9)) : (arr_1 [(signed char)11]))))));
                    var_25 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) -1838266060)) ? (-889691128) : (-1414165679))));
                }
                for (unsigned long long int i_22 = 1; i_22 < 15; i_22 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_23 = 0; i_23 < 17; i_23 += 1) 
                    {
                        var_26 += ((/* implicit */signed char) var_7);
                        arr_78 [i_23] [0LL] [i_20] [i_22] [i_23] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6]))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_24 = 4; i_24 < 16; i_24 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) var_6);
                        var_28 ^= ((/* implicit */short) arr_49 [i_12] [i_12] [(_Bool)1]);
                        arr_81 [i_6] [i_12] [i_24] [i_22] [(short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_67 [i_22 - 1] [i_24 - 3])) ? (arr_67 [i_22 + 2] [i_24 - 4]) : (((/* implicit */int) arr_75 [i_12 + 2] [i_12 + 2] [i_22] [i_24] [i_24 - 4] [i_24 + 1]))));
                        arr_82 [i_6] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
                        arr_83 [i_20] [4] [i_20] [i_24] = ((/* implicit */_Bool) ((3096086041171545376LL) >> (((-6834577739747103690LL) + (6834577739747103716LL)))));
                    }
                    var_29 = ((signed char) (short)-23206);
                }
                for (int i_25 = 0; i_25 < 17; i_25 += 1) 
                {
                    arr_86 [i_6] [i_12] [i_25] [i_25] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_12 + 4] [i_12 + 4]))));
                    arr_87 [i_6] [i_6] [i_6] [12ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_12 - 1] [i_12] [i_12])) ? (-3566089838242965432LL) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_12 + 1] [i_12] [i_12])))));
                }
                arr_88 [i_6] [4] [i_20] = ((/* implicit */int) (+(arr_51 [i_6] [i_6] [i_12 + 2])));
            }
            var_30 = ((/* implicit */long long int) var_5);
        }
        for (long long int i_26 = 0; i_26 < 17; i_26 += 1) 
        {
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) arr_60 [i_6] [i_6] [4ULL] [(short)0] [12LL] [i_6])) ? (((/* implicit */int) arr_60 [i_6] [i_6] [i_6] [i_6] [i_26] [i_6])) : (arr_36 [i_26] [i_26]))))));
            arr_91 [i_6] = ((long long int) var_0);
        }
        /* LoopSeq 2 */
        for (signed char i_27 = 0; i_27 < 17; i_27 += 2) 
        {
            var_32 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)111))));
            arr_94 [i_6] [(short)3] [(short)3] = ((/* implicit */short) (-(arr_39 [i_6] [16LL])));
            /* LoopSeq 2 */
            for (signed char i_28 = 0; i_28 < 17; i_28 += 3) 
            {
                arr_98 [i_28] [i_28] = ((/* implicit */short) var_6);
                var_33 ^= ((/* implicit */short) ((long long int) arr_77 [i_28]));
                arr_99 [i_6] [i_28] [i_28] = ((/* implicit */short) ((long long int) arr_55 [i_6] [i_27] [i_6] [i_27]));
                /* LoopNest 2 */
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    for (short i_30 = 3; i_30 < 16; i_30 += 3) 
                    {
                        {
                            arr_105 [(short)6] [i_27] [(short)6] [i_28] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (409882167) : (arr_25 [i_30 - 2] [10] [i_30 - 1])));
                            arr_106 [i_29] [i_29] [i_28] = ((signed char) var_8);
                        }
                    } 
                } 
            }
            for (int i_31 = 2; i_31 < 15; i_31 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_32 = 4; i_32 < 16; i_32 += 3) 
                {
                    for (long long int i_33 = 0; i_33 < 17; i_33 += 3) 
                    {
                        {
                            arr_115 [i_6] [i_27] [i_31] [i_32] [i_33] [i_32] [i_27] = ((int) (signed char)37);
                            arr_116 [i_6] [i_27] [i_32 - 2] [i_32 - 4] [i_33] [i_32] [(short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (arr_114 [i_32] [i_32 - 4] [i_31] [i_31 - 2] [i_31]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14972)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_34 = 1; i_34 < 16; i_34 += 3) 
                {
                    for (int i_35 = 4; i_35 < 16; i_35 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) (signed char)121);
                            var_35 = ((signed char) arr_46 [i_6] [i_27] [i_34] [i_35 - 2] [i_6]);
                            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_68 [i_34 - 1] [i_34] [i_34] [i_34 + 1])) ? (((/* implicit */long long int) 1414165676)) : (arr_68 [i_34 - 1] [i_34] [i_34] [i_34 + 1]))))));
                            arr_121 [(short)13] [(_Bool)1] [i_31 - 1] [i_34] [8LL] [(_Bool)1] [i_34] = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
            }
        }
        for (int i_36 = 2; i_36 < 14; i_36 += 3) 
        {
            arr_125 [i_36] [i_36] [i_36 - 1] = ((/* implicit */unsigned long long int) var_3);
            arr_126 [i_6] [i_36] [i_36] = ((/* implicit */int) arr_3 [(signed char)15] [i_36 + 1]);
            var_37 = ((/* implicit */unsigned long long int) 3566089838242965431LL);
            arr_127 [i_36] = ((/* implicit */short) (~(-45357827389693612LL)));
        }
    }
    for (signed char i_37 = 0; i_37 < 18; i_37 += 3) 
    {
        arr_132 [i_37] = min((max((arr_130 [i_37]), (3566089838242965432LL))), (var_1));
        arr_133 [i_37] = ((/* implicit */int) ((((long long int) 4375565824646912929ULL)) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8))))));
    }
}
