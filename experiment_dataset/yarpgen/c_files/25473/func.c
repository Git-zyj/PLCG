/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25473
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((/* implicit */int) (signed char)(-127 - 1))), (min((var_2), ((+(var_9))))))))));
        var_17 -= ((/* implicit */unsigned char) 12165333027661093602ULL);
        var_18 = ((/* implicit */_Bool) var_6);
        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 + 1]))) ? (((/* implicit */int) min((var_12), (((/* implicit */unsigned char) ((arr_0 [i_0]) && (((/* implicit */_Bool) var_0)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        var_20 -= ((/* implicit */long long int) ((_Bool) arr_1 [(short)18]));
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] [13ULL] = (unsigned short)46055;
        var_21 *= ((/* implicit */unsigned short) var_7);
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned int) var_11))), (((((_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) (+(arr_15 [i_1 - 1] [i_2] [i_2] [(unsigned char)18])))) : (var_1))))))));
                        var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_2]))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_9)) : (var_7)))))) ? (min((((/* implicit */int) min((arr_3 [(unsigned short)18]), (((/* implicit */unsigned char) (_Bool)0))))), (arr_11 [i_1] [i_2] [i_3] [i_4 + 1]))) : (((arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) ? (var_15) : (((/* implicit */int) (unsigned short)896))))));
                    }
                } 
            } 
        } 
        arr_16 [i_1 - 1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)123)) && (((/* implicit */_Bool) var_7))))) * ((~(((/* implicit */int) arr_4 [i_1])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    arr_23 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_5 + 2] [i_5] [i_5 + 1] [i_5 - 2])) && (((/* implicit */_Bool) var_6))));
                    /* LoopSeq 4 */
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                    {
                        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_5 + 3] [i_5 + 1] [i_8])) : (((/* implicit */int) (signed char)74))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_21 [i_5 + 3] [i_5] [i_5 + 2] [i_5 + 3]))));
                    }
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) var_7);
                        arr_29 [i_5] [i_7] [(signed char)4] [i_6] [i_6] [i_5] = ((((/* implicit */_Bool) (unsigned short)3595)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) var_12)))));
                    }
                    for (unsigned short i_10 = 2; i_10 < 20; i_10 += 1) /* same iter space */
                    {
                        arr_32 [i_10] [i_5] [(short)7] [19] = ((/* implicit */unsigned long long int) ((int) arr_7 [i_5 - 1] [i_5 + 1]));
                        arr_33 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_10 - 2] [i_5])))));
                        arr_34 [(signed char)4] [(signed char)22] [16LL] [i_10] |= ((((/* implicit */int) arr_26 [i_5] [(_Bool)1] [(unsigned short)22] [i_10])) - (((/* implicit */int) arr_28 [i_5 - 2] [i_6] [i_6] [(unsigned short)18])));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_5 + 1] [i_10 + 4])) : (1226820860)));
                        arr_35 [i_10] [i_5] [i_7] [i_5] [(unsigned short)5] = ((/* implicit */long long int) (_Bool)1);
                    }
                    for (unsigned short i_11 = 2; i_11 < 20; i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_6] [i_6] [i_5] = ((/* implicit */int) var_13);
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned short)13099)) ? (((/* implicit */int) (unsigned short)21316)) : (((/* implicit */int) var_12)))) : (((int) var_6))));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 23; i_12 += 2) 
                    {
                        for (signed char i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            {
                                var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5 + 1] [i_5 + 3] [i_5 + 1] [i_5 + 2])) ? (arr_24 [i_5 + 1] [i_5 + 3] [i_5 + 1] [i_5 + 2]) : (arr_24 [i_5 + 1] [i_5 + 3] [i_5 + 1] [i_5 + 2])));
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((((/* implicit */_Bool) arr_19 [i_5 + 3] [i_12 + 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58000)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 += ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (arr_24 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 - 1]) : (arr_24 [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 2])));
        arr_47 [i_5] = ((long long int) (_Bool)1);
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 2) 
        {
            var_32 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((((/* implicit */_Bool) ((unsigned short) var_10))) ? (arr_49 [i_15 + 1]) : (-1937846643))) : (((/* implicit */int) var_14))));
            arr_53 [i_14] [i_15] = ((/* implicit */long long int) 10132919147438774446ULL);
            arr_54 [8] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) (unsigned short)2046)) ? (arr_49 [i_14]) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned char)28))))) ? (((((/* implicit */_Bool) arr_48 [i_14] [i_15 + 2])) ? (((/* implicit */int) var_11)) : (arr_48 [i_14] [i_15 - 1]))) : (arr_48 [i_14] [i_14])));
            var_33 = ((/* implicit */unsigned char) var_13);
        }
        for (unsigned char i_16 = 1; i_16 < 24; i_16 += 2) 
        {
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((_Bool) arr_52 [(unsigned char)6] [10ULL] [i_16 - 1])))));
            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_16 - 1])) ? (((/* implicit */unsigned long long int) arr_49 [i_16 + 1])) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (min((var_7), (min((((/* implicit */unsigned long long int) (short)7078)), (var_1))))))))));
            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) arr_51 [16LL] [16LL] [17]))));
        }
        arr_57 [i_14] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1)))) ? ((~(arr_48 [i_14] [i_14]))) : (min((((/* implicit */int) var_13)), (var_3)))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_50 [6])) ? (arr_48 [i_17] [i_17]) : (((/* implicit */int) ((unsigned short) var_7))))), (((/* implicit */int) (!(arr_52 [16ULL] [i_17] [i_17])))))))));
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 25; i_18 += 1) 
        {
            for (int i_19 = 0; i_19 < 25; i_19 += 4) 
            {
                {
                    arr_67 [(unsigned short)0] [(unsigned short)0] [i_18] [(unsigned short)0] = ((((/* implicit */_Bool) (signed char)(-127 - 1))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (var_0)))))));
                    /* LoopSeq 2 */
                    for (short i_20 = 0; i_20 < 25; i_20 += 3) /* same iter space */
                    {
                        var_38 = ((/* implicit */int) max((var_38), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57979))))) ? (min((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)63)), (var_11)))), (var_2))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)48618)) : (((/* implicit */int) var_10))))))))));
                        var_39 &= min(((+(var_6))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)21316)), ((~(((/* implicit */int) var_8))))))));
                    }
                    for (short i_21 = 0; i_21 < 25; i_21 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_22 = 4; i_22 < 21; i_22 += 1) 
                        {
                            var_40 ^= arr_60 [i_22 - 3];
                            arr_77 [12ULL] [i_18] [i_18] [i_19] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_63 [i_17] [i_17])), ((+(((/* implicit */int) arr_75 [i_22] [i_22 + 1] [i_22 - 4] [i_22] [i_22]))))));
                            var_41 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_59 [i_17]))) ? (((((/* implicit */_Bool) arr_50 [i_19])) ? (((/* implicit */int) arr_50 [i_19])) : (((/* implicit */int) arr_50 [i_19])))) : (((/* implicit */int) var_11))));
                        }
                        for (signed char i_23 = 0; i_23 < 25; i_23 += 2) 
                        {
                            arr_80 [i_17] [i_17] [i_17] [i_17] [1] [i_17] [i_17] = ((/* implicit */int) ((signed char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_66 [(signed char)2] [i_18] [8ULL]))))));
                            var_42 ^= min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((arr_48 [i_23] [i_23]) + (2147483647))) >> (((((/* implicit */int) arr_63 [i_23] [i_21])) - (62746)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (11005684433721509826ULL))))), (((/* implicit */unsigned long long int) min((arr_61 [i_17] [i_18]), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                            arr_81 [i_17] = ((/* implicit */unsigned char) var_9);
                            arr_82 [i_17] [i_17] [i_17] [10ULL] [i_23] [i_23] = ((/* implicit */unsigned short) -8609705142736376657LL);
                        }
                        for (unsigned char i_24 = 0; i_24 < 25; i_24 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)1585)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((unsigned long long int) var_6)))))));
                            var_44 ^= ((/* implicit */unsigned short) arr_68 [i_19] [i_19]);
                            arr_86 [i_17] [i_17] [i_19] [21ULL] [i_17] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (7835166462769760176ULL) : (11374639361914834436ULL))) - (((/* implicit */unsigned long long int) var_3)))))));
                        }
                        var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) ((_Bool) min((var_11), (arr_66 [i_18] [i_19] [i_21])))))));
                        arr_87 [i_17] [(short)20] [i_17] [(short)20] [i_21] = ((/* implicit */_Bool) var_11);
                    }
                    arr_88 [i_17] [i_17] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) ((arr_84 [i_17] [i_19]) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) min((arr_65 [i_18] [i_18] [i_18] [i_18]), (((/* implicit */unsigned short) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (unsigned short i_25 = 0; i_25 < 25; i_25 += 2) 
                    {
                        for (unsigned char i_26 = 0; i_26 < 25; i_26 += 4) 
                        {
                            {
                                arr_95 [i_17] [i_18] [i_18] [i_19] [i_25] [i_26] = arr_79 [(_Bool)1] [i_18] [i_19] [i_18];
                                arr_96 [i_17] [i_17] [i_19] [i_17] [i_17] = ((/* implicit */unsigned long long int) var_15);
                                arr_97 [(unsigned char)1] [i_18] [(unsigned char)1] [i_17] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned short) arr_83 [13LL] [13LL] [i_19] [i_18] [i_17]))), (arr_83 [14] [i_25] [i_19] [(unsigned short)13] [i_17])));
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_69 [i_17] [i_17] [i_19])) ? (min((var_4), (((/* implicit */unsigned long long int) arr_73 [i_17] [i_17] [i_19])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_93 [i_17] [i_18] [i_18] [i_19]))) ? (min((var_6), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */int) var_12)))))))));
                }
            } 
        } 
        arr_98 [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (+(1567942393)))) : (((((/* implicit */_Bool) min((arr_58 [(unsigned char)18]), (((/* implicit */unsigned long long int) arr_63 [i_17] [14ULL]))))) ? (var_1) : (min((((/* implicit */unsigned long long int) -1736676916)), (var_6)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_27 = 3; i_27 < 23; i_27 += 2) 
        {
            var_47 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_27 - 3] [i_27 - 3]))) == (var_4)));
            arr_101 [i_17] |= ((((/* implicit */_Bool) var_10)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_27 - 1] [i_27 + 2] [i_27 - 3]))));
            /* LoopNest 2 */
            for (unsigned long long int i_28 = 0; i_28 < 25; i_28 += 3) 
            {
                for (unsigned short i_29 = 0; i_29 < 25; i_29 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_30 = 1; i_30 < 23; i_30 += 2) 
                        {
                            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) arr_92 [(unsigned short)14] [i_30 + 1] [i_30] [i_30 - 1] [i_27 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_91 [i_30 - 1] [i_30 - 1] [i_30 + 1] [i_30 + 1] [i_30]))) : (arr_92 [i_30 + 1] [i_30 + 1] [i_30] [i_30 + 1] [i_27 - 2])));
                            arr_109 [i_30 + 2] [i_29] [10ULL] [i_27] [i_17] |= var_10;
                            arr_110 [i_27] [i_29] [i_30] = ((/* implicit */int) arr_99 [i_17]);
                        }
                        var_49 = ((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) arr_103 [i_17] [i_27 + 1])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)16917)) : (((/* implicit */int) var_11))))));
                        var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_93 [i_17] [i_27 - 1] [i_27 - 2] [i_27 - 2])) ? (((/* implicit */int) arr_93 [i_17] [i_27] [i_27 - 2] [i_28])) : (((/* implicit */int) arr_93 [i_28] [(signed char)1] [i_27 - 1] [i_28])))))));
                        var_51 ^= ((/* implicit */signed char) (unsigned short)18357);
                    }
                } 
            } 
        }
        for (short i_31 = 0; i_31 < 25; i_31 += 1) 
        {
            var_52 = ((/* implicit */unsigned short) (_Bool)1);
            arr_114 [(signed char)4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */int) (_Bool)0)), (var_0)))))) ? ((+(((int) arr_102 [i_17] [i_17] [10LL] [10LL])))) : (((/* implicit */int) var_11))));
        }
        for (signed char i_32 = 3; i_32 < 22; i_32 += 3) 
        {
            var_53 += ((/* implicit */unsigned long long int) var_10);
            arr_118 [(unsigned short)6] |= ((/* implicit */int) min((((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) var_10)))), ((!(((/* implicit */_Bool) var_14))))))), ((unsigned short)0)));
            var_54 = ((/* implicit */int) max((var_54), (((int) (~(((/* implicit */int) arr_72 [i_17] [i_17] [(unsigned char)16] [i_32])))))));
        }
    }
    var_55 = ((/* implicit */signed char) ((var_5) || (((/* implicit */_Bool) var_8))));
    var_56 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (-(var_6)))))));
}
