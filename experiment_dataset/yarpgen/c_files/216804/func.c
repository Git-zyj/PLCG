/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216804
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
    var_13 *= ((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((_Bool) var_9)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(3531977301659614733LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (var_9)))) : (((/* implicit */int) ((arr_2 [i_0 + 1] [i_0]) != (var_2))))))) / (((((/* implicit */_Bool) (-(var_12)))) ? (((arr_2 [i_0] [i_0]) >> (((/* implicit */int) var_3)))) : (arr_0 [i_0 + 1])))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                var_15 += ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) >= (var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned char)252)))))) : (min((var_4), (arr_0 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (min((min((((/* implicit */long long int) (unsigned char)3)), (-7644424769813961791LL))), (((/* implicit */long long int) ((var_11) < (((/* implicit */int) var_0))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        arr_12 [i_3] [i_1] [1] [i_3] [i_4] [i_0] [12] = ((((/* implicit */_Bool) (unsigned char)210)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))));
                        var_16 *= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (arr_6 [i_0] [i_0] [i_0 + 1] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-28209)))))));
                        var_19 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_6))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1]))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_6 = 3; i_6 < 10; i_6 += 1) 
                    {
                        var_21 = ((((/* implicit */int) var_10)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))));
                        var_22 |= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_5 [i_0 + 1] [i_6 - 1]))));
                        var_23 |= ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)239))))) > (var_12));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 2; i_7 < 11; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        arr_20 [i_7] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (arr_2 [i_0 + 1] [i_1]) : (arr_2 [i_0 - 1] [i_8])));
                        arr_23 [(signed char)4] [i_1] [i_1] [i_1] [i_1] |= ((arr_11 [4] [i_0 + 1]) ? (((/* implicit */int) var_1)) : (1904432431));
                        var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [(unsigned char)10] [i_1] [i_2] [i_3] [i_8])) : (((/* implicit */int) arr_18 [i_0] [i_0 + 1] [i_0] [6ULL] [i_0 - 1] [i_0] [i_0 - 1]))));
                    }
                }
                arr_24 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) ^ (((/* implicit */int) var_10)))))))) >> ((((((-(9223372036854775807LL))) / (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) - (4611686018427387894LL)))));
                arr_25 [10ULL] [i_1] [10ULL] |= ((/* implicit */long long int) arr_5 [i_0] [i_1]);
            }
            for (short i_9 = 3; i_9 < 9; i_9 += 3) 
            {
                var_27 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((/* implicit */int) (_Bool)0))))))), ((-(((((/* implicit */_Bool) arr_5 [i_0] [i_9])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                arr_28 [i_9] [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) (signed char)-16));
                var_28 = ((/* implicit */long long int) (((~(var_12))) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_9 - 2])))))));
            }
            /* LoopNest 3 */
            for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        {
                            arr_39 [i_12] [i_0] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) (~((-(((((/* implicit */int) var_3)) & (((/* implicit */int) var_0))))))));
                            var_29 |= ((/* implicit */long long int) 2919468043U);
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned char i_13 = 1; i_13 < 11; i_13 += 4) 
            {
                var_30 -= (((!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0 + 1] [i_13 + 2])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_1))))));
                arr_43 [i_13] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_6), (((var_4) * (((/* implicit */unsigned long long int) var_11))))))) ? (((((((/* implicit */unsigned long long int) var_11)) % (var_4))) % (((/* implicit */unsigned long long int) arr_31 [i_0] [i_1] [i_13] [i_0])))) : (((/* implicit */unsigned long long int) ((((var_11) >= (((/* implicit */int) var_0)))) ? (((0) - (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_13 + 2] [i_0])))))));
            }
            /* vectorizable */
            for (int i_14 = 3; i_14 < 12; i_14 += 1) /* same iter space */
            {
                var_31 ^= (~(((/* implicit */int) var_10)));
                var_32 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) (unsigned char)252)) : (-647293412))) % (((/* implicit */int) (unsigned char)30))));
                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1904432431)) ? (8935141660703064064ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
            for (int i_15 = 3; i_15 < 12; i_15 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 2; i_17 < 10; i_17 += 3) 
                    {
                        {
                            var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_17 + 2] [i_17] [i_17 + 3] [i_16] [i_15 - 2]))) * (var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_18 [i_0] [i_0 - 1] [i_0] [6] [i_0] [i_0 + 1] [i_15 + 1])) : (((/* implicit */int) var_3))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19))) + (var_12)))));
                            var_35 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_31 [(_Bool)1] [i_15 - 2] [i_0 - 1] [i_1]) > (arr_31 [(unsigned char)4] [i_15 - 1] [i_0 - 1] [i_0])))) >> ((((-(((/* implicit */int) var_5)))) - (30750)))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((-(2147483647))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0])) <= (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_0])))))));
                        }
                    } 
                } 
                var_37 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_21 [i_15 - 1] [i_1] [i_0] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_15] [i_15] [i_1] [i_1] [i_0])))))))), (max((arr_16 [i_15 - 3] [i_0 - 1]), (arr_16 [i_15 + 1] [i_0 - 1])))));
            }
            for (int i_18 = 3; i_18 < 12; i_18 += 1) /* same iter space */
            {
                var_38 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_18 - 3] [i_18 - 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_18 - 3] [i_18 - 1]))))), (((((((/* implicit */_Bool) -7951018352008051445LL)) ? (654224929119241973LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [12] [(unsigned short)4] [i_1] [i_1] [i_1]))))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0 + 1] [i_0] [i_0 - 1] [i_1] [i_18 - 3]))))))))));
                /* LoopSeq 2 */
                for (long long int i_19 = 0; i_19 < 13; i_19 += 3) 
                {
                    var_39 = ((/* implicit */signed char) var_3);
                    var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) ((long long int) var_1))))));
                    var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
                }
                /* vectorizable */
                for (unsigned char i_20 = 0; i_20 < 13; i_20 += 4) 
                {
                    var_42 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_18 - 3] [i_18 - 3] [i_18 - 1] [i_20])) ? (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_54 [i_20] [i_18] [i_0] [i_1] [i_0]))))) : ((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_18 - 1] [i_20]))))));
                    arr_64 [i_20] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((arr_45 [4] [i_18 - 2]) - (((/* implicit */unsigned int) var_11)))) < (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                    /* LoopSeq 4 */
                    for (int i_21 = 0; i_21 < 13; i_21 += 2) 
                    {
                        var_43 ^= ((/* implicit */long long int) ((_Bool) arr_57 [i_1] [i_20] [i_1] [i_20]));
                        arr_67 [i_21] [i_20] [i_0] [i_1] [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_6))) != (((1735540672) | (((/* implicit */int) arr_29 [i_0] [i_0] [i_0]))))));
                        var_44 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) 1191865282)))))));
                        var_45 |= ((/* implicit */signed char) (~(4026199962970327490ULL)));
                    }
                    for (unsigned short i_22 = 1; i_22 < 12; i_22 += 2) 
                    {
                        arr_70 [i_22] [i_20] [i_0] [i_18] [i_0] [i_0] [6LL] = ((/* implicit */unsigned char) (-(var_11)));
                        var_46 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_20] [i_18] [i_20]))))) ? (((11623700863926997679ULL) >> (((3072) - (3062))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))))));
                        arr_71 [i_0] [i_0] = ((/* implicit */long long int) ((var_2) < (((/* implicit */unsigned long long int) arr_69 [i_0] [i_1] [i_18 + 1] [i_22 + 1] [i_22]))));
                    }
                    for (unsigned short i_23 = 0; i_23 < 13; i_23 += 4) /* same iter space */
                    {
                        var_47 *= ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_3)))));
                        var_48 = (!(((/* implicit */_Bool) 654224929119241973LL)));
                        var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_0 + 1] [i_18 - 1] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_18 - 2] [i_0] [i_20] [i_0 + 1])) : (((/* implicit */int) arr_15 [i_20] [i_18 - 1] [i_18] [i_23] [i_0 - 1]))));
                    }
                    for (unsigned short i_24 = 0; i_24 < 13; i_24 += 4) /* same iter space */
                    {
                        var_50 = ((/* implicit */int) var_9);
                        arr_77 [i_0] = ((/* implicit */unsigned int) var_6);
                        var_51 = ((/* implicit */_Bool) var_8);
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_25 = 1; i_25 < 10; i_25 += 4) /* same iter space */
                    {
                        arr_82 [i_0] [i_1] [i_1] [i_1] [i_25] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2012881590U)) ? (((/* implicit */int) (unsigned short)23546)) : (((((/* implicit */_Bool) 1191865282)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (unsigned short)50788))))));
                        var_52 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)32751)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    for (unsigned short i_26 = 1; i_26 < 10; i_26 += 4) /* same iter space */
                    {
                        var_53 = ((/* implicit */short) ((unsigned char) var_8));
                        var_54 = ((/* implicit */unsigned short) var_0);
                        var_55 = ((/* implicit */unsigned short) var_9);
                    }
                    for (unsigned short i_27 = 1; i_27 < 10; i_27 += 4) /* same iter space */
                    {
                        var_56 *= ((/* implicit */unsigned short) var_6);
                        var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_79 [i_20] [i_1] [i_18 + 1] [i_20] [i_0] [i_20] [i_0 - 1]))))) : (var_4)));
                    }
                }
            }
        }
        for (short i_28 = 2; i_28 < 11; i_28 += 3) 
        {
            arr_91 [0U] |= ((/* implicit */signed char) (-(5005958494574742342ULL)));
            var_58 = ((/* implicit */_Bool) min((var_58), (((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_9))))))));
            var_59 = ((/* implicit */unsigned short) max(((-(((unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (-(((int) var_5)))))));
        }
    }
    for (int i_29 = 0; i_29 < 21; i_29 += 1) 
    {
        var_60 = ((/* implicit */long long int) (-((-(((var_2) - (arr_92 [i_29] [i_29])))))));
        arr_94 [i_29] = (i_29 % 2 == zero) ? ((((((((-(arr_93 [i_29] [i_29]))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (var_2)))))) >> (((((max((var_4), (((/* implicit */unsigned long long int) var_0)))) * (((/* implicit */unsigned long long int) (-(arr_93 [i_29] [i_29])))))) - (18178039049063870157ULL))))) : ((((((((((-(arr_93 [i_29] [i_29]))) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (var_2)))))) >> (((((((max((var_4), (((/* implicit */unsigned long long int) var_0)))) * (((/* implicit */unsigned long long int) (-(arr_93 [i_29] [i_29])))))) - (18178039049063870157ULL))) - (8420768702686175127ULL)))));
        arr_95 [i_29] [i_29] = ((/* implicit */int) (-(((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_5))))) ? (arr_92 [i_29] [i_29]) : (((arr_92 [i_29] [i_29]) ^ (((/* implicit */unsigned long long int) var_7))))))));
        var_61 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        /* LoopNest 2 */
        for (int i_30 = 2; i_30 < 19; i_30 += 3) 
        {
            for (unsigned char i_31 = 2; i_31 < 20; i_31 += 1) 
            {
                {
                    var_62 = (i_29 % 2 == zero) ? (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)28)) || (((/* implicit */_Bool) (short)-1))))) >> ((((-(((/* implicit */int) arr_98 [i_29] [i_29])))) + (8580))))) : (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)28)) || (((/* implicit */_Bool) (short)-1))))) >> ((((((-(((/* implicit */int) arr_98 [i_29] [i_29])))) + (8580))) + (34480)))));
                    var_63 = ((/* implicit */short) (~(((/* implicit */int) ((((long long int) arr_93 [i_29] [i_29])) != (((/* implicit */long long int) ((((/* implicit */int) (short)15988)) / (var_7)))))))));
                    var_64 += ((/* implicit */signed char) (-(max((13440785579134809278ULL), (((/* implicit */unsigned long long int) (unsigned char)0))))));
                }
            } 
        } 
    }
    for (unsigned short i_32 = 0; i_32 < 25; i_32 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_33 = 0; i_33 < 25; i_33 += 3) 
        {
            for (unsigned char i_34 = 1; i_34 < 24; i_34 += 4) 
            {
                for (unsigned short i_35 = 4; i_35 < 24; i_35 += 2) 
                {
                    {
                        var_65 = ((/* implicit */unsigned short) min((var_65), (((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) arr_100 [i_32] [i_33]))))))));
                        var_66 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_11)) > (var_2)));
                    }
                } 
            } 
        } 
        var_67 -= ((/* implicit */_Bool) (-(var_11)));
        var_68 = ((/* implicit */int) 13891103366225739284ULL);
        var_69 = (short)-1;
    }
}
