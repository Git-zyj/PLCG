/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222708
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
    var_10 &= var_3;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_11 -= ((/* implicit */short) arr_0 [i_0]);
        var_12 = ((/* implicit */short) ((arr_1 [i_0]) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 4194303)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_1] [i_3] [i_3]))))));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2])) - (((/* implicit */int) arr_1 [i_1 + 1]))));
                            var_15 = ((/* implicit */signed char) var_6);
                        }
                    } 
                } 
                var_16 = arr_11 [i_0] [i_0] [i_1] [i_0];
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_1 + 1] [i_1])) ? (((/* implicit */int) (unsigned short)37702)) : (((((/* implicit */_Bool) (unsigned short)27833)) ? (-820421293) : (((/* implicit */int) var_0))))));
                var_18 |= ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [8ULL] [i_0] [i_1 + 1])) ? (arr_9 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_1] [(short)14])));
            }
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 4; i_6 < 19; i_6 += 3) 
                {
                    var_19 += ((/* implicit */unsigned char) ((15426194164040145736ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63530)))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-269222313) <= (((/* implicit */int) arr_2 [(unsigned short)19] [i_1])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_1)))));
                    var_21 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_18 [i_0] [(_Bool)1] [(_Bool)1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5]))) : (var_4))) * (((1701170529U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
                }
                /* LoopSeq 2 */
                for (int i_7 = 1; i_7 < 20; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        var_22 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_5] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_14 [i_8] [i_1] [i_1])))) * (((/* implicit */int) arr_24 [i_7 - 1] [i_7] [i_1 + 1] [i_7 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(short)22])) ? (((/* implicit */long long int) arr_11 [i_7] [i_7] [i_5] [i_7])) : (2418625669599897901LL)))) ? (arr_22 [i_7] [i_5]) : (((((/* implicit */_Bool) arr_12 [i_8] [20LL] [i_5] [10ULL] [20LL] [20LL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))))))));
                    }
                    var_24 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)27833)))) / (((((/* implicit */_Bool) 2593796766U)) ? (arr_17 [i_1]) : (((/* implicit */int) var_6))))));
                    arr_25 [i_1] = ((/* implicit */signed char) 2786893124U);
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4032)) * (((/* implicit */int) ((arr_5 [(short)8] [i_1] [(short)8] [i_1]) <= (arr_21 [i_0] [i_0] [i_1]))))));
                        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29089))) != (876837994242518167ULL))))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_5] [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_19 [i_1 + 1]))))));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((arr_21 [(short)8] [i_7 + 1] [(short)8]) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))))));
                        var_29 = ((/* implicit */unsigned short) (+(arr_11 [i_7 - 1] [i_7 - 1] [i_1 + 1] [i_1])));
                    }
                    var_30 = ((/* implicit */long long int) ((signed char) arr_22 [i_1 + 1] [i_1 + 1]));
                }
                for (int i_10 = 1; i_10 < 20; i_10 += 4) /* same iter space */
                {
                    arr_30 [i_1] [i_1] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-85))) <= (18446744073709551615ULL)))) << (((((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74))) : (18446744073709551615ULL))) - (54ULL)))));
                    var_31 = arr_4 [i_1] [i_1 + 1] [i_1];
                    var_32 = ((/* implicit */int) var_3);
                    /* LoopSeq 3 */
                    for (short i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((arr_11 [i_0] [i_1 + 1] [i_5] [i_11 + 1]) % (((/* implicit */int) var_7)))))));
                        var_34 = ((/* implicit */short) var_5);
                        var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1] [i_10 + 2]))));
                    }
                    for (int i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1296744777)) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_1]))));
                        var_37 -= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_26 [i_12] [i_1] [i_12] [i_10] [i_1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23742))) == (4ULL)))) : (((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_12] [i_5] [18LL] [(unsigned short)10])) ? (arr_17 [i_12]) : (((/* implicit */int) (short)23742))))));
                        var_38 = ((/* implicit */unsigned char) var_8);
                        var_39 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_12] [i_12] [i_0])) ? (((/* implicit */int) arr_36 [i_1] [i_10] [i_1])) : (((/* implicit */int) (short)23742))))) ? (((/* implicit */long long int) var_2)) : (5017655912377726302LL)));
                        var_40 ^= (-(((/* implicit */int) (short)-32747)));
                    }
                    for (unsigned short i_13 = 1; i_13 < 19; i_13 += 1) 
                    {
                        var_41 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_27 [i_5] [i_1] [i_5] [i_0] [i_5])) ? (arr_31 [11] [i_10 - 1] [i_10 + 3] [i_5] [i_1] [i_1] [i_0]) : (arr_5 [i_0] [i_0] [i_0] [18LL]))) <= (((/* implicit */long long int) arr_27 [i_0] [i_13 + 1] [i_5] [i_5] [i_5]))));
                        var_42 = ((/* implicit */signed char) (+(((arr_27 [i_13] [i_10] [i_0] [i_0] [i_0]) / (((/* implicit */int) (short)23742))))));
                        var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_10 + 1] [i_10 + 1] [i_0] [i_10])) ? (((/* implicit */int) (unsigned short)33660)) : (((/* implicit */int) arr_24 [i_0] [i_1 + 1] [i_5] [i_5] [i_1 + 1] [i_10] [i_5]))));
                    }
                    arr_39 [13U] [i_1] [i_1] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_5] [i_1] [i_5] [i_1 + 1] [13LL] [i_5] [i_1])) ? (((/* implicit */int) arr_32 [i_0] [i_1] [(_Bool)0])) : (((/* implicit */int) arr_24 [i_0] [i_1 + 1] [i_5] [i_1 + 1] [i_5] [(unsigned char)3] [(short)6]))));
                }
                var_44 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [18LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5]))) : (9223372036854775807LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1 + 1])))));
            }
            for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
            {
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (arr_31 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_14] [i_14]) : (arr_31 [i_0] [(unsigned char)11] [i_0] [i_0] [i_1 + 1] [i_1 + 1] [2])));
                arr_44 [i_1] [(unsigned char)13] = ((/* implicit */int) ((13911924737316678279ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)41486)) + (((/* implicit */int) (signed char)123)))))));
            }
            var_46 = ((/* implicit */signed char) var_0);
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_16 = 0; i_16 < 23; i_16 += 3) 
            {
                var_47 = ((/* implicit */unsigned char) arr_49 [i_0] [i_0] [i_15] [i_0]);
                /* LoopSeq 2 */
                for (long long int i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    var_48 = ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_15] [i_0] [i_0] [i_17] [i_17])))) * (((((/* implicit */int) var_6)) * (((/* implicit */int) var_9)))));
                    /* LoopSeq 3 */
                    for (short i_18 = 0; i_18 < 23; i_18 += 3) /* same iter space */
                    {
                        var_49 = arr_45 [i_15] [i_17] [i_18];
                        var_50 = ((/* implicit */_Bool) var_1);
                    }
                    for (short i_19 = 0; i_19 < 23; i_19 += 3) /* same iter space */
                    {
                        var_51 = ((/* implicit */signed char) var_8);
                        var_52 = ((/* implicit */long long int) arr_36 [i_0] [i_16] [i_19]);
                        arr_57 [i_15] [i_15] [i_15] [(unsigned short)18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2593796767U)) ? (1554834203) : (((/* implicit */int) arr_36 [15U] [(unsigned short)4] [21U])))))));
                        arr_58 [i_19] [i_16] [i_15] [13LL] [i_15] [(unsigned short)3] [i_0] = (i_15 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) arr_56 [i_0] [i_0] [(unsigned char)0] [i_15])) >> (((((/* implicit */int) arr_46 [i_0] [i_15])) + (89)))))) : (((/* implicit */short) ((((/* implicit */int) arr_56 [i_0] [i_0] [(unsigned char)0] [i_15])) >> (((((((/* implicit */int) arr_46 [i_0] [i_15])) + (89))) - (37))))));
                    }
                    for (short i_20 = 0; i_20 < 23; i_20 += 3) /* same iter space */
                    {
                        var_53 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_61 [i_0] [i_15] [i_16] [i_17] [i_17] [i_0])) ? (((/* implicit */int) arr_61 [16LL] [i_15] [i_15] [i_17] [i_17] [i_0])) : (((/* implicit */int) arr_61 [i_0] [(unsigned short)10] [(signed char)12] [i_17] [i_17] [i_0]))));
                        var_54 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_16])) ? (((/* implicit */int) arr_0 [i_16])) : (((/* implicit */int) arr_52 [6U] [i_15] [(signed char)14] [i_15] [i_15] [(signed char)14] [i_17]))));
                    }
                }
                for (unsigned short i_21 = 1; i_21 < 21; i_21 += 2) 
                {
                    var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)82)) ? (arr_33 [9LL] [i_15] [i_21] [9LL] [20ULL] [(unsigned short)22]) : (((/* implicit */int) arr_43 [i_21] [i_21 - 1] [i_21] [i_21]))));
                    var_56 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_7 [i_15])))) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_21 - 1] [i_21 + 2] [i_21 + 1] [i_21 + 1] [(unsigned short)5] [i_21 + 2])))));
                    var_57 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) <= (((/* implicit */int) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_21] [i_16] [i_16])))))) : ((-(19U)))));
                }
                var_58 = ((/* implicit */unsigned short) ((signed char) arr_56 [i_0] [i_0] [i_0] [i_15]));
                arr_65 [(unsigned short)1] [i_15] [i_15] = ((/* implicit */int) arr_20 [(unsigned char)8] [i_16] [i_15] [i_15] [(unsigned char)8] [(unsigned char)8]);
                var_59 = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_0] [(unsigned short)17] [(short)20] [i_15] [i_16] [(unsigned short)1]))));
            }
            for (long long int i_22 = 2; i_22 < 20; i_22 += 1) 
            {
                var_60 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)27449)) >> ((((-(arr_62 [18ULL] [18ULL] [4] [i_15]))) - (451592456)))));
                arr_69 [(signed char)3] [(signed char)3] [(signed char)3] [i_15] = ((arr_6 [i_22 + 2]) ? ((+(((/* implicit */int) arr_50 [i_0] [i_15] [i_22] [13LL])))) : (((/* implicit */int) (unsigned short)41473)));
            }
            arr_70 [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_15] [i_15] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) : (((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-23734)))))));
        }
    }
    for (unsigned short i_23 = 0; i_23 < 20; i_23 += 2) 
    {
        var_61 = ((/* implicit */signed char) min((min((2853915670345109192LL), (((/* implicit */long long int) arr_11 [i_23] [i_23] [i_23] [(unsigned short)17])))), (((/* implicit */long long int) ((arr_11 [i_23] [i_23] [i_23] [i_23]) - (arr_11 [i_23] [i_23] [i_23] [i_23]))))));
        var_62 = ((/* implicit */long long int) max((var_62), (((/* implicit */long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_64 [i_23] [i_23] [i_23] [i_23])))) / (((/* implicit */int) min(((unsigned short)27834), (arr_66 [i_23]))))))) ? (((((/* implicit */_Bool) arr_46 [i_23] [i_23])) ? (((/* implicit */int) arr_71 [i_23] [i_23])) : (((/* implicit */int) arr_71 [i_23] [i_23])))) : (((/* implicit */int) max((arr_48 [i_23] [i_23]), (arr_48 [i_23] [i_23])))))))));
    }
    for (unsigned short i_24 = 3; i_24 < 10; i_24 += 3) 
    {
        var_63 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 262143U)) ? (min((4024573068U), (((/* implicit */unsigned int) arr_40 [6U])))) : (var_4)))) ? (min((2240054851902594422ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_24] [(unsigned short)0] [(unsigned short)20] [i_24]))) : (4611686009837453312LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_74 [i_24 - 1])) ? (((((/* implicit */int) var_0)) << (((((((/* implicit */int) (signed char)-124)) + (149))) - (22))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_20 [(unsigned short)3] [i_24] [(unsigned short)3] [i_24] [i_24] [i_24]))))))))));
        arr_78 [i_24] = ((/* implicit */unsigned short) min((((arr_9 [i_24 - 3] [i_24] [i_24 - 1] [i_24 - 1] [i_24]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65280))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_50 [(signed char)12] [8] [8] [8]))))) ? (min((-803214002), (((/* implicit */int) (unsigned short)2047)))) : (-1474057067))))));
    }
    var_64 = ((/* implicit */unsigned int) max((var_64), (((/* implicit */unsigned int) var_9))));
    var_65 |= ((/* implicit */unsigned short) var_6);
    var_66 = ((/* implicit */unsigned int) (((+(((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_8)) - (12733))))))) == (((((/* implicit */int) max((var_7), (((/* implicit */short) (signed char)25))))) / (((/* implicit */int) (unsigned short)6799))))));
}
