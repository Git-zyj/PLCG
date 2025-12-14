/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51259
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
    var_13 &= ((/* implicit */long long int) ((int) var_2));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 4] [i_1 - 4]))) % (arr_4 [i_2 - 2] [i_2 + 1])));
                    var_15 = ((/* implicit */unsigned short) 1380513197720491406ULL);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_12 [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((short) 1625555443U));
                        var_16 -= var_9;
                    }
                    for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 853519028U)))))));
                            var_19 = ((/* implicit */long long int) ((_Bool) arr_0 [4U] [4U]));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_6] [i_4] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                            arr_20 [i_0] [i_0] [i_1] [i_6] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((short) var_5));
                            var_21 = ((/* implicit */signed char) var_2);
                        }
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */short) ((unsigned short) (_Bool)1));
        /* LoopSeq 3 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_8 = 1; i_8 < 10; i_8 += 1) /* same iter space */
            {
                arr_28 [i_8] [i_8] [i_8 - 1] [i_8] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)8188)) : (arr_18 [i_0] [1ULL] [i_8 - 1] [i_0] [i_7] [i_7])));
                /* LoopNest 2 */
                for (unsigned int i_9 = 1; i_9 < 9; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((3441448279U) << (((((/* implicit */int) var_6)) - (207)))))) ? (((/* implicit */int) ((signed char) arr_33 [(_Bool)0] [i_7] [i_7] [i_9] [i_0]))) : (((/* implicit */int) (short)30964))));
                            arr_36 [9ULL] [9ULL] [9ULL] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (short)30964))));
                            var_24 *= ((/* implicit */unsigned int) ((long long int) arr_6 [i_0] [i_8 + 1] [i_8 + 1]));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)12246)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_37 [i_0] [(short)2] [i_8] = ((/* implicit */unsigned char) ((short) arr_3 [i_8 + 1] [i_8 - 1]));
            }
            for (short i_11 = 1; i_11 < 10; i_11 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned short) ((unsigned char) arr_31 [i_11 - 1]));
                arr_40 [i_11 - 1] [i_11 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) -469895709558907240LL)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) (short)19896)) ? (((/* implicit */int) (unsigned short)47039)) : (((/* implicit */int) var_3))))));
                arr_41 [i_0] [i_7] [i_7] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) ((-1113380988413468945LL) < (var_7))))));
            }
            arr_42 [i_7] = ((/* implicit */long long int) ((unsigned short) arr_35 [i_7] [i_7] [i_7] [(short)0] [i_7] [i_7]));
        }
        for (signed char i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned int i_14 = 4; i_14 < 10; i_14 += 1) 
                {
                    {
                        var_27 = ((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_12]);
                        arr_49 [i_12] [i_12] [(_Bool)1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (_Bool)1))));
                    }
                } 
            } 
            arr_50 [i_0] [i_12] = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_6))))));
            arr_51 [i_0] [0ULL] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (unsigned short)51305))));
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) || (arr_34 [i_12])));
            /* LoopSeq 1 */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                arr_55 [i_0] [i_12] [(signed char)6] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_15 - 1] [i_15] [i_0])) && (((/* implicit */_Bool) ((short) 6254892583994366859ULL)))));
                arr_56 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [9ULL] [9ULL] [i_15 - 1] [i_15 - 1] [i_15 - 1])) ? (((/* implicit */int) arr_47 [i_15] [i_15] [i_15 - 1] [i_15] [i_15 - 1])) : (((/* implicit */int) arr_47 [i_12] [i_12] [i_15 - 1] [i_12] [i_15 - 1]))));
                arr_57 [i_15] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)17)) + (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_12] [i_15])) : (((/* implicit */int) (unsigned short)8904))))));
                var_30 = ((/* implicit */unsigned long long int) ((long long int) var_4));
            }
        }
        for (signed char i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    {
                        var_31 -= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_33 [i_0] [i_16] [i_17] [i_17] [i_18])) ? (((/* implicit */int) (short)768)) : (((/* implicit */int) (unsigned short)24576))))));
                        var_32 = ((/* implicit */long long int) var_10);
                        /* LoopSeq 3 */
                        for (signed char i_19 = 1; i_19 < 8; i_19 += 1) 
                        {
                            arr_67 [i_0] [i_16] [i_16] [i_16] [i_19] [(_Bool)1] = ((/* implicit */unsigned short) 940728623840181949ULL);
                            arr_68 [i_0] [i_16] [i_16] [i_18] [i_0] [(short)8] = ((/* implicit */unsigned long long int) var_4);
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (unsigned short)57347))));
                        }
                        for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) 
                        {
                            var_34 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)57368)) : (((/* implicit */int) var_6)))));
                            arr_71 [i_20] [i_16] [i_17 + 1] [i_16] [i_20] [i_17] = (!(((/* implicit */_Bool) 11U)));
                        }
                        for (signed char i_21 = 0; i_21 < 11; i_21 += 2) 
                        {
                            arr_76 [(_Bool)1] [i_18] [i_18] [i_18] [i_18] &= ((/* implicit */long long int) ((int) var_9));
                            var_35 ^= ((/* implicit */short) ((unsigned char) arr_13 [i_21] [i_21] [i_21] [i_17 + 1]));
                        }
                        var_36 = arr_72 [i_16];
                        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((long long int) 4807971824471744418LL)))));
                    }
                } 
            } 
            var_38 = ((/* implicit */short) ((unsigned int) var_9));
            arr_77 [(_Bool)1] &= ((/* implicit */long long int) ((unsigned long long int) 12977079997087563927ULL));
        }
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 11; i_22 += 3) 
        {
            for (short i_23 = 1; i_23 < 8; i_23 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_24 = 3; i_24 < 10; i_24 += 3) 
                    {
                        arr_85 [i_0] [i_22] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_9))));
                        arr_86 [i_0] [i_0] [i_24] [i_22] = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((_Bool) var_5))));
                        arr_87 [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) 12579095530024011726ULL)) ? ((+(853519028U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_83 [i_23] [8ULL] [i_23 - 1] [i_23] [i_23] [i_23 - 1])) ? (arr_38 [i_23] [i_23] [i_23 - 1] [i_23 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)11589)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_9))))));
                        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 0U))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_0))))) : (var_7))))));
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_27 = 1; i_27 < 8; i_27 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned int) var_4);
                            var_43 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 853519016U)) && (((/* implicit */_Bool) (short)-2475)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))) : (15949271268722433582ULL)));
                            var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (arr_6 [i_22] [i_23] [i_22]))))));
                        }
                        for (unsigned long long int i_28 = 2; i_28 < 8; i_28 += 3) 
                        {
                            arr_97 [i_0] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))));
                            var_45 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            arr_98 [i_22] [i_22] [i_0] [i_0] [i_22] [i_23] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_9)) ? (arr_44 [i_26] [i_23 + 3] [i_0]) : (((/* implicit */int) (_Bool)1))))));
                        }
                        var_46 = ((/* implicit */int) arr_53 [i_23]);
                        var_47 = ((/* implicit */signed char) ((short) arr_84 [(unsigned char)4] [i_0] [i_22] [i_23 + 2] [i_26] [i_26]));
                        var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_45 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))));
                        var_49 = (-(((/* implicit */int) arr_90 [i_0] [i_23 + 1] [i_0] [i_23 + 1])));
                    }
                    var_50 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_53 [i_0]))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_29 = 0; i_29 < 15; i_29 += 3) 
    {
        var_51 = ((/* implicit */signed char) max(((-(((/* implicit */int) var_10)))), (min((((/* implicit */int) arr_99 [i_29])), (((((/* implicit */int) var_5)) / (((/* implicit */int) (short)19332))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_30 = 0; i_30 < 15; i_30 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_31 = 0; i_31 < 15; i_31 += 1) 
            {
                for (unsigned short i_32 = 2; i_32 < 13; i_32 += 3) 
                {
                    for (signed char i_33 = 1; i_33 < 13; i_33 += 1) 
                    {
                        {
                            arr_110 [i_29] [i_29] [i_29] [i_29] [i_29] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_101 [i_32] [i_32 + 1]))) : (arr_102 [i_32 - 2] [i_33 - 1]))) & (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)19332))) : (arr_102 [i_32 + 2] [i_33 - 1])))));
                            arr_111 [i_29] [i_30] [i_29] [i_32 + 2] [i_29] = ((/* implicit */long long int) arr_103 [i_29]);
                        }
                    } 
                } 
            } 
            var_52 -= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10748))) : (6421220134296569775LL))));
            /* LoopNest 3 */
            for (signed char i_34 = 2; i_34 < 11; i_34 += 3) 
            {
                for (long long int i_35 = 0; i_35 < 15; i_35 += 1) 
                {
                    for (short i_36 = 0; i_36 < 15; i_36 += 4) 
                    {
                        {
                            arr_121 [i_34] [i_29] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_100 [i_30] [i_34 + 4]))))) ? (((unsigned int) ((((/* implicit */_Bool) arr_114 [(unsigned char)14] [i_29] [i_36])) ? (((/* implicit */int) (short)-17164)) : (((/* implicit */int) (short)2479))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21252)) ? (((/* implicit */int) (short)21252)) : (((/* implicit */int) (short)-2619)))))));
                            arr_122 [i_29] [i_30] [i_30] [i_30] [i_35] [i_30] = ((/* implicit */unsigned int) var_11);
                        }
                    } 
                } 
            } 
            var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) min((var_11), (((/* implicit */long long int) ((_Bool) min(((short)-10753), (((/* implicit */short) (_Bool)0)))))))))));
        }
        var_54 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)8185))))) / (min((((/* implicit */long long int) (unsigned char)78)), (var_7))))));
        var_55 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_118 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29] [i_29]) : (((/* implicit */unsigned long long int) arr_119 [i_29] [i_29] [i_29] [i_29] [i_29]))))) ? (((((/* implicit */int) (short)127)) | (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (_Bool)1))));
    }
}
