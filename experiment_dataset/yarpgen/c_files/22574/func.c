/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22574
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)203))));
                var_15 &= ((/* implicit */short) var_1);
                var_16 = ((/* implicit */short) (((+(((/* implicit */int) var_10)))) ^ ((+(((/* implicit */int) ((signed char) var_3)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 1; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) (signed char)-89);
        arr_8 [(signed char)10] [i_2] = ((/* implicit */long long int) var_3);
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_2]), (((/* implicit */short) var_13))))))))) * (max((((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_6 [i_2 - 1]))))), (max((var_1), (((/* implicit */long long int) arr_7 [i_2] [i_2]))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2])) : (((/* implicit */int) arr_2 [0LL])))) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_11))));
        arr_11 [i_2] [i_2 - 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 - 1])) : (((/* implicit */int) arr_6 [i_2 + 1])))) <= (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 + 1])) != (((/* implicit */int) var_2)))))));
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 18; i_3 += 4) /* same iter space */
    {
        var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 + 1])) || (((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 - 1]))));
        arr_15 [i_3] [i_3] = ((/* implicit */signed char) ((short) arr_12 [i_3 - 1] [i_3]));
        var_19 = ((/* implicit */unsigned char) arr_14 [(signed char)6]);
        var_20 -= ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
        var_21 = ((/* implicit */signed char) (((+(((/* implicit */int) var_2)))) >> (((((((/* implicit */_Bool) (unsigned char)237)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))))) + (8038540894590926436LL)))));
    }
    for (signed char i_4 = 1; i_4 < 18; i_4 += 4) /* same iter space */
    {
        arr_18 [i_4] [i_4] = min((((((/* implicit */_Bool) arr_17 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (var_0))), (((/* implicit */long long int) ((short) var_6))));
        arr_19 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_4] [i_4 + 1]))));
        var_22 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (short)19965))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))))))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    {
                        arr_30 [i_5] [i_5] [i_5] [i_7] |= ((/* implicit */signed char) min((((/* implicit */int) var_2)), ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))))));
                        var_23 = ((/* implicit */short) arr_25 [i_4] [i_4] [11LL]);
                        arr_31 [i_4] [i_5] [i_6] [i_6] [i_5] [i_4] &= ((((/* implicit */_Bool) arr_13 [i_6])) ? ((~(((((/* implicit */_Bool) (short)11676)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : (9223372036854775797LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))));
                        var_24 = min((((/* implicit */long long int) ((signed char) (~(((/* implicit */int) var_12)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-84))) + (4732456779873439992LL))))));
                    }
                } 
            } 
        } 
    }
    var_25 = var_1;
    /* LoopSeq 2 */
    for (short i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_9 = 4; i_9 < 23; i_9 += 4) 
        {
            var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_36 [i_9 - 1])) && (((/* implicit */_Bool) (unsigned char)218)))) ? (max((min((((/* implicit */long long int) arr_35 [i_8])), (arr_37 [i_8] [i_8] [i_9 - 4]))), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)8)))))))))));
            /* LoopSeq 2 */
            for (long long int i_10 = 4; i_10 < 24; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    for (long long int i_12 = 2; i_12 < 23; i_12 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) ((((((/* implicit */int) var_6)) & (((/* implicit */int) arr_35 [i_8])))) < ((+(((/* implicit */int) var_2))))));
                            arr_47 [i_8] [i_9] [i_12] [i_10] [i_11] [i_12] = ((/* implicit */signed char) min((((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_4))))))), (var_2)));
                        }
                    } 
                } 
                var_28 *= ((/* implicit */long long int) min((((((/* implicit */int) arr_39 [(short)12] [i_9 + 1] [i_9 + 1] [i_10 - 2])) - (((/* implicit */int) arr_39 [20LL] [i_9 - 4] [i_9 - 4] [i_10 - 4])))), (((/* implicit */int) ((((/* implicit */_Bool) (short)1671)) || (((/* implicit */_Bool) var_6)))))));
                arr_48 [i_8] [i_8] = ((/* implicit */short) ((((var_1) / (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_8] [i_9 - 2] [i_10 + 1] [i_10 - 4] [i_8]))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_9 - 2] [i_9] [i_9] [i_9 + 1] [i_9 + 1])) ? (((/* implicit */int) arr_45 [i_9 + 1] [i_9] [i_9] [i_9] [i_9 - 4])) : (((/* implicit */int) var_12)))))));
                arr_49 [(signed char)16] [i_8] [16LL] [(signed char)16] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-8)) || (((/* implicit */_Bool) 9223372036854775805LL))))) > (((((/* implicit */_Bool) arr_32 [i_10 - 2] [i_10 - 1])) ? (((/* implicit */int) arr_32 [i_10 - 2] [i_10 + 1])) : (((/* implicit */int) (short)32767))))));
            }
            for (signed char i_13 = 1; i_13 < 22; i_13 += 4) 
            {
                arr_52 [i_8] [i_13] [i_9 + 1] [(signed char)17] = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)6)), (3576894977935144220LL)));
                var_29 = ((/* implicit */unsigned char) arr_32 [i_9] [(unsigned char)4]);
                var_30 &= ((/* implicit */short) ((((/* implicit */int) var_12)) != (min((((/* implicit */int) var_8)), ((+(((/* implicit */int) (short)-28241))))))));
            }
            var_31 ^= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_8] [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1])) && (((/* implicit */_Bool) var_0))))), (((((((/* implicit */int) (signed char)-87)) + (2147483647))) >> (((((/* implicit */int) (signed char)40)) - (16)))))));
            arr_53 [i_8] [i_8] [i_8] = ((/* implicit */signed char) arr_43 [i_9 + 1] [i_9 - 2] [i_9 + 1] [i_9 - 4]);
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_14 = 2; i_14 < 21; i_14 += 3) 
            {
                var_32 = ((/* implicit */unsigned char) arr_37 [i_8] [i_9 - 2] [i_9 - 2]);
                /* LoopNest 2 */
                for (long long int i_15 = 2; i_15 < 22; i_15 += 3) 
                {
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        {
                            arr_63 [i_14] [i_9] [i_9 - 4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_58 [i_14 - 2] [i_15] [i_15 + 1] [i_16]))));
                            var_33 = ((/* implicit */unsigned char) ((signed char) var_13));
                            var_34 = ((/* implicit */unsigned char) var_4);
                            var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_17 = 3; i_17 < 24; i_17 += 2) 
                {
                    arr_67 [i_14] [(short)11] [i_14] [i_17] [i_14] [i_14] = (i_14 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_65 [i_14] [i_14 + 1] [i_14 + 3])) << (((arr_56 [i_14] [i_14 - 1] [i_14 - 1] [i_17] [i_14]) - (6085465905661718521LL)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) arr_65 [i_14] [i_14 + 1] [i_14 + 3])) << (((((arr_56 [i_14] [i_14 - 1] [i_14 - 1] [i_17] [i_14]) - (6085465905661718521LL))) + (3454161239384650234LL))))));
                    arr_68 [i_8] [i_17] [i_14] [i_14] [i_17] = ((/* implicit */unsigned char) (~(var_0)));
                }
                var_36 = ((long long int) arr_65 [i_8] [i_8] [i_8]);
                var_37 = ((/* implicit */short) ((signed char) arr_33 [i_9 - 2]));
            }
            for (signed char i_18 = 3; i_18 < 23; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 25; i_19 += 1) 
                {
                    for (short i_20 = 3; i_20 < 24; i_20 += 4) 
                    {
                        {
                            var_38 -= ((/* implicit */unsigned char) min((((/* implicit */int) arr_72 [i_8] [i_9 - 3] [i_9 - 4] [i_18 + 1] [i_9])), ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_32 [i_8] [i_9])) : (((/* implicit */int) (signed char)3))))))));
                            var_39 = 2057807404590532174LL;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_21 = 1; i_21 < 22; i_21 += 4) 
                {
                    arr_79 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */long long int) (short)32755);
                    /* LoopSeq 4 */
                    for (short i_22 = 1; i_22 < 24; i_22 += 3) /* same iter space */
                    {
                        arr_83 [i_18] [i_9] [i_9 + 2] [(unsigned char)0] [i_9 + 1] [i_9] [i_9] = ((/* implicit */short) var_3);
                        arr_84 [i_8] [i_18] [i_18] [i_8] = ((/* implicit */unsigned char) (+(((long long int) ((((/* implicit */int) arr_69 [i_8] [6LL] [i_21])) <= (((/* implicit */int) (unsigned char)0)))))));
                    }
                    for (short i_23 = 1; i_23 < 24; i_23 += 3) /* same iter space */
                    {
                        arr_87 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_18] = ((/* implicit */unsigned char) var_7);
                        var_40 *= ((/* implicit */short) (((-(((/* implicit */int) (unsigned char)2)))) <= ((~(((/* implicit */int) ((signed char) var_0)))))));
                        var_41 = ((/* implicit */signed char) (short)2367);
                        arr_88 [19LL] [19LL] [i_18] [19LL] [i_18] = ((/* implicit */long long int) arr_85 [i_8] [i_8] [i_8] [i_8] [(short)5]);
                    }
                    for (short i_24 = 0; i_24 < 25; i_24 += 1) 
                    {
                        var_42 = arr_70 [i_9 + 2] [i_21] [i_18];
                        var_43 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_82 [i_18 + 2] [(unsigned char)15] [i_18 + 2] [i_18 + 2] [i_18] [i_18])) ? (arr_82 [i_18 - 1] [i_18] [i_18] [i_18 - 1] [i_18] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))))), (((/* implicit */long long int) max((arr_55 [i_9] [i_9 + 1] [i_18] [i_21]), (((/* implicit */short) ((signed char) arr_73 [i_24] [i_21 + 2] [i_8] [i_9] [i_9] [i_8] [i_8]))))))));
                        var_44 = ((/* implicit */signed char) var_0);
                        var_45 = ((/* implicit */short) var_11);
                        var_46 ^= ((/* implicit */long long int) var_13);
                    }
                    for (short i_25 = 4; i_25 < 21; i_25 += 2) 
                    {
                        arr_96 [i_8] [(unsigned char)5] [i_18 - 3] [(unsigned char)5] [i_21] [i_18] [i_25 - 3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)49)))))));
                        var_47 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_90 [i_9 + 1] [i_18 - 2] [i_21 + 1])))), (min(((!(((/* implicit */_Bool) var_9)))), (((((/* implicit */_Bool) arr_93 [i_8] [i_8] [i_8] [i_9] [i_18] [i_21 - 1] [i_8])) && (((/* implicit */_Bool) var_1))))))));
                    }
                    arr_97 [i_9] [i_18] = ((/* implicit */signed char) (short)-18620);
                    var_48 = ((((/* implicit */_Bool) arr_38 [i_8] [i_9] [i_18])) ? ((((!(((/* implicit */_Bool) arr_57 [(short)17] [i_9 - 1] [i_18] [i_18])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (max((2456583171297863191LL), (var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_8] [(signed char)1] [(signed char)1]))) ^ (var_1))) < (var_9))))));
                }
                arr_98 [(signed char)21] [i_18] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) ((short) ((signed char) var_6))))));
                var_49 = ((/* implicit */short) (~(((/* implicit */int) min((arr_86 [i_18] [i_9] [i_9 - 4] [i_9] [i_18 - 2]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [i_8] [i_8] [i_18] [i_8])) && (((/* implicit */_Bool) var_1))))))))));
            }
            for (unsigned char i_26 = 0; i_26 < 25; i_26 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_27 = 0; i_27 < 25; i_27 += 3) 
                {
                    for (short i_28 = 3; i_28 < 24; i_28 += 1) 
                    {
                        {
                            arr_107 [i_26] [i_9] [i_9] = ((short) ((((/* implicit */int) (short)32758)) * (((/* implicit */int) max((var_8), (var_13))))));
                            var_50 = var_11;
                            var_51 = ((/* implicit */short) ((long long int) (unsigned char)191));
                            var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (short)-12713)) * (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min((arr_91 [i_9] [i_27] [i_8] [i_26] [i_9] [i_8] [i_9]), (((/* implicit */unsigned char) arr_65 [i_8] [(short)22] [i_8]))))))))))));
                            var_53 = ((/* implicit */short) ((((/* implicit */int) var_10)) & (((/* implicit */int) min(((short)3732), (min((((/* implicit */short) (unsigned char)255)), ((short)-25006))))))));
                        }
                    } 
                } 
                arr_108 [i_26] [i_9 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((var_7), (var_4)))) : (((((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) arr_101 [i_9 - 3] [i_8])) : (((/* implicit */int) var_6)))) + (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_7)))))))));
                arr_109 [i_26] = ((/* implicit */unsigned char) (short)31893);
            }
            for (unsigned char i_29 = 0; i_29 < 25; i_29 += 3) /* same iter space */
            {
                var_54 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (-3612687013452199994LL) : (-4225152273629447751LL)))) && (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) var_3))))))) && (max(((!(((/* implicit */_Bool) var_5)))), (((((/* implicit */_Bool) (signed char)111)) || (((/* implicit */_Bool) 5199475288989085533LL))))))));
                var_55 = ((/* implicit */short) max((((/* implicit */int) min((arr_38 [i_9 - 4] [i_9 - 2] [i_8]), (((/* implicit */unsigned char) var_4))))), ((~(((/* implicit */int) arr_60 [i_29] [i_9] [i_9] [i_9 - 4] [i_29]))))));
            }
        }
        var_56 = ((/* implicit */short) (-(var_5)));
    }
    for (short i_30 = 4; i_30 < 23; i_30 += 2) 
    {
        arr_114 [i_30] = ((/* implicit */signed char) var_9);
        var_57 = ((/* implicit */signed char) max(((~(((/* implicit */int) (signed char)25)))), (((/* implicit */int) (short)31473))));
        var_58 = min((((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (min((var_5), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (((/* implicit */long long int) (-(((/* implicit */int) var_13))))));
        /* LoopNest 2 */
        for (unsigned char i_31 = 4; i_31 < 23; i_31 += 2) 
        {
            for (signed char i_32 = 0; i_32 < 24; i_32 += 1) 
            {
                {
                    arr_119 [i_30] [i_30] &= ((/* implicit */signed char) var_5);
                    var_59 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > (var_9)))) >= (((/* implicit */int) min((((/* implicit */short) var_7)), (arr_118 [i_30] [9LL] [i_32])))))))));
                    var_60 = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_33 [i_31 - 1]))))));
                }
            } 
        } 
    }
}
