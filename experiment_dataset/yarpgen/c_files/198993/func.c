/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198993
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned char i_3 = 3; i_3 < 9; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) arr_14 [i_0]);
                            var_20 |= ((/* implicit */_Bool) (unsigned char)30);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_5 = 3; i_5 < 9; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    {
                        var_21 = (unsigned char)10;
                        var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(arr_1 [i_1])))) ? (((/* implicit */unsigned long long int) arr_11 [i_5] [i_5 - 3] [i_5] [i_5 - 1])) : (((((/* implicit */_Bool) arr_2 [i_6])) ? (var_3) : (15964664970502509399ULL)))))));
                        var_23 = ((/* implicit */unsigned int) var_10);
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) ((arr_9 [i_0]) ? ((+(((/* implicit */int) arr_9 [i_0])))) : (((((/* implicit */int) (short)32767)) * (((/* implicit */int) arr_9 [i_0]))))));
        }
        arr_22 [i_0] [i_0] = ((/* implicit */_Bool) min(((~(15964664970502509399ULL))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14133))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)96)) || (((/* implicit */_Bool) 8902840306809189934LL))))))))));
        /* LoopSeq 3 */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0]))) & (((((/* implicit */long long int) arr_7 [i_0])) & (9223372036854775807LL)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_1))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_7] [6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_21 [i_0] [i_7] [i_0] [i_7]))))) + (8902840306809189934LL))))))));
            var_26 = 4611404543450677248LL;
            arr_25 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13455)) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_7] [i_0] [i_0])) < (((/* implicit */int) arr_5 [(unsigned short)8] [(unsigned short)8] [i_0]))))) : (((/* implicit */int) var_7))))) ? (2304569671U) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) var_12))))))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                for (unsigned int i_9 = 2; i_9 < 6; i_9 += 3) 
                {
                    {
                        arr_31 [i_7] [i_7] [i_9] [i_7] = ((/* implicit */unsigned int) (unsigned char)228);
                        var_27 = ((/* implicit */_Bool) var_15);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_10 = 1; i_10 < 8; i_10 += 4) 
            {
                arr_34 [i_0] [i_0] [(unsigned char)7] [i_10] = ((/* implicit */signed char) (~(arr_18 [i_0] [i_7])));
                var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)61440)) & (((/* implicit */int) (!(var_0))))))), (15964664970502509384ULL)));
            }
            for (signed char i_11 = 3; i_11 < 9; i_11 += 2) 
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_0] [i_11] [i_11 + 1])) ? (max((arr_19 [i_7] [(unsigned char)2] [i_7] [i_11 + 1] [i_11 - 2]), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13941))) < (var_16)))))));
                /* LoopNest 2 */
                for (signed char i_12 = 2; i_12 < 8; i_12 += 2) 
                {
                    for (long long int i_13 = 4; i_13 < 8; i_13 += 4) 
                    {
                        {
                            arr_42 [i_12] |= ((unsigned short) ((((/* implicit */int) (unsigned char)100)) >= (((/* implicit */int) (unsigned short)51595))));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)51584)) ? (arr_17 [i_0] [i_7] [i_11] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
                        }
                    } 
                } 
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    var_31 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (3504989730U)))) ? (max((((/* implicit */int) (short)-32763)), (var_8))) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((_Bool)1), (arr_46 [i_7]))))))));
                    var_32 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0])))))) ? (((((/* implicit */_Bool) (signed char)-70)) ? (-1653493819120453356LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                }
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 2; i_17 < 8; i_17 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_15)) + (((((/* implicit */long long int) var_12)) & (max((3049271164412987319LL), (((/* implicit */long long int) (_Bool)1))))))));
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (-(-39416523321834913LL))))));
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_7] [i_7] [(_Bool)1] [i_17])) + (((/* implicit */int) (unsigned char)72))))) ? (((/* implicit */int) arr_35 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) 9223372036854775791LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))) < (((/* implicit */int) var_13)))))));
                        arr_56 [i_0] [i_0] |= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_14] [i_14 - 1] [i_14] [i_14 - 1])) ? (((((/* implicit */_Bool) arr_28 [i_16] [i_17])) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21549))))));
                    }
                    var_36 = ((/* implicit */signed char) arr_52 [i_0] [i_7] [i_14] [i_14] [1LL] [i_7]);
                    var_37 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(unsigned short)2] [(unsigned char)7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [1LL] [i_14 - 1]))) : (var_4)));
                }
                var_38 |= ((/* implicit */unsigned short) (-(((((((/* implicit */long long int) ((/* implicit */int) (short)7022))) & (var_6))) + (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))));
            }
        }
        for (unsigned short i_18 = 0; i_18 < 10; i_18 += 4) 
        {
            arr_60 [i_18] [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
            arr_61 [i_0] [i_18] [i_18] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)126)) * (((/* implicit */int) arr_9 [i_0]))))), (((unsigned int) arr_9 [i_18]))));
            var_39 = (+(((/* implicit */int) (short)32755)));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 10; i_19 += 2) 
            {
                for (long long int i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    {
                        var_40 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) > (min((((/* implicit */unsigned long long int) (unsigned char)12)), (max((2718807390643833695ULL), (((/* implicit */unsigned long long int) (unsigned short)13938))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_21 = 0; i_21 < 10; i_21 += 1) 
                        {
                            var_41 |= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned char)249))))));
                            var_42 = ((unsigned int) (_Bool)0);
                            arr_71 [i_19] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((8902840306809189948LL) | (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) arr_26 [i_19]))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_5))))), (4ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                            var_43 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_14 [i_0]))))));
                        }
                        for (unsigned short i_22 = 0; i_22 < 10; i_22 += 4) 
                        {
                            var_44 = ((/* implicit */unsigned int) ((((min((1ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) >= (((/* implicit */unsigned long long int) var_16)))) ? (max((((/* implicit */int) arr_29 [i_22] [i_22] [i_22])), (((((/* implicit */_Bool) -2654769076003612676LL)) ? (((/* implicit */int) arr_28 [i_22] [i_22])) : (((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) var_13))));
                            arr_74 [(unsigned char)9] [i_18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)2])))))) : (arr_33 [i_0]))))));
                            arr_75 [i_0] [i_20] [(_Bool)1] [i_20] [i_20] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_53 [i_0] [i_18] [i_22] [i_0] [i_20] [i_22]))))) ? ((~(((/* implicit */int) arr_43 [i_19] [i_20])))) : (((((/* implicit */_Bool) ((short) (unsigned short)13941))) ? (arr_24 [i_0] [1ULL] [i_20]) : (((/* implicit */int) var_10))))));
                            var_45 = ((/* implicit */short) min((((/* implicit */unsigned short) (_Bool)1)), (arr_48 [i_22] [i_20] [i_19] [i_18] [i_0])));
                            arr_76 [i_0] [i_18] [i_19] [i_19] [i_22] [i_0] = ((/* implicit */short) (_Bool)1);
                        }
                        for (unsigned char i_23 = 0; i_23 < 10; i_23 += 4) 
                        {
                            var_46 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 5822899850877703839ULL)) ? (((/* implicit */int) arr_10 [i_18] [i_0] [i_19] [i_23])) : (((/* implicit */int) (unsigned short)6)))), (((/* implicit */int) (unsigned short)13941))));
                            arr_79 [i_23] [(short)6] [5LL] [i_18] [i_0] [i_0] = ((/* implicit */int) var_6);
                            var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) ((((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_0] [(signed char)0] [i_19] [i_19] [i_23]))) | (15964664970502509403ULL)))) ? ((((_Bool)1) ? (arr_41 [i_0] [i_0] [i_19] [i_0] [i_0] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) + (9223372036854775807LL))) << (((((/* implicit */int) var_17)) - (24))))))));
                        }
                        arr_80 [i_20] [i_19] [i_19] [i_18] [i_18] [i_0] = ((/* implicit */unsigned char) ((_Bool) arr_26 [i_18]));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_24 = 0; i_24 < 10; i_24 += 1) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (long long int i_26 = 1; i_26 < 9; i_26 += 4) 
                    {
                        {
                            arr_88 [i_26] [i_18] [0U] [i_26] = max(((~(3568782930318208526LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_39 [i_0])) : ((~(((/* implicit */int) var_17))))))));
                            var_48 = ((/* implicit */long long int) max((((_Bool) var_13)), (((_Bool) arr_72 [6U] [i_26] [i_24] [i_25] [i_26 - 1] [4U]))));
                            arr_89 [i_26] [i_25] [i_24] [i_18] [i_26] = ((/* implicit */signed char) var_10);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_27 = 0; i_27 < 10; i_27 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_28 = 0; i_28 < 10; i_28 += 4) 
            {
                var_49 = ((/* implicit */signed char) (unsigned short)27923);
                /* LoopSeq 3 */
                for (short i_29 = 0; i_29 < 10; i_29 += 2) /* same iter space */
                {
                    var_50 |= ((/* implicit */short) var_9);
                    arr_97 [i_29] [i_28] [i_27] [i_0] [i_0] = ((/* implicit */short) min((arr_32 [i_0] [i_27] [i_27]), (((/* implicit */long long int) (((((~(((/* implicit */int) (unsigned char)148)))) + (2147483647))) >> (((/* implicit */int) var_17)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_30 = 0; i_30 < 10; i_30 += 1) 
                    {
                        arr_100 [i_27] |= ((/* implicit */signed char) var_17);
                        var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_48 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_70 [i_0] [(short)1] [i_27] [i_28] [i_29] [i_30]))))))));
                        var_52 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_43 [i_0] [i_30])))) & (((/* implicit */int) var_0))));
                        var_53 |= ((/* implicit */int) (~(max((var_3), (((/* implicit */unsigned long long int) (short)-32767))))));
                    }
                    for (unsigned short i_31 = 3; i_31 < 6; i_31 += 4) 
                    {
                        arr_104 [i_31] [i_29] [i_28] [(short)5] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_65 [i_27] [i_27] [i_29]))))) ? (((/* implicit */long long int) (+(arr_16 [i_31] [i_31] [i_31 + 3] [i_31 + 3] [i_31 - 1])))) : ((~(arr_11 [i_28] [i_28] [i_28] [i_31 + 3])))));
                        var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) (signed char)16))));
                    }
                }
                /* vectorizable */
                for (short i_32 = 0; i_32 < 10; i_32 += 2) /* same iter space */
                {
                    var_55 = ((/* implicit */short) ((-3610901172325330937LL) / (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_28])) * (((/* implicit */int) var_7)))))));
                    var_56 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_94 [i_0] [i_32] [i_28] [i_0])) ? (3568782930318208526LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned int) arr_16 [i_0] [4LL] [i_27] [i_28] [i_32])) : (var_16));
                    var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) ((((/* implicit */int) arr_99 [i_0] [i_0] [i_27] [i_28] [i_32] [i_27])) < (((/* implicit */int) ((unsigned short) var_18))))))));
                    var_58 = ((/* implicit */int) var_18);
                }
                for (int i_33 = 0; i_33 < 10; i_33 += 1) 
                {
                    arr_111 [i_0] [i_27] [i_28] [(signed char)9] [i_33] |= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_58 [i_33])) ? (max((((/* implicit */unsigned long long int) arr_82 [i_0] [0])), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_34 = 4; i_34 < 9; i_34 += 2) /* same iter space */
                    {
                        arr_115 [i_0] [i_28] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_30 [i_0] [i_28] [i_34]) != (4294967295U)))) + ((-(-1162684848)))));
                        var_59 = ((/* implicit */long long int) ((((/* implicit */int) arr_50 [i_34] [(short)2] [6LL] [i_34] [i_34] [i_34 - 4])) < (((/* implicit */int) arr_102 [i_34] [i_34] [i_34] [i_34 - 3] [i_34]))));
                        var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_94 [i_34] [i_33] [i_28] [i_27])) ? ((~(((/* implicit */int) arr_105 [i_0] [i_0])))) : (((/* implicit */int) (_Bool)0))));
                    }
                    for (long long int i_35 = 4; i_35 < 9; i_35 += 2) /* same iter space */
                    {
                        var_61 |= ((/* implicit */unsigned int) ((_Bool) arr_109 [i_35] [(signed char)4] [i_28] [i_28]));
                        var_62 = ((/* implicit */int) 1654427883U);
                        var_63 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((5337638262532428872LL), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_48 [i_0] [i_27] [(unsigned char)4] [(unsigned char)4] [i_35])) ? (549755813887ULL) : (((/* implicit */unsigned long long int) 8744866465548436401LL)))) : (((((/* implicit */_Bool) var_9)) ? (arr_77 [i_35]) : (((/* implicit */unsigned long long int) 8744866465548436403LL))))))) ? (((/* implicit */long long int) 4151185020U)) : (min((((long long int) 2059353434U)), (((/* implicit */long long int) ((10U) & (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                        arr_120 [i_0] [2] [i_33] [6LL] = ((/* implicit */int) (~((-(4699524343037864938ULL)))));
                        arr_121 [i_0] [i_28] [i_35] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8744866465548436399LL)) ? (((/* implicit */int) ((arr_118 [i_35 - 1] [(_Bool)1] [i_33] [i_28] [i_27] [i_27] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : ((~(((/* implicit */int) arr_112 [i_0] [0ULL] [i_0] [i_0] [i_0]))))))) == (((((/* implicit */_Bool) 18446743523953737713ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_93 [i_0] [i_0] [i_0] [i_0])), (var_7))))) : (arr_18 [i_35 + 1] [i_35 - 3])))));
                    }
                }
            }
            arr_122 [i_0] [i_0] |= ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_84 [i_0] [i_27] [i_27] [i_27])))));
        }
    }
    for (unsigned short i_36 = 2; i_36 < 13; i_36 += 2) 
    {
        var_64 |= ((/* implicit */short) (+(min((arr_123 [i_36 - 2]), (arr_123 [i_36 - 2])))));
        var_65 = ((/* implicit */short) min((var_65), (((/* implicit */short) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_2)), (var_3))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_124 [i_36 - 2] [i_36 + 1])))))))))))));
    }
    var_66 = ((/* implicit */unsigned short) max((var_66), (((/* implicit */unsigned short) (_Bool)1))));
}
