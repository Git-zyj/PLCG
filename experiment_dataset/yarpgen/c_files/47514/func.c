/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47514
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_3] [(unsigned short)6] [(unsigned short)6] [i_1] [i_0] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [12ULL] [i_2 - 3] [10ULL] [i_3] [(unsigned short)6] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_2 - 1] [i_2 - 1]))))), (((unsigned long long int) (unsigned short)32731))));
                                arr_14 [i_0] = ((/* implicit */_Bool) ((long long int) (~(var_8))));
                                arr_15 [i_0] [i_2 - 1] [i_2 - 1] [i_0] = ((/* implicit */_Bool) ((signed char) (-(arr_11 [i_2 + 1] [i_2 - 1] [(short)12] [i_2 - 3] [i_2 - 3]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (signed char)-39)))))))))));
                                arr_21 [i_2] [(_Bool)1] [i_2] [i_0] [i_2] = ((/* implicit */long long int) (signed char)63);
                                arr_22 [i_1] [i_1] [(short)2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_10);
                                arr_23 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_2 - 2] [i_5] [i_6] [(unsigned char)6])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            {
                                var_17 *= ((/* implicit */signed char) max((((/* implicit */unsigned short) (short)-4138)), (arr_2 [i_8])));
                                arr_29 [i_0] [i_1] [(_Bool)1] [i_8] = ((/* implicit */_Bool) var_9);
                                arr_30 [i_0] [i_1] [i_2] [12ULL] [i_0] [(unsigned short)12] = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((arr_2 [11]), (arr_6 [i_0]))), (((/* implicit */unsigned short) arr_5 [i_7] [2ULL] [2ULL])))))));
                                arr_31 [i_7] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (signed char)-87))) ? (((long long int) (-(((/* implicit */int) arr_3 [i_0] [i_7]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)33228)) / (((/* implicit */int) var_11)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 12; i_10 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (+(2046)));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) arr_2 [i_10])), (arr_24 [i_1] [i_2 - 3] [i_9] [i_10 + 1] [i_10 - 2] [i_10 + 1])))))));
                                arr_37 [i_0] [i_0] [(unsigned short)8] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1718888821005019328LL)) ? (12766891208736914767ULL) : (((/* implicit */unsigned long long int) 5110594191609722017LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 2; i_12 < 12; i_12 += 3) 
                        {
                            {
                                arr_42 [i_0] [i_0] [i_2 - 2] [0U] [0U] = ((/* implicit */long long int) max((((((/* implicit */int) arr_39 [i_2 + 1] [i_12 - 2] [i_12 - 1])) * (((/* implicit */int) arr_39 [i_2 - 3] [i_12 - 1] [i_12 - 2])))), (((((/* implicit */_Bool) arr_39 [i_2 - 2] [i_12 - 1] [i_12 - 1])) ? (((/* implicit */int) arr_39 [i_2 - 1] [i_12 - 2] [i_12 + 1])) : (((/* implicit */int) arr_39 [i_2 - 2] [i_12 - 1] [i_12 - 1]))))));
                                arr_43 [i_12 - 1] [i_1] [(signed char)4] [6U] [i_12] [4U] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)51)) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) arr_6 [0ULL]))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 392643477U)) : (25ULL)));
                                arr_44 [i_0] [i_1] [i_1] [i_11] [i_0] = ((/* implicit */unsigned char) min((((unsigned long long int) ((unsigned short) (signed char)119))), (((/* implicit */unsigned long long int) ((int) var_1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_13 = 0; i_13 < 16; i_13 += 3) 
    {
        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    for (unsigned short i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        {
                            arr_54 [i_14] [i_14] [9ULL] [i_16] = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) arr_50 [i_13] [i_14] [i_16])))));
                            var_21 = ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) (unsigned short)65535)))));
                            var_22 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_52 [i_16] [i_16] [i_15] [i_14] [i_13])) ? (((/* implicit */int) arr_52 [i_13] [i_14] [i_15] [i_15] [i_16])) : (((/* implicit */int) arr_52 [i_13] [i_14] [13LL] [i_16] [10])))) % ((-(((/* implicit */int) arr_52 [(_Bool)0] [i_14] [i_15] [i_15] [(short)1]))))));
                            var_23 = ((/* implicit */_Bool) min((((/* implicit */int) arr_48 [i_16] [i_15] [i_14])), ((~(((/* implicit */int) arr_48 [i_13] [(signed char)5] [i_16]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_17 = 1; i_17 < 14; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 16; i_18 += 2) 
                    {
                        for (int i_19 = 0; i_19 < 16; i_19 += 2) 
                        {
                            {
                                arr_63 [i_18] [i_18] [i_18] [i_17] [(unsigned short)5] [(signed char)4] [i_18] = ((/* implicit */unsigned long long int) ((short) (+(arr_45 [i_17 + 2] [i_13]))));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned short) arr_45 [i_13] [i_13])))));
                                arr_64 [i_19] [i_18] [i_17] [i_17] [(unsigned short)13] [(unsigned short)13] = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_58 [i_17 - 1] [i_17 + 2] [i_17 + 2] [1] [i_17 - 1]), (arr_58 [i_18] [i_17 + 2] [i_17 - 1] [(unsigned char)11] [i_17 - 1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_20 = 0; i_20 < 16; i_20 += 2) 
                {
                    for (unsigned char i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) min((var_25), (min(((unsigned char)247), (((/* implicit */unsigned char) (_Bool)0))))));
                                arr_71 [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_13] [15LL] [i_21] [i_22])))))))) && (((/* implicit */_Bool) arr_52 [i_13] [i_14] [i_20] [13ULL] [5U]))));
                                var_26 -= ((/* implicit */unsigned char) ((var_4) < (((max((((/* implicit */long long int) var_3)), (arr_46 [i_21]))) * (((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */signed char) var_5))))))))));
                                var_27 = ((/* implicit */unsigned char) (~((~(max((arr_47 [i_14]), (((/* implicit */long long int) arr_49 [i_13] [i_20]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_23 = 1; i_23 < 12; i_23 += 3) 
                {
                    for (unsigned long long int i_24 = 1; i_24 < 12; i_24 += 2) 
                    {
                        {
                            arr_77 [i_13] [(signed char)11] [i_13] [(signed char)11] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_73 [i_23 - 1])))), ((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_58 [i_13] [i_14] [i_14] [i_23] [i_24 - 1])) : (((/* implicit */int) var_3))))))));
                            var_28 |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_14] [i_14] [i_23 + 4] [i_23] [i_23 + 4] [i_14] [i_24 + 1])))))));
                            arr_78 [i_13] [i_23] [i_24 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41132)) ? (-1) : (1977406663)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_25 = 0; i_25 < 13; i_25 += 2) 
    {
        for (unsigned short i_26 = 0; i_26 < 13; i_26 += 2) 
        {
            for (unsigned long long int i_27 = 0; i_27 < 13; i_27 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_28 = 0; i_28 < 13; i_28 += 3) 
                    {
                        for (unsigned long long int i_29 = 0; i_29 < 13; i_29 += 3) 
                        {
                            {
                                arr_91 [i_27] [i_27] = ((/* implicit */unsigned char) ((((_Bool) arr_68 [i_29] [i_28] [i_26] [i_26])) && (((/* implicit */_Bool) arr_2 [i_29]))));
                                arr_92 [i_27] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (signed char)66)))));
                                arr_93 [i_27] [i_26] [i_27] = ((/* implicit */unsigned short) ((short) arr_88 [i_25] [i_25] [i_25] [i_25] [i_25]));
                                arr_94 [i_26] [i_27] [i_27] [i_29] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_73 [i_27]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_30 = 3; i_30 < 10; i_30 += 2) 
                    {
                        for (unsigned long long int i_31 = 0; i_31 < 13; i_31 += 3) 
                        {
                            {
                                arr_99 [(unsigned short)8] [i_27] [i_27] [i_27] [i_25] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_41 [i_30 + 2] [i_30] [i_30 + 3] [i_30 + 1] [i_31] [i_30 + 3]))))));
                                arr_100 [i_27] [(signed char)12] [i_27] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_48 [i_25] [i_25] [i_25]))))))), (((((/* implicit */_Bool) arr_6 [i_27])) ? (arr_87 [i_25] [i_25] [i_25] [i_25] [i_25]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_25] [i_25] [(signed char)12])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
    {
        for (int i_33 = 0; i_33 < 22; i_33 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_34 = 1; i_34 < 19; i_34 += 3) 
                {
                    for (long long int i_35 = 2; i_35 < 21; i_35 += 3) 
                    {
                        {
                            arr_110 [i_32] [i_34] [i_35 + 1] [i_35] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_104 [i_34 + 3] [i_35 - 2] [i_34 + 3]))));
                            var_29 = ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) ((int) arr_109 [i_32] [i_33] [i_33] [i_35 + 1] [i_34]))), (arr_108 [i_34 + 1] [21LL] [i_34 + 3] [i_34] [i_34 + 3] [i_34 + 2]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_36 = 3; i_36 < 21; i_36 += 2) 
                {
                    for (int i_37 = 1; i_37 < 21; i_37 += 2) 
                    {
                        for (int i_38 = 1; i_38 < 20; i_38 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) (+(((long long int) 5891240228286402486LL))));
                                var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_103 [i_36])) && (((/* implicit */_Bool) var_1))))) / (((/* implicit */int) arr_112 [i_37] [11LL] [i_37 - 1] [i_37 + 1])))))));
                                arr_121 [i_36] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_119 [i_37] [i_37] [i_36 - 3] [i_33] [i_32] [18ULL])) < (max((((((/* implicit */unsigned long long int) var_8)) % (arr_116 [i_32] [i_32] [i_32] [i_36]))), (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned char) arr_101 [i_36])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_39 = 4; i_39 < 15; i_39 += 3) 
    {
        for (unsigned char i_40 = 1; i_40 < 15; i_40 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_41 = 0; i_41 < 17; i_41 += 3) 
                {
                    for (short i_42 = 1; i_42 < 14; i_42 += 2) 
                    {
                        for (signed char i_43 = 0; i_43 < 17; i_43 += 2) 
                        {
                            {
                                arr_135 [i_39] [i_41] [i_42] [i_43] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(2147483647)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_105 [i_39])))));
                                var_32 = ((/* implicit */signed char) max((var_32), (arr_127 [i_43] [i_41] [i_41])));
                                arr_136 [i_41] [i_43] [i_43] [i_42] [(unsigned short)4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                                arr_137 [i_41] = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_132 [i_39] [i_39] [(signed char)5] [(signed char)15] [i_41]), (((/* implicit */long long int) arr_112 [8ULL] [5U] [8ULL] [i_43])))))))), (((arr_105 [i_39 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_128 [i_40 + 2] [i_42 + 3] [i_40 + 2] [i_39 - 2])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_44 = 1; i_44 < 13; i_44 += 3) 
                {
                    for (long long int i_45 = 0; i_45 < 17; i_45 += 2) 
                    {
                        for (long long int i_46 = 0; i_46 < 17; i_46 += 3) 
                        {
                            {
                                arr_146 [i_39] [i_40] [i_46] [i_46] [(signed char)8] = ((((long long int) var_8)) - (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-115)), (arr_106 [i_39 - 3]))))));
                                arr_147 [i_39] [i_40 - 1] [i_46] [i_45] [i_46] [i_44] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (arr_102 [i_40 + 2])))) ? ((+(((/* implicit */int) arr_145 [i_44] [i_44 + 4] [i_40 + 1] [i_39 - 1] [i_39 - 1] [i_39 - 3] [i_39])))) : (((/* implicit */int) (short)13057))));
                                arr_148 [i_39] [i_46] [i_46] [i_44] [i_45] [i_39] = min((((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned short) var_1)), (var_11))))), (min((((/* implicit */long long int) var_8)), (-5981313526513641393LL))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_47 = 0; i_47 < 17; i_47 += 3) 
                {
                    for (signed char i_48 = 0; i_48 < 17; i_48 += 2) 
                    {
                        {
                            arr_154 [i_39] [i_39] [i_39] [i_39 - 3] = ((/* implicit */short) (((+((+(((/* implicit */int) (short)-919)))))) - ((+(arr_151 [i_39 - 4] [i_47] [15] [i_48])))));
                            arr_155 [i_39 - 3] [i_40] [(_Bool)1] = ((/* implicit */unsigned int) 1689338302214383495LL);
                            arr_156 [i_39] [i_40 - 1] [i_47] [i_40 - 1] [i_47] = ((/* implicit */unsigned short) (unsigned char)83);
                        }
                    } 
                } 
            }
        } 
    } 
}
