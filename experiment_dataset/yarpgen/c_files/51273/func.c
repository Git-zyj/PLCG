/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51273
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
    var_16 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) -2060462800)) ? (((/* implicit */unsigned int) var_13)) : (var_11))), (var_9))), (((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_7)), (var_15))) <= (max((((/* implicit */long long int) var_0)), (var_15))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((((/* implicit */long long int) min((arr_6 [i_0] [i_0]), (arr_3 [i_1] [i_0])))) - ((-(-6137471527274231297LL))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_18 &= ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0] [i_2] [i_2])) - (((/* implicit */int) arr_9 [i_2] [i_0] [i_0]))));
                        arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) -2060462800);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] = ((/* implicit */unsigned char) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-61)))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((4041497492U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))))))));
                        var_20 &= ((/* implicit */int) (unsigned char)132);
                        var_21 = ((/* implicit */unsigned short) ((arr_11 [i_1] [i_1]) != (((/* implicit */long long int) arr_0 [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) var_11);
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_5] [i_2]))) - (((253469805U) ^ (((/* implicit */unsigned int) 2060462799))))));
                            var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((((/* implicit */_Bool) (short)384)) ? (((/* implicit */int) arr_9 [i_0] [i_6] [(short)6])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)195))))));
                        }
                        arr_21 [i_0] [i_1] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (632532902U) : (((/* implicit */unsigned int) arr_3 [i_2] [i_1])));
                    }
                    for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        arr_25 [i_1] [i_7] [18] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_7 [i_1]), (((/* implicit */int) arr_13 [6U] [6U] [i_1] [6U] [(signed char)4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_7])) ? (((/* implicit */int) var_10)) : (-2060462807)))) : (min((787477129U), (4041497492U)))));
                        arr_26 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (((-(arr_2 [3LL]))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                        var_25 = max((min((arr_7 [i_2]), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1602))))))), ((-((+(((/* implicit */int) arr_9 [i_7] [i_1] [i_1])))))));
                        var_26 = arr_20 [i_0] [(unsigned short)18] [5LL] [(unsigned short)18];
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            {
                                var_27 &= ((/* implicit */int) max((((((/* implicit */_Bool) ((-7301269481243287791LL) - (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201))) : (arr_19 [i_0] [i_9]))), (((/* implicit */unsigned long long int) var_3))));
                                arr_34 [2] [i_1] [i_2] [i_2] [i_1] [i_9] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6307365377079439300LL)) ? (var_5) : (((/* implicit */unsigned int) arr_3 [(unsigned short)12] [i_0]))))), (min((13852730633411464076ULL), (((/* implicit */unsigned long long int) (short)15186)))))), (((/* implicit */unsigned long long int) (unsigned char)122))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2060462813)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))) : (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (253469805U)))) : (((((/* implicit */_Bool) 3295117305U)) ? (((/* implicit */unsigned long long int) 4035787412U)) : (13852730633411464076ULL)))));
                                arr_42 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0] [i_12])) ? (4041497492U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                                arr_43 [i_0] [i_0] [i_10] [i_11] [i_12] &= ((((/* implicit */_Bool) arr_33 [i_0] [(short)14] [i_10] [i_11] [0LL] [i_12])) ? (2703439987U) : (((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-4301))))));
                                var_29 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4680))) : (arr_18 [i_1] [i_11] [i_10] [i_1] [i_1] [i_1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        for (short i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            {
                                arr_50 [i_1] [11LL] [7] [i_0] = ((/* implicit */unsigned long long int) var_13);
                                var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) 4041497491U)) ? (((/* implicit */int) (signed char)127)) : (-2060462799)));
                                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1615)) % (((/* implicit */int) (signed char)42))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [(signed char)19] [i_0] [i_0])))));
                                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (~(arr_49 [i_0] [9] [i_0] [i_0] [2U]))))));
                            }
                        } 
                    } 
                    arr_51 [i_1] [(short)16] [i_10] = ((/* implicit */int) ((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            {
                                arr_59 [(short)16] [i_16] [14] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [(short)15] [i_15] [i_16] [i_15])) <= (((/* implicit */int) (unsigned short)52771)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_30 [(short)6] [i_1] [(short)6] [i_1] [i_0])) / (arr_3 [(signed char)4] [i_1]))))));
                                var_33 = ((/* implicit */int) arr_32 [i_16] [i_10] [10LL] [i_10] [i_1] [i_0] [i_0]);
                                var_34 ^= ((/* implicit */long long int) (short)-4680);
                            }
                        } 
                    } 
                }
                var_35 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)40018))));
                arr_60 [i_1] [i_1] = ((/* implicit */unsigned char) (short)-6362);
            }
        } 
    } 
    var_36 = ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned int) var_14))));
    var_37 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 4 */
    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            var_38 = 2060462799;
            var_39 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_62 [i_17])) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_64 [i_17] [(_Bool)1])) >= (((/* implicit */int) arr_63 [8LL]))))) - (((/* implicit */int) ((((/* implicit */_Bool) (short)-4314)) || (((/* implicit */_Bool) arr_62 [(unsigned char)20]))))))))));
        }
        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 2) 
            {
                for (unsigned short i_21 = 0; i_21 < 24; i_21 += 2) 
                {
                    {
                        arr_74 [i_19] [i_19] [(unsigned short)11] [i_21] &= ((/* implicit */signed char) ((((/* implicit */int) ((((arr_61 [i_19] [i_19]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_67 [i_17] [i_20])))) < (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_70 [1U])) : (((/* implicit */int) (short)-29549))))))) == (((/* implicit */int) (short)4679))));
                        var_40 |= ((/* implicit */long long int) (short)4301);
                        arr_75 [(unsigned char)21] [i_19] [17] [i_19] [i_20] [i_21] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_72 [10ULL] [i_20] [i_19] [10ULL]))));
                    }
                } 
            } 
            var_41 ^= ((/* implicit */unsigned short) (signed char)51);
        }
        /* LoopNest 3 */
        for (signed char i_22 = 0; i_22 < 24; i_22 += 2) 
        {
            for (long long int i_23 = 0; i_23 < 24; i_23 += 2) 
            {
                for (unsigned short i_24 = 0; i_24 < 24; i_24 += 4) 
                {
                    {
                        arr_85 [i_24] [i_23] [i_23] [i_22] [i_17] = (+(((/* implicit */int) var_0)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_25 = 0; i_25 < 24; i_25 += 4) 
                        {
                            var_42 = ((/* implicit */unsigned short) var_9);
                            arr_88 [i_25] [i_24] [i_17] [i_22] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_79 [i_24] [i_23] [i_22])) ? (((((/* implicit */unsigned long long int) arr_72 [i_17] [i_17] [i_17] [i_17])) - (7405455162562994306ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)4679)))))))));
                            var_43 = ((/* implicit */unsigned int) ((((var_14) && (((/* implicit */_Bool) 2147483647)))) || (((/* implicit */_Bool) (unsigned short)32469))));
                        }
                    }
                } 
            } 
        } 
        arr_89 [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_84 [(short)1] [(short)1] [i_17] [i_17] [i_17]), (((/* implicit */int) ((((/* implicit */_Bool) arr_65 [i_17] [i_17] [i_17])) && (((/* implicit */_Bool) -163540119)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (16831252174220034734ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_63 [i_17]), (arr_63 [i_17])))))));
        arr_90 [i_17] = ((/* implicit */long long int) 11041288911146557313ULL);
    }
    for (unsigned int i_26 = 0; i_26 < 21; i_26 += 2) /* same iter space */
    {
        arr_94 [i_26] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 879794854)) ? (((/* implicit */int) (short)-4679)) : (((/* implicit */int) arr_76 [i_26] [(signed char)23]))))) ? (((arr_87 [(signed char)19] [i_26] [i_26] [i_26] [i_26]) + (min((((/* implicit */long long int) var_1)), (1559445414910890907LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((arr_62 [(unsigned char)12]) >= (((/* implicit */int) var_1))))))))));
        arr_95 [i_26] = ((23ULL) + (((((/* implicit */_Bool) arr_79 [i_26] [i_26] [i_26])) ? (arr_79 [i_26] [i_26] [i_26]) : (arr_79 [(short)20] [i_26] [i_26]))));
        arr_96 [i_26] = ((/* implicit */long long int) min((arr_78 [i_26] [i_26]), ((-(((/* implicit */int) arr_91 [i_26] [i_26]))))));
    }
    for (unsigned int i_27 = 0; i_27 < 21; i_27 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_28 = 0; i_28 < 21; i_28 += 4) 
        {
            for (long long int i_29 = 0; i_29 < 21; i_29 += 3) 
            {
                {
                    var_44 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_84 [i_27] [i_27] [i_28] [i_28] [i_29])), (((arr_92 [i_27] [i_27]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210)))))))) ? (max((arr_92 [i_27] [i_29]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */int) var_7))))))) : (((/* implicit */long long int) max((max((((/* implicit */int) (short)29543)), (arr_98 [i_27]))), (max((((/* implicit */int) var_10)), (arr_98 [15]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_30 = 0; i_30 < 21; i_30 += 2) 
                    {
                        var_45 = ((/* implicit */signed char) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) 879794854)), (11041288911146557310ULL))) >= (arr_97 [i_30])))) <= (arr_71 [i_27])));
                        arr_112 [i_29] [i_29] [i_29] [i_29] [i_29] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_78 [i_27] [i_28])))))))), (18446744073709551607ULL)));
                    }
                }
            } 
        } 
        var_46 = ((/* implicit */int) max((6195218470871002037LL), (-1LL)));
    }
    for (unsigned long long int i_31 = 0; i_31 < 12; i_31 += 3) 
    {
        var_47 = ((/* implicit */int) 23ULL);
        /* LoopSeq 3 */
        for (int i_32 = 0; i_32 < 12; i_32 += 3) 
        {
            var_48 = ((/* implicit */_Bool) (-(((arr_80 [i_32] [i_32] [i_31] [i_31]) / (((/* implicit */int) arr_63 [i_31]))))));
            /* LoopNest 2 */
            for (int i_33 = 0; i_33 < 12; i_33 += 2) 
            {
                for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                {
                    {
                        var_49 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_27 [i_31] [i_31] [i_31] [i_31] [i_31]), (arr_27 [i_31] [i_32] [i_32] [i_34] [i_31])))), (((((/* implicit */int) arr_27 [i_31] [i_32] [(short)6] [i_34] [i_33])) | (((/* implicit */int) (_Bool)0))))));
                        arr_122 [i_32] [i_33] [i_32] [i_32] [i_32] [i_31] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_28 [i_31] [i_31] [i_33] [i_31]) - (((/* implicit */unsigned long long int) -1))))) ? (arr_28 [i_31] [i_31] [i_33] [i_31]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23085)))));
                    }
                } 
            } 
        }
        for (unsigned char i_35 = 0; i_35 < 12; i_35 += 2) 
        {
            var_50 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_101 [i_31] [i_31] [i_35])), (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (arr_41 [6] [i_35] [i_35] [i_35] [i_35] [18LL])))) & ((~(23ULL)))))));
            arr_126 [i_31] [i_31] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-4679)) ? (max((((((/* implicit */int) arr_105 [i_31] [i_31] [(unsigned short)4] [i_35])) / (((/* implicit */int) var_4)))), (((/* implicit */int) arr_20 [16] [i_31] [16] [(_Bool)1])))) : (-969064235)));
            arr_127 [i_31] = ((/* implicit */int) (short)4679);
        }
        /* vectorizable */
        for (unsigned long long int i_36 = 0; i_36 < 12; i_36 += 1) 
        {
            arr_130 [(signed char)3] [i_36] [i_36] = ((/* implicit */int) ((((/* implicit */_Bool) 1797195828)) ? (((/* implicit */unsigned long long int) arr_98 [(_Bool)1])) : (((((/* implicit */_Bool) arr_106 [i_31] [i_36])) ? (11041288911146557298ULL) : (18446744073709551615ULL)))));
            arr_131 [i_36] [i_36] [i_31] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) -2085993724907951241LL)) ? (-1) : (arr_84 [i_31] [i_31] [i_31] [i_36] [i_36])))));
            /* LoopSeq 2 */
            for (unsigned short i_37 = 0; i_37 < 12; i_37 += 2) 
            {
                var_51 = (unsigned char)57;
                var_52 *= ((/* implicit */unsigned long long int) arr_105 [i_31] [6LL] [i_31] [i_31]);
                /* LoopSeq 3 */
                for (unsigned long long int i_38 = 0; i_38 < 12; i_38 += 4) 
                {
                    arr_136 [i_36] [i_36] |= ((/* implicit */unsigned long long int) ((arr_134 [i_38] [4LL] [i_37] [i_37] [i_31] [i_31]) % (((/* implicit */long long int) ((((/* implicit */_Bool) -969064204)) ? (((/* implicit */int) arr_73 [i_36] [i_36] [i_37] [i_36] [i_36])) : (((/* implicit */int) var_7)))))));
                    var_53 = ((/* implicit */long long int) ((var_11) != (((/* implicit */unsigned int) ((/* implicit */int) arr_102 [i_36] [12] [i_37])))));
                }
                for (int i_39 = 0; i_39 < 12; i_39 += 2) 
                {
                    var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (501133446972264856LL) : (((/* implicit */long long int) arr_108 [i_31] [i_31] [(unsigned short)20] [i_37] [i_39]))));
                    var_55 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 23ULL)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) != (arr_110 [i_31])))))));
                }
                for (unsigned long long int i_40 = 0; i_40 < 12; i_40 += 1) 
                {
                    var_56 ^= ((/* implicit */short) -12);
                    var_57 = ((/* implicit */unsigned short) var_10);
                }
                arr_142 [i_37] [(_Bool)1] [i_31] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (arr_65 [i_37] [i_36] [i_31])));
                /* LoopNest 2 */
                for (int i_41 = 0; i_41 < 12; i_41 += 4) 
                {
                    for (signed char i_42 = 0; i_42 < 12; i_42 += 2) 
                    {
                        {
                            arr_147 [i_42] [i_41] [8LL] [i_36] [i_31] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)12704))))) ? (((((/* implicit */_Bool) arr_139 [i_31] [i_37] [i_37] [i_41])) ? (arr_87 [i_31] [2] [i_37] [2] [2]) : (arr_2 [12ULL]))) : (((/* implicit */long long int) (+(var_5))))));
                            var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_103 [i_42] [i_37])) ? (((/* implicit */int) var_1)) : (arr_80 [i_31] [i_37] [i_41] [i_42]))))));
                            var_59 &= ((/* implicit */signed char) ((((/* implicit */int) arr_113 [i_31])) % (arr_78 [i_31] [i_36])));
                            var_60 ^= ((/* implicit */short) (-(arr_0 [i_31])));
                        }
                    } 
                } 
            }
            for (short i_43 = 0; i_43 < 12; i_43 += 4) 
            {
                var_61 -= ((/* implicit */long long int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (unsigned char)0))));
                var_62 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_146 [(unsigned char)0] [(unsigned char)0] [i_31] [i_36] [i_43] [i_43])) ? (((((/* implicit */int) (unsigned short)9729)) + (arr_78 [i_31] [i_31]))) : (((/* implicit */int) arr_13 [i_36] [i_36] [i_43] [i_36] [i_43]))));
            }
        }
        arr_152 [i_31] = ((/* implicit */long long int) max((((((/* implicit */_Bool) 6195218470871002037LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26496))) : (1921021339U))), (((/* implicit */unsigned int) arr_121 [i_31] [i_31] [i_31] [i_31]))));
        arr_153 [i_31] = arr_84 [i_31] [i_31] [i_31] [i_31] [i_31];
        arr_154 [i_31] = ((/* implicit */short) (~(((/* implicit */int) arr_99 [i_31] [i_31]))));
    }
}
