/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223821
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = (~(((/* implicit */int) (unsigned short)65535)));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [8LL])) + (((/* implicit */int) (!(arr_2 [(_Bool)1] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 1]))));
            var_21 |= ((/* implicit */unsigned char) var_15);
            var_22 = ((/* implicit */short) (~((+(((/* implicit */int) (short)-6143))))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) != (((/* implicit */int) ((15) <= (-16))))));
        }
        for (unsigned short i_3 = 1; i_3 < 11; i_3 += 2) /* same iter space */
        {
            arr_14 [i_1] [(short)2] [i_1] = ((/* implicit */short) ((((((/* implicit */int) var_7)) == (((/* implicit */int) arr_10 [i_1] [i_3 - 1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 - 1] [i_3 + 2] [i_1]))) : ((~(1649679132U)))));
            /* LoopNest 3 */
            for (unsigned short i_4 = 4; i_4 < 10; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) ^ (((var_18) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)24260))))) ? (var_13) : ((-(var_5)))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) << (((var_13) + (596842623)))))) ? (((/* implicit */int) arr_12 [(short)6] [(short)6])) : (((/* implicit */int) (!(((/* implicit */_Bool) 2134501715)))))));
                        }
                    } 
                } 
            } 
            arr_22 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) 17);
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 1; i_8 < 12; i_8 += 2) 
                {
                    var_26 = ((/* implicit */unsigned int) arr_4 [i_1]);
                    arr_27 [i_1] [i_1] [i_1] [1U] [i_7] [6U] = ((/* implicit */unsigned short) (signed char)-15);
                }
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7] [i_1] [11ULL] [i_1] [i_1 - 1])) ? (((/* implicit */unsigned int) 142118651)) : (2901406394U)))) ? (((/* implicit */int) var_1)) : (((var_13) % (((/* implicit */int) (unsigned short)65535))))));
                arr_28 [i_1] [i_1] [12LL] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (-2082238355)));
                arr_29 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)776)) % (var_13)));
            }
            for (int i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
            {
                arr_32 [i_1] [i_3] [i_1] [i_9] = ((/* implicit */unsigned long long int) ((((arr_2 [i_1] [i_3]) ? (((/* implicit */int) (short)12123)) : (142118652))) != (((/* implicit */int) var_4))));
                var_28 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) var_2)) / (arr_21 [i_1] [(_Bool)1] [(short)9] [2])))));
                var_29 += (~(((((/* implicit */int) arr_7 [i_1] [i_1] [i_9])) >> (((var_8) - (2401474544U))))));
                var_30 |= ((/* implicit */long long int) ((1110346402U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41)))));
            }
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1334754405)) ? (2901406394U) : (4026531840U)));
                var_32 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (4294967295U) : (12U)));
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)12123)) | (((/* implicit */int) (signed char)-15))));
                arr_37 [i_10] [(_Bool)1] [i_10] [i_10] |= ((((/* implicit */unsigned int) (~((-2147483647 - 1))))) > (arr_1 [i_10]));
            }
        }
        var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [i_1 - 2] [i_1] [i_1 + 1]))));
    }
    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            var_35 += ((/* implicit */short) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_40 [i_11] [i_12]))))) ? ((~(min((2835970107U), (0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-79)) == (((/* implicit */int) arr_2 [i_11] [i_11])))))) > (((((/* implicit */_Bool) arr_38 [(short)7] [16U])) ? (1393560902U) : (var_3)))))))));
            arr_42 [15LL] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-776))));
            arr_43 [i_11] [i_12] [7U] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (short)-32760))))));
            var_36 = ((/* implicit */unsigned int) (+(18446744073709551615ULL)));
        }
        for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            arr_46 [i_11] [i_13] [i_13] = ((/* implicit */long long int) var_4);
            var_37 = ((/* implicit */unsigned short) ((short) ((15) - (((/* implicit */int) arr_0 [i_11])))));
            var_38 = (-(((((/* implicit */_Bool) ((var_15) << (((var_0) - (6927906300457399584LL)))))) ? (var_9) : (((/* implicit */unsigned long long int) 4269433257U)))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            arr_49 [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((-(var_13))) : (((((/* implicit */int) arr_40 [3] [i_11])) % (((/* implicit */int) arr_39 [i_11]))))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551603ULL))), (var_9))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                arr_52 [i_14] [i_14] = ((/* implicit */unsigned int) arr_50 [5U] [i_14]);
                arr_53 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)190))))) != (((/* implicit */int) var_4))));
                var_39 = ((/* implicit */unsigned int) var_17);
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_58 [i_14] [i_14] [i_14] [1] [i_16] [(short)11] [0U] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13479))) < (0LL)));
                            arr_59 [i_11] [i_14] [i_15] [i_16] [(short)15] = (~(arr_57 [8] [i_17 - 1] [i_17] [i_17] [i_17]));
                            var_40 += 0U;
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_18 = 0; i_18 < 21; i_18 += 3) 
        {
            arr_62 [i_18] = ((/* implicit */long long int) (~(min((18446744073709551603ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
            arr_63 [i_11] [i_18] [i_11] = ((/* implicit */int) var_7);
            /* LoopSeq 1 */
            for (short i_19 = 0; i_19 < 21; i_19 += 2) 
            {
                var_41 |= (((-(((/* implicit */int) ((signed char) var_4))))) << (((var_17) - (9111104092732771004ULL))));
                var_42 = var_7;
                arr_66 [i_11] [i_18] [i_11] [i_18] = ((/* implicit */int) (short)-29255);
                var_43 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((~(arr_47 [i_11] [i_11] [i_11]))) << (((var_9) - (6077838640580941062ULL)))))), (18446744073709551586ULL)));
                arr_67 [i_11] [i_11] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */long long int) 836673035U)) | (var_14))) : (((/* implicit */long long int) (-(arr_56 [i_19] [i_19]))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 21; i_20 += 2) 
            {
                for (int i_21 = 4; i_21 < 18; i_21 += 2) 
                {
                    {
                        var_44 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)0))))), ((~(arr_71 [i_11] [9LL] [i_11] [(short)11] [i_18])))));
                        var_45 = ((/* implicit */unsigned int) max((var_45), ((~(var_8)))));
                        /* LoopSeq 1 */
                        for (long long int i_22 = 0; i_22 < 21; i_22 += 2) 
                        {
                            arr_77 [i_18] [11U] = min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), (-834108549));
                            var_46 += ((/* implicit */unsigned int) arr_75 [i_11] [i_11] [(signed char)16] [(short)2] [9LL] [i_11]);
                        }
                        var_47 = ((/* implicit */unsigned int) ((int) arr_45 [i_11] [(_Bool)1] [(_Bool)1]));
                    }
                } 
            } 
        }
    }
    for (short i_23 = 2; i_23 < 20; i_23 += 2) 
    {
        var_48 = arr_50 [i_23 - 2] [i_23 + 1];
        arr_80 [(short)15] = ((/* implicit */int) (+(18446744073709551607ULL)));
    }
    var_49 |= ((/* implicit */signed char) var_4);
    var_50 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) 198681905)) : (1786167446U)))) ? (((/* implicit */int) (short)10790)) : (var_5));
    /* LoopNest 2 */
    for (signed char i_24 = 0; i_24 < 21; i_24 += 2) 
    {
        for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_26 = 1; i_26 < 20; i_26 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_27 = 0; i_27 < 21; i_27 += 3) 
                    {
                        for (unsigned short i_28 = 2; i_28 < 19; i_28 += 3) 
                        {
                            {
                                arr_92 [i_24] [9U] [i_26 - 1] [i_25] [i_25] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_79 [i_24])), (max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) (short)0)) ? (0ULL) : (((/* implicit */unsigned long long int) 3904393229U))))))));
                                var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) arr_44 [i_25]))));
                            }
                        } 
                    } 
                    arr_93 [i_24] [i_24] [i_25] = ((/* implicit */unsigned long long int) max((min((max((((/* implicit */int) arr_48 [(unsigned char)19] [(unsigned char)19] [(_Bool)1])), (var_5))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)24625)) : (((/* implicit */int) (_Bool)1)))))), ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-1))))))));
                }
                for (unsigned short i_29 = 1; i_29 < 20; i_29 += 2) 
                {
                    arr_96 [i_24] [i_25] [10U] = ((/* implicit */int) ((var_8) <= (((unsigned int) 3782350986U))));
                    var_52 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))), ((~(arr_64 [i_29 - 1] [10U] [i_29 - 1] [16U])))));
                }
                arr_97 [i_25] [i_25] = ((/* implicit */unsigned short) max(((signed char)(-127 - 1)), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) 2508799849U))))) != (((((/* implicit */int) var_7)) ^ (((/* implicit */int) (unsigned short)44495)))))))));
                /* LoopSeq 4 */
                for (unsigned int i_30 = 0; i_30 < 21; i_30 += 2) /* same iter space */
                {
                    var_53 = ((/* implicit */unsigned short) arr_94 [i_24] [i_25] [i_25]);
                    var_54 = ((/* implicit */unsigned short) min(((~(arr_60 [(unsigned char)6] [i_30]))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [(unsigned char)1]))) < (var_9))))));
                    var_55 = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_100 [19ULL] [i_25] [i_25] [(_Bool)1]))) + (var_16)))));
                }
                for (unsigned int i_31 = 0; i_31 < 21; i_31 += 2) /* same iter space */
                {
                    arr_104 [i_25] = arr_91 [i_25] [i_25];
                    var_56 = var_13;
                    arr_105 [i_25] [i_25] [4U] = ((/* implicit */unsigned short) (((-(1786167446U))) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_69 [i_24] [4U])) >> (((((/* implicit */int) arr_69 [i_31] [i_31])) - (22728))))))));
                    var_57 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_5)) + (((unsigned int) var_0))));
                    var_58 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) var_2)) % (arr_87 [i_24] [i_24] [i_24])))) % (min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (var_18)))), (max((((/* implicit */long long int) var_12)), (var_0)))))));
                }
                for (unsigned int i_32 = 0; i_32 < 21; i_32 += 2) 
                {
                    var_59 += (_Bool)1;
                    arr_108 [i_24] [i_24] [i_25] [i_24] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)80))));
                    var_60 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_45 [i_24] [i_24] [i_24])) && (((/* implicit */_Bool) arr_45 [i_24] [i_25] [i_32]))))));
                    var_61 = ((/* implicit */unsigned short) max((var_61), (((/* implicit */unsigned short) var_5))));
                    arr_109 [i_24] [i_25] [i_24] [(short)7] = max((((((/* implicit */_Bool) arr_94 [i_32] [i_25] [i_24])) ? (arr_94 [i_24] [i_25] [i_32]) : (((/* implicit */unsigned long long int) arr_88 [i_24] [i_25] [i_32] [i_32])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_24] [i_24] [(short)16]))) & (var_15))));
                }
                for (unsigned int i_33 = 0; i_33 < 21; i_33 += 2) 
                {
                    var_62 = ((/* implicit */short) var_0);
                    arr_112 [i_24] [i_25] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_85 [i_25])), (arr_0 [i_24])))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_17)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_24] [(signed char)9] [(unsigned short)9] [0] [i_24] [0]))))), (var_15))))));
                    /* LoopNest 2 */
                    for (unsigned int i_34 = 0; i_34 < 21; i_34 += 2) 
                    {
                        for (signed char i_35 = 0; i_35 < 21; i_35 += 2) 
                        {
                            {
                                arr_119 [16LL] [i_25] [i_25] [i_25] [(unsigned char)6] [i_35] = ((/* implicit */long long int) (unsigned char)245);
                                var_63 |= ((unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_102 [12ULL])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
