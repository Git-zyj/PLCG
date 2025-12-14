/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242497
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
    var_14 &= ((/* implicit */_Bool) (-(((((/* implicit */long long int) var_8)) & (max((((/* implicit */long long int) (signed char)84)), (var_12)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] &= ((long long int) arr_0 [i_0] [i_0 - 1]);
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */long long int) arr_0 [i_0] [i_0])))));
        arr_4 [i_0] = var_2;
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */long long int) (_Bool)1);
        /* LoopSeq 3 */
        for (unsigned char i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_15 |= ((/* implicit */long long int) ((signed char) var_5));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_3)))));
                    var_17 = ((/* implicit */unsigned short) var_13);
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_2] [i_2 + 2] [i_4] [i_4])) ? (arr_15 [i_1] [i_2 - 2] [i_3] [i_3]) : (arr_15 [i_1] [i_2 + 4] [i_3] [i_4])));
                    arr_19 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                }
                for (signed char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 13815783992852000728ULL))))))))));
                        arr_24 [i_1] [i_1] [i_1] [i_1] [i_5] = (+(((((/* implicit */_Bool) var_10)) ? (var_3) : (var_4))));
                        var_20 = ((/* implicit */unsigned short) (+(var_0)));
                    }
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        arr_29 [i_5] [i_2] [i_3] [i_5] [i_5] [i_1] [i_5] = ((/* implicit */long long int) ((unsigned int) 4294967295U));
                        arr_30 [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1 + 4] [i_1]))));
                        var_21 = ((/* implicit */unsigned int) ((_Bool) 3623793692308076414LL));
                    }
                    var_22 += ((/* implicit */unsigned char) arr_1 [i_1]);
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_2] [i_5] [i_5] [i_2])) ? (((/* implicit */int) arr_12 [i_3] [i_5])) : (((/* implicit */int) ((unsigned short) 13815783992852000728ULL)))));
                    var_24 += ((/* implicit */signed char) ((long long int) ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 3; i_8 < 20; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), ((~(70368744177663ULL)))));
                        arr_33 [i_8] [i_3] [i_1] &= var_0;
                    }
                }
                arr_34 [i_3] [i_1] = ((var_5) >> (((arr_20 [i_1 + 3]) - (2045409918U))));
                arr_35 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_10 [i_1] [i_2] [i_3]);
            }
            for (unsigned char i_9 = 1; i_9 < 18; i_9 += 3) /* same iter space */
            {
                var_26 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17094671488273394876ULL)) ? (13815783992852000746ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))) && (((/* implicit */_Bool) 2362082698823465225ULL))));
                var_27 = ((/* implicit */unsigned char) 13815783992852000728ULL);
                var_28 += ((signed char) ((2552654615U) ^ (17U)));
            }
            for (unsigned char i_10 = 1; i_10 < 18; i_10 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1584814983080963698LL)) && (((/* implicit */_Bool) (signed char)122))));
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 3; i_11 < 20; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        arr_46 [i_1] [i_10] [i_2] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) (~(12862090133514922923ULL)));
                        var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)121))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        arr_50 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-103))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_43 [i_2 + 1] [i_11 - 3] [i_1 - 1] [i_10 + 1] [i_13])))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1935101330U))));
                        arr_53 [i_1] [i_10] [i_10] = ((/* implicit */long long int) ((arr_28 [i_1] [i_1] [i_1 + 4] [i_1 + 1] [i_1 + 4]) + (arr_28 [i_1] [i_1] [i_1 + 1] [i_1 + 4] [i_1 + 4])));
                        arr_54 [i_1] [i_2] [i_10] [i_11] [i_14] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_1] [i_1] [i_1] [i_1] [i_1]))) / (4202197905U));
                        var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                        arr_55 [i_10] [i_11] [i_10] = ((unsigned int) (unsigned short)9450);
                    }
                    var_34 &= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87))) : (12371239982204371647ULL)));
                }
                var_35 &= ((/* implicit */unsigned char) ((unsigned short) 17094671488273394876ULL));
                /* LoopSeq 4 */
                for (unsigned long long int i_15 = 2; i_15 < 18; i_15 += 3) 
                {
                    var_36 += ((((/* implicit */_Bool) arr_5 [i_1])) ? ((-(1205651566U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 5584653940194628671ULL)))))));
                    arr_60 [i_1] [i_1] [i_1] [(unsigned char)18] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))) * (4630960080857550891ULL)))));
                    arr_61 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_1] [i_2] [i_10] [i_15] [i_1])) ? (12862090133514922923ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_15 - 2])))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    var_37 = ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned long long int) (+(arr_47 [i_1] [i_2] [i_2] [i_10] [i_16])))) : (((((/* implicit */_Bool) (unsigned short)31843)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                    arr_65 [i_10] [i_10] [i_2] [i_2] [i_10] = ((/* implicit */unsigned short) ((arr_1 [i_1 + 2]) >> (((((/* implicit */int) var_10)) - (139)))));
                }
                for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    arr_70 [i_10] [i_2] [i_10] [i_17] = ((/* implicit */unsigned char) (~(12862090133514922916ULL)));
                    arr_71 [i_17] [i_17] [i_10] [i_10] [i_2] [i_1] = ((3ULL) << (((((/* implicit */int) var_7)) + (31))));
                    var_38 = ((/* implicit */unsigned char) arr_37 [i_10 + 3] [i_10]);
                }
                for (unsigned short i_18 = 0; i_18 < 21; i_18 += 3) 
                {
                    var_39 = ((/* implicit */unsigned char) (-((-(arr_56 [i_2])))));
                    var_40 += ((/* implicit */unsigned long long int) ((unsigned char) 18446673704965373952ULL));
                }
            }
            var_41 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_42 [i_1] [12LL] [i_1] [i_1] [i_1] [i_1]))));
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (signed char i_20 = 1; i_20 < 19; i_20 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_21 = 0; i_21 < 21; i_21 += 1) 
                        {
                            arr_81 [i_1] [i_2] [i_19] [i_19] [i_20] [i_19] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_2 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_25 [i_20] [i_20] [i_20])) : (((/* implicit */int) arr_68 [i_19] [i_2 - 1] [i_2] [i_2] [i_2]))));
                            arr_82 [i_1] [i_20] [i_19] = ((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) % (arr_48 [i_19]));
                            var_42 = ((/* implicit */long long int) var_10);
                            arr_83 [i_1] [i_1] [i_1] [(unsigned char)20] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [2ULL] [i_20 + 1] [i_19] [i_1 + 1])) ? ((~(arr_77 [i_1] [i_2] [i_19] [i_20] [i_21] [i_21]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_20 - 1] [i_20] [i_20])))));
                        }
                        for (unsigned int i_22 = 2; i_22 < 17; i_22 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) arr_28 [i_22] [i_20] [i_19] [i_2] [i_1]);
                            arr_86 [i_19] [i_20] [i_19] [i_2] [i_1] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_1] [i_20] [i_22] [i_22 + 4] [i_22] [i_22] [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_59 [i_1] [i_22] [i_22] [i_22 + 3] [i_22] [i_22])));
                            arr_87 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_19] = ((/* implicit */long long int) ((unsigned long long int) (unsigned short)43643));
                            var_44 += ((/* implicit */unsigned char) (~(var_8)));
                        }
                        for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 2) 
                        {
                            arr_91 [i_23] [i_19] [i_20] [i_19] [i_19] [i_1] = ((/* implicit */unsigned char) arr_31 [i_1] [i_1] [i_1] [i_19] [i_1]);
                            arr_92 [i_19] [i_20] [i_19] [i_2] [i_19] = ((/* implicit */unsigned long long int) ((arr_20 [i_1 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_20] [i_20] [i_2 - 1] [i_1 + 3] [i_1])))));
                        }
                        arr_93 [i_1] [i_2] [i_19] [i_20] = ((/* implicit */unsigned int) arr_16 [i_1] [i_2] [i_19] [i_20] [i_19] [i_1]);
                    }
                } 
            } 
        }
        for (unsigned int i_24 = 0; i_24 < 21; i_24 += 3) 
        {
            var_45 = ((/* implicit */unsigned long long int) var_3);
            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 + 3] [i_1 + 2])) ? (((/* implicit */long long int) 2013183185U)) : (var_1)));
        }
        for (unsigned short i_25 = 0; i_25 < 21; i_25 += 1) 
        {
            arr_99 [i_1] [i_25] &= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_1] [i_1 + 4] [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) 1131783882U)) ? (10377360781368220934ULL) : (arr_45 [i_25] [i_25] [i_25] [i_25] [i_1] [i_1] [i_1])))));
            /* LoopNest 3 */
            for (unsigned short i_26 = 0; i_26 < 21; i_26 += 1) 
            {
                for (unsigned short i_27 = 0; i_27 < 21; i_27 += 2) 
                {
                    for (unsigned int i_28 = 0; i_28 < 21; i_28 += 2) 
                    {
                        {
                            arr_106 [i_26] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [i_1 + 2] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 4]))) <= (arr_100 [i_1] [i_1] [i_1 + 4] [i_1 + 3])));
                            var_47 = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)32396));
                            arr_107 [i_1] [i_25] [i_26] [i_27] [i_26] = ((unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (arr_63 [i_28] [i_26] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        }
                    } 
                } 
            } 
        }
        var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))) : (arr_36 [i_1] [i_1] [i_1] [i_1]))))))));
    }
    for (unsigned long long int i_29 = 1; i_29 < 9; i_29 += 3) 
    {
        var_49 += ((/* implicit */unsigned long long int) -8094496746553763874LL);
        arr_111 [i_29] [i_29] = ((/* implicit */unsigned short) (((~(arr_72 [i_29] [i_29 + 1] [i_29 + 1] [i_29]))) & (((/* implicit */unsigned long long int) var_1))));
        var_50 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_29] [i_29] [i_29] [i_29] [i_29]))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43824)))))) ? (((((/* implicit */_Bool) 2097151U)) ? (((((/* implicit */_Bool) arr_14 [i_29] [i_29] [i_29] [i_29])) ? (arr_31 [i_29] [i_29] [i_29] [i_29] [i_29]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16084661374886086370ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))) : (0U)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_52 [i_29] [i_29 - 1] [i_29] [i_29]))))));
        var_51 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_7)), (5437036720825983756LL)))))) ? (((unsigned long long int) (~(var_4)))) : (max((((/* implicit */unsigned long long int) arr_85 [i_29] [i_29] [i_29] [i_29] [i_29])), (((unsigned long long int) arr_103 [i_29] [i_29]))))));
    }
    /* vectorizable */
    for (unsigned int i_30 = 0; i_30 < 10; i_30 += 3) 
    {
        var_52 = ((/* implicit */_Bool) (-(arr_13 [i_30] [i_30] [i_30])));
        /* LoopSeq 3 */
        for (unsigned char i_31 = 1; i_31 < 7; i_31 += 1) 
        {
            var_53 &= var_12;
            /* LoopNest 2 */
            for (unsigned short i_32 = 1; i_32 < 8; i_32 += 2) 
            {
                for (signed char i_33 = 0; i_33 < 10; i_33 += 3) 
                {
                    {
                        arr_124 [i_30] [0LL] &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_34 = 0; i_34 < 10; i_34 += 1) 
                        {
                            var_54 &= ((/* implicit */unsigned long long int) (!(((arr_7 [i_31] [i_32]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_34] [(unsigned char)18] [i_34] [i_34] [i_34] [i_34])))))));
                            arr_127 [i_34] [i_31] [i_33] [i_32] [i_31] [i_30] = ((/* implicit */unsigned long long int) (-((~(3059696145U)))));
                        }
                        for (signed char i_35 = 0; i_35 < 10; i_35 += 2) 
                        {
                            arr_131 [i_31] [i_31] [i_32] [i_33] [i_35] [i_31] = ((/* implicit */long long int) var_3);
                            var_55 = ((/* implicit */signed char) 3004749001U);
                            arr_132 [i_31] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_30] [i_31] [i_31] [i_32 - 1] [i_33] [i_35])) ? (((/* implicit */int) arr_42 [i_30] [i_31] [i_31] [i_32 + 1] [i_33] [i_35])) : (((/* implicit */int) arr_42 [i_35] [i_31] [i_32 - 1] [i_32] [i_31] [i_30]))));
                        }
                        arr_133 [i_33] [(signed char)0] [i_30] |= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_0))))));
                        var_56 = ((/* implicit */unsigned int) max((var_56), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))));
                        arr_134 [(unsigned short)6] [i_31] [(unsigned short)6] |= ((/* implicit */unsigned long long int) var_7);
                    }
                } 
            } 
        }
        for (long long int i_36 = 0; i_36 < 10; i_36 += 3) /* same iter space */
        {
            var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) var_1))));
            arr_138 [i_30] [i_36] [i_36] = ((((/* implicit */long long int) ((((/* implicit */_Bool) -6492962197912710594LL)) ? (var_2) : (1235271146U)))) ^ (((((/* implicit */_Bool) arr_17 [i_30] [i_30] [i_30] [i_36] [i_36])) ? (var_1) : (((/* implicit */long long int) arr_48 [14LL])))));
        }
        for (long long int i_37 = 0; i_37 < 10; i_37 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_38 = 4; i_38 < 8; i_38 += 3) /* same iter space */
            {
                arr_144 [i_38] [i_38] [i_38] [i_30] = ((long long int) (unsigned short)14997);
                arr_145 [i_30] [i_30] [i_38] [i_30] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (var_12)));
            }
            for (unsigned short i_39 = 4; i_39 < 8; i_39 += 3) /* same iter space */
            {
                var_58 = ((/* implicit */_Bool) (~(arr_31 [i_30] [i_37] [i_39] [0LL] [i_39 + 2])));
                arr_149 [i_37] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)96)) ? (10042327899685393263ULL) : (12862090133514922904ULL)));
                var_59 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_94 [i_30] [i_37] [i_39]))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_40 = 1; i_40 < 8; i_40 += 2) /* same iter space */
            {
                arr_152 [i_30] [i_40] [i_30] [i_30] = ((/* implicit */signed char) arr_78 [i_30] [i_37] [i_40] [i_40]);
                arr_153 [i_40] = ((((/* implicit */_Bool) arr_103 [i_30] [i_37])) ? (((unsigned long long int) arr_11 [i_40] [i_37] [i_30])) : (((/* implicit */unsigned long long int) (-(arr_137 [i_30] [i_40])))));
            }
            for (unsigned int i_41 = 1; i_41 < 8; i_41 += 2) /* same iter space */
            {
                var_60 = ((/* implicit */signed char) min((var_60), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_41 + 1] [i_41 - 1] [i_41 + 1] [i_41 + 2] [i_41 + 1] [i_41 + 1]))) > ((-(3234430803U))))))));
                arr_157 [i_30] [i_37] [i_41] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((-(3059696150U))) : (arr_102 [i_30] [i_37] [i_41])));
            }
        }
        var_61 = (-(406509957597521268ULL));
    }
}
