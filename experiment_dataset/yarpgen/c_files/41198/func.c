/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41198
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_1] = var_10;
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((26ULL), (((/* implicit */unsigned long long int) var_10))))))))) < (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_4])) * (((/* implicit */int) var_3))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (20ULL)))))));
                                var_16 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 26ULL)))))) & (((-4453014504791022046LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-19)))))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */signed char) ((2174415436U) <= (arr_1 [i_0])))), ((signed char)-19)))) / (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3]))))));
                                arr_17 [i_0] = (~(-4453014504791022027LL));
                                arr_18 [i_0] [i_1] [(unsigned short)3] [(unsigned short)3] [i_4] = ((/* implicit */_Bool) max((arr_1 [(short)12]), (((min((((/* implicit */unsigned int) arr_2 [i_3] [i_0])), (var_9))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)67)))))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] = ((/* implicit */signed char) min((((arr_5 [i_0] [i_0]) * (((/* implicit */unsigned long long int) arr_15 [19ULL] [i_0] [i_1] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) var_2))))))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((max((((((/* implicit */int) arr_14 [i_2])) * (((/* implicit */int) var_5)))), (((/* implicit */int) arr_0 [i_2])))), (((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_0])))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) * (((((/* implicit */int) var_3)) * (((((/* implicit */int) var_13)) * (((/* implicit */int) var_3))))))));
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
    {
        arr_23 [6U] = ((/* implicit */signed char) ((_Bool) ((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (arr_21 [10ULL])))));
        arr_24 [i_5] = ((/* implicit */unsigned short) var_4);
        arr_25 [i_5] = ((/* implicit */unsigned long long int) arr_20 [i_5]);
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((arr_22 [(unsigned short)7]), (min(((+(((/* implicit */int) var_10)))), (((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned short)2048)))))))))));
    }
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) max((arr_20 [(short)16]), (((/* implicit */int) var_5)))))))));
        var_22 += ((/* implicit */unsigned char) arr_27 [i_6]);
        arr_28 [i_6] = ((/* implicit */short) ((((arr_20 [i_6]) / (((/* implicit */int) (unsigned short)2048)))) * (((((((/* implicit */_Bool) arr_26 [i_6] [i_6])) ? (-1) : (arr_21 [i_6]))) * ((~(((/* implicit */int) var_14))))))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_8 = 3; i_8 < 20; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (long long int i_10 = 4; i_10 < 20; i_10 += 3) 
                    {
                        {
                            var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_8 - 2] [i_8 + 1] [i_8 + 1] [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((~(0ULL)))));
                            var_24 -= ((/* implicit */unsigned long long int) ((int) var_13));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                var_25 += (!(((/* implicit */_Bool) -4453014504791022027LL)));
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_1))));
            }
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((arr_27 [i_6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31796)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_6] [i_7] [i_7] [i_6])))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_7] [i_7] [i_7] [i_6])) ? (arr_30 [i_6]) : (((/* implicit */int) var_10))))) / (((unsigned int) 1588606556219688197LL))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_12 = 1; i_12 < 20; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        {
                            var_28 -= ((arr_34 [i_6] [i_6] [i_12 + 2]) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_31 [i_6] [i_6])))));
                            arr_55 [i_14] [(unsigned short)4] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) (-(1099478073344ULL)));
                            var_29 |= ((/* implicit */int) ((2147483647) < (((/* implicit */int) var_6))));
                        }
                    } 
                } 
                var_30 -= ((/* implicit */unsigned int) (-(arr_46 [i_6] [i_12 + 2] [i_6] [9ULL])));
            }
            for (short i_15 = 2; i_15 < 21; i_15 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    for (long long int i_17 = 0; i_17 < 23; i_17 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) max((min((arr_58 [i_15 - 1] [i_15 - 2] [i_15 - 1] [i_15 + 1]), (arr_58 [i_15 + 1] [i_15 + 1] [i_15 - 2] [i_15 - 2]))), (((/* implicit */unsigned int) var_15))));
                            arr_65 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_15] [i_7])) ? (((/* implicit */unsigned long long int) (+(2780727225U)))) : (max((7713678745534878788ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))))));
                            var_32 = max((((/* implicit */signed char) ((18446744073709551590ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))), (arr_57 [i_15]));
                            var_33 = ((/* implicit */unsigned long long int) var_1);
                            arr_66 [i_15] [i_7] [(unsigned short)8] = arr_59 [i_17] [13] [19ULL] [i_15];
                        }
                    } 
                } 
                var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) arr_47 [i_15 + 2] [i_15 - 1] [i_15 - 2])))))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_71 [6LL] [i_7] [i_18] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 4453014504791022002LL)) * (max((5192798033064491684ULL), (((/* implicit */unsigned long long int) (signed char)-100))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_19 = 0; i_19 < 23; i_19 += 2) /* same iter space */
                {
                    var_35 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_57 [i_6]))) != (arr_44 [(unsigned short)21] [i_7] [i_18] [i_19])));
                    /* LoopSeq 1 */
                    for (signed char i_20 = 0; i_20 < 23; i_20 += 2) 
                    {
                        var_36 += ((/* implicit */unsigned short) arr_30 [i_7]);
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) arr_51 [i_6]))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_18])) ? (4503565267632128ULL) : (((/* implicit */unsigned long long int) 2570860804U))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_21 = 0; i_21 < 23; i_21 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) var_14))));
                    arr_80 [i_6] [i_7] [i_18] [i_7] = ((/* implicit */unsigned long long int) var_1);
                    arr_81 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_76 [(signed char)19] [18LL] [(unsigned short)1] [i_21] [18LL] [i_21] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_74 [(_Bool)1])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 4) 
                    {
                        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((arr_30 [i_6]) + (688112097))))))));
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_64 [i_6] [i_7] [i_18] [i_21]))));
                        var_42 -= ((/* implicit */unsigned char) arr_47 [22ULL] [i_7] [(_Bool)1]);
                    }
                    for (short i_23 = 1; i_23 < 21; i_23 += 2) 
                    {
                        var_43 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) var_7))));
                        var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_57 [i_6])) ? (((/* implicit */int) arr_57 [i_21])) : (((/* implicit */int) arr_57 [i_21])))))));
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_48 [i_23] [i_23 + 2] [i_23 + 1]))));
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_77 [i_6] [i_6] [i_18] [i_23 + 2] [i_23])) & (((/* implicit */int) var_7))));
                        var_47 = ((/* implicit */int) ((4453014504791022014LL) << (((((/* implicit */int) arr_40 [i_23] [i_23] [i_23 - 1] [i_23] [i_23] [i_23] [i_23])) - (15510)))));
                    }
                }
            }
            /* vectorizable */
            for (unsigned int i_24 = 4; i_24 < 20; i_24 += 2) 
            {
                var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_24 - 4])) ? (((/* implicit */int) arr_43 [i_24 + 2])) : (((/* implicit */int) var_11))));
                /* LoopSeq 2 */
                for (long long int i_25 = 0; i_25 < 23; i_25 += 1) 
                {
                    arr_94 [i_24] [i_24] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    arr_95 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_13))) >= (((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                }
                for (short i_26 = 0; i_26 < 23; i_26 += 3) 
                {
                    var_49 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_68 [i_24] [i_24 - 1] [i_24 - 1] [i_24 - 1])) && (((/* implicit */_Bool) arr_68 [i_26] [i_24] [i_24 - 3] [i_24 - 4]))));
                    var_50 = ((/* implicit */signed char) max((var_50), (((signed char) arr_53 [i_24] [i_24 - 2] [(unsigned char)4] [i_24] [i_24 + 3] [i_24]))));
                    var_51 = ((/* implicit */signed char) ((((/* implicit */int) (short)0)) <= (((/* implicit */int) (short)-32755))));
                }
            }
        }
    }
    for (signed char i_27 = 0; i_27 < 19; i_27 += 2) 
    {
        var_52 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_50 [i_27] [i_27])) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [21ULL] [i_27]))) : (arr_64 [i_27] [i_27] [i_27] [i_27])))));
        /* LoopSeq 1 */
        for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_29 = 0; i_29 < 19; i_29 += 1) 
            {
                var_53 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) (unsigned short)1024)))));
                var_54 = 1724106491U;
                var_55 += ((/* implicit */int) 2570860804U);
            }
            /* vectorizable */
            for (long long int i_30 = 1; i_30 < 18; i_30 += 3) 
            {
                arr_109 [i_28] [i_28 - 1] [i_28 - 1] [i_28] = ((/* implicit */unsigned int) var_7);
                arr_110 [i_27] [i_28] [i_30] [15U] = ((/* implicit */unsigned int) 14ULL);
            }
            /* vectorizable */
            for (unsigned char i_31 = 0; i_31 < 19; i_31 += 2) 
            {
                var_56 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_27] [i_28 - 1])) << (((((16ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) - (18446744073709430862ULL)))));
                /* LoopSeq 2 */
                for (short i_32 = 0; i_32 < 19; i_32 += 3) 
                {
                    var_57 = ((/* implicit */_Bool) var_11);
                    var_58 = ((/* implicit */_Bool) ((unsigned short) var_15));
                    arr_115 [i_32] [i_28] [i_28] [i_27] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_28 - 1] [i_28 - 1] [i_28 - 1]))) * (arr_29 [i_28 - 1] [i_28 - 1]));
                }
                for (signed char i_33 = 2; i_33 < 18; i_33 += 2) 
                {
                    var_59 = ((_Bool) var_4);
                    var_60 = ((/* implicit */signed char) arr_4 [i_27]);
                    arr_118 [i_28] [i_31] [i_31] [i_28] [i_28] = ((/* implicit */short) ((((/* implicit */int) arr_39 [i_28 - 1] [i_28 - 1])) << (((/* implicit */int) arr_39 [i_28 - 1] [i_28 - 1]))));
                    /* LoopSeq 2 */
                    for (signed char i_34 = 0; i_34 < 19; i_34 += 4) 
                    {
                        arr_121 [i_27] [i_27] [i_31] [i_31] [i_33] [i_28] [i_34] = ((/* implicit */signed char) arr_82 [i_28] [i_33 - 1] [i_31] [i_28 - 1] [i_28]);
                        var_61 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_114 [i_28 - 1] [i_28 - 1] [i_33 - 2] [i_33] [i_33] [i_34])) ? (arr_116 [i_34] [i_33 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_114 [i_28 - 1] [i_28 - 1] [i_33 - 1] [i_34] [i_34] [i_34])))));
                    }
                    for (unsigned char i_35 = 1; i_35 < 16; i_35 += 2) 
                    {
                        var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_117 [i_31])) && (var_5))) || ((!(((/* implicit */_Bool) arr_74 [i_27])))))))));
                        var_63 = ((/* implicit */short) max((var_63), (((/* implicit */short) ((arr_36 [i_33] [i_33 - 2] [i_33]) ? (((/* implicit */int) arr_36 [i_27] [i_33 - 1] [i_27])) : (((/* implicit */int) arr_76 [i_33] [i_33 + 1] [i_33 - 2] [11] [i_33] [i_33 + 1] [i_33 - 2])))))));
                    }
                }
                arr_126 [i_27] [i_27] [i_28] [i_27] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_113 [i_31])))) || ((((_Bool)1) || (((/* implicit */_Bool) var_11))))));
                arr_127 [i_27] [i_28] [i_31] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_116 [i_28] [i_28 - 1])) ? (-4453014504791022027LL) : (arr_9 [i_28] [i_28 - 1] [0U] [i_28])));
            }
            /* LoopNest 3 */
            for (int i_36 = 3; i_36 < 16; i_36 += 2) 
            {
                for (int i_37 = 0; i_37 < 19; i_37 += 4) 
                {
                    for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                    {
                        {
                            var_64 = ((short) ((int) (signed char)-108));
                            var_65 = ((/* implicit */signed char) 71916856549572608ULL);
                        }
                    } 
                } 
            } 
        }
    }
    var_66 |= (~(((((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (short)-16310)) & (((/* implicit */int) var_13))))))));
}
