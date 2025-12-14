/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220771
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) 117440512)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 117440523)) ? (var_10) : (((/* implicit */unsigned int) -117440522))))) : (arr_3 [i_0 + 1]))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 117440512)) < (min((((/* implicit */long long int) -117440513)), (var_6))))))) | (min((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) var_7)), (arr_1 [i_0])))))));
        arr_5 [i_0] [(short)11] = ((/* implicit */int) arr_0 [i_0]);
    }
    var_16 = -117440523;
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_7 [i_2] [i_1]))));
            var_18 *= ((/* implicit */signed char) arr_10 [i_1] [10]);
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((arr_8 [i_2] [i_1]) >> ((((~(1970401038))) + (1970401056))))))));
            var_20 += ((/* implicit */unsigned int) arr_10 [12] [12]);
        }
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                var_21 *= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) || (((/* implicit */_Bool) (short)4912)))))));
                /* LoopSeq 4 */
                for (unsigned int i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    var_22 = ((/* implicit */int) min((var_22), ((+(-117440528)))));
                    var_23 = ((/* implicit */unsigned short) var_3);
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_12))));
                    arr_22 [i_1] [i_1] [i_4 + 3] [i_5 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 117440511)) ? (((((/* implicit */_Bool) arr_7 [i_3] [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) : (3244581515U))) : (((/* implicit */unsigned int) 1970401016))));
                    /* LoopSeq 4 */
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        arr_25 [(unsigned short)11] = ((/* implicit */unsigned short) arr_16 [i_3]);
                        arr_26 [i_6] [i_5] [i_4 - 2] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) -5218607414471900094LL);
                        arr_27 [i_5] [i_5] [i_5] [i_5 + 2] = ((/* implicit */unsigned long long int) (unsigned char)96);
                    }
                    for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) ((arr_1 [i_7]) % ((~(-8381418205299199961LL)))));
                        arr_31 [i_5] [i_5] [i_1] |= ((/* implicit */long long int) -117440534);
                        var_26 = ((/* implicit */long long int) var_8);
                        var_27 = ((/* implicit */int) arr_30 [3LL] [i_4] [i_4]);
                        arr_32 [i_1] [i_3] [i_5] [i_1] = ((/* implicit */short) arr_29 [i_7] [i_1]);
                    }
                    for (unsigned short i_8 = 2; i_8 < 11; i_8 += 2) /* same iter space */
                    {
                        arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4 - 2] [i_1]))) : (arr_29 [i_3] [i_8]));
                        var_28 = ((/* implicit */long long int) arr_0 [i_1]);
                        arr_36 [(unsigned char)10] [i_3] [i_4] [i_3] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_1] [i_1]))));
                        var_29 = ((/* implicit */long long int) arr_7 [i_4 - 1] [i_4 - 1]);
                        var_30 = ((/* implicit */unsigned short) arr_11 [i_3] [i_4] [i_8]);
                    }
                    for (unsigned short i_9 = 2; i_9 < 11; i_9 += 2) /* same iter space */
                    {
                        var_31 ^= ((/* implicit */short) arr_10 [i_4] [i_3]);
                        var_32 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_5 + 1] [i_3] [i_9 + 1])) ? (((/* implicit */long long int) arr_20 [9U] [i_4])) : (arr_14 [i_4])));
                    }
                }
                for (unsigned long long int i_10 = 4; i_10 < 11; i_10 += 4) /* same iter space */
                {
                    var_33 *= ((/* implicit */unsigned char) arr_23 [i_10 + 1] [(signed char)9] [i_4] [(signed char)9] [(signed char)9]);
                    arr_41 [i_1] [i_3] [i_4 + 1] [i_4 + 1] = (signed char)-113;
                }
                for (unsigned long long int i_11 = 4; i_11 < 11; i_11 += 4) /* same iter space */
                {
                    arr_46 [i_3] = (+((-(5194879363920180040ULL))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 1; i_12 < 12; i_12 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) arr_42 [i_1] [i_1]);
                        arr_49 [i_12] [i_4] [i_4] [i_3] [i_12] = ((/* implicit */_Bool) arr_42 [i_11] [i_3]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned char) arr_23 [i_13] [i_11] [i_4] [i_3] [i_1]);
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) arr_42 [i_1] [(_Bool)1]))));
                    }
                    var_37 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */unsigned int) arr_42 [i_4 + 2] [i_11 - 1])) : (3244581493U)));
                    arr_52 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) -117440513)) == (4026531840U)))) < (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned long long int i_14 = 4; i_14 < 11; i_14 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */signed char) arr_3 [i_4]);
                    arr_57 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_3] [i_14])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_14 + 1])))));
                }
            }
            for (int i_15 = 0; i_15 < 13; i_15 += 4) 
            {
                arr_60 [i_1] [i_3] [i_15] [i_15] = ((/* implicit */long long int) var_7);
                arr_61 [i_3] = ((((((/* implicit */_Bool) (-(var_10)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) -117440513)), (arr_59 [i_1] [(signed char)11] [i_3] [i_15])))))) ? (((/* implicit */long long int) var_2)) : (max((max((((/* implicit */long long int) -1970401030)), (1048560LL))), (((/* implicit */long long int) var_12)))));
                arr_62 [i_1] [4LL] [i_1] = ((/* implicit */long long int) min((-117440524), (((/* implicit */int) (signed char)-98))));
            }
            var_39 = min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (((((/* implicit */int) arr_15 [i_1] [i_1])) | (((/* implicit */int) (unsigned short)65535))))))), (arr_3 [i_1]));
            arr_63 [i_1] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
        }
        for (unsigned char i_16 = 2; i_16 < 11; i_16 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_17 = 4; i_17 < 12; i_17 += 4) 
            {
                var_40 = ((/* implicit */unsigned long long int) arr_54 [i_1] [i_16] [i_17] [11]);
                var_41 = 1970401056;
            }
            arr_70 [i_16] = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_9 [i_16])), (var_2))), (min((var_14), (arr_30 [(unsigned short)4] [(unsigned short)4] [i_1])))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-15)), (arr_34 [i_16] [i_16 + 2] [i_16] [i_16] [i_16] [i_1]))))));
            var_42 = ((/* implicit */int) var_5);
        }
        /* LoopSeq 3 */
        for (unsigned int i_18 = 2; i_18 < 11; i_18 += 2) /* same iter space */
        {
            arr_75 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_28 [(unsigned char)4] [i_18] [i_1] [i_1] [i_1])), (var_2)))))))));
            /* LoopSeq 3 */
            for (unsigned char i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_20 = 1; i_20 < 10; i_20 += 2) /* same iter space */
                {
                    var_43 -= ((/* implicit */unsigned short) var_9);
                    var_44 = ((/* implicit */unsigned long long int) var_12);
                }
                for (unsigned char i_21 = 1; i_21 < 10; i_21 += 2) /* same iter space */
                {
                    var_45 += ((/* implicit */signed char) arr_64 [i_21 - 1] [i_19]);
                    /* LoopSeq 1 */
                    for (signed char i_22 = 1; i_22 < 11; i_22 += 1) 
                    {
                        var_46 = max((((/* implicit */int) (unsigned char)236)), (arr_24 [i_1] [i_1] [i_1] [i_19] [4] [i_22]));
                        arr_87 [i_19] [i_19] [i_21] [i_19] [i_19] [(unsigned char)2] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_14 [12U]), (((/* implicit */long long int) (signed char)-74))))) ? (((/* implicit */long long int) max((arr_30 [i_1] [i_1] [i_22]), (((/* implicit */unsigned int) arr_44 [i_1] [(short)1] [i_1] [i_1]))))) : (max((((/* implicit */long long int) arr_68 [i_22] [i_18] [i_18] [i_1])), (arr_29 [i_19] [6U])))))) ? (((((/* implicit */_Bool) arr_86 [i_1] [i_19] [i_19] [i_21] [(_Bool)1] [i_18])) ? (arr_29 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) var_7))));
                        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [1ULL] [i_22])) ? (9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                        var_48 = ((/* implicit */int) max((max((((((/* implicit */_Bool) var_0)) ? (0ULL) : (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) (+(arr_17 [i_19])))))), (((/* implicit */unsigned long long int) var_12))));
                    }
                    var_49 = ((/* implicit */unsigned int) -117440538);
                }
                /* LoopSeq 1 */
                for (unsigned char i_23 = 0; i_23 < 13; i_23 += 3) 
                {
                    var_50 = ((/* implicit */unsigned int) arr_28 [i_1] [i_18] [10U] [i_23] [10LL]);
                    var_51 = ((/* implicit */unsigned long long int) var_11);
                    var_52 = ((/* implicit */signed char) var_9);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_24 = 0; i_24 < 13; i_24 += 4) 
                {
                    var_53 *= var_10;
                    /* LoopSeq 2 */
                    for (signed char i_25 = 0; i_25 < 13; i_25 += 3) 
                    {
                        arr_97 [i_24] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_18 - 2] [i_18 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_85 [i_18 - 2] [i_19] [i_24] [i_25]))) : (arr_58 [i_1] [i_24] [i_19] [i_24])));
                        var_54 |= (+(arr_81 [i_18 + 2] [i_18 + 1] [i_18 - 1] [i_18 + 2] [i_18 + 2]));
                    }
                    for (unsigned char i_26 = 2; i_26 < 12; i_26 += 4) 
                    {
                        arr_100 [i_26] [i_24] [i_1] [i_19] [i_18] [i_1] = ((/* implicit */int) (signed char)96);
                        arr_101 [i_26] [i_24] [i_19] [i_18] [i_1] = ((/* implicit */_Bool) arr_15 [i_19] [i_18]);
                        arr_102 [i_18] [i_24] [i_19] [i_18] [i_1] [i_1] = ((/* implicit */long long int) (-(arr_56 [i_26] [4LL])));
                        arr_103 [7LL] [7LL] [i_19] [i_24] [i_26] = ((/* implicit */long long int) (short)-570);
                    }
                    var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_56 [i_18 + 2] [i_18 + 2])) && (((/* implicit */_Bool) var_12))));
                }
            }
            for (unsigned short i_27 = 3; i_27 < 11; i_27 += 2) 
            {
                /* LoopNest 2 */
                for (short i_28 = 0; i_28 < 13; i_28 += 4) 
                {
                    for (unsigned char i_29 = 0; i_29 < 13; i_29 += 2) 
                    {
                        {
                            var_56 = max((var_8), ((~(((/* implicit */int) ((15724581434669970952ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_28] [i_18] [i_27] [i_28])))))))));
                            var_57 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [2])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_18] [i_29])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1] [i_18 + 2] [i_27] [i_28] [i_29] [i_29]))) : (max((0ULL), (((/* implicit */unsigned long long int) arr_43 [(unsigned short)6] [i_18] [i_18 - 1] [i_18])))))) : (((/* implicit */unsigned long long int) min((max((arr_58 [i_29] [i_28] [i_27] [i_18]), (var_6))), (arr_73 [i_27]))))));
                            arr_110 [i_1] [i_1] = ((/* implicit */short) arr_10 [i_27] [i_18]);
                        }
                    } 
                } 
                arr_111 [1] [1] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_1] [i_18])) ? (arr_18 [i_27] [i_27] [i_18] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_85 [(signed char)9] [(unsigned short)6] [i_27 + 1] [i_27 - 2])))));
                var_58 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (511960854U)));
            }
            /* vectorizable */
            for (signed char i_30 = 0; i_30 < 13; i_30 += 2) 
            {
                var_59 = arr_6 [i_1];
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 13; i_31 += 3) 
                {
                    for (unsigned short i_32 = 0; i_32 < 13; i_32 += 1) 
                    {
                        {
                            arr_119 [i_18 - 1] [i_31] [i_31] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(9223372036854775766LL)))) ? (-9223372036854775758LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1])))));
                            var_60 = ((/* implicit */signed char) arr_30 [i_1] [i_18 + 1] [i_18]);
                            var_61 = ((/* implicit */unsigned long long int) arr_93 [i_1] [i_18] [i_18] [i_31]);
                        }
                    } 
                } 
            }
            var_62 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [10] [10] [i_18])) < (((((arr_109 [i_1]) + (2147483647))) << (((((var_3) + (((/* implicit */unsigned long long int) arr_108 [i_18] [i_1] [i_18] [i_18] [11U] [i_1] [i_1])))) - (5567437091966990413ULL)))))));
            arr_120 [i_1] = ((/* implicit */int) arr_0 [i_18]);
        }
        /* vectorizable */
        for (unsigned int i_33 = 2; i_33 < 11; i_33 += 2) /* same iter space */
        {
            arr_125 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (10440712437870609876ULL) : (((/* implicit */unsigned long long int) var_12)))))));
            var_63 = ((((/* implicit */_Bool) 10440712437870609870ULL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            var_64 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_93 [i_1] [i_1] [i_33] [i_33]))) <= ((~(arr_83 [i_1] [(signed char)7] [i_33])))));
            arr_126 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)31447))));
            var_65 = ((((/* implicit */long long int) var_8)) / (arr_1 [i_33]));
        }
        /* vectorizable */
        for (long long int i_34 = 2; i_34 < 10; i_34 += 4) 
        {
            var_66 *= ((/* implicit */_Bool) arr_54 [i_1] [i_34 + 3] [i_34] [4U]);
            var_67 = ((/* implicit */short) arr_90 [i_34 + 2] [i_34 + 3] [i_34 - 1] [i_1]);
        }
        var_68 = ((/* implicit */unsigned int) min((var_68), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) var_9)) : (var_6))), (((/* implicit */long long int) var_13)))))));
        var_69 *= ((/* implicit */short) arr_86 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    /* vectorizable */
    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_36 = 0; i_36 < 25; i_36 += 4) 
        {
            var_70 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_133 [i_35] [i_35])) ? (arr_130 [i_36]) : (((/* implicit */long long int) ((/* implicit */int) arr_133 [i_35] [5U]))))) | (arr_130 [i_35])));
            /* LoopSeq 1 */
            for (unsigned short i_37 = 0; i_37 < 25; i_37 += 4) 
            {
                arr_136 [i_35] [i_35] [i_35] = ((/* implicit */unsigned short) arr_130 [i_37]);
                arr_137 [i_35] [i_35] [i_37] [i_35] = ((/* implicit */int) 10424074410835419316ULL);
            }
            var_71 = ((/* implicit */unsigned long long int) var_4);
        }
        for (int i_38 = 4; i_38 < 22; i_38 += 1) 
        {
            var_72 ^= ((/* implicit */long long int) 492506066U);
            var_73 |= ((/* implicit */unsigned int) arr_135 [i_38 - 3] [i_38 - 2] [0ULL]);
        }
        for (int i_39 = 0; i_39 < 25; i_39 += 3) 
        {
            arr_144 [i_35] = arr_142 [i_35] [(signed char)17];
            arr_145 [i_35] = ((/* implicit */short) 0U);
            arr_146 [i_35] [i_35] = ((/* implicit */unsigned int) arr_134 [i_35] [i_39] [i_39] [i_39]);
            var_74 |= ((/* implicit */unsigned int) (unsigned char)37);
            arr_147 [i_35] [i_35] = ((/* implicit */_Bool) ((arr_131 [i_35] [i_35]) & (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        }
        var_75 = ((/* implicit */int) arr_139 [i_35] [i_35]);
    }
}
