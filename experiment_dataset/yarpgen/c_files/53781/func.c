/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53781
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_1]))));
                arr_4 [i_1] = ((/* implicit */int) min(((~(max((-1897569670555349405LL), (1897569670555349403LL))))), (((/* implicit */long long int) var_8))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 4; i_2 < 8; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((1897569670555349404LL), (((/* implicit */long long int) (unsigned char)155))))) ? (((((/* implicit */_Bool) arr_6 [i_2 - 2])) ? (((/* implicit */int) min(((unsigned char)107), (((/* implicit */unsigned char) var_3))))) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) ((long long int) 3337469487700044853ULL))) ? (((((/* implicit */_Bool) (unsigned char)141)) ? (var_2) : (((/* implicit */int) var_3)))) : (max((arr_7 [i_2]), (((/* implicit */int) arr_8 [i_3] [i_2]))))))));
                /* LoopSeq 3 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    arr_12 [i_2] [i_4] [i_2] = ((/* implicit */long long int) min((arr_1 [i_4]), (((/* implicit */int) (unsigned short)52213))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)115)) / (((/* implicit */int) (unsigned char)96))))) && (((/* implicit */_Bool) ((unsigned int) arr_0 [i_2 - 4])))));
                }
                for (long long int i_5 = 1; i_5 < 9; i_5 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 3; i_6 < 9; i_6 += 2) 
                    {
                        arr_17 [i_2] = ((/* implicit */unsigned int) ((long long int) max((var_11), (var_14))));
                        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_5)))) ? (arr_3 [i_2 - 3]) : (((/* implicit */unsigned long long int) var_6)))))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            arr_20 [i_6] [i_7] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) var_6);
                            arr_21 [i_2] [(unsigned char)8] [(signed char)7] [i_7] [i_6] [i_7] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((var_8), (arr_18 [i_6 - 1] [i_7] [i_5 + 1] [i_7] [i_6 - 1])))), (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (1897569670555349407LL))) | (((/* implicit */long long int) ((arr_0 [i_2]) ? (var_2) : (var_6))))))));
                        }
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (unsigned short)65526))) ? (var_6) : (((arr_10 [i_8] [i_8] [i_6 - 1] [i_8]) / (((/* implicit */int) var_10))))));
                            arr_24 [i_2 - 1] [i_8] [i_2 - 1] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) var_8)))));
                        }
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                        {
                            arr_28 [i_2] [i_3] [i_3] [i_6] [i_6] = ((/* implicit */unsigned char) var_9);
                            var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)61))));
                            var_20 = ((/* implicit */signed char) arr_3 [i_3]);
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            var_21 = ((/* implicit */short) ((int) arr_2 [i_2 - 3]));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_7)) - (6828)))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_2 + 1] [i_2 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_3 [i_2 - 1])));
                            arr_32 [i_2] [i_3] [(unsigned short)9] [9LL] [i_10] = ((/* implicit */unsigned long long int) ((int) (short)-8979));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_11 [i_2 - 3] [6LL] [i_5 + 2] [3LL]))) ? (arr_26 [i_2] [i_10]) : (((long long int) (unsigned char)157))));
                        }
                        for (int i_11 = 3; i_11 < 8; i_11 += 2) /* same iter space */
                        {
                            var_25 = 11483195770093517927ULL;
                            arr_35 [9] [i_3] [i_3] [i_11] [i_5] = ((/* implicit */signed char) ((unsigned short) ((unsigned char) (!(((/* implicit */_Bool) 16044517762573194342ULL))))));
                            arr_36 [i_2] [i_11] [i_5] [i_5] [i_11] = ((/* implicit */unsigned int) var_3);
                            var_26 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_22 [i_2 - 2] [i_3] [i_3])) ? (max((((/* implicit */long long int) arr_8 [i_3] [i_5])), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12)))))));
                        }
                        for (int i_12 = 3; i_12 < 8; i_12 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)37)))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_9))) * ((-((~(((/* implicit */int) arr_6 [(short)4]))))))));
                        }
                    }
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        arr_43 [i_13] = var_10;
                        arr_44 [i_13] [i_5] [i_3] [i_13] = ((/* implicit */short) var_14);
                        arr_45 [i_2] [i_3] [i_3] [i_13] [i_13] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((short) var_10))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_22 [i_2 + 3] [i_3] [i_2 + 3])) : (((/* implicit */int) (unsigned char)81)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_12)))))))));
                        arr_46 [i_2] [i_13] = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)2329)))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_8))));
                        arr_47 [i_13] [(unsigned char)5] [i_2] [i_13] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_42 [i_2 + 3] [i_2 + 1] [i_2 - 1] [i_13] [i_5 + 2])))) * (min((var_6), (var_2)))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        arr_52 [i_2 - 3] [i_2 + 1] [i_2 + 2] [i_2 + 1] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((long long int) arr_26 [i_2] [i_2]))) / (((((/* implicit */_Bool) 338996220)) ? (arr_29 [i_14] [i_5] [i_5 - 1] [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                        arr_53 [i_3] [i_3] = ((/* implicit */int) (+(((((/* implicit */_Bool) (+(arr_13 [i_2 + 2] [(unsigned short)4] [i_5] [(short)5])))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 3])))))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_49 [i_3] [i_5 + 1] [i_2 - 1] [2U])) > (((/* implicit */int) arr_49 [i_2] [i_5 - 1] [i_2 - 1] [i_14])))))) * ((-(min((arr_38 [i_14] [i_5] [i_2] [i_5 + 2] [i_5] [i_2] [i_2]), (1897569670555349424LL)))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1269863204)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)4))))) ? (((((/* implicit */_Bool) arr_49 [i_2 - 1] [i_2 - 1] [i_5 + 1] [i_5 + 1])) ? (1641419465311049640LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)59771)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (signed char)35)))))));
                        var_31 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_25 [i_2 - 3] [i_2] [i_5 - 1] [i_14] [i_14]))))), (min(((unsigned short)34534), (var_10)))));
                    }
                    arr_54 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_1);
                    arr_55 [i_2 - 3] [i_3] [8] = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
                    /* LoopSeq 1 */
                    for (long long int i_15 = 1; i_15 < 9; i_15 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
                        {
                            arr_62 [i_2] [i_3] [i_3] [i_15 + 1] [i_5 + 1] [i_15 - 1] = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) var_2)))))) ? (var_2) : (max((((/* implicit */int) arr_15 [i_2 - 3] [i_3] [1LL] [i_16])), ((+(((/* implicit */int) arr_51 [i_2] [i_3] [i_5] [i_15] [(unsigned short)2]))))))));
                            var_32 = ((/* implicit */unsigned char) max((var_11), (max((((/* implicit */long long int) arr_31 [i_2 - 4] [i_3] [i_3] [i_3] [i_5] [i_15] [i_16])), (arr_23 [i_2] [0LL] [6LL] [i_3] [i_16])))));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((unsigned char) (short)4736)))) ? (max(((+(((/* implicit */int) (unsigned char)75)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-13)))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3])))))))));
                        }
                        for (long long int i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
                        {
                            arr_67 [i_3] [i_3] [i_15 + 2] [i_15] [i_17] [i_15 + 2] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned char)133)) >> (((/* implicit */int) (unsigned char)26))))));
                            var_34 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_48 [i_5 - 1])) : (var_6)))));
                            var_35 = ((/* implicit */_Bool) arr_65 [i_2 + 2] [i_2 + 2] [i_2 + 2]);
                        }
                        var_36 = max((arr_64 [i_2 - 4] [i_3] [i_5] [i_5] [i_5 - 1] [i_2] [i_2 - 4]), ((unsigned short)43623));
                        /* LoopSeq 3 */
                        for (short i_18 = 1; i_18 < 7; i_18 += 2) /* same iter space */
                        {
                            arr_70 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)138)) >> (((-1382750326) + (1382750350)))));
                            arr_71 [i_15 + 2] [i_18] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((arr_26 [i_5 - 1] [i_5 - 1]), (((/* implicit */long long int) arr_48 [(_Bool)1]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)32595)))) : (((/* implicit */int) arr_15 [i_3] [i_5 - 1] [i_15 - 1] [i_15 - 1]))))));
                        }
                        for (short i_19 = 1; i_19 < 7; i_19 += 2) /* same iter space */
                        {
                            arr_75 [i_2] [i_3] [2] [i_5] [i_15] [(unsigned char)7] [i_19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))))))))));
                            arr_76 [i_2] [i_3] [i_5 + 1] [i_15] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned short) var_0)), (var_10))), (var_10)))) ? (((var_6) / (arr_34 [i_5] [i_5 + 2] [i_3] [i_3] [i_5] [i_3]))) : (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [i_19] [i_19] [i_19 + 1] [i_3] [i_19]))))), (var_7))))));
                        }
                        for (short i_20 = 1; i_20 < 7; i_20 += 2) /* same iter space */
                        {
                            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((signed char) var_14))), (var_12)))) ? ((((_Bool)0) ? (-3288163690249510766LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)157))))) : (((/* implicit */long long int) ((int) var_4)))));
                            arr_81 [i_2] = ((/* implicit */unsigned short) arr_14 [i_2]);
                            arr_82 [i_2] = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) var_1)))));
                        }
                        var_38 = ((/* implicit */long long int) ((short) max((((/* implicit */short) (signed char)52)), ((short)-2930))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        for (short i_22 = 3; i_22 < 7; i_22 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_22 [i_5 + 1] [i_22] [i_22 + 2])), (max((var_5), (((/* implicit */long long int) var_12))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) var_10))))), (arr_84 [i_21] [i_22 + 1] [i_22 - 1] [i_21 - 1] [i_21]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) / (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_86 [i_2] [i_21] [i_2] [i_2 - 4] [i_5 + 1] [i_5] [i_21])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-22945))))))))));
                                var_40 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (-1897569670555349405LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)29502))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_23 = 1; i_23 < 7; i_23 += 2) 
                {
                    var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2 + 3] [i_23 + 1] [i_23] [i_23 + 1] [i_2 + 2] [i_3] [i_23 + 4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_48 [i_2 + 1]))))) ? (((((/* implicit */_Bool) -6160054203149502318LL)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_64 [i_2] [i_2 + 3] [i_2] [i_3] [i_2] [i_3] [i_2])) - (-941569640)))) : (-1897569670555349405LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4))))));
                    var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)56342), ((unsigned short)7596)))) ? (((long long int) arr_13 [i_2] [i_2] [i_3] [i_23])) : (((/* implicit */long long int) var_2))))) ? (min((((var_14) + (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned short) (unsigned char)122))))))) : (var_14)));
                }
            }
        } 
    } 
    var_43 = ((unsigned char) max((((/* implicit */long long int) var_9)), (((((var_11) + (9223372036854775807LL))) >> (((/* implicit */int) var_3))))));
}
