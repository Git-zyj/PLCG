/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236817
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_2 [i_3] [i_1] [i_0]))));
                        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [(signed char)10])) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) -305807597)) ? (var_0) : (((/* implicit */int) var_4))))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_5 [i_2] [i_0] [i_0]))));
                        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2]))) : (var_6)));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_4 = 1; i_4 < 21; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) || ((!(((/* implicit */_Bool) var_1))))));
                        var_25 = ((/* implicit */signed char) -305807597);
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((var_19) > (arr_9 [i_5] [i_4 + 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 1; i_7 < 18; i_7 += 2) 
                        {
                            var_27 &= ((/* implicit */_Bool) (~(var_9)));
                            var_28 |= ((/* implicit */unsigned long long int) ((((var_2) + (2147483647))) << (((((var_2) + (1670987167))) - (13)))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_12 [i_0])))) / ((~(305807597)))));
                            var_30 = ((/* implicit */unsigned long long int) (signed char)105);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 21; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_29 [i_0] [i_0] [i_0] [i_9 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) (unsigned short)6903)))))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        for (int i_12 = 1; i_12 < 19; i_12 += 2) 
                        {
                            {
                                var_31 |= ((/* implicit */signed char) (unsigned short)6903);
                                var_32 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9732361032520207538ULL))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) 3253880059U)) ? (((((/* implicit */int) (unsigned short)43654)) / (((/* implicit */int) (unsigned short)3694)))) : (((arr_17 [i_10] [i_9 - 1] [i_0]) ? (((/* implicit */int) (unsigned short)58633)) : (((/* implicit */int) (unsigned short)6903)))))))));
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_9 + 1] [i_13])))))));
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_9 + 1]))));
                    }
                    for (long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) (unsigned short)58632);
                        var_37 = ((/* implicit */int) (~(arr_9 [i_9 + 1] [i_9 - 1])));
                        var_38 = ((/* implicit */signed char) ((var_13) | (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0] [i_0])))));
                    }
                    for (short i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        var_39 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -654638885)) ? (var_19) : (((/* implicit */unsigned long long int) 305807596)))) >> (((((((/* implicit */_Bool) var_17)) ? (var_13) : (((/* implicit */unsigned int) 305807596)))) - (586742620U)))));
                        /* LoopSeq 1 */
                        for (int i_16 = 0; i_16 < 22; i_16 += 2) 
                        {
                            var_40 += ((/* implicit */unsigned long long int) (!(((17108550886771578916ULL) >= (((/* implicit */unsigned long long int) arr_1 [i_9] [i_9]))))));
                            var_41 += ((/* implicit */unsigned char) (unsigned short)58632);
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 3) 
                        {
                            var_42 += ((/* implicit */signed char) arr_6 [(signed char)12]);
                            var_43 = ((/* implicit */unsigned char) (+(arr_9 [i_9 + 1] [i_9 + 1])));
                            var_44 = ((/* implicit */int) min((var_44), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_33 [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) (unsigned short)6903))))));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 3) 
                        {
                            arr_50 [i_18] [i_0] [i_0] [1LL] = var_13;
                            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (1555408269U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_15] [0ULL] [i_0])))))) ? (((/* implicit */int) (_Bool)1)) : (var_5)));
                            var_46 &= ((/* implicit */signed char) ((arr_7 [i_0] [6U]) > (((/* implicit */long long int) 3350259394U))));
                        }
                        arr_51 [i_15] [i_0] [i_15] [i_10] [i_0] [2ULL] = ((/* implicit */unsigned short) ((unsigned char) arr_42 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 - 1]));
                        /* LoopSeq 1 */
                        for (int i_19 = 0; i_19 < 22; i_19 += 3) 
                        {
                            arr_56 [i_0] [i_0] [i_0] [i_10] [i_15] [i_19] = ((/* implicit */signed char) ((((((/* implicit */int) var_4)) & (-949995440))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned short)58633)) < (((/* implicit */int) (_Bool)1)))))));
                            var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) arr_47 [i_0] [i_10] [i_19]))));
                            var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) (-(((/* implicit */int) (unsigned char)255)))))));
                        }
                    }
                }
            } 
        } 
    }
    for (unsigned short i_20 = 0; i_20 < 22; i_20 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_21 = 0; i_21 < 22; i_21 += 3) 
        {
            for (long long int i_22 = 0; i_22 < 22; i_22 += 4) 
            {
                {
                    var_49 &= (+(329454823));
                    var_50 ^= ((/* implicit */unsigned int) max((-305807597), ((-2147483647 - 1))));
                    arr_65 [(short)15] [(unsigned char)8] [i_21] [i_21] = ((/* implicit */unsigned int) min((305807597), (((/* implicit */int) (short)(-32767 - 1)))));
                }
            } 
        } 
        var_51 += (signed char)118;
        var_52 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) -1587018744))))) | (arr_45 [i_20] [(short)3] [i_20] [(short)3] [i_20]))));
    }
    /* vectorizable */
    for (unsigned short i_23 = 0; i_23 < 22; i_23 += 1) /* same iter space */
    {
        var_53 |= ((/* implicit */_Bool) arr_62 [i_23] [i_23] [i_23] [i_23]);
        /* LoopNest 2 */
        for (int i_24 = 2; i_24 < 21; i_24 += 1) 
        {
            for (unsigned int i_25 = 2; i_25 < 21; i_25 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_26 = 4; i_26 < 18; i_26 += 1) 
                    {
                        var_54 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_62 [i_26 - 1] [i_26] [i_26] [i_26])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_6 [i_25]))));
                        var_55 = ((/* implicit */unsigned char) (+((-2147483647 - 1))));
                    }
                    for (unsigned long long int i_27 = 0; i_27 < 22; i_27 += 2) 
                    {
                        var_56 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_49 [i_25 - 1] [i_25 - 2] [i_25 - 1] [i_25] [i_25 + 1] [i_25 - 2]))));
                        /* LoopSeq 2 */
                        for (int i_28 = 0; i_28 < 22; i_28 += 2) /* same iter space */
                        {
                            var_57 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) -305807598)))));
                            arr_81 [i_28] [i_27] [i_27] [i_25] [(short)5] [i_23] [i_23] = ((((/* implicit */int) (unsigned char)117)) / (arr_22 [17ULL] [i_25 - 1] [i_25] [i_24 - 1]));
                            var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_11 [i_27] [i_24 - 1] [i_27])))) ? (((/* implicit */int) (signed char)87)) : (arr_59 [i_24 + 1] [i_24 - 2])));
                            var_59 ^= ((/* implicit */unsigned int) (short)-1987);
                            var_60 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22545))))))));
                        }
                        for (int i_29 = 0; i_29 < 22; i_29 += 2) /* same iter space */
                        {
                            var_61 = ((/* implicit */signed char) max((var_61), (((/* implicit */signed char) (+(arr_43 [i_24] [i_24] [10] [i_24] [i_24 - 2] [i_27] [i_25 - 2]))))));
                            var_62 = ((/* implicit */unsigned long long int) max((var_62), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)52229)) < (arr_74 [i_27]))))));
                        }
                        var_63 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1)) ? (11624680301302981172ULL) : (((/* implicit */unsigned long long int) 0U))));
                    }
                    var_64 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_25 - 2] [i_25 + 1] [i_24] [i_24 - 2] [i_23])) ? (var_19) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_7)) + (64))))))));
                    /* LoopNest 2 */
                    for (int i_30 = 4; i_30 < 21; i_30 += 3) 
                    {
                        for (unsigned long long int i_31 = 0; i_31 < 22; i_31 += 2) 
                        {
                            {
                                arr_91 [i_30] [i_31] |= ((/* implicit */unsigned char) var_7);
                                var_65 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((551412060) / ((-2147483647 - 1))))) ? (arr_74 [i_25 - 2]) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)58632)) == (((/* implicit */int) (signed char)0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_32 = 0; i_32 < 22; i_32 += 3) 
        {
            for (unsigned int i_33 = 0; i_33 < 22; i_33 += 3) 
            {
                {
                    var_66 &= ((/* implicit */short) ((unsigned char) ((int) 14302351292518995992ULL)));
                    var_67 = ((/* implicit */int) max((var_67), (var_18)));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (int i_34 = 0; i_34 < 22; i_34 += 1) 
    {
        for (signed char i_35 = 0; i_35 < 22; i_35 += 2) 
        {
            for (short i_36 = 0; i_36 < 22; i_36 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                    {
                        var_68 |= ((/* implicit */int) (unsigned char)127);
                        arr_111 [i_34] [i_35] [i_36] = ((/* implicit */int) ((long long int) max(((signed char)97), (((/* implicit */signed char) (_Bool)0)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_38 = 1; i_38 < 21; i_38 += 3) 
                        {
                            var_69 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((0U) + (((/* implicit */unsigned int) var_0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58632)) ? (((/* implicit */int) ((signed char) 18446744073709551615ULL))) : (305807597)))) : (((((/* implicit */_Bool) 4854786147327208841ULL)) ? (5202118628523537779ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212)))))));
                            var_70 ^= ((/* implicit */_Bool) ((((unsigned long long int) 305807596)) ^ (((/* implicit */unsigned long long int) arr_41 [i_37] [i_36] [i_35]))));
                        }
                        var_71 = ((/* implicit */unsigned long long int) max((var_71), (((/* implicit */unsigned long long int) ((((_Bool) arr_18 [i_36] [i_36] [i_35] [i_34] [i_36])) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)5644)), (2200272803U)))))))));
                    }
                    for (signed char i_39 = 0; i_39 < 22; i_39 += 1) 
                    {
                        var_72 ^= ((/* implicit */int) min((((/* implicit */unsigned int) ((signed char) ((unsigned int) (signed char)-1)))), (((((/* implicit */unsigned int) arr_16 [i_34])) | (314690900U)))));
                        arr_118 [i_39] [i_39] = ((/* implicit */unsigned long long int) var_12);
                        var_73 ^= ((((/* implicit */_Bool) (((((-2147483647 - 1)) < (((/* implicit */int) var_14)))) ? (((((/* implicit */_Bool) arr_77 [14U] [i_35] [(short)20] [(unsigned char)14])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (67108863) : (var_10))))))) ? ((+(((/* implicit */int) (unsigned char)153)))) : ((+((~(arr_98 [i_35]))))));
                        var_74 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) arr_67 [i_36])) ? (((/* implicit */long long int) -1813959379)) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6903)))));
                    }
                    for (unsigned long long int i_40 = 0; i_40 < 22; i_40 += 3) 
                    {
                        var_75 *= (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (-(-5356270638295942492LL)))) <= (max((((/* implicit */unsigned long long int) -305807596)), (18446744073709551615ULL)))))));
                        var_76 = ((/* implicit */int) (unsigned char)44);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_41 = 1; i_41 < 18; i_41 += 2) 
                        {
                            var_77 ^= arr_95 [i_34] [i_35] [i_40] [i_41];
                            var_78 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (signed char)-121)) + (2147483647))) >> (((arr_92 [8LL] [i_35] [i_36]) + (1949143284))))) + (-1791151838)));
                            var_79 += (signed char)0;
                        }
                    }
                    arr_125 [i_34] = ((/* implicit */unsigned int) (-(max((arr_73 [i_34] [i_35] [i_36] [i_34]), (arr_73 [i_35] [i_35] [i_35] [i_35])))));
                    var_80 = ((/* implicit */int) max((var_80), ((+(((/* implicit */int) arr_42 [i_34] [i_34] [i_36] [i_34] [(unsigned char)19] [i_36] [i_35]))))));
                    var_81 *= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8725244555968532923ULL)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) var_17))))), (max((0ULL), (((/* implicit */unsigned long long int) arr_98 [i_35])))))) >= (max((4971236701551150080ULL), (((/* implicit */unsigned long long int) (unsigned char)0))))));
                }
            } 
        } 
    } 
}
