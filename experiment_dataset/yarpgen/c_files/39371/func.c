/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39371
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0 + 1] = var_10;
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [(signed char)6]))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_1 [i_0 + 1])), (1445663294U))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) var_10);
                                arr_17 [9] [(short)6] [i_2] [(signed char)5] [i_0 - 1] = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                    arr_18 [(_Bool)1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)-1386)) < ((-(((/* implicit */int) arr_7 [i_2 + 2] [i_0 + 1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 3; i_5 < 6; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    {
                        arr_27 [i_7] [i_6] [(unsigned short)2] [i_0] = ((/* implicit */unsigned char) arr_22 [i_0 - 1]);
                        arr_28 [i_7] [i_6] [i_6] [(unsigned char)8] [i_5 - 2] [i_0] = max((((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0 + 1] [i_0 + 1] [i_5 - 2] [i_5 - 2]))) - (var_13))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))));
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */signed char) ((unsigned char) min((max(((short)-32767), (((/* implicit */short) var_11)))), (((/* implicit */short) ((unsigned char) var_3))))));
    var_15 = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + ((-(var_13))))) : (max(((~(var_9))), (var_13))));
    /* LoopSeq 1 */
    for (short i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_10 = 2; i_10 < 11; i_10 += 1) 
            {
                arr_40 [i_10] [i_9] [i_8] [i_10] = ((/* implicit */long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (arr_37 [i_10 + 1] [i_10 - 2] [i_10]))));
                arr_41 [9LL] [i_10] [i_10] [i_8] = ((/* implicit */signed char) (unsigned short)1544);
                arr_42 [i_10] [i_9] [i_9] = ((/* implicit */signed char) var_9);
            }
            arr_43 [i_8] = max((-6700728155263695967LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_34 [i_8] [i_9])), (var_9)))));
            arr_44 [1LL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(arr_37 [i_8] [i_8] [i_9])))) ? (((/* implicit */int) ((var_5) != (((/* implicit */unsigned int) var_7))))) : (((/* implicit */int) arr_34 [i_9] [i_8])))) == (var_7)));
        }
        for (short i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            arr_48 [i_11] [i_8] = (-(((arr_47 [6U] [i_8] [i_8]) - (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
            arr_49 [4U] [i_11] = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)179))))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) + (arr_31 [i_11] [i_8])))));
            arr_50 [i_11] [i_8] = ((/* implicit */int) var_11);
            arr_51 [i_8] &= ((/* implicit */short) max((((arr_38 [i_8] [i_11] [i_11]) <= (arr_32 [5U] [5U] [i_11]))), (arr_35 [i_11] [i_8])));
            arr_52 [i_8] [i_8] [i_11] = ((/* implicit */short) ((unsigned char) (-(arr_37 [i_8] [i_8] [i_11]))));
        }
        for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            arr_57 [(short)2] [i_12] = (i_12 % 2 == zero) ? (((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned int) arr_29 [i_8])), (var_9))))), ((((((+(arr_37 [i_12] [i_8] [i_12]))) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned int) (_Bool)1)), (565435183U))) - (1U)))))))) : (((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned int) arr_29 [i_8])), (var_9))))), ((((((((+(arr_37 [i_12] [i_8] [i_12]))) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned int) (_Bool)1)), (565435183U))) - (1U))))))));
            arr_58 [i_12] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_56 [i_12]))))), (min((var_10), (((/* implicit */unsigned int) (_Bool)1)))))), (((/* implicit */unsigned int) arr_39 [i_12] [i_12]))));
            arr_59 [(short)6] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (var_8) : (var_5))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_55 [i_8]))))));
            /* LoopNest 3 */
            for (unsigned char i_13 = 2; i_13 < 11; i_13 += 3) 
            {
                for (unsigned char i_14 = 1; i_14 < 11; i_14 += 1) 
                {
                    for (short i_15 = 2; i_15 < 11; i_15 += 1) 
                    {
                        {
                            arr_68 [i_12] = ((/* implicit */short) arr_38 [i_8] [11U] [i_13 - 2]);
                            arr_69 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_61 [i_14 + 1] [i_12] [6U]))) <= ((-(arr_62 [i_8] [i_8] [i_8] [i_8])))))), (max((((/* implicit */long long int) ((unsigned int) arr_61 [i_12] [i_12] [i_12]))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (7443002782678984219LL) : (((/* implicit */long long int) var_6))))))));
                        }
                    } 
                } 
            } 
            arr_70 [i_12] = ((/* implicit */short) arr_46 [i_12]);
        }
        arr_71 [i_8] [i_8] = ((/* implicit */unsigned short) 2095245654);
        /* LoopSeq 2 */
        for (long long int i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            arr_75 [i_16] = ((/* implicit */short) (unsigned char)19);
            arr_76 [(_Bool)1] [i_8] [i_8] = ((/* implicit */long long int) var_6);
            arr_77 [i_16] [i_8] [i_16] = ((/* implicit */int) max((((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)2659))) == (arr_62 [i_16] [i_16] [i_8] [9U])))), (((/* implicit */unsigned long long int) -3535593523966486095LL))));
        }
        for (unsigned char i_17 = 3; i_17 < 11; i_17 += 1) 
        {
            arr_80 [(_Bool)0] [i_17 + 1] = ((/* implicit */unsigned int) arr_33 [i_8]);
            /* LoopSeq 2 */
            for (unsigned int i_18 = 0; i_18 < 12; i_18 += 4) /* same iter space */
            {
                arr_84 [i_17] [i_18] [i_18] = ((/* implicit */_Bool) (short)-5308);
                /* LoopSeq 2 */
                for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) /* same iter space */
                {
                    arr_87 [0U] [i_17] [i_18] [i_19] [i_19] = ((/* implicit */long long int) arr_64 [i_17 - 1] [i_18]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_20 = 0; i_20 < 12; i_20 += 3) /* same iter space */
                    {
                        arr_90 [i_8] [i_8] [i_18] [i_20] [i_20] = ((/* implicit */unsigned short) var_5);
                        arr_91 [i_8] [(short)8] [i_18] [i_19] [i_18] [i_8] |= ((/* implicit */unsigned char) (short)-32763);
                    }
                    for (unsigned int i_21 = 0; i_21 < 12; i_21 += 3) /* same iter space */
                    {
                        arr_94 [i_21] [i_17 - 3] [i_18] [i_17 - 3] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) != (((long long int) (_Bool)0))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_30 [i_21] [1U])), (-7356564353515438536LL)))) ? (((((/* implicit */_Bool) 1248870942U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) var_5))))));
                        arr_95 [i_17 + 1] [i_17 - 1] [i_18] [i_19] [i_21] [6U] = var_0;
                    }
                    for (unsigned int i_22 = 0; i_22 < 12; i_22 += 3) /* same iter space */
                    {
                        arr_99 [i_8] [i_17] [i_17] [i_19] [i_18] &= ((/* implicit */int) (_Bool)1);
                        arr_100 [i_18] [i_22] = (short)-22666;
                        arr_101 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14044)) ? (((((/* implicit */long long int) var_6)) / (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))))) ? (min((var_8), (((var_8) >> (((((/* implicit */int) (short)16695)) - (16678))))))) : (arr_47 [i_17 - 2] [i_17 - 1] [i_17 - 2])));
                    }
                    arr_102 [i_19] [i_18] [i_18] [i_8] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_73 [i_8] [i_18] [i_18])), (var_5)));
                    arr_103 [i_8] [i_18] = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_0))))) + (-9223372036854775791LL))), (((/* implicit */long long int) max(((_Bool)0), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (arr_92 [i_19] [i_18] [i_17 + 1] [(signed char)4] [i_8]))))))));
                }
                for (unsigned long long int i_23 = 0; i_23 < 12; i_23 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_24 = 2; i_24 < 11; i_24 += 1) 
                    {
                        arr_110 [i_8] [i_17] [i_18] = (unsigned short)14044;
                        arr_111 [i_24] [i_23] [i_18] [(unsigned short)9] [i_8] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_7)), (2413408556U))), (((/* implicit */unsigned int) var_11))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [9U] [i_17 - 3]))) - (var_4))) - (((/* implicit */unsigned long long int) arr_96 [i_24] [i_24 + 1] [i_17 - 3] [i_17 - 3] [i_17 - 3]))))));
                    }
                    for (unsigned short i_25 = 0; i_25 < 12; i_25 += 2) /* same iter space */
                    {
                        arr_115 [(_Bool)1] [i_25] [i_17] [i_18] [i_18] [i_17] [i_8] = ((/* implicit */unsigned int) -5263066699219016131LL);
                        arr_116 [i_8] [i_17 - 2] [i_18] [i_23] [8U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_112 [i_17 + 1] [i_17] [i_17] [i_23] [3U]) - (arr_112 [i_17 - 1] [i_17 - 3] [0U] [0U] [i_25])))) ? (((/* implicit */int) ((max((var_2), (((/* implicit */long long int) (unsigned short)65535)))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_97 [i_8] [i_25] [i_18] [i_23] [i_25])) == (6181216600910133479ULL)))))))) : (arr_60 [i_8] [i_17 - 2] [i_23] [i_25])));
                    }
                    for (unsigned short i_26 = 0; i_26 < 12; i_26 += 2) /* same iter space */
                    {
                        arr_119 [i_8] [i_17 - 1] [(unsigned char)4] [i_8] [i_18] = max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) ((((/* implicit */int) (signed char)-1)) == (((/* implicit */int) arr_93 [i_26] [(unsigned short)4] [i_18] [(unsigned short)4] [i_8]))))))));
                        arr_120 [i_26] [i_23] [i_17 + 1] [i_17 + 1] [i_17 - 3] [i_8] [i_8] = ((/* implicit */_Bool) var_7);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_27 = 0; i_27 < 12; i_27 += 4) 
                    {
                        arr_123 [i_17] = ((/* implicit */long long int) ((unsigned int) 9223372036854775791LL));
                        arr_124 [i_27] [i_23] [0LL] |= ((/* implicit */short) (-(max((arr_65 [i_17 - 2] [i_17 - 2] [i_18] [i_18] [5] [i_17 + 1]), (((/* implicit */unsigned int) (short)15861))))));
                        arr_125 [i_8] [i_17] [i_18] [10LL] [i_27] = ((/* implicit */short) ((int) 565435181U));
                        arr_126 [(short)8] [i_17] [i_18] [i_23] = ((/* implicit */unsigned int) 1994456868);
                    }
                }
                arr_127 [2U] [i_17] [i_8] = ((((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (signed char)19)))), (((_Bool) var_11)))))) - (((unsigned int) (~(((/* implicit */int) (short)29283))))));
            }
            for (unsigned int i_28 = 0; i_28 < 12; i_28 += 4) /* same iter space */
            {
                arr_132 [i_17 - 3] [i_8] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) arr_104 [i_17 - 3] [i_17] [i_17 - 3] [i_8] [i_8])) - (max((((/* implicit */long long int) var_5)), (-9223372036854775791LL))))), (max((((((/* implicit */long long int) ((/* implicit */int) arr_129 [i_8] [i_17] [i_8]))) - (arr_72 [i_8]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29283))) : (var_10))))))));
                arr_133 [i_17 - 1] = ((/* implicit */unsigned int) arr_64 [i_28] [i_28]);
            }
        }
    }
}
