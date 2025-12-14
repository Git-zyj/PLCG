/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19547
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 6; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1 + 2])) >> (((2593645812U) - (2593645806U)))))))))));
                var_11 = var_7;
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 1221593920))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_1), ((short)7840))))) : (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-9564)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_2 = 2; i_2 < 23; i_2 += 4) 
    {
        var_12 = ((/* implicit */_Bool) var_1);
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 23; i_5 += 1) 
                    {
                        for (int i_6 = 4; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (unsigned short)479)) : (((/* implicit */int) arr_19 [i_6] [i_5 + 2] [(signed char)1] [i_3 - 1] [i_2]))))));
                                arr_22 [i_5] = ((/* implicit */_Bool) min((2080801400), (((/* implicit */int) (short)124))));
                                var_13 |= ((/* implicit */signed char) (~((-(((/* implicit */int) var_4))))));
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 906073783U)) ? (((/* implicit */unsigned int) var_9)) : (arr_18 [i_6] [i_6] [i_6]))), (var_3)))) ? (((max((((/* implicit */long long int) var_8)), (5523984342289877326LL))) / (((/* implicit */long long int) arr_11 [i_4] [i_5 + 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)192)) ? (((/* implicit */int) (short)23653)) : (((/* implicit */int) (signed char)127))))))))));
                                var_15 = ((/* implicit */int) var_8);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~((~(var_2))))))));
                    var_17 ^= ((/* implicit */short) min((((/* implicit */int) (((~(((/* implicit */int) var_5)))) != (((/* implicit */int) (_Bool)0))))), ((+(((/* implicit */int) max((var_0), (arr_13 [i_3] [i_3]))))))));
                }
            } 
        } 
    }
    for (int i_7 = 1; i_7 < 9; i_7 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2251662374731776ULL)) && ((_Bool)0)));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 1; i_10 < 10; i_10 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
                        {
                            arr_35 [i_11] [i_8] [i_10 + 1] [i_11] |= (~(var_2));
                            var_19 = ((int) arr_17 [i_8] [i_8] [i_8] [i_7] [i_8] [i_7]);
                        }
                        for (short i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
                        {
                            arr_38 [i_7] [i_7] [i_7] [i_10] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(-601417644)))))) ? (min((2743953927U), (((/* implicit */unsigned int) 124506284)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2002752196U)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -6641941003724603321LL)) != (arr_26 [i_7])))) : (((69789770) << (((((((/* implicit */int) (short)-32571)) + (32586))) - (15))))))))));
                            arr_39 [i_12] [i_12] [i_7] [i_7] [i_8] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_32 [i_7] [i_10 - 1] [i_9] [i_8] [i_7 + 1] [i_7])) ? (var_9) : (2126217122))) >= (((/* implicit */int) arr_36 [i_7 + 1] [i_7 - 1] [i_7 + 2])))))));
                            var_20 |= ((/* implicit */signed char) var_7);
                            var_21 |= ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)170)))) << (((((((/* implicit */_Bool) (+(1018885418)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30151))) : (((var_6) % (((/* implicit */long long int) ((/* implicit */int) var_4))))))) + (30163LL)))));
                            arr_40 [i_7] [i_8] [i_7] [i_10 + 1] [i_10] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_14 [i_9])) ? (((/* implicit */unsigned int) 1281884894)) : (3686260449U))))), (((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) (signed char)28)) ? (arr_18 [i_7] [i_8] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (_Bool)0))))))))));
                        }
                        arr_41 [i_10 + 1] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) 3468758682U);
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) max((arr_20 [i_7] [i_8] [i_7] [i_7]), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 3829292710U)) : (var_7))))))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_14 = 2; i_14 < 10; i_14 += 4) 
                {
                    var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) && (((/* implicit */_Bool) arr_11 [i_7] [i_7]))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28188)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (var_2)))) ? (((((((/* implicit */int) var_4)) >= (-218614028))) ? (((/* implicit */long long int) arr_20 [i_7] [i_7] [i_7] [i_7])) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (0LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [7LL] [i_8])))));
                }
                /* LoopSeq 3 */
                for (short i_15 = 3; i_15 < 10; i_15 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_25 [i_7])) : (((/* implicit */int) (short)-21215))))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) var_8))))))));
                    arr_52 [i_7] [i_7] [i_13] [i_7] = ((/* implicit */unsigned short) 1670817976);
                    var_26 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (unsigned char)119)) ? (var_7) : (((/* implicit */long long int) (+(var_3))))))));
                    arr_53 [i_7] [i_7] [i_8] [i_8] [(unsigned short)4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))))))) >= (((unsigned int) max((6356863495008179005ULL), (((/* implicit */unsigned long long int) arr_37 [i_7] [i_8] [i_8] [5U] [i_13] [i_8])))))));
                }
                /* vectorizable */
                for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((short) (unsigned short)448)))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1952087927)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7] [i_8] [i_7] [i_16] [20LL]))) : (arr_12 [i_16] [i_7 + 1])));
                }
                for (unsigned char i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) min((-8016213330041589850LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) -805416202))))))))));
                    arr_59 [i_7] [i_7] = ((/* implicit */short) 4294967295U);
                    arr_60 [i_7] [i_7] [i_8] [i_13] [i_13] [i_17] = ((/* implicit */_Bool) max((var_4), (((/* implicit */short) arr_14 [(unsigned short)5]))));
                }
            }
            var_30 = ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_0)), (arr_37 [i_8] [i_7] [i_7] [i_7] [i_7] [i_7]))))))) ? ((-((~(var_7))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32675)) ? (arr_31 [i_7] [4] [i_7] [i_7] [(unsigned char)9] [i_7]) : (9223372036854775807LL)))))))));
        }
        for (unsigned int i_18 = 4; i_18 < 9; i_18 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_19 = 3; i_19 < 10; i_19 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    for (short i_21 = 3; i_21 < 8; i_21 += 1) 
                    {
                        {
                            arr_72 [i_7 + 1] [i_7 + 1] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)34)) ? (arr_31 [i_21] [i_20] [i_7] [i_7] [(short)1] [i_7]) : (((/* implicit */long long int) var_9)))))));
                            var_31 = ((/* implicit */_Bool) 1488495265U);
                            arr_73 [i_7] = ((/* implicit */unsigned char) min((max(((~(var_3))), (arr_68 [i_21 - 3] [i_21 - 3] [i_7 - 1] [1LL]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                        }
                    } 
                } 
                arr_74 [i_7] [i_18] [i_7] = ((/* implicit */signed char) (unsigned char)46);
            }
            for (unsigned int i_22 = 0; i_22 < 11; i_22 += 2) 
            {
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_22]))) : (max((var_2), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) 3224366515U))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(var_3)))) && (((/* implicit */_Bool) max((((/* implicit */short) var_0)), ((short)(-32767 - 1)))))))))))));
                var_33 = ((/* implicit */short) (~((+(((/* implicit */int) (short)9664))))));
            }
            for (short i_23 = 1; i_23 < 9; i_23 += 2) 
            {
                var_34 = ((/* implicit */int) (-(((((/* implicit */_Bool) max((arr_34 [(_Bool)0] [(_Bool)0] [i_7] [i_18] [i_7]), (var_3)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                arr_80 [i_23] [i_7] [i_7] = ((/* implicit */_Bool) var_4);
                /* LoopSeq 1 */
                for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_25 = 1; i_25 < 9; i_25 += 3) 
                    {
                        arr_86 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_1);
                        var_35 = ((/* implicit */signed char) ((arr_79 [i_7] [i_18 - 2] [i_23 - 1]) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    }
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) ((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (short)-31253)) : (((/* implicit */int) (short)-27947))))) != (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61843))) / (var_6))))))));
                }
            }
            arr_87 [i_7] = (~((~((+(var_2))))));
            var_37 += ((/* implicit */short) ((long long int) (-((-(0))))));
            arr_88 [i_7] [i_7] = ((/* implicit */int) 0U);
        }
        for (unsigned long long int i_26 = 4; i_26 < 7; i_26 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                for (unsigned short i_28 = 0; i_28 < 11; i_28 += 3) 
                {
                    {
                        var_38 += ((/* implicit */unsigned short) var_4);
                        var_39 = ((/* implicit */int) ((unsigned char) ((long long int) ((((/* implicit */_Bool) 2008211565)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7]))) : (1709483480U)))));
                        var_40 = ((/* implicit */unsigned int) (_Bool)1);
                        var_41 += ((/* implicit */signed char) (~(((((/* implicit */int) max(((unsigned short)31030), (((/* implicit */unsigned short) var_1))))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_36 [i_27] [0U] [0U]))))))));
                        var_42 = ((/* implicit */signed char) var_7);
                    }
                } 
            } 
            arr_97 [i_26] |= ((/* implicit */unsigned short) arr_26 [(short)2]);
        }
        for (unsigned long long int i_29 = 4; i_29 < 7; i_29 += 4) /* same iter space */
        {
            var_43 += ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) ((arr_48 [i_7] [4] [i_7] [i_29] [i_29]) || ((_Bool)1)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
            /* LoopNest 2 */
            for (unsigned int i_30 = 0; i_30 < 11; i_30 += 2) 
            {
                for (short i_31 = 0; i_31 < 11; i_31 += 2) 
                {
                    {
                        var_44 = ((((_Bool) arr_34 [i_29 - 3] [i_7 + 1] [i_7] [i_7 + 1] [i_7])) ? (arr_15 [i_7 - 1] [i_7 + 1]) : (((/* implicit */long long int) 3154027207U)));
                        var_45 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((arr_19 [i_7 + 2] [i_7] [i_7] [i_7] [22LL]) ? (-203782821) : (var_9)))) : (((((var_6) + (9223372036854775807LL))) >> (((arr_83 [i_31] [i_7] [i_29]) - (245043921)))))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (long long int i_32 = 0; i_32 < 11; i_32 += 3) 
        {
            var_46 = ((/* implicit */long long int) var_8);
            var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) (_Bool)0))));
            var_48 = ((/* implicit */signed char) (~(max((((/* implicit */int) (unsigned char)0)), (((((/* implicit */_Bool) 134184960U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_8))))))));
        }
        /* LoopNest 3 */
        for (short i_33 = 0; i_33 < 11; i_33 += 2) 
        {
            for (unsigned char i_34 = 0; i_34 < 11; i_34 += 2) 
            {
                for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_36 = 0; i_36 < 11; i_36 += 2) 
                        {
                            var_49 += ((/* implicit */long long int) min(((+(var_9))), (((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_34]))))))));
                            arr_121 [(_Bool)0] [i_35] [i_7] [i_33] [i_7] = ((/* implicit */long long int) arr_26 [i_7]);
                            var_50 = ((/* implicit */short) var_9);
                        }
                        for (long long int i_37 = 1; i_37 < 10; i_37 += 4) 
                        {
                            var_51 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_70 [(unsigned short)8] [i_7 - 1] [4LL] [i_7 - 1] [i_37 - 1] [i_37])) : (((/* implicit */int) var_8))))));
                            var_52 = ((/* implicit */signed char) var_3);
                        }
                        var_53 *= ((/* implicit */short) max((((/* implicit */int) ((unsigned char) var_7))), ((-((~(((/* implicit */int) (short)25297))))))));
                        arr_124 [i_7] [i_7] [i_7] [i_35] = ((/* implicit */long long int) arr_16 [i_7] [i_7] [i_7] [(_Bool)1] [i_7]);
                    }
                } 
            } 
        } 
        arr_125 [i_7] [i_7] = ((/* implicit */int) (~(var_3)));
    }
    for (long long int i_38 = 0; i_38 < 18; i_38 += 4) 
    {
        arr_128 [(signed char)8] [i_38] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned short)5250))))))), ((-(4162869987U)))));
        /* LoopNest 3 */
        for (signed char i_39 = 2; i_39 < 17; i_39 += 4) 
        {
            for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
            {
                for (long long int i_41 = 0; i_41 < 18; i_41 += 4) 
                {
                    {
                        var_54 = ((/* implicit */signed char) ((long long int) min((arr_132 [i_38]), (arr_12 [i_38] [i_38]))));
                        /* LoopSeq 1 */
                        for (signed char i_42 = 3; i_42 < 14; i_42 += 3) 
                        {
                            arr_139 [6U] [1ULL] [1ULL] [i_41] [i_40] = ((unsigned int) var_2);
                            var_55 = ((/* implicit */signed char) 69813451U);
                            var_56 = ((/* implicit */unsigned short) var_7);
                            var_57 = ((/* implicit */unsigned int) (-(((long long int) arr_16 [i_39] [i_39 - 2] [i_40] [i_40] [i_42 + 1]))));
                        }
                    }
                } 
            } 
        } 
    }
}
