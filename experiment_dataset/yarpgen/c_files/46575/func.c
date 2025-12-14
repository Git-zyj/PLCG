/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46575
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) arr_2 [i_0]);
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
        {
            var_15 *= ((((/* implicit */_Bool) (short)-28799)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(-1610162456)))), (arr_2 [13ULL])))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (var_10))));
            var_16 = ((/* implicit */long long int) ((unsigned int) ((var_2) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) ((4351473533036657539ULL) != (((/* implicit */unsigned long long int) 2138724352U))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) min((((arr_0 [(_Bool)1]) & (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((_Bool) var_0))))));
        }
        for (long long int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_3 = 1; i_3 < 17; i_3 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 802215125)) ? (arr_7 [i_0] [i_3 - 1] [i_3 + 1]) : (var_9)));
                arr_14 [14ULL] &= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1107211533)))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3 + 1])) || (((/* implicit */_Bool) -1107211533))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 3; i_4 < 15; i_4 += 3) 
                {
                    arr_18 [i_0] [i_4 + 2] [8LL] [i_3] &= ((/* implicit */unsigned short) var_10);
                    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) arr_13 [i_0] [i_3] [i_3] [i_3]))));
                }
                for (int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                {
                    arr_22 [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_3 + 1] [i_3] [i_3] [i_3 + 1])) ? (8191ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1])))));
                    arr_23 [12] [12] [(_Bool)1] [i_3] [i_0] = ((/* implicit */int) arr_2 [i_0]);
                }
                for (int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                {
                    var_20 = ((arr_25 [i_0]) - (((/* implicit */int) var_6)));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 3; i_7 < 17; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) var_1);
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 270215977642229760ULL)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
                    }
                }
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (((_Bool)1) ? ((~(-1279979222065009474LL))) : (((/* implicit */long long int) -802215125)))))));
            }
            for (short i_8 = 1; i_8 < 17; i_8 += 3) /* same iter space */
            {
                arr_33 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_2]))))) ? (((((/* implicit */_Bool) 183781538)) ? (((/* implicit */unsigned long long int) -832933162)) : (arr_10 [i_0] [i_8] [(unsigned char)4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0] [3LL] [16ULL] [i_8] [i_0])) || (var_3))))))), (((/* implicit */unsigned long long int) 802215125))));
                var_24 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (5624508630785221064LL) : (((/* implicit */long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))) : (max((((/* implicit */unsigned long long int) var_7)), (arr_10 [i_0] [i_2] [i_8 + 1]))))));
            }
            /* vectorizable */
            for (signed char i_9 = 4; i_9 < 17; i_9 += 4) /* same iter space */
            {
                arr_37 [i_0] = var_2;
                arr_38 [i_0] [i_0] [i_2] = ((/* implicit */short) ((long long int) arr_7 [i_0] [i_9 - 3] [i_9 - 4]));
            }
            for (signed char i_10 = 4; i_10 < 17; i_10 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((-1395739839), (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_10 [i_10] [i_10] [i_10])) ? (arr_34 [i_0] [i_0] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) ((unsigned short) ((_Bool) 1706441312)))))))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_0)))))) != (min((((/* implicit */int) (_Bool)1)), (arr_39 [i_10] [i_10] [i_10 + 1])))));
            }
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [i_2]), (((/* implicit */unsigned int) arr_9 [i_2]))))) || (((/* implicit */_Bool) (unsigned char)242))));
            var_28 = ((/* implicit */signed char) ((min((((/* implicit */long long int) -1120135645)), (arr_36 [i_0]))) != (((/* implicit */long long int) max((((/* implicit */int) (signed char)118)), (2097151))))));
        }
        for (long long int i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_12 = 0; i_12 < 18; i_12 += 3) 
            {
                arr_46 [i_0] [i_11] [i_12] [i_12] = ((/* implicit */int) arr_12 [i_0]);
                var_29 = ((/* implicit */unsigned int) var_10);
                var_30 *= ((/* implicit */signed char) 212044493U);
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_31 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_10 [i_0] [i_11] [i_0]) != (var_10)))) != (((/* implicit */int) ((signed char) ((8368808647424797081LL) != (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                var_32 = (~(((((/* implicit */_Bool) var_5)) ? (((int) -802215126)) : (min((((/* implicit */int) var_0)), (arr_0 [(signed char)11]))))));
                arr_50 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (arr_43 [i_0] [i_13])))) || (((/* implicit */_Bool) ((int) arr_47 [i_0] [i_0] [i_11])))));
            }
            for (long long int i_14 = 2; i_14 < 17; i_14 += 1) 
            {
                var_33 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_2 [i_0]), (((/* implicit */long long int) arr_12 [i_0]))))), (arr_10 [i_0] [i_11] [i_0])));
                var_34 = ((/* implicit */short) (-(-802215124)));
                var_35 = ((/* implicit */int) max((var_35), (1706441312)));
                var_36 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 13154050682309936944ULL))) ? (min((((/* implicit */unsigned long long int) var_12)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                var_37 = ((/* implicit */unsigned long long int) max((var_37), (var_10)));
            }
            for (unsigned int i_15 = 0; i_15 < 18; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_16 = 1; i_16 < 16; i_16 += 4) 
                {
                    var_38 &= ((/* implicit */unsigned char) (_Bool)0);
                    var_39 = ((/* implicit */unsigned char) var_12);
                }
                var_40 = ((/* implicit */signed char) arr_24 [i_0]);
            }
            var_41 = ((/* implicit */signed char) var_1);
            /* LoopSeq 1 */
            for (signed char i_17 = 1; i_17 < 16; i_17 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_18 = 1; i_18 < 17; i_18 += 3) 
                {
                    var_42 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_13 [i_11] [i_17 + 2] [i_17 - 1] [i_18 - 1])) ? (((/* implicit */int) arr_13 [i_0] [i_11] [i_11] [i_18 - 1])) : (((/* implicit */int) arr_13 [i_11] [i_11] [11LL] [i_18 - 1])))), (((/* implicit */int) min((arr_53 [(signed char)1] [i_0] [i_11] [i_18 - 1]), (((/* implicit */short) (unsigned char)235)))))));
                    arr_69 [i_18] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_19 = 2; i_19 < 16; i_19 += 2) 
                    {
                        var_43 = ((/* implicit */unsigned char) arr_65 [i_0] [(signed char)10] [i_18]);
                        var_44 = ((/* implicit */unsigned long long int) ((unsigned int) arr_52 [i_0] [i_11] [i_11] [i_19 + 1]));
                    }
                    for (int i_20 = 0; i_20 < 18; i_20 += 1) 
                    {
                        var_45 *= ((/* implicit */int) var_3);
                        var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)28))))))) != ((+(arr_26 [i_18] [i_18 + 1] [i_18] [i_18 + 1])))));
                    }
                    for (signed char i_21 = 0; i_21 < 18; i_21 += 2) 
                    {
                        arr_76 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_62 [i_11] [i_0] [4LL]) || (((/* implicit */_Bool) var_11)))) ? (max((-803345068818482538LL), (arr_64 [i_17] [i_11] [i_17]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_0] [i_11] [i_11] [i_18]))) != (arr_47 [i_0] [i_0] [i_0])))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_56 [i_0] [i_11])), (var_4)))))))));
                        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) arr_20 [i_21] [i_21] [i_17] [i_21] [(_Bool)1]))));
                        var_48 = ((/* implicit */signed char) arr_52 [i_0] [i_0] [i_17] [0ULL]);
                        var_49 = ((/* implicit */int) min((((/* implicit */long long int) (signed char)36)), (arr_36 [i_0])));
                    }
                    arr_77 [i_0] [i_0] [i_11] [(unsigned char)17] [i_0] = ((/* implicit */_Bool) ((long long int) ((var_7) - (((/* implicit */long long int) ((1184831597U) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                    var_50 = ((/* implicit */int) ((((-8685915) != (((/* implicit */int) arr_73 [i_0] [i_18 + 1] [i_17] [i_0] [i_17])))) || (((/* implicit */_Bool) max((arr_16 [i_18 - 1] [i_18 - 1]), (arr_16 [i_18 + 1] [i_18]))))));
                }
                /* vectorizable */
                for (long long int i_22 = 1; i_22 < 16; i_22 += 2) 
                {
                    var_51 = ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_22 - 1] [i_22] [i_22] [i_22 + 1])) || (((/* implicit */_Bool) var_0))));
                    var_52 += ((/* implicit */long long int) ((((/* implicit */_Bool) -1107211533)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */unsigned int) var_11)) : (1982712473U))))));
                }
                /* vectorizable */
                for (long long int i_23 = 0; i_23 < 18; i_23 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_24 = 2; i_24 < 16; i_24 += 4) /* same iter space */
                    {
                        arr_87 [i_0] [i_17] = ((/* implicit */signed char) ((arr_10 [i_0] [i_17 - 1] [i_17 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_17 + 1] [i_17 + 1] [i_17 + 1])))));
                        var_53 += ((/* implicit */int) arr_68 [i_0] [i_0]);
                    }
                    for (long long int i_25 = 2; i_25 < 16; i_25 += 4) /* same iter space */
                    {
                        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_25 [i_0])) : (((unsigned long long int) arr_79 [i_0] [i_11] [7] [i_23] [i_25]))));
                        var_55 = ((/* implicit */short) ((((/* implicit */_Bool) arr_79 [i_0] [i_11] [i_17] [i_23] [i_11])) ? (((/* implicit */long long int) 2097151)) : (-8865514853885397800LL)));
                        arr_91 [i_0] [i_11] [i_17] [i_23] [i_25 - 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)55))) != (((((/* implicit */_Bool) arr_74 [i_0] [i_25 - 1] [i_23] [i_23] [i_25 + 1])) ? (arr_34 [i_0] [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_25])))))));
                        var_56 = ((/* implicit */short) arr_12 [i_23]);
                        var_57 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((arr_56 [i_25] [i_11]) || (((/* implicit */_Bool) (signed char)-28)))))));
                    }
                    for (long long int i_26 = 1; i_26 < 16; i_26 += 1) 
                    {
                        arr_95 [i_11] [i_17] [i_0] [i_0] [i_26] = ((/* implicit */unsigned short) ((signed char) arr_73 [6] [i_23] [i_26 + 1] [i_0] [i_23]));
                        var_58 = ((/* implicit */unsigned long long int) -9223372036854775791LL);
                        var_59 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) (unsigned char)243))));
                        var_60 &= ((/* implicit */long long int) arr_72 [10]);
                        var_61 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_0] [i_17 + 1] [i_26 + 2] [i_26] [i_26 + 1]))) / (14486284835011395619ULL)));
                    }
                    var_62 ^= ((/* implicit */short) var_9);
                }
                arr_96 [i_0] [i_0] [(unsigned char)13] [15LL] = ((/* implicit */short) 13908787021001607402ULL);
                var_63 = ((/* implicit */long long int) (~(((/* implicit */int) ((((int) arr_66 [i_11] [i_11] [i_11])) != (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) arr_43 [i_0] [i_0]))))))))));
                arr_97 [i_0] [i_11] [i_0] = ((/* implicit */signed char) ((int) ((((((/* implicit */_Bool) 4294967293U)) || (((/* implicit */_Bool) arr_42 [i_17 + 1] [1])))) ? (((/* implicit */unsigned long long int) ((long long int) 9223372036854775807LL))) : (var_10))));
            }
            var_64 *= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_11] [8LL])) ? (4082922802U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) && (((/* implicit */_Bool) ((signed char) arr_52 [i_0] [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) (~(min((((/* implicit */long long int) arr_80 [i_0] [i_0] [i_0] [i_0] [i_11] [i_11])), (9223372036854775807LL)))))));
            var_65 = ((/* implicit */short) max((var_65), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_26 [i_0] [i_0] [i_0] [i_11]), (((/* implicit */long long int) (signed char)127)))))))) != (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_12 [i_0]))))))))));
        }
    }
    for (int i_27 = 3; i_27 < 11; i_27 += 2) 
    {
        var_66 = ((/* implicit */unsigned long long int) max((((long long int) 1045051508)), (((/* implicit */long long int) var_12))));
        var_67 = ((/* implicit */signed char) max((var_67), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(14812492932220709179ULL)))) || (((/* implicit */_Bool) ((unsigned int) arr_93 [i_27] [i_27 - 2] [i_27 - 1] [i_27] [i_27 - 2] [(unsigned short)8] [i_27 - 2]))))))));
    }
    var_68 -= ((/* implicit */unsigned short) -2004742901);
}
