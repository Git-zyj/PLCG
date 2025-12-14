/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242072
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_16 |= ((/* implicit */unsigned short) (((-(((/* implicit */int) (short)2837)))) >= (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_4 [i_0]))))))));
                var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) ((int) (short)1777))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0 + 4] [(unsigned char)11] [i_1] = ((/* implicit */short) (-((-(arr_6 [i_2] [i_2 + 1] [i_2] [(short)6])))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 2; i_4 < 13; i_4 += 3) 
                            {
                                arr_14 [i_4] [i_1 - 1] [(short)13] [i_3] [i_4] [i_1] [(unsigned char)13] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (unsigned short)24576)) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) (short)-1778)))));
                                arr_15 [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)2837)) : (((/* implicit */int) (unsigned char)20))))) < (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2825))) : (4082417789U))))));
                                var_18 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned int) var_9)));
                            }
                            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)244)) ? (((((/* implicit */_Bool) (signed char)119)) ? (((long long int) -2054095915)) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_0 - 1]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) 1160067070)) ? (var_12) : (((/* implicit */long long int) -368976015)))))))))));
                                var_20 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) 4559283458913359073ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 2] [i_1 - 1]))));
                                var_21 = ((((/* implicit */_Bool) (((_Bool)1) ? (1729698012) : (((/* implicit */int) arr_16 [i_1 - 1] [i_1 + 1]))))) ? (((/* implicit */int) (unsigned char)147)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [5LL]))) : (13887460614796192542ULL)))) ? (((int) 4410053583299595790ULL)) : (((/* implicit */int) (short)2837)))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                            {
                                arr_22 [i_1] [i_1] = ((/* implicit */signed char) (~(((int) (~(1069547520U))))));
                                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 142508406)) ? (((/* implicit */long long int) -193124981)) : (-1LL))) - (((long long int) 7586905568910542715LL))));
                                arr_23 [12ULL] [i_1] [i_2 - 1] [i_3] [i_6] = (-9223372036854775807LL - 1LL);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((((/* implicit */_Bool) -6261463513536895059LL)) && (((/* implicit */_Bool) (unsigned char)147)))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-241133542) != (((/* implicit */int) var_7)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
    {
        var_24 = ((signed char) ((unsigned short) ((((/* implicit */int) (signed char)53)) > (((/* implicit */int) (short)21394)))));
        arr_26 [i_7] = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) arr_25 [i_7] [i_7])))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_9 = 4; i_9 < 24; i_9 += 1) 
        {
            for (long long int i_10 = 3; i_10 < 24; i_10 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        arr_39 [i_10] = ((/* implicit */int) (signed char)-26);
                        arr_40 [i_8] [i_8] [i_8] [i_8] [i_10] = ((/* implicit */unsigned long long int) ((arr_33 [i_11] [i_9 - 1] [i_10 - 1]) == (arr_33 [i_8] [i_9 + 1] [i_10 - 2])));
                    }
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((unsigned long long int) var_13))));
                        /* LoopSeq 1 */
                        for (int i_13 = 1; i_13 < 23; i_13 += 1) 
                        {
                            arr_48 [i_8] [16ULL] [i_8] [i_8] [i_10] [i_8] = (i_10 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (_Bool)1))) >> (((((/* implicit */int) arr_47 [5] [i_9 - 1] [i_10] [i_10] [i_13])) - (15446)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (_Bool)1))) >> (((((((/* implicit */int) arr_47 [5] [i_9 - 1] [i_10] [i_10] [i_13])) - (15446))) - (30684))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8210720601444882978LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (unsigned short)1))))) : (9223372036854775807LL)));
                            var_27 |= ((/* implicit */long long int) ((signed char) (unsigned char)238));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 25; i_14 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */short) (~(var_10)));
                            var_29 ^= (+(-1006698129));
                            arr_51 [i_14] [i_14] [i_10] [i_14] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_14] [i_12] [(_Bool)1] [i_9] [i_8])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65507))))))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 3) /* same iter space */
                        {
                            arr_55 [(_Bool)1] [i_9] [i_9 - 1] [i_9] [i_10] = ((/* implicit */int) ((((_Bool) (signed char)-120)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)23))) : (((long long int) 13887460614796192542ULL))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) 6303649324399016201LL))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1611615243746726913ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20)))))) ? (((/* implicit */int) arr_35 [i_10 - 1] [i_9 - 4] [i_12 + 1])) : (((/* implicit */int) (signed char)-39))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 25; i_16 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */long long int) max((var_32), (((((/* implicit */_Bool) ((signed char) (unsigned char)240))) ? (((/* implicit */long long int) ((int) var_9))) : (-6261463513536895091LL)))));
                            var_33 = ((/* implicit */unsigned char) ((int) arr_44 [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12 + 1]));
                        }
                        arr_58 [i_10] [i_10 - 2] = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)235)) - (207))))));
                        /* LoopSeq 2 */
                        for (signed char i_17 = 0; i_17 < 25; i_17 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((9717321840593934013ULL) >> ((((((_Bool)1) ? (109817762U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_8]))))) - (109817735U)))));
                            var_35 &= ((/* implicit */signed char) ((6303649324399016201LL) / (5799239286176539344LL)));
                            var_36 = (~(((/* implicit */int) (unsigned char)20)));
                            var_37 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_10] [i_10 + 1] [i_10 + 1]))));
                            var_38 = ((/* implicit */short) ((int) (short)-19421));
                        }
                        for (signed char i_18 = 0; i_18 < 25; i_18 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2047))) >= (arr_62 [i_12 + 1] [i_12 + 1] [11ULL] [i_18] [i_18] [i_12 + 1] [i_18])));
                            var_40 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3902267235U)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_19 = 1; i_19 < 24; i_19 += 1) 
                    {
                        for (int i_20 = 0; i_20 < 25; i_20 += 1) 
                        {
                            {
                                var_41 |= ((/* implicit */unsigned char) ((arr_24 [(signed char)22]) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)18320)) : (((/* implicit */int) arr_28 [i_20])))))));
                                var_42 |= ((/* implicit */unsigned short) var_14);
                                var_43 = ((((/* implicit */_Bool) arr_68 [i_8] [i_8] [i_9 - 3] [i_20] [i_19 - 1] [i_10 + 1])) ? (((/* implicit */int) (signed char)40)) : ((+(((/* implicit */int) (short)15014)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        for (int i_22 = 2; i_22 < 21; i_22 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_71 [i_8] [i_9] [i_10] [i_22 + 4] [i_10] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_8] [i_8] [(_Bool)1] [i_22 + 3] [i_10] [i_10]))) : (var_10)));
                                arr_76 [i_8] [i_9 + 1] [i_10] [i_21] [i_9] [i_22] [i_22] &= ((/* implicit */signed char) arr_47 [i_8] [i_9] [i_10] [i_21] [i_22]);
                                arr_77 [i_10] [(signed char)6] [i_10] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) -6303649324399016202LL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)40))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_23 = 0; i_23 < 25; i_23 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (int i_24 = 0; i_24 < 25; i_24 += 2) 
                        {
                            var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 18446744073709551615ULL))) ? ((+(4194300ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_10 - 3] [i_9 - 1] [i_10] [i_24] [(short)10]))))))));
                            arr_82 [i_24] [i_24] [(short)14] [i_23] [i_23] [16] [i_24] |= ((unsigned char) ((unsigned long long int) var_11));
                            var_46 &= ((/* implicit */signed char) ((-1) == (((/* implicit */int) arr_81 [10] [10ULL] [i_9 - 3] [10ULL] [i_10] [i_23] [(signed char)0]))));
                            var_47 = ((unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-15015)) : (1)));
                        }
                        for (long long int i_25 = 0; i_25 < 25; i_25 += 3) 
                        {
                            arr_85 [i_10] [18] = ((/* implicit */int) ((signed char) arr_38 [i_10 - 1] [i_10 + 1] [10] [i_10 - 1] [i_10 - 2]));
                            var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) ((long long int) (-(13887460614796192519ULL)))))));
                            arr_86 [i_8] [i_9] [i_10] [(unsigned char)2] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)31))));
                            var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) (-(((int) var_3)))))));
                        }
                        for (unsigned int i_26 = 1; i_26 < 24; i_26 += 1) /* same iter space */
                        {
                            arr_89 [i_8] [(unsigned short)10] [i_10] [i_8] [i_8] [i_8] = (-(arr_37 [i_8] [i_9 - 2] [i_10 - 3]));
                            arr_90 [16ULL] [16ULL] [5] [i_23] [i_26] [i_10] [16ULL] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_49 [i_8] [i_10] [i_10] [i_23] [i_26])) ? (((/* implicit */long long int) var_5)) : (4611686018427387904LL))));
                        }
                        for (unsigned int i_27 = 1; i_27 < 24; i_27 += 1) /* same iter space */
                        {
                            var_50 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (short)-29887)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_9)))));
                            arr_94 [i_27] [i_27] [i_10] [i_10] [i_10] [13LL] [i_8] = ((/* implicit */short) (+(((-1239985945451960430LL) ^ (-1239985945451960430LL)))));
                        }
                        var_51 = ((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)8))))));
                        var_52 = ((/* implicit */int) ((((/* implicit */_Bool) arr_66 [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [(unsigned char)11] [i_10] [i_10 - 3] [i_10] [1LL] [i_10] [i_10]))) : (arr_79 [i_23] [i_10 - 3] [i_10 + 1] [i_10 + 1] [i_9 - 4])));
                    }
                    for (unsigned short i_28 = 0; i_28 < 25; i_28 += 3) 
                    {
                        var_53 ^= (-(((/* implicit */int) ((signed char) -2791268261134212018LL))));
                        arr_97 [i_10] [i_9 - 4] [i_10] [i_28] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_10 - 1] [i_10] [i_10] [i_10] [i_10])) && (((/* implicit */_Bool) -8142560064452949656LL))));
                    }
                }
            } 
        } 
        var_54 = ((/* implicit */int) (short)15014);
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 25; i_29 += 3) 
        {
            for (long long int i_30 = 1; i_30 < 24; i_30 += 2) 
            {
                for (unsigned short i_31 = 3; i_31 < 22; i_31 += 1) 
                {
                    {
                        var_55 = ((/* implicit */unsigned int) ((arr_50 [i_8] [i_29] [i_30 - 1] [i_30 - 1] [i_31 - 3]) + (arr_50 [i_8] [i_29] [i_30 + 1] [i_31 + 1] [i_29])));
                        var_56 &= ((/* implicit */unsigned long long int) (((-2147483647 - 1)) & (((/* implicit */int) arr_92 [i_29] [i_29] [(short)13] [i_30] [i_30]))));
                    }
                } 
            } 
        } 
    }
    var_57 = ((/* implicit */unsigned long long int) ((signed char) (+(((unsigned long long int) 7330902428487863321ULL)))));
}
