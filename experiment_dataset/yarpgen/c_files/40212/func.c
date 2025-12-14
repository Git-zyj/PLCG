/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40212
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
    var_11 += (signed char)25;
    var_12 -= ((/* implicit */signed char) (-2147483647 - 1));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_13 -= ((/* implicit */long long int) arr_2 [i_0]);
        arr_3 [12LL] [12LL] = ((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) (short)7694))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_14 = var_10;
        var_15 &= ((/* implicit */int) min((((/* implicit */unsigned int) arr_2 [i_1])), (max((var_8), (((/* implicit */unsigned int) arr_0 [i_1] [i_1]))))));
        arr_7 [(signed char)1] = ((/* implicit */long long int) arr_6 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */short) (unsigned short)40547);
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_16 = ((((/* implicit */_Bool) arr_18 [i_3])) ? (arr_18 [i_2]) : (((/* implicit */unsigned long long int) 9223372036854775807LL)));
                        var_17 = ((/* implicit */unsigned int) var_3);
                        arr_19 [(short)6] [i_3] [(short)6] [3ULL] [3ULL] [i_5] = ((/* implicit */unsigned short) var_2);
                    }
                    var_18 = ((/* implicit */_Bool) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) max((arr_15 [i_3] [i_3] [i_4 - 1] [i_4 + 1]), (arr_15 [i_3] [i_3] [i_4 - 1] [12])))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                var_19 &= ((/* implicit */long long int) (!(arr_1 [i_2] [i_2])));
                var_20 += ((/* implicit */short) arr_8 [i_6]);
            }
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    for (unsigned char i_10 = 1; i_10 < 11; i_10 += 4) 
                    {
                        {
                            arr_31 [i_2] [i_6] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) & (arr_26 [i_9] [i_10])));
                            var_21 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) == (18446744073709551615ULL)));
                        }
                    } 
                } 
                arr_32 [i_6] = ((/* implicit */unsigned int) var_6);
                arr_33 [i_8] [i_6] = ((/* implicit */long long int) (~(arr_4 [i_8])));
            }
            for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                var_22 *= ((/* implicit */unsigned int) max((min((((var_4) + (32760LL))), (((/* implicit */long long int) min((arr_25 [i_6] [i_11]), (((/* implicit */unsigned short) var_0))))))), (((/* implicit */long long int) (short)7694))));
                arr_36 [i_2] [i_6] [i_2] [i_2] = ((((/* implicit */_Bool) (unsigned short)52441)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)0), ((unsigned char)104))))));
            }
            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                var_23 = -9006690082130315392LL;
                var_24 += ((/* implicit */long long int) arr_15 [9LL] [2] [11ULL] [2]);
            }
            /* LoopNest 2 */
            for (short i_13 = 1; i_13 < 13; i_13 += 4) 
            {
                for (unsigned short i_14 = 2; i_14 < 14; i_14 += 1) 
                {
                    {
                        arr_44 [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((var_8) << (((481080409) - (481080405))))) <= (min((((/* implicit */unsigned int) arr_14 [i_2])), (var_8)))))), (11U)));
                        arr_45 [i_6] [i_14 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_4))), (((/* implicit */long long int) arr_12 [i_2] [i_2])))))));
                    }
                } 
            } 
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)39))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)20947))))))))));
            var_26 = ((/* implicit */unsigned short) -1);
            arr_50 [i_15] &= ((/* implicit */_Bool) min((min((arr_28 [i_2] [i_15] [i_15] [i_15]), (arr_28 [i_2] [i_2] [i_2] [i_2]))), (((/* implicit */long long int) ((min((arr_21 [i_2]), (((/* implicit */unsigned int) arr_0 [i_2] [i_2])))) << (((/* implicit */int) arr_48 [i_2] [i_2] [i_2])))))));
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            arr_53 [(signed char)7] [(signed char)7] [i_16] = ((/* implicit */short) 9223372036854775807LL);
            /* LoopSeq 3 */
            for (int i_17 = 0; i_17 < 15; i_17 += 1) 
            {
                var_27 *= ((/* implicit */long long int) var_7);
                var_28 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-2798))));
            }
            for (long long int i_18 = 1; i_18 < 13; i_18 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_19 = 3; i_19 < 13; i_19 += 1) 
                {
                    for (int i_20 = 0; i_20 < 15; i_20 += 2) 
                    {
                        {
                            var_29 ^= ((/* implicit */unsigned char) ((arr_56 [i_2] [(short)7] [i_18] [(short)7]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_64 [i_2] [i_16] [i_19] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) arr_25 [(signed char)12] [i_2]))));
                            var_30 *= var_8;
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 2) 
                {
                    var_31 = ((/* implicit */unsigned char) arr_35 [i_2]);
                    var_32 += ((/* implicit */_Bool) (~(arr_16 [i_2] [i_16] [i_18 - 1] [(unsigned char)0])));
                    arr_68 [13] [0U] [i_18] [13] [0U] [13] = ((/* implicit */unsigned long long int) arr_43 [i_2] [i_2]);
                    var_33 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_20 [i_2]))));
                }
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    arr_71 [i_18] [i_22] [i_2] = ((/* implicit */unsigned short) ((arr_28 [11LL] [i_16] [i_16] [i_16]) - (((/* implicit */long long int) arr_4 [i_2]))));
                    var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_18])))))) && (((/* implicit */_Bool) var_8))));
                }
                for (long long int i_23 = 0; i_23 < 15; i_23 += 1) 
                {
                    var_35 += ((/* implicit */int) ((((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_2))))) & (((/* implicit */long long int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((/* implicit */int) var_7)))))));
                    /* LoopSeq 4 */
                    for (signed char i_24 = 0; i_24 < 15; i_24 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) arr_58 [i_24] [i_18]);
                        var_37 = ((/* implicit */signed char) (unsigned short)55976);
                    }
                    for (signed char i_25 = 2; i_25 < 13; i_25 += 1) 
                    {
                        arr_80 [10] [i_16] [i_16] [i_16] [i_25] [i_16] = ((/* implicit */signed char) var_7);
                        var_38 += ((/* implicit */int) (short)-2812);
                        arr_81 [i_2] [i_25] [i_2] [(signed char)12] [i_2] [i_25] [i_2] = ((/* implicit */unsigned char) ((4294967294U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (signed char i_26 = 1; i_26 < 13; i_26 += 2) 
                    {
                        arr_84 [i_26] [i_2] [i_26] [i_26] [i_16] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) : (arr_24 [i_2] [i_16] [i_18]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_2])))));
                        var_39 = (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) (signed char)-41)));
                        var_40 = ((/* implicit */unsigned int) ((arr_39 [i_18]) ^ (((/* implicit */long long int) ((arr_4 [i_26]) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                        arr_85 [i_26] [i_16] [i_2] [i_16] [i_26] = ((/* implicit */long long int) arr_74 [i_16] [i_26 + 1] [i_26] [i_26] [(signed char)0]);
                        arr_86 [i_26] [i_26] [i_18] [i_26] [5ULL] [i_18] [13] = ((/* implicit */long long int) ((((/* implicit */int) arr_76 [i_26 + 1] [i_26 + 2] [i_26 - 1] [i_26 + 1] [i_26 + 2])) <= (((/* implicit */int) var_3))));
                    }
                    for (int i_27 = 0; i_27 < 15; i_27 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned short) 4062791209013447964ULL);
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_18 + 2] [6ULL] [6ULL] [6ULL] [6ULL])) && (((-2456540523682722691LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43408)))))));
                        var_43 &= ((/* implicit */unsigned char) (!((_Bool)1)));
                        arr_89 [i_2] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */long long int) 4294967287U);
                    }
                }
                var_44 *= (!(((/* implicit */_Bool) 2314812268386582239LL)));
            }
            for (signed char i_28 = 0; i_28 < 15; i_28 += 1) 
            {
                /* LoopSeq 4 */
                for (long long int i_29 = 0; i_29 < 15; i_29 += 4) /* same iter space */
                {
                    arr_97 [i_2] [i_2] [i_16] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((((/* implicit */int) (unsigned short)20961)) >= (((/* implicit */int) arr_82 [11ULL] [i_28] [i_2] [i_2] [i_2])))))));
                    var_45 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                    var_46 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_57 [i_2] [i_16] [i_2]))));
                }
                for (long long int i_30 = 0; i_30 < 15; i_30 += 4) /* same iter space */
                {
                    var_47 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (16777215U)));
                    arr_101 [i_2] [i_2] [i_28] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) >= (((((/* implicit */int) var_7)) - (((/* implicit */int) arr_74 [i_30] [i_16] [i_28] [i_16] [i_30]))))));
                }
                for (short i_31 = 1; i_31 < 12; i_31 += 1) 
                {
                    arr_105 [i_2] [i_2] = (+(((/* implicit */int) (_Bool)1)));
                    arr_106 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_43 [i_2] [i_2]);
                }
                for (unsigned long long int i_32 = 0; i_32 < 15; i_32 += 2) 
                {
                    var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (18446744073709551613ULL))))));
                    /* LoopSeq 1 */
                    for (signed char i_33 = 0; i_33 < 15; i_33 += 4) 
                    {
                        arr_111 [i_33] [i_16] [i_16] = ((/* implicit */int) (_Bool)1);
                        var_49 += ((/* implicit */_Bool) (unsigned short)65535);
                        arr_112 [10LL] [10LL] [i_28] [i_28] [i_28] [(unsigned char)9] [0] = ((/* implicit */short) var_8);
                        var_50 *= ((/* implicit */unsigned char) (_Bool)1);
                        var_51 = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)95)))) + (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) (unsigned char)56)))))));
                    }
                }
                var_52 = ((/* implicit */signed char) var_10);
            }
        }
        /* vectorizable */
        for (unsigned char i_34 = 0; i_34 < 15; i_34 += 2) 
        {
            arr_117 [i_2] [i_2] [i_2] = ((/* implicit */short) 3258506007U);
            arr_118 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned short) (_Bool)1);
            var_53 = var_6;
        }
    }
    var_54 = ((/* implicit */unsigned char) var_4);
    var_55 = ((/* implicit */unsigned int) var_2);
}
