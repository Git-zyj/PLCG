/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216327
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
    var_13 = ((/* implicit */unsigned char) ((var_8) != (((/* implicit */long long int) 0U))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((var_4) + (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (var_12)))))))));
        var_15 = min((arr_1 [i_0 + 2]), (((/* implicit */long long int) 1351221420U)));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_16 &= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (18446744073709551615ULL))) >> (((var_8) - (808177547262279875LL)))));
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1] [i_1]))))), (var_1)));
        var_18 &= max((arr_3 [i_1] [20LL]), (arr_2 [i_1] [i_1]));
        var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [i_1])) + (((/* implicit */int) var_5))))), (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115)))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        /* LoopSeq 4 */
        for (long long int i_3 = 2; i_3 < 12; i_3 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) var_6);
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (unsigned int i_6 = 3; i_6 < 13; i_6 += 1) 
                    {
                        {
                            arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) var_5);
                            arr_17 [i_4] [i_3] [i_4] [i_5] [i_5] = (+(1754382284904598883LL));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_7 = 2; i_7 < 12; i_7 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) arr_2 [i_2] [i_7]);
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                var_22 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_7] [i_7 + 1] [i_7 - 2]))) & (((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_7] [i_8] [i_8])) ? (arr_4 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7] [i_7] [i_8] [i_7] [i_8] [i_2])))))));
                /* LoopSeq 2 */
                for (unsigned int i_9 = 4; i_9 < 13; i_9 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) ((short) var_2));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) ((unsigned short) ((long long int) var_11)));
                        var_25 &= ((/* implicit */unsigned int) arr_18 [i_2] [i_9 - 4] [i_10]);
                    }
                    arr_30 [i_2] [i_7] [i_7] [i_8] [i_9 - 3] = ((/* implicit */unsigned short) var_4);
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_0))));
                    arr_31 [i_9] [i_7] [i_2] [i_9] [i_2] = ((/* implicit */unsigned short) (unsigned char)155);
                }
                for (unsigned int i_11 = 4; i_11 < 13; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 1; i_12 < 13; i_12 += 1) 
                    {
                        arr_36 [i_11] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_9)) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_7] [i_8] [i_11]))) / (arr_4 [i_2])))));
                        var_27 = ((/* implicit */int) 17U);
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_11))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        var_29 ^= ((/* implicit */long long int) (+((+(((/* implicit */int) arr_3 [i_2] [i_13]))))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (arr_37 [i_7] [i_7 - 2] [i_7 + 1] [i_7 - 1] [i_7]) : (var_9))))));
                    }
                    for (unsigned short i_14 = 3; i_14 < 12; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) var_10);
                        arr_43 [i_2] [i_14] [i_8] [i_8] [i_14] [i_11] [i_2] = ((/* implicit */unsigned int) var_3);
                    }
                    var_32 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)127))));
                }
                arr_44 [i_8] [i_8] [i_7] [i_2] = ((/* implicit */short) arr_37 [i_2] [i_2] [i_8] [i_8] [i_8]);
                arr_45 [i_8] [i_8] [i_8] = arr_5 [i_8];
            }
        }
        for (long long int i_15 = 2; i_15 < 12; i_15 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned int i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                arr_51 [i_15] [i_2] |= ((/* implicit */long long int) arr_10 [i_15] [i_15] [i_15 + 2] [i_15 + 1]);
                arr_52 [i_16] [i_15] = ((/* implicit */unsigned short) (+(arr_9 [i_2] [i_15 - 1])));
                var_33 = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
            }
            for (unsigned short i_17 = 1; i_17 < 12; i_17 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_19 [i_17 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_15] [i_15 - 1] [i_15 + 1] [i_17 - 1])))));
                var_35 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)100))));
                var_36 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_17 + 2] [i_15] [i_17]))));
                /* LoopSeq 2 */
                for (unsigned char i_18 = 2; i_18 < 11; i_18 += 2) /* same iter space */
                {
                    var_37 &= var_0;
                    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (-(arr_42 [i_15 + 1] [i_18 + 2] [i_17] [i_18] [i_15]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-20466)) ? (var_8) : (((/* implicit */long long int) 10U)))))));
                        arr_61 [i_2] [i_15] [i_15] [i_17] [i_18] [i_19] [i_18] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-8362))) / (var_8)));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_20 = 1; i_20 < 13; i_20 += 2) 
                    {
                        var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                        var_41 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_41 [i_17 - 1] [i_18 + 2]))));
                        var_42 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)163)) / (((/* implicit */int) arr_15 [i_15] [i_15] [i_17] [i_17 - 1] [i_18] [i_18 + 2]))));
                    }
                    for (unsigned char i_21 = 3; i_21 < 13; i_21 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned short) var_8);
                        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_3))));
                        arr_67 [i_2] [i_17] [i_21] &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))) != (0U))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27129))) / (3032813451U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))));
                        arr_68 [i_2] [i_15] [i_15] [i_18] [i_18] [i_21] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-20475)) + (2147483647))) << ((((((~(3755204892325323578LL))) + (3755204892325323585LL))) - (6LL)))));
                        var_45 = ((/* implicit */signed char) (+(((arr_19 [i_15]) + (arr_42 [i_21] [i_18] [i_17 + 1] [i_15 - 1] [i_2])))));
                    }
                }
                for (unsigned char i_22 = 2; i_22 < 11; i_22 += 2) /* same iter space */
                {
                    var_46 = (+(((/* implicit */int) var_6)));
                    /* LoopSeq 1 */
                    for (long long int i_23 = 3; i_23 < 10; i_23 += 3) 
                    {
                        var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)-121)))))));
                        var_48 = ((/* implicit */unsigned int) ((arr_38 [i_23 - 2] [i_22] [i_17] [i_15 - 1] [i_2]) > (arr_38 [i_2] [i_15] [i_17 - 1] [i_17 - 1] [i_23 - 1])));
                    }
                }
            }
            for (unsigned short i_24 = 1; i_24 < 12; i_24 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_25 = 0; i_25 < 14; i_25 += 2) 
                {
                    var_49 ^= ((/* implicit */long long int) arr_37 [i_15] [i_15 - 2] [i_15 + 1] [i_24 + 1] [i_24]);
                    var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_15] [i_15 + 2] [i_24] [i_24 + 1])) && (((/* implicit */_Bool) arr_32 [i_2] [i_15 + 1] [i_15] [i_24 + 2])))))));
                    var_51 = ((/* implicit */unsigned short) var_12);
                }
                for (unsigned int i_26 = 0; i_26 < 14; i_26 += 2) 
                {
                    arr_81 [i_26] [i_24] [i_15] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) << (((((/* implicit */int) (unsigned char)209)) - (206)))));
                    var_52 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-76))));
                }
                var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)124)))))))))));
            }
            for (unsigned short i_27 = 1; i_27 < 12; i_27 += 1) /* same iter space */
            {
                var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((arr_58 [i_2]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_6)) - (29))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_66 [i_2] [i_2] [i_2] [i_2] [i_15] [i_27]))))));
                /* LoopSeq 2 */
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_73 [i_2] [i_2] [i_2] [i_2])) >= (((/* implicit */int) var_7))))))))));
                    var_56 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_65 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15] [i_27] [i_27 + 1]))));
                }
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    var_57 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                    var_58 = ((/* implicit */long long int) arr_2 [i_27 - 1] [i_15 - 2]);
                }
            }
            var_59 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
        }
        for (unsigned int i_30 = 0; i_30 < 14; i_30 += 1) 
        {
            var_60 = ((/* implicit */unsigned long long int) max((var_60), (((/* implicit */unsigned long long int) arr_88 [i_2] [i_2] [i_2] [i_2]))));
            arr_93 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)170))));
            var_61 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_47 [i_2] [i_30])) * (((((/* implicit */_Bool) 2502009175U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) : (5497256013876744421LL)))));
            var_62 = ((/* implicit */int) var_7);
            /* LoopSeq 1 */
            for (long long int i_31 = 2; i_31 < 13; i_31 += 2) 
            {
                var_63 = ((/* implicit */long long int) (-(var_9)));
                arr_97 [i_2] [i_2] [i_31] [i_31] = arr_85 [i_2] [i_31];
                var_64 *= (-(arr_57 [i_31] [i_31] [i_31] [i_31 - 2] [i_31 - 1]));
                arr_98 [i_31] [i_30] [i_31] [i_31] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [i_2] [i_2])) && (((/* implicit */_Bool) 7282660473754153096ULL))));
            }
        }
        /* LoopSeq 2 */
        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) /* same iter space */
        {
            var_65 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30387))))))));
            /* LoopSeq 1 */
            for (unsigned char i_33 = 0; i_33 < 14; i_33 += 2) 
            {
                var_66 = ((/* implicit */unsigned long long int) arr_55 [i_2] [i_32] [i_33]);
                var_67 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (arr_77 [i_2] [i_2] [i_2] [i_2] [i_33])))) >> (((((((/* implicit */int) arr_2 [i_2] [i_2])) * (((/* implicit */int) var_11)))) - (6657)))));
                arr_107 [i_2] [i_32] [i_33] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_86 [i_2] [i_32] [i_33] [i_32]))))) : (((/* implicit */int) var_3))));
                /* LoopNest 2 */
                for (signed char i_34 = 0; i_34 < 14; i_34 += 1) 
                {
                    for (unsigned char i_35 = 1; i_35 < 13; i_35 += 2) 
                    {
                        {
                            arr_114 [i_2] [i_32] [i_33] [i_32] [i_35] = ((/* implicit */unsigned int) arr_95 [i_2] [i_32] [i_34] [i_35 + 1]);
                            arr_115 [i_32] = ((/* implicit */short) arr_74 [i_32] [i_34]);
                            var_68 = ((((/* implicit */_Bool) arr_42 [i_2] [i_32] [i_35 - 1] [i_35 - 1] [i_35 + 1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_32] [i_32] [i_35 + 1] [i_32] [i_35] [i_34] [i_2]))));
                            arr_116 [i_34] [i_32] [i_34] [i_33] [i_32] &= ((/* implicit */signed char) arr_56 [i_2] [i_33] [i_34] [i_34]);
                        }
                    } 
                } 
            }
            var_69 = ((/* implicit */unsigned char) max((var_69), (((/* implicit */unsigned char) ((arr_86 [i_2] [i_2] [i_32] [i_32]) / (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_32] [i_32] [i_32] [i_2]))))))));
            var_70 -= ((/* implicit */unsigned int) arr_76 [i_2] [i_2] [i_2] [i_2] [i_2] [i_32]);
            /* LoopNest 2 */
            for (long long int i_36 = 0; i_36 < 14; i_36 += 2) 
            {
                for (unsigned char i_37 = 0; i_37 < 14; i_37 += 1) 
                {
                    {
                        var_71 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 3299286246U)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)246))))) : (((1355298752680262182ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39)))))));
                        arr_121 [i_2] [i_2] [i_32] [i_2] = (signed char)12;
                        var_72 = ((/* implicit */signed char) min((var_72), (((/* implicit */signed char) ((((/* implicit */_Bool) 3299286244U)) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (signed char)27)))))));
                        var_73 = ((/* implicit */_Bool) ((((/* implicit */long long int) 737796U)) + (8792161024097686565LL)));
                    }
                } 
            } 
        }
        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) /* same iter space */
        {
            arr_126 [i_2] [i_38] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_112 [i_2] [i_2] [i_38] [i_2] [i_38] [i_38])) - (((/* implicit */int) var_3))));
            arr_127 [i_2] [i_38] [i_38] = ((/* implicit */long long int) ((signed char) -1));
            var_74 = ((/* implicit */long long int) max((var_74), (((/* implicit */long long int) (~(arr_4 [i_2]))))));
            arr_128 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_103 [i_38] [i_2]))));
        }
    }
}
