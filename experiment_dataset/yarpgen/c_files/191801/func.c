/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191801
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
    var_12 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            arr_5 [i_1] |= ((/* implicit */short) min((min((arr_4 [i_0 - 2]), (((/* implicit */long long int) (short)-27)))), (((/* implicit */long long int) arr_2 [i_1]))));
            arr_6 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0 - 3]);
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                var_13 = ((/* implicit */short) ((arr_3 [i_0 - 4] [i_0 - 3] [i_0 - 3]) - (arr_3 [i_0 + 1] [i_0 - 2] [i_0 - 2])));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    arr_15 [i_0] [(unsigned short)8] [i_3] [i_4] = ((/* implicit */signed char) arr_4 [(signed char)15]);
                    var_14 = ((/* implicit */signed char) arr_1 [i_0 - 1] [i_0 - 2]);
                    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) arr_13 [6LL])) : (arr_1 [i_2] [i_4]))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) / (arr_9 [i_0] [i_0] [i_3]))))));
                }
                for (int i_5 = 2; i_5 < 16; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_6 = 1; i_6 < 17; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */long long int) arr_2 [i_0]);
                        arr_22 [i_0] [i_3] [i_3] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [(short)11] [i_0] [i_3] [(unsigned char)6] [i_5 + 2] [i_6])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)12997))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13649))) : (arr_1 [i_5] [i_3])))));
                        var_17 *= ((/* implicit */unsigned long long int) arr_16 [i_2] [i_6 + 1] [(_Bool)1] [i_2] [i_2]);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_9 [(unsigned char)16] [10LL] [10LL])) ? (arr_13 [(signed char)13]) : (((/* implicit */int) (signed char)53))))));
                        var_19 = ((/* implicit */_Bool) ((arr_16 [i_0] [i_2] [i_2] [i_5 + 2] [i_7]) ^ (arr_16 [i_0] [i_2] [i_3] [i_5 + 2] [i_7])));
                    }
                    for (unsigned int i_8 = 3; i_8 < 17; i_8 += 3) 
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_5]))) ? (((((/* implicit */_Bool) arr_13 [i_2])) ? (arr_1 [i_0] [2LL]) : (6716883227968163870ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
                        var_21 -= ((/* implicit */signed char) ((unsigned char) arr_13 [i_8 - 1]));
                    }
                    /* LoopSeq 2 */
                    for (short i_9 = 1; i_9 < 17; i_9 += 2) 
                    {
                        arr_29 [(short)0] [2LL] [i_3] [(signed char)1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-4611))));
                        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (short i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [5U] [i_0] [i_5] [i_10])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_24 [i_10] [i_5 + 2] [13U] [(unsigned short)15] [i_0 - 3])) : (var_6))) : (((((/* implicit */int) (short)17386)) + (((/* implicit */int) var_1))))));
                        arr_32 [i_0 - 2] [i_0] [i_0] [7ULL] [i_0 - 2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)26))) + (arr_0 [i_0])));
                        var_24 = ((/* implicit */_Bool) arr_7 [i_0]);
                    }
                }
            }
            for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                var_25 = ((/* implicit */unsigned int) arr_13 [i_11]);
                /* LoopSeq 3 */
                for (long long int i_12 = 4; i_12 < 17; i_12 += 2) 
                {
                    var_26 = ((/* implicit */unsigned int) arr_34 [i_12 - 4] [4ULL] [i_0 - 2]);
                    var_27 = ((/* implicit */_Bool) var_11);
                    var_28 = ((/* implicit */unsigned short) arr_20 [i_0 - 3] [i_0] [(unsigned char)6] [i_2] [i_11] [i_12]);
                }
                for (long long int i_13 = 2; i_13 < 17; i_13 += 1) /* same iter space */
                {
                    arr_41 [i_0] [i_2] [i_11] [i_13 - 2] = ((/* implicit */_Bool) ((unsigned int) 18446744073709551615ULL));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (arr_1 [i_0 - 4] [i_2])));
                    arr_42 [i_0] [i_2] [i_11] [i_0] [i_13] = ((/* implicit */short) ((_Bool) 633446704U));
                }
                for (long long int i_14 = 2; i_14 < 17; i_14 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */_Bool) (~(((144115188075854848ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [(signed char)12] [i_11] [(_Bool)1])))))));
                    var_31 = ((/* implicit */unsigned char) (short)28);
                    arr_47 [i_0] = ((/* implicit */unsigned int) var_10);
                }
            }
            for (long long int i_15 = 1; i_15 < 17; i_15 += 4) 
            {
                arr_51 [i_0] = ((/* implicit */short) (_Bool)1);
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 18; i_16 += 4) 
                {
                    for (unsigned short i_17 = 1; i_17 < 17; i_17 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */int) 4408962787880521390ULL);
                            var_33 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15] [i_15])) ? (((/* implicit */int) arr_31 [i_15 + 1] [1U] [i_15] [(_Bool)1] [i_15])) : (((/* implicit */int) arr_31 [i_15 + 1] [i_15] [i_15] [i_15] [13U]))));
                        }
                    } 
                } 
            }
            var_34 = ((/* implicit */unsigned char) var_9);
            var_35 &= ((/* implicit */unsigned long long int) var_1);
            /* LoopSeq 2 */
            for (short i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                var_36 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_16 [i_0] [i_2] [i_18] [i_0] [3LL]) >> (((var_3) + (1367991306)))))) != (arr_45 [i_2])))) : (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((arr_16 [i_0] [i_2] [i_18] [i_0] [3LL]) + (2147483647))) >> (((var_3) + (1367991306)))))) != (arr_45 [i_2]))));
                var_37 = ((/* implicit */short) ((arr_56 [i_0] [i_0 - 2] [i_18] [i_0] [i_0 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0 + 1] [i_0] [i_0 - 1] [(signed char)2] [i_0 - 4] [(short)10] [i_0 + 1]))) : (arr_43 [i_0 - 2] [(_Bool)1] [(unsigned short)2] [i_0] [i_0 + 2] [(unsigned short)2])));
                var_38 = ((/* implicit */short) ((2303591209400008704LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [(signed char)1] [(unsigned char)3] [i_0] [16ULL])) ? (arr_20 [(unsigned short)2] [i_0] [i_2] [(signed char)11] [i_2] [(_Bool)1]) : (((/* implicit */int) var_10)))))));
                var_39 = ((/* implicit */unsigned int) ((long long int) arr_34 [i_0 - 3] [i_18] [i_0 - 4]));
            }
            for (unsigned int i_19 = 3; i_19 < 16; i_19 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_20 = 1; i_20 < 16; i_20 += 4) 
                {
                    arr_64 [15ULL] [i_0] = ((/* implicit */unsigned char) ((arr_17 [i_20 + 2] [i_20 + 2] [i_0] [i_0 + 1] [i_0]) / (arr_17 [13LL] [i_20 - 1] [i_0] [i_0 - 4] [8U])));
                    arr_65 [i_20 - 1] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned int) (+(6716883227968163870ULL)));
                }
                for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 3) 
                {
                    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((unsigned short) arr_3 [i_19 - 1] [i_0 + 1] [i_0 + 1])))));
                    arr_68 [i_0] [i_2] [i_19 - 1] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_19 - 2] [i_2] [i_19] [(unsigned char)16] [i_0])) ? (arr_46 [i_19 - 1] [17ULL] [i_19] [i_21] [i_21] [12]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                }
                /* LoopSeq 1 */
                for (short i_22 = 3; i_22 < 15; i_22 += 1) 
                {
                    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) 18446744073709551613ULL))));
                    var_42 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_19 + 1]))));
                }
            }
            /* LoopNest 2 */
            for (unsigned short i_23 = 0; i_23 < 18; i_23 += 4) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 3) 
                {
                    {
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_0] [i_0 - 2] [i_0] [i_0 - 2]))) : (1ULL)));
                        var_44 = ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) arr_25 [i_0] [i_0 - 4] [i_23] [i_24] [i_2] [i_0 - 1] [(signed char)7])));
                        var_45 = ((/* implicit */short) arr_52 [(signed char)9] [i_0] [i_23] [i_24] [i_24]);
                    }
                } 
            } 
        }
        for (signed char i_25 = 0; i_25 < 18; i_25 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_26 = 4; i_26 < 16; i_26 += 2) 
            {
                arr_80 [i_0] = ((/* implicit */signed char) max((var_4), (max((arr_23 [i_0 + 2] [i_0] [i_26] [i_26] [i_0 + 2] [i_0 - 1] [15U]), (arr_23 [(unsigned short)14] [i_0] [i_26 - 3] [i_26 - 4] [i_0 - 4] [i_0 + 2] [8ULL])))));
                /* LoopNest 2 */
                for (unsigned short i_27 = 1; i_27 < 16; i_27 += 3) 
                {
                    for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
                    {
                        {
                            var_46 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_0 - 2] [(signed char)6] [i_26 - 1] [i_27 - 1] [i_28 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [(short)16] [i_0] [i_27] [i_26] [i_0] [15LL]))) : (min((arr_9 [i_26 - 2] [i_27 + 2] [i_0 - 3]), (arr_9 [i_26 + 1] [i_27 + 1] [i_0 - 1])))));
                            arr_86 [16] [i_26] [i_26] [i_26] [i_0] [i_26 + 1] = ((/* implicit */unsigned short) arr_85 [i_0 - 4] [i_25] [2LL] [i_27 + 2] [i_25]);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned long long int i_29 = 2; i_29 < 16; i_29 += 2) 
            {
                for (unsigned short i_30 = 3; i_30 < 14; i_30 += 3) 
                {
                    {
                        var_47 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(67043328U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [(_Bool)0] [i_0] [8] [i_0] [(_Bool)1] [i_30 - 2])) ? (((/* implicit */int) arr_83 [i_0] [i_25] [i_29] [(unsigned char)0] [i_30])) : (((/* implicit */int) arr_12 [i_0]))))) : (arr_63 [i_0] [i_25] [i_29 + 2]))), (((/* implicit */unsigned long long int) 9223372036854775782LL))));
                        var_48 = arr_0 [i_0];
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned short i_31 = 1; i_31 < 15; i_31 += 2) 
        {
            for (short i_32 = 1; i_32 < 17; i_32 += 2) 
            {
                {
                    var_49 &= ((/* implicit */unsigned int) arr_14 [i_0] [i_0 + 1] [i_0] [i_0]);
                    var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0 - 4] [12ULL] [i_32])) ? (max((arr_20 [i_0] [(signed char)12] [i_0] [(signed char)2] [2ULL] [2ULL]), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (2147483647))))) : (((/* implicit */int) arr_31 [i_0] [i_31] [i_31] [i_32 - 1] [i_0])))))));
                    var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_32 + 1] [i_0])) ? (arr_49 [i_31 - 1] [i_32 - 1]) : (arr_49 [i_31 + 1] [i_31 - 1])))) ? (min((arr_49 [i_0] [i_31 + 1]), (arr_49 [i_31 + 2] [i_0 - 4]))) : (((/* implicit */int) ((_Bool) arr_49 [i_0 - 2] [i_31 + 3])))));
                    var_52 = arr_55 [i_0] [i_31 + 3] [(unsigned char)6] [i_0] [i_0];
                }
            } 
        } 
        arr_97 [i_0] = ((/* implicit */long long int) ((unsigned short) 2363454296U));
        var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) max((arr_10 [(_Bool)0]), (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (arr_4 [i_0 - 4]) : (arr_4 [i_0 - 1]))))))));
        arr_98 [i_0] = ((/* implicit */short) arr_63 [i_0] [i_0 - 3] [i_0]);
    }
    for (long long int i_33 = 0; i_33 < 13; i_33 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_34 = 3; i_34 < 10; i_34 += 3) 
        {
            for (short i_35 = 0; i_35 < 13; i_35 += 4) 
            {
                {
                    arr_105 [i_34] [i_34] [i_35] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_34])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [(signed char)2] [5] [i_34 + 2] [i_35]))) : ((+(2363454289U)))));
                    arr_106 [i_34] [(unsigned char)8] [i_34] = ((/* implicit */unsigned short) arr_101 [i_34] [i_34]);
                    var_54 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_71 [(signed char)13] [i_34 + 3] [i_34])))));
                }
            } 
        } 
        var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_55 [i_33] [i_33] [i_33] [i_33] [i_33])))))));
        var_56 *= ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) arr_34 [i_33] [i_33] [i_33]))) + (2147483647))) >> (((((/* implicit */int) arr_52 [i_33] [i_33] [(_Bool)1] [i_33] [i_33])) + (3)))));
        var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_40 [i_33])), (6092159574058790077LL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_33]))) > (arr_74 [i_33] [i_33] [i_33] [i_33] [i_33])))) : (((/* implicit */int) (short)-24))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_36 = 3; i_36 < 24; i_36 += 3) 
    {
        var_58 = ((/* implicit */long long int) (+(((arr_107 [i_36 - 1]) ? (((/* implicit */int) arr_107 [i_36 - 1])) : (((/* implicit */int) arr_107 [i_36 + 1]))))));
        var_59 = var_1;
    }
    /* vectorizable */
    for (unsigned short i_37 = 0; i_37 < 10; i_37 += 3) 
    {
        var_60 = ((/* implicit */long long int) ((unsigned long long int) var_1));
        arr_111 [i_37] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 718653709U)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1] [(short)6] [i_37] [i_37] [i_37]))))) ? (((/* implicit */int) arr_87 [12ULL] [i_37] [(unsigned short)16] [10U])) : (arr_89 [i_37] [i_37])));
        /* LoopSeq 1 */
        for (unsigned char i_38 = 1; i_38 < 9; i_38 += 4) 
        {
            var_61 = ((/* implicit */long long int) (+((+(arr_0 [6ULL])))));
            arr_116 [7U] [(short)5] = ((/* implicit */unsigned long long int) arr_71 [i_38 - 1] [i_38 - 1] [i_38 - 1]);
            var_62 = ((/* implicit */unsigned short) arr_28 [i_37] [i_37] [(signed char)2] [i_38] [i_38] [4ULL]);
        }
        /* LoopSeq 1 */
        for (unsigned int i_39 = 2; i_39 < 6; i_39 += 2) 
        {
            arr_120 [i_37] [i_39] |= ((/* implicit */_Bool) var_2);
            var_63 -= ((/* implicit */unsigned short) arr_52 [(short)2] [i_39] [i_39] [(unsigned short)8] [i_39]);
            var_64 = arr_25 [i_39] [i_37] [i_39] [i_39] [i_39] [(signed char)8] [(unsigned short)0];
            /* LoopSeq 2 */
            for (unsigned short i_40 = 0; i_40 < 10; i_40 += 3) /* same iter space */
            {
                var_65 = ((/* implicit */unsigned long long int) arr_60 [i_39 + 1] [i_39 + 1]);
                arr_125 [i_37] [i_39 + 1] [i_37] = ((/* implicit */unsigned char) 2147483647);
                /* LoopNest 2 */
                for (unsigned short i_41 = 0; i_41 < 10; i_41 += 2) 
                {
                    for (unsigned char i_42 = 3; i_42 < 6; i_42 += 4) 
                    {
                        {
                            var_66 = ((/* implicit */unsigned short) ((signed char) arr_60 [i_39 - 1] [i_39 + 3]));
                            arr_133 [i_42] [i_41] [i_41] [i_42] [i_41] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) arr_130 [i_37] [i_39] [i_37] [(unsigned short)6] [(short)7] [i_42 + 4])) : (((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) (signed char)59)) : (arr_89 [i_37] [(_Bool)1])))));
                            arr_134 [4ULL] [i_39 + 1] [i_40] [i_42] [i_42] = ((/* implicit */unsigned int) var_7);
                        }
                    } 
                } 
            }
            for (unsigned short i_43 = 0; i_43 < 10; i_43 += 3) /* same iter space */
            {
                var_67 -= ((/* implicit */unsigned long long int) arr_31 [i_37] [i_39] [i_43] [i_37] [0LL]);
                arr_139 [i_43] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)32)) || (((/* implicit */_Bool) (short)6487)))) ? (((/* implicit */int) ((short) arr_95 [14] [i_39]))) : (((/* implicit */int) arr_118 [(_Bool)1] [(_Bool)1]))));
                var_68 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_39] [i_39 + 4] [i_39 + 3])) << (((((((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) arr_52 [(unsigned short)8] [12ULL] [i_43] [i_39] [i_43])) : (((/* implicit */int) var_8)))) + (18))) - (1)))));
            }
            var_69 = ((/* implicit */int) arr_138 [i_37] [i_37] [(unsigned short)1]);
        }
    }
}
