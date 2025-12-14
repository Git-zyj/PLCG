/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22119
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(unsigned short)3] [(unsigned short)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)11339)) > (((/* implicit */int) var_5))))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-123)), (arr_4 [i_0] [i_1]))))))) ? (((((/* implicit */int) var_1)) << (((((/* implicit */int) max((((/* implicit */short) var_7)), (var_5)))) - (394))))) : (((/* implicit */int) (signed char)123))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_8);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 6; i_3 += 3) 
                    {
                        {
                            arr_14 [i_3] [i_2] [i_1] [(unsigned short)5] = ((/* implicit */short) ((max((((/* implicit */unsigned int) (unsigned short)0)), (var_10))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [(short)2] [i_1] [i_0])) ? (((/* implicit */int) (short)16128)) : (((/* implicit */int) arr_1 [i_2])))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                arr_19 [i_4] [0] [5LL] [i_3] [i_4] [(unsigned char)9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(short)7] [i_1]))) : (((unsigned int) (unsigned char)17))));
                                arr_20 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */short) (unsigned short)65514);
                            }
                            arr_21 [i_0] [i_1] [i_2] [i_1] [i_3] [(unsigned short)3] = ((/* implicit */unsigned long long int) arr_16 [i_3] [i_3] [0U] [i_1] [i_0]);
                        }
                    } 
                } 
                arr_22 [i_0] [i_1] [2] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54197)) ? ((-(((/* implicit */int) (signed char)(-127 - 1))))) : (var_11)))) ? (var_8) : (var_0));
                arr_23 [(short)8] = ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_0]);
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) var_9);
    var_13 = ((/* implicit */unsigned char) (unsigned short)54196);
    /* LoopSeq 4 */
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_26 [i_5] = ((/* implicit */unsigned char) arr_25 [i_5] [i_5]);
        arr_27 [13ULL] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)54193)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)123))) : (arr_24 [i_5]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [(unsigned short)4])) || (((/* implicit */_Bool) arr_25 [i_5] [18ULL])))))));
        arr_28 [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 10961289818240110956ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (unsigned char)237))))) : (min((((/* implicit */long long int) var_4)), (arr_24 [i_5])))));
    }
    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        arr_32 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_24 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((unsigned int) 281474976645120ULL)))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54575)))));
        arr_33 [i_6] = ((/* implicit */short) (unsigned short)11338);
    }
    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (unsigned short i_10 = 1; i_10 < 19; i_10 += 3) 
                {
                    {
                        arr_43 [i_10] [i_10 + 2] [(short)4] [i_9] [i_8] [(unsigned char)18] = ((/* implicit */unsigned short) arr_30 [i_10 + 1]);
                        arr_44 [i_9] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)17)), ((-(((/* implicit */int) var_3))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    {
                        arr_54 [(unsigned char)2] [i_11] [1ULL] [i_13] [i_13] [i_13] = ((/* implicit */short) ((unsigned char) min((((unsigned short) (signed char)-69)), (((/* implicit */unsigned short) (short)19823)))));
                        arr_55 [i_11] [i_12] = ((/* implicit */short) var_10);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            arr_58 [i_7] [i_7] [i_13] [i_7] [(unsigned char)10] = ((/* implicit */unsigned short) var_7);
                            arr_59 [i_7] [(short)2] [i_7] [i_13] [(short)12] &= ((/* implicit */unsigned short) (signed char)127);
                            arr_60 [i_7] [i_11] [i_11] [i_14] [i_12] [i_13] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(1500901681)))) ? (((/* implicit */unsigned long long int) 4017936100U)) : (((1023ULL) & (((/* implicit */unsigned long long int) arr_56 [i_7] [i_7] [i_7] [i_13] [i_14]))))));
                        }
                        arr_61 [i_13] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69)))))));
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 22; i_15 += 1) 
                        {
                            arr_64 [i_7] [i_7] [i_7] [i_13] [14ULL] [i_13] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (unsigned short)48074)) : (((/* implicit */int) (unsigned short)11339))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_42 [i_7] [i_11] [i_12] [i_13] [i_15])))) : (((unsigned long long int) (unsigned short)10723))));
                            arr_65 [i_11] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)11339)), (16057226568997900912ULL)));
                        }
                        /* vectorizable */
                        for (unsigned char i_16 = 0; i_16 < 22; i_16 += 3) 
                        {
                            arr_68 [i_13] [i_16] [i_12] [i_13] [i_16] = ((/* implicit */int) ((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123)))));
                            arr_69 [i_16] [i_7] [6] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2517)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (unsigned char)222))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                for (short i_19 = 0; i_19 < 22; i_19 += 1) 
                {
                    for (unsigned int i_20 = 2; i_20 < 20; i_20 += 2) 
                    {
                        {
                            arr_82 [i_7] [i_17] [(unsigned char)16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16128)) ? (((/* implicit */unsigned long long int) var_10)) : (13474604771423685741ULL))))));
                            arr_83 [i_7] [(unsigned short)1] [i_17] [1ULL] [i_20] [i_7] [i_19] = ((/* implicit */short) (signed char)-100);
                            arr_84 [i_19] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_20] [i_20] [i_20 - 1] [i_20 - 1] [i_20] [i_18] [i_7]))));
                            arr_85 [i_7] [i_17] [i_17] [i_19] [i_20] = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
                        }
                    } 
                } 
            } 
            arr_86 [i_17] [i_7] = ((/* implicit */_Bool) var_1);
            arr_87 [i_7] [i_7] [i_17] = ((/* implicit */short) ((775411691U) << (((((/* implicit */int) (unsigned short)48606)) - (48578)))));
        }
        for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 1) 
        {
            arr_90 [i_7] [i_7] [i_7] = ((/* implicit */short) var_0);
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                for (short i_23 = 0; i_23 < 22; i_23 += 3) 
                {
                    {
                        arr_96 [i_7] [i_21] [i_21] [i_7] = min(((unsigned short)7), (((/* implicit */unsigned short) (short)14420)));
                        arr_97 [i_22] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_42 [i_23] [7ULL] [i_22] [i_7] [i_7]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8184))) | (13474604771423685719ULL))))))));
                    }
                } 
            } 
            arr_98 [i_7] [i_21] [i_21] |= ((short) (+(((/* implicit */int) (unsigned short)11339))));
            arr_99 [i_7] [i_21] = ((/* implicit */unsigned short) ((var_9) <= (((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) (unsigned short)65535))), (1019310613))))));
            arr_100 [i_21] = ((/* implicit */unsigned int) (unsigned short)16251);
        }
        for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 3) 
        {
            arr_104 [i_7] [i_24] [i_7] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)54866)))) : (((unsigned long long int) (unsigned short)30305))))));
            arr_105 [19ULL] [13ULL] [19ULL] = ((/* implicit */short) min((arr_35 [i_24] [i_7]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)0)))))));
            arr_106 [3] [i_24] [i_24] = ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_88 [i_7] [i_24] [i_7])) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_2)))))))));
            arr_107 [i_7] = ((unsigned short) min(((unsigned short)10724), (((/* implicit */unsigned short) (short)32767))));
        }
        for (unsigned short i_25 = 0; i_25 < 22; i_25 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_26 = 0; i_26 < 22; i_26 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_27 = 1; i_27 < 20; i_27 += 3) 
                {
                    arr_114 [i_27] [i_26] [i_27] [i_27] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)46))));
                    arr_115 [i_26] = ((/* implicit */int) min(((unsigned short)65535), ((unsigned short)37765)));
                    arr_116 [i_7] [i_25] [i_25] [i_27] [i_27] [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) (unsigned short)34252))) - (max((((/* implicit */unsigned int) (unsigned short)54197)), (var_10)))))) ? (((((/* implicit */_Bool) arr_57 [i_27] [i_27 + 2] [i_27 + 2] [i_27] [i_27 + 2] [i_27 - 1] [i_27 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)108))))) : (arr_30 [i_7]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-30675)))))));
                    arr_117 [i_26] [i_26] [i_25] [i_7] [i_26] = ((/* implicit */short) max((((((/* implicit */_Bool) 4503599623176192ULL)) ? (-1925999104) : (((/* implicit */int) (unsigned short)54813)))), (((((/* implicit */_Bool) (unsigned short)24679)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (unsigned char)148))))));
                }
                for (long long int i_28 = 0; i_28 < 22; i_28 += 1) 
                {
                    arr_122 [i_26] [i_26] [i_26] [i_26] [i_26] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)16128))));
                    arr_123 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)16586))))) : (var_0)));
                    arr_124 [i_7] [i_28] [i_26] [i_28] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_101 [i_7]), (((/* implicit */unsigned int) var_1)))))));
                    arr_125 [i_7] [i_7] [(_Bool)1] [i_7] = ((/* implicit */signed char) 1840841476U);
                }
                arr_126 [i_7] [18] [i_26] = ((/* implicit */short) (unsigned char)255);
                arr_127 [(short)15] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned long long int) arr_89 [i_25]);
            }
            /* vectorizable */
            for (short i_29 = 0; i_29 < 22; i_29 += 4) /* same iter space */
            {
                arr_131 [(short)7] [(unsigned char)17] [i_29] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_121 [10] [i_25] [(_Bool)1] [i_29])) : (((/* implicit */int) var_2)))));
                arr_132 [(unsigned char)20] [i_25] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
            }
            arr_133 [i_7] [i_25] = ((/* implicit */long long int) var_9);
            arr_134 [i_25] [i_7] [(unsigned char)19] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) var_2)), (min((var_5), (var_5))))))));
        }
    }
    for (unsigned long long int i_30 = 0; i_30 < 24; i_30 += 4) 
    {
        arr_139 [i_30] [19] = ((/* implicit */unsigned char) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 10296358122865883120ULL))))), ((signed char)-112)));
        arr_140 [i_30] [i_30] = ((/* implicit */unsigned char) var_1);
        arr_141 [i_30] |= ((/* implicit */long long int) var_1);
        arr_142 [i_30] [i_30] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_9))), (((/* implicit */unsigned long long int) ((short) var_11)))));
        /* LoopNest 2 */
        for (short i_31 = 4; i_31 < 23; i_31 += 3) 
        {
            for (unsigned char i_32 = 0; i_32 < 24; i_32 += 1) 
            {
                {
                    arr_149 [i_30] [i_31] [i_32] [i_32] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_29 [(signed char)5] [i_32])) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) arr_143 [i_31 - 3])))));
                    arr_150 [i_30] [i_31] [i_31] [i_32] = ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)128), (arr_146 [i_31 - 3] [i_31 - 3] [i_32])))) ? (min((arr_138 [i_30] [i_31 - 3]), (((/* implicit */unsigned int) arr_146 [i_30] [i_31 - 3] [(short)20])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)58190)) || (((/* implicit */_Bool) arr_146 [i_30] [i_31 - 3] [i_32]))))))));
                }
            } 
        } 
    }
}
