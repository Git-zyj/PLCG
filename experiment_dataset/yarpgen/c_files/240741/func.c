/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240741
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
    var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 1908901844465520594ULL)) ? (-2468980857931024788LL) : (var_4))), (((/* implicit */long long int) var_12))));
    var_17 = var_15;
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_2);
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -5693650479717987104LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (0ULL)))) ? (((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned char)153))))) : (max((var_1), (var_11))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (var_9) : (((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0 - 1])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_11 [i_2] [(unsigned char)2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_11))) + (((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_12))))))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((signed char) 4294967295U)))))));
                    var_18 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5514))) : (((unsigned int) (signed char)21)))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-2795032823265133526LL) < (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-22))))))))) != ((~(max((((/* implicit */unsigned long long int) var_13)), (arr_7 [i_1])))))));
    }
    for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                arr_20 [i_4] [i_5] = ((/* implicit */long long int) arr_15 [i_4 + 1] [i_4 - 1] [i_4 - 1]);
                /* LoopSeq 3 */
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    arr_25 [(signed char)7] [i_5] [i_4] [(unsigned char)13] [i_7] [0] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) (_Bool)0))) >= (arr_14 [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) : (-2795032823265133526LL)));
                    var_19 *= ((/* implicit */unsigned int) var_5);
                }
                for (unsigned char i_8 = 3; i_8 < 13; i_8 += 4) /* same iter space */
                {
                    arr_29 [i_4 + 1] [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [i_4] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3693577114U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27175)))))), (var_6));
                    var_20 ^= ((/* implicit */_Bool) arr_8 [i_5] [i_5]);
                }
                for (unsigned char i_9 = 3; i_9 < 13; i_9 += 4) /* same iter space */
                {
                    var_21 *= ((/* implicit */unsigned short) (-(min((((arr_24 [i_5] [6U]) ? (arr_18 [i_4] [i_5] [i_9]) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_0))))));
                    var_22 = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) -2795032823265133526LL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((arr_33 [i_4] [i_5] [i_6] [i_9]), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) (unsigned char)98)))))));
                    var_23 = ((/* implicit */int) (((-(2795032823265133525LL))) + (((/* implicit */long long int) 3693577109U))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) 2795032823265133525LL))));
                }
                var_25 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_3)), (max((((/* implicit */long long int) var_2)), (var_10)))));
            }
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    for (unsigned char i_12 = 1; i_12 < 12; i_12 += 4) 
                    {
                        {
                            arr_43 [i_4] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) ((arr_18 [i_4] [i_5] [i_11]) >= (((/* implicit */int) var_2))))) << (((((((/* implicit */_Bool) (signed char)0)) ? (601390187U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (4294940753U)))))), (((long long int) (~(((/* implicit */int) var_14)))))));
                            var_26 = ((/* implicit */signed char) max(((~(((/* implicit */int) var_13)))), (arr_37 [i_10] [i_10] [i_10] [i_4])));
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) var_15);
                arr_44 [i_4] [i_4] [11] = ((/* implicit */unsigned int) (signed char)-100);
                arr_45 [10LL] [i_4] [i_5] [i_10] = ((/* implicit */unsigned long long int) arr_33 [(_Bool)1] [i_5] [i_5] [i_5]);
                var_28 = ((/* implicit */long long int) max((((unsigned short) (unsigned char)180)), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_4] [i_4] [i_4 + 1]))) == (var_4))))));
            }
            arr_46 [i_4] [(signed char)4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((var_9), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_3)))))))) ? (((/* implicit */unsigned int) ((int) (signed char)21))) : (((((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))) / (arr_32 [i_4 + 1] [i_4 - 1] [i_4 - 1] [0ULL])))));
        }
        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
            {
                var_29 = ((/* implicit */short) ((min((arr_15 [i_4 - 1] [i_4 + 1] [(unsigned char)0]), (((/* implicit */int) (unsigned char)152)))) != ((+(((/* implicit */int) arr_5 [i_4 - 1] [i_4 + 1]))))));
                var_30 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_15))) ^ (((((/* implicit */_Bool) arr_48 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (2795032823265133526LL))))) != (((/* implicit */long long int) 3693577114U))));
                arr_53 [i_4 - 2] [i_4] [i_13] = ((/* implicit */long long int) min((((((-2795032823265133527LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))))) ? (max((((/* implicit */unsigned long long int) var_10)), (var_6))) : (((/* implicit */unsigned long long int) ((((-2795032823265133529LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)99)) - (99)))))))), (((/* implicit */unsigned long long int) arr_15 [i_4 - 1] [i_13] [i_4 - 1]))));
            }
            /* vectorizable */
            for (short i_15 = 0; i_15 < 15; i_15 += 2) 
            {
                var_31 = ((/* implicit */_Bool) var_8);
                var_32 = ((/* implicit */short) arr_14 [i_4]);
                arr_56 [(_Bool)1] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) var_4);
            }
            arr_57 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) ((unsigned char) 4294967285U))))));
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_4 + 1] [i_4 - 2] [i_4 - 2])) ? (((/* implicit */int) arr_13 [i_13])) : (((/* implicit */int) arr_5 [i_4] [i_13]))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 15; i_16 += 2) 
            {
                for (signed char i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    {
                        var_34 = ((/* implicit */int) var_10);
                        var_35 ^= ((/* implicit */unsigned char) (~(max((((unsigned int) (signed char)21)), (((/* implicit */unsigned int) var_12))))));
                        var_36 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_5 [i_16] [i_16])), (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) (short)0))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) >= (-2795032823265133529LL)))) : (((/* implicit */int) (unsigned short)61478))))));
                        var_37 = ((/* implicit */unsigned short) var_6);
                    }
                } 
            } 
            arr_63 [i_4] = ((/* implicit */short) arr_40 [i_4] [i_13] [i_4]);
        }
        /* vectorizable */
        for (unsigned char i_18 = 0; i_18 < 15; i_18 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_19 = 2; i_19 < 13; i_19 += 4) 
            {
                var_38 = ((/* implicit */unsigned char) arr_21 [i_4] [(short)3] [i_18] [i_18] [i_19 + 2]);
                var_39 = ((/* implicit */signed char) ((arr_36 [i_18]) < (arr_36 [i_4 - 2])));
            }
            for (unsigned short i_20 = 0; i_20 < 15; i_20 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_21 = 0; i_21 < 15; i_21 += 3) 
                {
                    var_40 ^= ((/* implicit */unsigned char) ((unsigned short) var_15));
                    var_41 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_4] [i_20])) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)(-32767 - 1)))))) : (var_10)));
                    var_42 = ((/* implicit */unsigned short) ((signed char) arr_48 [i_4 - 2]));
                    var_43 *= ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_4 - 2] [i_4 - 1] [i_4])) / (((/* implicit */int) var_7))));
                }
                arr_76 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_4] [i_4 - 1] [i_4 + 1] [(short)6] [i_18])))));
                /* LoopSeq 1 */
                for (long long int i_22 = 0; i_22 < 15; i_22 += 2) 
                {
                    var_44 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_10) : (var_10))));
                    var_45 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_4)));
                }
            }
            var_46 = ((/* implicit */signed char) (+(arr_65 [i_4])));
            var_47 = ((/* implicit */unsigned long long int) ((unsigned int) arr_5 [(_Bool)1] [i_18]));
            /* LoopNest 2 */
            for (short i_23 = 0; i_23 < 15; i_23 += 2) 
            {
                for (unsigned int i_24 = 0; i_24 < 15; i_24 += 1) 
                {
                    {
                        arr_86 [i_24] [i_4] [i_4] [(short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (var_9)))) ? ((-(4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_80 [i_4] [i_4] [i_4 + 1])) / (((/* implicit */int) arr_5 [i_23] [i_24])))))));
                        var_48 = ((/* implicit */long long int) arr_74 [i_4] [i_18] [i_4] [i_24]);
                        arr_87 [i_24] [i_4] [(unsigned char)14] = (i_4 % 2 == 0) ? (((/* implicit */long long int) ((arr_41 [i_4] [i_4 + 1] [i_4] [i_23] [i_24]) + (arr_15 [i_4] [i_18] [i_23])))) : (((/* implicit */long long int) ((arr_41 [i_4] [i_4 + 1] [i_4] [i_23] [i_24]) - (arr_15 [i_4] [i_18] [i_23]))));
                        arr_88 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_81 [i_4])) : (((/* implicit */int) arr_81 [i_4]))));
                    }
                } 
            } 
        }
        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((0U), (((/* implicit */unsigned int) (unsigned char)120)))), (601390187U)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) var_2))))) : (max((4294967295U), (((/* implicit */unsigned int) (unsigned char)99)))))) : (((((/* implicit */_Bool) 601390187U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (0U)))));
    }
    /* LoopSeq 4 */
    for (signed char i_25 = 3; i_25 < 16; i_25 += 3) 
    {
        var_50 += ((/* implicit */short) ((unsigned int) var_1));
        arr_92 [i_25] = ((/* implicit */unsigned char) arr_89 [(signed char)9] [(signed char)9]);
        var_51 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)205)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3693577109U))))) ? (((long long int) arr_91 [i_25 - 1])) : (((/* implicit */long long int) (~(((/* implicit */int) (short)18447))))))) <= (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)135), ((unsigned char)157)))))));
    }
    for (long long int i_26 = 0; i_26 < 21; i_26 += 3) 
    {
        var_52 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)174)) & (((/* implicit */int) (_Bool)1))));
        arr_95 [i_26] [i_26] = ((/* implicit */short) max((((unsigned int) var_14)), (((/* implicit */unsigned int) arr_94 [i_26]))));
    }
    for (unsigned char i_27 = 0; i_27 < 10; i_27 += 3) 
    {
        var_53 = ((/* implicit */unsigned char) var_7);
        var_54 += ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) min((1020063476U), (var_9))))) * (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)21)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135)))))))));
    }
    /* vectorizable */
    for (signed char i_28 = 1; i_28 < 9; i_28 += 1) 
    {
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 11; i_29 += 3) 
        {
            for (signed char i_30 = 2; i_30 < 9; i_30 += 3) 
            {
                {
                    var_55 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [(unsigned char)2] [(unsigned char)2] [i_28 + 2])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [(unsigned short)4] [i_29] [i_28 + 2])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_31 = 1; i_31 < 9; i_31 += 1) 
                    {
                        arr_108 [(_Bool)1] [i_29] [i_29] [i_29] [i_29] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(unsigned char)2] [i_30] [0] [i_28 + 1]))) - (601390181U)));
                        arr_109 [10] [10] [i_30] [i_31 + 1] = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) arr_59 [i_28] [i_29])))));
                    }
                }
            } 
        } 
        var_56 = ((/* implicit */unsigned char) var_0);
    }
}
