/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20909
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned long long int) var_4)), (((483392327736631145ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 7; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17963351745972920470ULL)) ? (483392327736631146ULL) : (((/* implicit */unsigned long long int) 0))))) || (((/* implicit */_Bool) -2566797772038348564LL)))))));
                                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_2 [i_0]))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [8ULL] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                }
            } 
        } 
    } 
    var_14 = var_5;
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_15 -= ((/* implicit */unsigned long long int) (!(((((((/* implicit */int) var_1)) * (((/* implicit */int) var_2)))) != (((((/* implicit */_Bool) arr_17 [(signed char)4] [i_5])) ? (var_9) : (((/* implicit */int) arr_11 [9LL] [i_5] [i_5] [i_5]))))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [8ULL]))))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    arr_27 [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-122))));
                    arr_28 [10] [i_5] = ((/* implicit */unsigned short) var_1);
                    var_17 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_5] [i_6] [i_7] [(signed char)5] [i_5])) >= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-102)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) != (((/* implicit */int) arr_9 [9ULL] [i_7] [2ULL] [i_6] [(unsigned short)4]))))) : (((int) ((signed char) arr_20 [(unsigned char)1])))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((int) (unsigned short)65535))))) & ((~(3196369062105129241LL))))))));
        arr_29 [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [4ULL] [i_5])) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */int) (signed char)34)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27)))))));
    }
    for (unsigned char i_8 = 1; i_8 < 10; i_8 += 3) 
    {
        var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)21)))) : ((~(((/* implicit */int) min(((unsigned char)224), (var_5))))))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            for (unsigned short i_10 = 1; i_10 < 13; i_10 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            var_20 = max((arr_41 [i_8 + 1] [i_10 - 1]), (max((arr_41 [i_8 + 4] [i_10 - 1]), (((/* implicit */unsigned long long int) arr_37 [(unsigned char)9] [i_8 + 3] [(signed char)13])))));
                            var_21 ^= ((/* implicit */unsigned short) 1125899906842623LL);
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((min((483392327736631159ULL), (((/* implicit */unsigned long long int) arr_42 [i_8] [i_9] [i_11])))) ^ (((/* implicit */unsigned long long int) min((var_7), (min((var_9), (((/* implicit */int) var_10))))))))))));
                            arr_43 [i_8 + 3] [2ULL] [i_10] [i_11] [(signed char)8] [i_10] [(signed char)13] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)14))))) <= (7881299347898368LL)));
                        }
                        for (int i_13 = 2; i_13 < 11; i_13 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_46 [i_9] [i_10 + 1] [i_13 + 1] [i_13] [i_13]))))));
                            var_24 = ((signed char) var_7);
                            arr_47 [i_8] [(unsigned char)1] [i_10 - 1] [i_11] [i_10 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)4))))), (max((arr_46 [i_8 - 1] [i_9] [i_10] [i_11] [i_13]), (((/* implicit */unsigned short) (signed char)88)))))))));
                            arr_48 [i_11] [i_13] [i_11] [i_10] [i_9] [i_8 + 2] [i_8] = ((/* implicit */signed char) ((((unsigned long long int) arr_37 [i_10 - 1] [i_10 + 1] [i_10 - 1])) < ((+(((((/* implicit */_Bool) (signed char)-14)) ? (arr_41 [i_13] [i_10 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                        }
                        var_25 = ((/* implicit */long long int) (-((-(arr_41 [i_8 - 1] [i_8 - 1])))));
                        arr_49 [i_8] [i_9] = ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned short)43271))))));
                    }
                    for (int i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        arr_53 [i_8 - 1] [i_9] [i_10 + 1] [i_14] [i_14] = ((/* implicit */signed char) ((max((((/* implicit */int) min((((/* implicit */unsigned short) arr_50 [i_8 + 2] [i_8])), (var_8)))), ((+(((/* implicit */int) arr_38 [i_8] [i_8] [i_10])))))) > (((/* implicit */int) arr_33 [(signed char)1]))));
                        arr_54 [13] [i_9] [i_10 - 1] [i_9] [i_14] [13] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)19331)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) : (483392327736631138ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))))) ? (((((((/* implicit */_Bool) arr_35 [(unsigned char)10] [i_9] [i_10] [i_14])) ? (((/* implicit */int) arr_33 [i_8])) : (((/* implicit */int) var_0)))) + (((/* implicit */int) (signed char)-110)))) : (((/* implicit */int) var_10)));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_9])))))))) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)13487)) < (((/* implicit */int) (unsigned char)38)))))));
                    }
                    arr_55 [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        arr_59 [i_15] [(unsigned char)13] [i_8] = (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_8] [i_15] [(unsigned short)0] [i_15])) ? (((/* implicit */int) arr_36 [i_15])) : (((/* implicit */int) arr_39 [i_8] [i_8] [i_10 + 1] [i_15]))))), (arr_41 [i_8 + 3] [i_10 + 1]))));
                        arr_60 [i_15] [(unsigned char)3] [i_10] [i_9] [i_8 + 2] [i_8 + 1] = ((/* implicit */unsigned long long int) arr_36 [i_15]);
                        var_27 -= ((/* implicit */unsigned short) var_10);
                        arr_61 [(unsigned char)13] [(unsigned char)13] [i_10] [(signed char)1] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) var_2)) <= (max((((/* implicit */int) (unsigned char)181)), (var_7)))))), ((~((-(((/* implicit */int) (unsigned char)241))))))));
                    }
                }
            } 
        } 
        var_28 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((signed char) -4408146354790917010LL))) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (signed char)-91)))) : (((((/* implicit */int) arr_39 [i_8 + 4] [i_8] [i_8] [i_8])) * (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_8] [(signed char)5] [i_8 + 3] [i_8])) || (((/* implicit */_Bool) 157151297))))))));
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 14; i_16 += 1) 
        {
            for (int i_17 = 0; i_17 < 14; i_17 += 4) 
            {
                {
                    var_29 = arr_62 [i_16];
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 0; i_18 < 14; i_18 += 1) 
                    {
                        for (long long int i_19 = 4; i_19 < 12; i_19 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (unsigned char)228)), (1253267780289183478ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_8 + 4] [i_16] [5LL] [(signed char)6])) ? (((/* implicit */int) arr_64 [i_16] [i_18])) : (((/* implicit */int) (signed char)-71))))))))));
                                var_31 = ((((/* implicit */_Bool) ((long long int) 2192166556174342249ULL))) ? (-1219875795) : (((int) ((((/* implicit */_Bool) arr_36 [(unsigned short)10])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)13487))))));
                                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-15)), (arr_56 [i_8] [i_16] [i_17] [i_18] [i_19 - 1] [i_8])))), (((max((6037392226947209461ULL), (((/* implicit */unsigned long long int) (signed char)7)))) | (((/* implicit */unsigned long long int) var_9)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 3; i_20 < 13; i_20 += 4) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 14; i_21 += 2) 
                        {
                            {
                                arr_79 [i_16] [(unsigned char)0] [i_8] [i_20] [i_20 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_76 [i_8 + 4] [i_16] [(signed char)6] [i_16] [i_21])) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_8] [(signed char)1]))))))))));
                                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((arr_63 [i_17]), (((/* implicit */unsigned long long int) var_10))))))) / (((unsigned long long int) ((unsigned long long int) arr_38 [i_20 - 3] [i_16] [i_17]))))))));
                                arr_80 [i_8] [i_8] [i_16] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)181)) > (((/* implicit */int) (unsigned char)18))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_22 = 2; i_22 < 21; i_22 += 1) 
    {
        for (unsigned short i_23 = 0; i_23 < 23; i_23 += 3) 
        {
            {
                arr_85 [i_22] [(unsigned char)18] [(unsigned char)2] = ((/* implicit */unsigned long long int) (signed char)-8);
                arr_86 [i_22] [i_23] = ((/* implicit */unsigned char) ((long long int) min((var_2), (var_2))));
                /* LoopSeq 2 */
                for (long long int i_24 = 0; i_24 < 23; i_24 += 3) 
                {
                    var_34 = ((/* implicit */unsigned short) (unsigned char)238);
                    var_35 = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)40400)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_87 [i_22 - 2]))) : (1ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)2200)))))));
                }
                /* vectorizable */
                for (signed char i_25 = 0; i_25 < 23; i_25 += 3) 
                {
                    arr_95 [i_25] [i_25] = ((/* implicit */signed char) ((1853702659) ^ (((/* implicit */int) (unsigned short)65535))));
                    arr_96 [i_25] [i_23] [i_25] = ((/* implicit */unsigned short) var_4);
                    /* LoopSeq 2 */
                    for (unsigned short i_26 = 0; i_26 < 23; i_26 += 3) 
                    {
                        arr_100 [i_25] [i_23] [i_25] [i_25] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_97 [i_22 - 1] [i_22 + 1] [i_25] [i_22 + 2])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_93 [i_26] [i_25] [i_25] [i_22]))))) : (4036935237105393041LL)));
                        arr_101 [i_25] [i_23] [i_23] [i_23] = ((/* implicit */int) var_4);
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_91 [i_22 + 2] [(unsigned char)14])))))));
                    }
                    for (unsigned char i_27 = 2; i_27 < 22; i_27 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_28 = 0; i_28 < 23; i_28 += 4) /* same iter space */
                        {
                            arr_107 [i_25] [i_27] [i_25] [i_25] [i_23] [i_25] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)25135));
                            var_37 = ((/* implicit */unsigned short) ((unsigned char) (+(var_3))));
                            arr_108 [15ULL] [i_25] [i_23] [i_25] [i_23] [i_28] = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)58405));
                            arr_109 [i_22] [i_23] [i_25] [i_27] = ((/* implicit */unsigned long long int) (signed char)-97);
                        }
                        for (signed char i_29 = 0; i_29 < 23; i_29 += 4) /* same iter space */
                        {
                            arr_112 [i_22 + 2] [i_25] [i_25] [i_27] [i_29] = ((/* implicit */unsigned short) var_6);
                            var_38 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)66)))) ? (-1956530066656114569LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)77)))))));
                        }
                        for (signed char i_30 = 0; i_30 < 23; i_30 += 4) /* same iter space */
                        {
                            var_39 = arr_105 [i_22 + 2] [i_25] [i_25] [i_27] [i_27 - 1] [i_22];
                            arr_117 [i_22] [i_25] = ((/* implicit */int) arr_105 [(unsigned char)21] [i_25] [i_25] [i_25] [i_27] [i_30]);
                            var_40 += ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)31633)))) * (((/* implicit */int) arr_93 [i_22 + 1] [i_30] [i_25] [i_27]))));
                        }
                        for (signed char i_31 = 0; i_31 < 23; i_31 += 4) /* same iter space */
                        {
                            var_41 ^= ((/* implicit */unsigned short) ((unsigned long long int) var_8));
                            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((signed char) (unsigned char)228)))));
                            var_43 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_114 [i_22] [i_23] [i_31] [i_27 - 2])) >= (((/* implicit */int) (signed char)102))));
                            arr_121 [i_22] [(unsigned char)1] [(signed char)2] [i_27] [i_25] = ((/* implicit */long long int) var_1);
                            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_102 [8] [i_27 - 1] [i_27] [8] [i_27 - 2] [i_27 - 1]) : (((/* implicit */long long int) arr_98 [i_22] [i_25] [i_31] [i_31] [0])))))));
                        }
                        arr_122 [i_22 + 1] [i_25] = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)22));
                        arr_123 [i_25] [i_25] [i_27 + 1] [i_27 - 1] [i_27] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_93 [i_23] [i_25] [i_27 + 1] [i_27 + 1]))));
                        arr_124 [i_22] [i_22] [i_25] [i_22 - 2] [i_22 - 1] [i_22] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) var_0)))) + (((/* implicit */int) arr_111 [(signed char)7] [i_23] [i_23] [i_27 - 1] [i_25] [i_22]))));
                        arr_125 [(unsigned short)2] [i_25] [i_25] [i_25] [i_25] [(signed char)21] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                    }
                    arr_126 [i_22] [i_25] [i_25] [i_25] = ((/* implicit */unsigned short) (unsigned char)161);
                    /* LoopSeq 3 */
                    for (unsigned short i_32 = 2; i_32 < 20; i_32 += 1) 
                    {
                        arr_129 [i_25] [i_23] [i_25] [i_32] [i_25] [i_32 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_82 [i_22 + 1])) ? ((~(596075920))) : (((/* implicit */int) var_0))));
                        arr_130 [i_25] = ((/* implicit */unsigned char) var_8);
                        var_45 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-57))));
                        arr_131 [i_32 + 1] [i_25] [i_25] [i_22] = ((/* implicit */unsigned short) ((int) (unsigned short)13471));
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_110 [i_32] [i_25] [i_25] [i_22] [i_22] [i_25] [i_22])) ^ (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((unsigned char) arr_97 [i_22 + 1] [(unsigned short)22] [i_25] [i_32 - 2])))));
                    }
                    for (unsigned short i_33 = 3; i_33 < 21; i_33 += 3) 
                    {
                        arr_135 [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) arr_115 [i_33] [i_33] [i_33 - 1] [i_33] [i_33 - 1]))) : (((long long int) (signed char)-22))));
                        var_47 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_119 [i_22 - 1] [9] [i_25] [i_33 - 2] [i_33 - 2]))));
                    }
                    for (signed char i_34 = 0; i_34 < 23; i_34 += 4) 
                    {
                        var_48 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_116 [22LL] [i_23] [i_25] [i_25] [i_25] [i_34])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))) != (596075921)));
                        arr_138 [i_25] [i_25] [i_25] = arr_87 [17];
                    }
                }
            }
        } 
    } 
}
