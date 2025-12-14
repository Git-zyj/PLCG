/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234369
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) min((((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0]))), (((((/* implicit */_Bool) ((unsigned short) 2098741027))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((-2109410522813260115LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (max((((/* implicit */long long int) (_Bool)0)), (var_14))) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))) ? (((((/* implicit */_Bool) ((short) -2098741027))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) var_16))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_21 &= (unsigned short)52017;
        var_22 = ((/* implicit */_Bool) arr_6 [i_1]);
        var_23 |= arr_5 [i_1] [i_1];
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_9 [i_2 + 1] [5LL] = (short)-22744;
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2098741027)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (unsigned char)31))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 8; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) ((long long int) arr_13 [i_3 - 2] [i_3 - 2] [i_3 - 2]));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_25 ^= ((/* implicit */long long int) ((unsigned short) (unsigned short)11));
                        arr_21 [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5251504169761813906LL)) ? (((/* implicit */int) (unsigned short)21423)) : (((/* implicit */int) (unsigned short)55844))));
                    }
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_2] [i_3 + 3] [i_2] [i_2 + 1] [i_2 + 1]))));
                        arr_25 [i_2] [i_3] [i_4] [i_6] = ((/* implicit */unsigned short) (unsigned char)216);
                    }
                }
            } 
        } 
    }
    for (unsigned char i_7 = 2; i_7 < 18; i_7 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)255))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                {
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */int) arr_32 [13] [i_7] [i_7] [15U])) ^ (((/* implicit */int) ((short) -5251504169761813902LL))))))));
                    var_29 = ((/* implicit */long long int) ((_Bool) -5251504169761813906LL));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        var_30 = ((((/* implicit */_Bool) arr_26 [i_7 + 1] [i_7 + 1])) ? (arr_6 [i_7 + 2]) : (((/* implicit */long long int) (~(((/* implicit */int) var_2))))));
                        arr_37 [i_8] [i_8] [(unsigned char)5] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned int) (unsigned short)55277));
                    }
                    for (int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        arr_40 [i_11] [i_8] [i_8] [i_8] [i_7 + 1] = ((/* implicit */unsigned int) ((unsigned short) arr_26 [i_7] [i_9]));
                        var_31 = ((/* implicit */short) min((var_31), (arr_32 [i_9] [i_8] [i_7] [i_7])));
                    }
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_32 ^= ((/* implicit */long long int) var_13);
                        var_33 = 8465871943198140383LL;
                    }
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_9] [i_8] [i_7 + 3] [i_8] [i_7])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */long long int) arr_47 [(unsigned char)10] [(short)9] [i_8] [i_13] [i_7 + 2] [i_7])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_26 [i_7] [(unsigned char)5])))))));
                                var_35 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_14] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)49))))) * (((((/* implicit */_Bool) var_8)) ? (-6061903149073813638LL) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_14])))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (8504270426048958676LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_48 [(unsigned short)1] = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            for (unsigned int i_16 = 2; i_16 < 18; i_16 += 4) 
            {
                {
                    var_36 &= ((/* implicit */unsigned short) (~(((unsigned int) (unsigned short)65535))));
                    arr_54 [i_7 + 3] [i_15] [i_16] = ((/* implicit */_Bool) ((((_Bool) ((signed char) var_1))) ? (-4527367245483724759LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_37 -= ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) min((((/* implicit */short) var_0)), (arr_52 [i_7 + 3] [i_15] [i_16] [i_16 - 2])))), (arr_34 [i_16] [i_15] [i_16])))) >> (((((/* implicit */int) (unsigned char)240)) >> (((95520109) - (95520086)))))));
                }
            } 
        } 
        var_38 -= ((/* implicit */unsigned char) max(((unsigned short)9692), ((unsigned short)53321)));
    }
    /* LoopSeq 1 */
    for (unsigned char i_17 = 1; i_17 < 12; i_17 += 2) 
    {
        arr_58 [i_17] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_47 [i_17] [i_17] [(_Bool)1] [i_17] [i_17] [(_Bool)1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [(_Bool)1]))) : (((unsigned int) ((unsigned short) (unsigned char)137)))));
        arr_59 [i_17] [i_17 - 1] = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned char) (unsigned char)250))), (max((var_8), (((/* implicit */long long int) arr_39 [(_Bool)1]))))));
        arr_60 [i_17] |= ((/* implicit */short) ((unsigned char) var_8));
        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_19))) / (min((var_3), (((/* implicit */long long int) (unsigned short)63675))))))) ? (((/* implicit */int) ((unsigned char) arr_47 [(unsigned char)12] [i_17 + 1] [(unsigned char)10] [i_17] [(unsigned char)14] [i_17 + 1]))) : (((/* implicit */int) max(((unsigned short)1), (((/* implicit */unsigned short) arr_5 [i_17] [i_17 - 1])))))));
    }
    var_40 = 9223372036854775789LL;
    /* LoopSeq 3 */
    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_19 = 0; i_19 < 16; i_19 += 2) 
        {
            for (unsigned short i_20 = 1; i_20 < 15; i_20 += 3) 
            {
                for (short i_21 = 0; i_21 < 16; i_21 += 2) 
                {
                    {
                        arr_71 [i_19] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)63665)) * (((/* implicit */int) arr_69 [i_18] [i_19] [i_20 - 1] [i_20 + 1] [i_20 - 1] [i_19])))) >= (((/* implicit */int) ((_Bool) ((_Bool) var_6))))));
                        var_41 |= ((/* implicit */unsigned short) arr_63 [i_19]);
                    }
                } 
            } 
        } 
        arr_72 [i_18] = ((/* implicit */long long int) (unsigned short)52837);
        var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) 2147483647))));
        arr_73 [i_18] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25)) ? (arr_45 [i_18] [i_18] [i_18] [i_18] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) ((unsigned char) arr_44 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])))));
    }
    for (unsigned short i_22 = 0; i_22 < 21; i_22 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_23 = 0; i_23 < 21; i_23 += 3) 
        {
            /* LoopNest 2 */
            for (short i_24 = 4; i_24 < 20; i_24 += 2) 
            {
                for (signed char i_25 = 0; i_25 < 21; i_25 += 4) 
                {
                    {
                        arr_86 [i_22] [i_23] [i_23] [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_25] [i_23] [i_24] [i_25] [i_24 - 2])) ? (((/* implicit */int) arr_34 [i_22] [6LL] [i_23])) : (((/* implicit */int) arr_80 [12U] [(unsigned short)20] [i_24] [i_23]))))) ? (((((/* implicit */_Bool) 4527367245483724759LL)) ? (((((/* implicit */_Bool) var_17)) ? (1568351719245201946LL) : (arr_26 [i_23] [i_25]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42913))))) : (((/* implicit */long long int) ((unsigned int) var_9)))));
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)15)) ? (((long long int) ((long long int) (unsigned short)21423))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39888)))));
                    }
                } 
            } 
            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)65514)), (((((/* implicit */_Bool) 4651416944289579303LL)) ? (((/* implicit */int) (short)-5)) : (((/* implicit */int) (unsigned char)70)))))))));
        }
        for (long long int i_26 = 0; i_26 < 21; i_26 += 2) /* same iter space */
        {
            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_89 [i_22] [i_26] [i_26])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39888))) : (4527367245483724778LL)))) || (((/* implicit */_Bool) ((long long int) arr_43 [i_22] [8LL] [i_22] [i_22] [i_22])))));
            arr_90 [i_22] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)20))));
            /* LoopNest 2 */
            for (long long int i_27 = 0; i_27 < 21; i_27 += 2) 
            {
                for (unsigned short i_28 = 0; i_28 < 21; i_28 += 1) 
                {
                    {
                        arr_96 [i_22] [i_26] [(_Bool)1] [(signed char)16] [i_27] [i_27] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)18)) * (((/* implicit */int) (short)17535))));
                        var_46 += ((((/* implicit */_Bool) 3203003478U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7829306797258654390LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-4495837143631952413LL)))) ? (((/* implicit */int) ((var_8) >= (((/* implicit */long long int) 2510209233U))))) : (((/* implicit */int) arr_89 [i_26] [i_26] [i_27]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) - (((((/* implicit */_Bool) (unsigned char)202)) ? (7680LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)106))))))));
                        var_47 = ((/* implicit */unsigned int) (unsigned char)250);
                    }
                } 
            } 
            var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) arr_31 [i_22] [i_26]))));
            var_49 = ((/* implicit */_Bool) (signed char)(-127 - 1));
        }
        /* vectorizable */
        for (long long int i_29 = 0; i_29 < 21; i_29 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_30 = 0; i_30 < 21; i_30 += 1) 
            {
                for (unsigned int i_31 = 0; i_31 < 21; i_31 += 4) 
                {
                    {
                        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (var_7)))))));
                        var_51 = ((/* implicit */short) ((arr_85 [i_29] [i_30] [i_29] [i_22]) ? (((/* implicit */int) (!(((/* implicit */_Bool) -3274357301849863872LL))))) : (((/* implicit */int) ((short) arr_43 [i_22] [i_22] [i_29] [i_29] [i_22])))));
                    }
                } 
            } 
            arr_105 [i_22] [i_29] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (-8219869209369284110LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-12560)))));
        }
        for (long long int i_32 = 0; i_32 < 21; i_32 += 2) /* same iter space */
        {
            var_52 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((var_1), (arr_78 [i_32])))) ? (((int) arr_31 [i_22] [(unsigned char)11])) : (((/* implicit */int) min((var_13), (((/* implicit */short) arr_80 [i_22] [i_22] [6] [i_32]))))))), (((((/* implicit */_Bool) arr_93 [i_22] [i_32] [9U])) ? (((/* implicit */int) ((signed char) var_15))) : (((((/* implicit */_Bool) (unsigned char)127)) ? (arr_47 [i_32] [i_32] [i_32] [(short)6] [i_32] [(short)6]) : (((/* implicit */int) (_Bool)1))))))));
            var_53 -= ((/* implicit */long long int) max((((int) (short)-17535)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_99 [i_22])) : (((/* implicit */int) arr_99 [i_32]))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_33 = 0; i_33 < 21; i_33 += 2) 
        {
            arr_111 [i_22] [i_33] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)39888)) ? (((/* implicit */int) ((unsigned short) var_2))) : (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)127)) || (var_6)))) - (((/* implicit */int) var_15))))));
            /* LoopSeq 1 */
            for (long long int i_34 = 0; i_34 < 21; i_34 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_35 = 0; i_35 < 21; i_35 += 2) 
                {
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                    {
                        {
                            var_54 ^= ((/* implicit */signed char) ((unsigned short) -3086267743192476167LL));
                            var_55 -= ((/* implicit */signed char) (short)-5);
                        }
                    } 
                } 
                var_56 ^= ((/* implicit */unsigned short) ((int) (unsigned short)22164));
                var_57 |= ((((/* implicit */_Bool) arr_101 [i_22] [i_33] [i_34])) ? (((((/* implicit */_Bool) 3185237310U)) ? (((/* implicit */int) arr_101 [i_22] [i_22] [i_22])) : (((/* implicit */int) arr_101 [i_22] [i_33] [i_33])))) : (((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) arr_101 [(unsigned short)8] [i_33] [i_22])) - (20789))))));
                /* LoopNest 2 */
                for (unsigned int i_37 = 0; i_37 < 21; i_37 += 1) 
                {
                    for (_Bool i_38 = 1; i_38 < 1; i_38 += 1) 
                    {
                        {
                            var_58 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_120 [i_34] [i_33])) ? (arr_122 [i_33] [i_34] [i_37] [(unsigned short)17]) : (((/* implicit */long long int) ((/* implicit */int) (short)-27055)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_98 [i_22])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_108 [i_38]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((7850366461076025741LL) == (((/* implicit */long long int) 268435448U))))))))) : (((/* implicit */int) (unsigned char)7))));
                            var_59 ^= ((/* implicit */unsigned char) max((0LL), (((/* implicit */long long int) (short)26))));
                            var_60 ^= ((/* implicit */unsigned int) max((((/* implicit */int) ((short) ((unsigned char) var_1)))), (((((/* implicit */_Bool) arr_44 [i_38] [i_38 - 1] [i_38 - 1] [i_38 - 1] [i_38] [i_38])) ? (((/* implicit */int) arr_91 [i_38 - 1] [(_Bool)1] [i_38 - 1] [i_38 - 1])) : (((/* implicit */int) var_2))))));
                        }
                    } 
                } 
            }
        }
    }
    for (unsigned char i_39 = 1; i_39 < 11; i_39 += 2) 
    {
        arr_127 [i_39] = ((/* implicit */long long int) arr_124 [i_39] [i_39] [i_39] [i_39] [i_39]);
        var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-8192)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_19)), ((short)-8213))))) : (((arr_68 [i_39 - 1] [i_39] [14U] [i_39]) / (((5603985168174295325LL) % (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
        arr_128 [i_39] = (!((_Bool)0));
        /* LoopNest 2 */
        for (long long int i_40 = 0; i_40 < 13; i_40 += 3) 
        {
            for (short i_41 = 0; i_41 < 13; i_41 += 1) 
            {
                {
                    var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_16)))) ? (((/* implicit */int) min((arr_133 [i_39]), (((/* implicit */unsigned short) arr_110 [i_39 + 2]))))) : (((/* implicit */int) arr_133 [i_39]))));
                    arr_134 [i_41] [i_39] [i_39 + 1] = ((/* implicit */short) max((min((((((/* implicit */_Bool) (unsigned short)43372)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) arr_66 [i_40] [i_39 - 1] [i_39] [i_39 + 2])))), (((/* implicit */long long int) ((arr_41 [i_39 + 2] [i_39 + 1] [i_39 + 1] [i_39 + 2]) ? (((/* implicit */int) arr_41 [i_39 + 2] [i_39 + 2] [i_39 + 1] [i_39 - 1])) : (((/* implicit */int) arr_41 [i_39 - 1] [i_39 - 1] [i_39 + 1] [i_39 - 1])))))));
                    arr_135 [i_39] [i_39] [i_40] [i_41] = ((/* implicit */short) 3086267743192476167LL);
                }
            } 
        } 
    }
}
