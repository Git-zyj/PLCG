/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232330
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) var_11))), (((((/* implicit */_Bool) var_0)) ? (2036717155) : (-1440412282)))))) ? (((/* implicit */unsigned int) -2036717156)) : (min((((/* implicit */unsigned int) (+(-2036717178)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (var_10)))))));
    var_13 = ((/* implicit */unsigned short) var_8);
    var_14 *= ((/* implicit */_Bool) ((var_1) ? (((long long int) ((((/* implicit */_Bool) -2036717155)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_15 ^= ((/* implicit */unsigned long long int) ((unsigned int) 2036717155));
        var_16 -= ((/* implicit */unsigned long long int) ((arr_0 [14U] [14U]) ^ (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) (~(757042427U)));
        var_17 *= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)44846)))));
        arr_8 [i_1] = ((((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_1])))) <= (max((2036717166), (((/* implicit */int) arr_4 [i_1])))));
    }
    /* LoopSeq 4 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 1473030082U)) ? (-2036717182) : (((/* implicit */int) arr_4 [i_2])))), (-2036717156)));
        /* LoopNest 2 */
        for (unsigned short i_3 = 3; i_3 < 22; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 3; i_5 < 23; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) (((!(var_1))) && (((/* implicit */_Bool) -2036717150))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_2] [i_3 + 2] [i_4] [i_3 + 2] [i_5])) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 1; i_7 < 23; i_7 += 2) 
                        {
                            arr_25 [i_3] = 18446744073709551614ULL;
                            var_21 = -2036717166;
                            arr_26 [i_3] = ((/* implicit */unsigned int) (_Bool)1);
                            var_22 = ((/* implicit */unsigned long long int) 2036717155);
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_15 [i_2] [i_4] [i_2] [i_2]);
                            var_24 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((int) -2036717156))), (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_4])))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) -2036717178)) : (var_3)))))));
                            var_25 = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_10 [i_3 + 2] [i_2])))), (((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (arr_10 [18ULL] [i_3 - 1]))))));
                            var_26 = ((/* implicit */_Bool) (+(2036717152)));
                            var_27 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_3 - 3] [i_3])) < (((/* implicit */int) arr_23 [i_3 + 1] [i_2])))));
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2036717124)) ? (arr_30 [i_3] [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) 2036717155))));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) -2036717156)) || (((/* implicit */_Bool) arr_27 [i_3 - 2] [i_3] [i_4] [i_3 - 2] [i_3 - 2]))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 3; i_10 < 22; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((unsigned char) arr_30 [i_3] [i_4] [i_4] [i_3] [i_3 - 1] [(unsigned char)2] [i_2]))) : (((/* implicit */int) arr_20 [i_2] [i_6] [i_4] [i_3 - 1] [i_2]))));
                            var_31 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (1473030082U)))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_11] [i_4] [i_4] [i_3 + 2] [i_3 - 1])) >= (-1673567266)));
                        var_33 = ((/* implicit */int) ((unsigned int) ((unsigned char) arr_24 [i_11] [i_4] [i_4] [i_3] [i_2])));
                        var_34 = ((/* implicit */unsigned int) arr_27 [i_3 + 1] [4U] [i_3 + 1] [i_3 + 1] [i_3 - 2]);
                    }
                    for (signed char i_12 = 2; i_12 < 21; i_12 += 2) 
                    {
                        var_35 = (i_3 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_16 [i_3] [i_3 - 2] [i_3]))) >> ((((~(var_9))) + (3097209813402054767LL)))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) ((short) arr_16 [i_3] [i_3 - 2] [i_3]))) + (2147483647))) >> ((((~(var_9))) + (3097209813402054767LL))))));
                        var_36 = ((unsigned long long int) var_0);
                        var_37 = ((/* implicit */short) min((((unsigned int) arr_15 [i_12] [i_12] [i_12] [i_12 - 1])), (((((/* implicit */_Bool) arr_15 [i_12 + 3] [i_3 - 3] [i_3 + 1] [i_2])) ? (((/* implicit */unsigned int) 1656813333)) : (var_10)))));
                    }
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) arr_17 [i_3 + 2] [i_3] [i_2] [i_2]))), ((~(((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 3; i_13 < 21; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            {
                                arr_46 [i_14] [i_3] [i_2] = ((/* implicit */unsigned int) arr_4 [i_3 - 1]);
                                var_39 = ((/* implicit */unsigned short) var_9);
                                arr_47 [i_14] [i_3] [i_3 - 2] [i_3] [11] = ((/* implicit */unsigned char) min((((unsigned long long int) (~(((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 3655800440U))) ? (1791486391U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_2] [i_3 - 1] [(unsigned char)5] [i_13 + 3]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_15 = 3; i_15 < 9; i_15 += 3) 
    {
        arr_52 [i_15] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)37608)) : (((/* implicit */int) (unsigned short)61872))))))));
        var_40 *= arr_9 [8ULL];
    }
    /* vectorizable */
    for (int i_16 = 1; i_16 < 23; i_16 += 2) 
    {
        var_41 = ((/* implicit */unsigned int) ((arr_6 [i_16 + 1]) * (0ULL)));
        arr_55 [i_16 + 2] [i_16] = (((!(((/* implicit */_Bool) var_2)))) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
        arr_56 [i_16] [i_16 + 2] = ((/* implicit */_Bool) arr_6 [i_16]);
        arr_57 [i_16] [(signed char)6] = ((/* implicit */unsigned int) ((((-2036717141) + (2147483647))) << (((((/* implicit */int) arr_54 [i_16 + 1] [i_16 + 1])) - (64022)))));
        /* LoopSeq 3 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 26U)) ^ (((((/* implicit */_Bool) -2036717156)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_16] [i_16]))) : (arr_6 [i_16])))));
            var_43 = ((/* implicit */short) ((unsigned long long int) var_3));
            var_44 -= ((/* implicit */unsigned int) 10ULL);
        }
        for (short i_18 = 1; i_18 < 21; i_18 += 2) 
        {
            var_45 = ((((/* implicit */_Bool) ((unsigned int) 2036717155))) ? (((/* implicit */int) (unsigned char)41)) : ((-(-2036717155))));
            var_46 = ((/* implicit */short) (!(((/* implicit */_Bool) 9234623297842557765ULL))));
            arr_64 [(_Bool)1] [i_16 - 1] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 18446744073709551615ULL))) * (((/* implicit */int) arr_59 [i_18 + 2] [i_16 + 2] [i_16 - 1]))));
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned int i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    for (int i_21 = 1; i_21 < 22; i_21 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-6369)) % (((/* implicit */int) ((unsigned char) (unsigned char)182)))));
                            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((-2036717157) + (2147483647))) << (((((/* implicit */int) (unsigned char)6)) - (3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_21 - 1] [0U] [i_21] [i_21 - 1] [i_19]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 2036717153)) : (12857027982576614915ULL)))));
                            var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((int) var_10)))));
                            var_50 = ((/* implicit */unsigned long long int) ((short) 2036717158));
                        }
                    } 
                } 
            } 
        }
        for (int i_22 = 1; i_22 < 22; i_22 += 2) 
        {
            /* LoopSeq 4 */
            for (signed char i_23 = 0; i_23 < 25; i_23 += 2) 
            {
                var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_59 [i_22 - 1] [i_16 - 1] [i_16 + 1])) ? (((var_1) ? (-2036717157) : (-2036717178))) : (((/* implicit */int) ((short) (unsigned char)9)))));
                var_52 = ((/* implicit */int) ((unsigned short) 3655800435U));
                var_53 = ((/* implicit */unsigned int) max((var_53), (((unsigned int) arr_59 [i_22 + 2] [i_16 + 2] [i_16 + 1]))));
                arr_77 [i_22] = ((/* implicit */_Bool) ((arr_76 [i_23] [i_22]) ? (3655800453U) : (3655800431U)));
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
            {
                var_54 = ((/* implicit */unsigned int) ((arr_76 [i_16 + 2] [i_16 + 1]) ? (((/* implicit */int) ((_Bool) -2036717178))) : (((/* implicit */int) ((short) arr_54 [i_22] [i_16])))));
                /* LoopNest 2 */
                for (unsigned int i_25 = 2; i_25 < 24; i_25 += 4) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            arr_85 [i_26] [i_25] [i_24] [i_22] [i_16 + 2] = ((/* implicit */unsigned long long int) ((int) 2036717155));
                            arr_86 [i_26] [i_16] [i_24] = ((/* implicit */int) arr_6 [i_24]);
                            var_55 = ((/* implicit */_Bool) ((2036717155) | (((/* implicit */int) ((unsigned char) 3655800417U)))));
                        }
                    } 
                } 
                var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2036717138)) ? (((/* implicit */int) arr_58 [i_22 - 1] [i_16] [i_16])) : (((/* implicit */int) var_6))));
            }
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
            {
                var_57 -= ((/* implicit */_Bool) (~(((/* implicit */int) (short)63))));
                /* LoopSeq 1 */
                for (unsigned short i_28 = 1; i_28 < 21; i_28 += 3) 
                {
                    var_58 = (i_27 % 2 == zero) ? (((/* implicit */_Bool) ((((((/* implicit */int) (short)-3330)) + (2147483647))) >> (((arr_92 [i_27] [i_22 + 1] [i_16 + 1] [i_27]) - (2538479528U)))))) : (((/* implicit */_Bool) ((((((/* implicit */int) (short)-3330)) + (2147483647))) >> (((((arr_92 [i_27] [i_22 + 1] [i_16 + 1] [i_27]) - (2538479528U))) - (2214229897U))))));
                    var_59 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-67)) ? (arr_92 [i_27] [i_16 - 1] [i_16 + 2] [i_27]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    arr_93 [i_27] [i_27] = ((/* implicit */signed char) ((unsigned int) ((short) 12857027982576614903ULL)));
                }
                var_60 = arr_82 [i_27] [i_22 + 1] [i_22 + 1] [i_16] [i_27];
                var_61 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) 0U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */long long int) (~(var_10))))));
                /* LoopNest 2 */
                for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                {
                    for (signed char i_30 = 0; i_30 < 25; i_30 += 2) 
                    {
                        {
                            var_62 = ((/* implicit */signed char) (~(18446744073709551612ULL)));
                            arr_98 [i_30] [i_29 - 1] [i_27] [i_27] [i_27] [i_16 + 2] [i_16] = ((/* implicit */signed char) ((int) ((short) (short)-81)));
                            arr_99 [i_30] [i_27] [i_27] [i_27] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_6 [i_16]))) % (((/* implicit */int) (short)-77))));
                            var_63 -= ((/* implicit */unsigned short) (~(12857027982576614909ULL)));
                        }
                    } 
                } 
            }
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                arr_102 [i_31] = (!(((/* implicit */_Bool) 11ULL)));
                arr_103 [i_31] [i_22] [i_16 + 1] = ((/* implicit */_Bool) 2036717135);
            }
            var_64 = ((/* implicit */unsigned short) 4294967270U);
        }
    }
    /* vectorizable */
    for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
    {
        var_65 = ((/* implicit */unsigned int) ((2036717151) > (((/* implicit */int) var_5))));
        /* LoopSeq 2 */
        for (unsigned long long int i_33 = 2; i_33 < 8; i_33 += 4) /* same iter space */
        {
            arr_109 [6LL] [6LL] = ((((/* implicit */_Bool) 2036717135)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3655800453U)) ? (((/* implicit */unsigned int) 2147483647)) : (arr_84 [i_33 - 2] [i_32 - 1] [i_33] [i_33] [i_32] [i_33])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_7)) : (12857027982576614909ULL))));
            /* LoopNest 2 */
            for (int i_34 = 2; i_34 < 9; i_34 += 3) 
            {
                for (unsigned long long int i_35 = 0; i_35 < 10; i_35 += 3) 
                {
                    {
                        var_66 = ((/* implicit */unsigned char) (-(arr_66 [i_34 + 1] [i_33 - 2] [i_32 - 1] [i_32])));
                        arr_117 [i_35] [i_33 - 2] [i_35] [i_35] [i_33] [i_32] = (~(arr_104 [i_32 - 1]));
                    }
                } 
            } 
        }
        for (unsigned long long int i_36 = 2; i_36 < 8; i_36 += 4) /* same iter space */
        {
            arr_121 [i_36] [i_32] [i_32] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_36 - 2] [i_36] [i_36 - 1] [i_32 - 1] [i_32]))) < (11U)));
            arr_122 [i_36] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_83 [i_36 - 2] [i_32 - 1]))));
            var_67 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (4294967274U) : (((/* implicit */unsigned int) 2036717156)))));
        }
        var_68 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775788LL)) && (((/* implicit */_Bool) ((int) arr_2 [(short)8])))));
    }
}
