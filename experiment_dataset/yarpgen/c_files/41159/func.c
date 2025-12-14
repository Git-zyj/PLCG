/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41159
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_19 = arr_3 [i_0];
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [(unsigned char)16])) ? (arr_4 [(signed char)6]) : (arr_4 [(signed char)10])));
            var_22 += ((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2 + 2]);
        }
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) (unsigned char)84);
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((signed char) (unsigned char)240)))));
            var_25 = ((/* implicit */long long int) ((arr_9 [i_1 + 2] [i_1]) ? (((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_1 + 2] [i_1]))));
            var_26 = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_1]))));
        }
        var_27 = ((((/* implicit */int) ((unsigned short) arr_8 [i_1] [i_1]))) < (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1])));
    }
    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))));
    var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned char)174)))))))) : (((min((var_12), (((/* implicit */unsigned long long int) var_6)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)21)) & (((/* implicit */int) var_4)))))))));
    var_30 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 3 */
    for (unsigned short i_4 = 4; i_4 < 9; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    var_31 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_10 [i_4 - 3] [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))) / (((/* implicit */int) (unsigned char)104)))), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (unsigned char)88)) - (((/* implicit */int) var_6)))) : (((((/* implicit */int) var_2)) / (arr_8 [i_6] [i_4])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_32 |= (~(arr_4 [i_4]));
                        var_33 |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_7] [i_5 + 1] [i_4 - 2] [i_4]))));
                    }
                    var_34 ^= ((/* implicit */signed char) min(((((~(((/* implicit */int) arr_9 [i_4] [i_4])))) | (arr_4 [i_6]))), (((/* implicit */int) var_10))));
                    /* LoopSeq 4 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) arr_23 [i_5])));
                        var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10180)) ? (((/* implicit */int) arr_12 [i_4 - 3])) : (((/* implicit */int) arr_12 [i_4 - 3])))))));
                        var_37 = ((/* implicit */_Bool) arr_5 [2]);
                        var_38 = ((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) (unsigned char)182)))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        var_39 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-670)) ? (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned char)78)))) : (((/* implicit */int) ((unsigned short) (unsigned char)174)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [(unsigned short)5])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((arr_3 [i_5]) <= (((/* implicit */int) arr_6 [i_5 + 1] [i_6])))))));
                            var_41 = (!(((/* implicit */_Bool) arr_26 [(unsigned char)8] [i_5 + 1] [i_6] [i_10] [i_10])));
                        }
                        for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_3 [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))) : (((((/* implicit */long long int) (-(((/* implicit */int) arr_30 [i_9] [i_4]))))) / (arr_20 [i_5 + 1] [i_4 - 3] [i_4] [i_4]))))))));
                            var_43 = ((/* implicit */unsigned int) var_1);
                            var_44 = (+(((/* implicit */int) ((arr_15 [i_5] [i_4 - 1] [i_4 - 2]) < (arr_15 [i_5] [i_4 - 1] [i_4 - 2])))));
                            var_45 = ((/* implicit */short) var_14);
                            var_46 = ((/* implicit */int) arr_9 [i_4] [i_5]);
                        }
                    }
                    for (short i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        var_47 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */int) (unsigned short)6118)) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)-48)));
                        var_48 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4] [(unsigned short)6] [i_6] [i_12]))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_49 *= ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_5 [i_5])));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_14 = 2; i_14 < 7; i_14 += 2) /* same iter space */
                        {
                            var_50 -= ((/* implicit */int) arr_17 [i_4 - 3]);
                            var_51 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [5U] [i_4 - 2] [i_4] [i_4]))));
                            var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_4] [i_4] [i_4] [i_6] [i_13] [i_14])) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) arr_7 [i_4]))))) ? (arr_38 [i_4 - 4] [i_5 + 1] [i_6] [i_13] [i_13] [i_14 + 1]) : (((/* implicit */unsigned long long int) arr_33 [i_4] [i_4 - 1] [i_14 + 2] [i_14] [i_14 + 2])))))));
                        }
                        for (unsigned int i_15 = 2; i_15 < 7; i_15 += 2) /* same iter space */
                        {
                            var_53 ^= min((((/* implicit */int) (signed char)-18)), ((~(((/* implicit */int) arr_11 [i_4] [i_4])))));
                            var_54 &= ((/* implicit */_Bool) var_5);
                            var_55 = ((/* implicit */short) (!(arr_6 [i_15 + 3] [i_4 - 3])));
                            var_56 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5 + 1]))))) - (((/* implicit */int) arr_43 [i_15 + 2] [i_13] [i_6] [i_5] [i_4 - 4]))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            var_57 = (_Bool)1;
            /* LoopSeq 3 */
            for (unsigned short i_17 = 3; i_17 < 9; i_17 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_18 = 0; i_18 < 10; i_18 += 2) /* same iter space */
                {
                    var_58 = ((/* implicit */unsigned char) var_9);
                    var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_38 [i_4] [i_4 + 1] [i_17 + 1] [i_18] [i_18] [i_18]), (arr_38 [i_4 - 2] [i_4 + 1] [i_17 + 1] [2U] [i_18] [i_4 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_4] [i_16 - 1] [i_17 + 1])) ? (arr_39 [i_17] [i_16 - 1] [i_17 - 3] [i_18] [i_16 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4 - 3])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)174))))) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) min((((/* implicit */int) arr_36 [i_16] [i_16])), (arr_22 [i_4] [i_4 - 2] [i_4 - 1] [i_4 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_16] [(_Bool)1])) ? (((/* implicit */int) var_6)) : (arr_26 [i_18] [i_18] [i_17] [i_16] [i_4])))) : (((arr_20 [i_4] [i_16] [i_17] [i_18]) & (((/* implicit */long long int) arr_24 [i_16] [i_17] [i_4] [i_4] [i_4] [i_16]))))))));
                }
                /* vectorizable */
                for (short i_19 = 0; i_19 < 10; i_19 += 2) /* same iter space */
                {
                    var_60 *= ((/* implicit */short) 90571001716810828LL);
                    var_61 = ((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_50 [(unsigned char)6] [i_16 - 1] [(unsigned char)6] [7] [7])) ^ (((/* implicit */int) (unsigned char)65))))) : (arr_39 [i_4] [i_4] [i_4] [i_17] [i_19]));
                }
                for (short i_20 = 0; i_20 < 10; i_20 += 2) /* same iter space */
                {
                    var_62 = ((/* implicit */long long int) ((((arr_9 [i_4 - 3] [i_16]) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)4736))))) : ((-(((/* implicit */int) arr_35 [i_4 + 1] [i_16 - 1] [i_16] [i_17 + 1] [i_20] [i_16])))))) ^ (((((((/* implicit */_Bool) arr_17 [i_4 - 3])) ? (((/* implicit */int) arr_55 [i_4] [i_4 - 4] [i_4 + 1] [(unsigned char)0] [(short)6])) : (((/* implicit */int) (unsigned char)86)))) & (((/* implicit */int) (unsigned char)157))))));
                    var_63 = ((/* implicit */long long int) (((-(var_13))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_4 - 1] [6] [i_4] [i_4 - 4] [i_4 + 1] [i_4])) * (((/* implicit */int) arr_28 [i_4 - 3] [i_4 - 4] [i_4 - 4] [i_4 - 1] [i_4 + 1] [i_4 - 2])))))));
                    var_64 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9094800014281526580ULL)) ? (((/* implicit */int) (unsigned char)98)) : (1140317595)));
                    /* LoopSeq 3 */
                    for (unsigned int i_21 = 0; i_21 < 10; i_21 += 1) 
                    {
                        var_65 = ((/* implicit */unsigned int) arr_36 [i_16] [i_21]);
                        var_66 = ((/* implicit */unsigned int) ((short) (-(((/* implicit */int) (unsigned short)43102)))));
                        var_67 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 - 2] [i_4]))) - ((((-(var_13))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_20] [i_4 - 3] [i_4 - 3])))))));
                        var_68 = ((/* implicit */unsigned long long int) min((var_68), (((((/* implicit */_Bool) ((((_Bool) (unsigned short)34674)) ? ((~(((/* implicit */int) var_7)))) : ((~(((/* implicit */int) arr_30 [(short)8] [i_4 - 2]))))))) ? (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_15 [i_4] [i_16] [i_16 - 1])), (-4319415099614343651LL)))) * ((-(16681146354421804274ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_4), (var_8)))))))))));
                        var_69 = ((/* implicit */long long int) min((var_69), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) arr_11 [i_4 - 4] [i_16]))), (((((/* implicit */_Bool) ((arr_3 [i_20]) % (((/* implicit */int) (unsigned short)30861))))) ? (9094800014281526580ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_4] [(signed char)1] [i_17 + 1] [i_20] [(signed char)1]))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        var_70 ^= ((/* implicit */unsigned short) arr_12 [i_20]);
                        var_71 = ((/* implicit */_Bool) (unsigned short)30863);
                        var_72 ^= ((/* implicit */_Bool) arr_35 [i_20] [8LL] [i_4 + 1] [i_4] [i_4] [i_20]);
                    }
                    for (long long int i_23 = 2; i_23 < 8; i_23 += 4) 
                    {
                        var_73 = ((/* implicit */short) min((var_73), (((/* implicit */short) (((((+(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) arr_10 [i_4] [i_17 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16])))))) : (((((/* implicit */_Bool) arr_52 [i_17] [8ULL] [i_17] [8ULL])) ? (((/* implicit */unsigned int) ((arr_14 [i_17] [i_17] [i_17]) << (((((/* implicit */int) (_Bool)1)) - (1)))))) : (1845675143U))))))));
                        var_74 = var_4;
                        var_75 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */int) arr_12 [i_4])), (-259003883))), ((-(((/* implicit */int) (signed char)-11))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_45 [i_16]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)24))))) ? (-729591789732246950LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_17 - 2])))))));
                        var_76 ^= ((/* implicit */unsigned long long int) arr_14 [i_4 - 3] [i_4 - 3] [i_20]);
                    }
                }
                var_77 += ((/* implicit */signed char) (~(max((min((((/* implicit */unsigned long long int) arr_36 [i_4] [i_4])), (arr_53 [i_17] [i_16] [i_4 - 4] [i_4 - 1]))), (((/* implicit */unsigned long long int) (unsigned short)22310))))));
                var_78 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_20 [i_17 + 1] [(_Bool)1] [i_4 - 2] [i_4])) ? (var_0) : (((/* implicit */unsigned long long int) arr_20 [i_17 + 1] [i_4 - 2] [i_4 - 2] [i_4 - 2]))))));
                var_79 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_16] [(_Bool)1] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16540))) : (((((/* implicit */_Bool) arr_7 [i_16])) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_28 [(signed char)6] [i_4 - 2] [i_16 - 1] [i_17 - 3] [i_17 - 2] [(unsigned char)7])) : (((/* implicit */int) arr_32 [i_16] [i_16] [i_17 - 2]))))) : ((-(arr_20 [i_17 - 3] [i_17] [i_16] [i_4])))))));
                var_80 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_53 [i_4 - 4] [i_16 - 1] [i_17 - 3] [i_17 + 1])) ? (arr_53 [i_4] [i_16 - 1] [i_17 - 1] [i_17]) : (arr_53 [i_4] [i_16 - 1] [i_17 + 1] [i_17])))));
            }
            for (unsigned short i_24 = 3; i_24 < 9; i_24 += 4) /* same iter space */
            {
                var_81 = ((/* implicit */int) arr_44 [i_4] [i_4] [i_4]);
                var_82 = ((/* implicit */signed char) min((var_82), (((/* implicit */signed char) var_0))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_83 += ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_4] [i_4] [i_4] [8ULL] [i_4 - 4] [i_4] [(unsigned short)4])) ? (((/* implicit */int) ((_Bool) arr_56 [(_Bool)1] [(_Bool)1] [i_24] [i_24] [i_25]))) : (((/* implicit */int) var_2))));
                    var_84 = ((/* implicit */_Bool) min((var_84), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_4] [i_4] [i_4] [i_4 - 3] [i_24 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)142)))) : (((unsigned int) arr_44 [i_4] [i_16] [i_24 - 1])))))));
                    var_85 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_4 - 4] [i_4 - 1] [i_25] [i_25])) ? (arr_52 [i_4 - 1] [i_4 - 3] [i_25] [i_25]) : (arr_52 [i_4 - 4] [i_4 + 1] [8LL] [i_25])));
                }
                /* vectorizable */
                for (short i_26 = 0; i_26 < 10; i_26 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_27 = 0; i_27 < 10; i_27 += 4) 
                    {
                        var_86 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (unsigned char)77))));
                        var_87 = ((/* implicit */_Bool) ((((arr_20 [i_24 - 2] [i_24 - 2] [i_24 - 1] [i_24 + 1]) + (9223372036854775807LL))) << (((((arr_20 [i_24 - 3] [i_24 + 1] [i_24 + 1] [i_24 - 2]) + (4532907379304947282LL))) - (10LL)))));
                        var_88 = ((/* implicit */unsigned char) min((var_88), ((unsigned char)245)));
                    }
                    var_89 |= ((/* implicit */unsigned char) (unsigned short)35247);
                    var_90 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_54 [i_16 - 1] [i_24 - 2] [i_16] [i_16 - 1] [i_16])) : (((/* implicit */int) ((unsigned short) (short)-7092)))));
                    var_91 = arr_22 [(unsigned char)0] [i_24 + 1] [i_16] [i_4 - 1];
                }
                /* vectorizable */
                for (unsigned char i_28 = 0; i_28 < 10; i_28 += 1) 
                {
                    var_92 = ((/* implicit */int) (-(((unsigned int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned short i_29 = 0; i_29 < 10; i_29 += 2) 
                    {
                        var_93 = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) var_1)))));
                        var_94 = ((/* implicit */signed char) arr_5 [i_4]);
                    }
                }
            }
            for (unsigned short i_30 = 3; i_30 < 9; i_30 += 4) /* same iter space */
            {
                var_95 = ((/* implicit */unsigned short) var_17);
                var_96 = ((/* implicit */long long int) ((int) (-(((/* implicit */int) arr_58 [i_16] [i_16] [i_16] [i_4] [i_4] [i_16])))));
                var_97 = ((/* implicit */long long int) arr_19 [i_4] [i_16]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_31 = 0; i_31 < 10; i_31 += 3) 
                {
                    var_98 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_74 [i_30 - 3] [i_4 - 4] [i_4 + 1] [i_4 - 4])) ? (((/* implicit */int) arr_74 [i_30 - 3] [i_4 - 4] [i_4 - 4] [i_4 - 4])) : (((/* implicit */int) arr_74 [i_30 - 3] [i_4 - 4] [i_4 + 1] [i_4]))));
                    var_99 += ((/* implicit */long long int) ((((((/* implicit */int) arr_16 [i_4 + 1] [i_4])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)4972)) - (4963)))));
                    var_100 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_25 [i_4 - 3] [i_4] [i_4] [i_4]))));
                }
            }
        }
        var_101 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3341383426U))));
        var_102 = ((/* implicit */short) ((_Bool) arr_51 [i_4 - 4] [i_4] [i_4 - 4] [i_4]));
    }
    for (unsigned char i_32 = 0; i_32 < 24; i_32 += 3) 
    {
        var_103 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_85 [i_32])) ? (((/* implicit */int) arr_85 [i_32])) : (((/* implicit */int) arr_85 [i_32])))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
        var_104 &= ((/* implicit */unsigned char) arr_85 [i_32]);
        var_105 = ((/* implicit */_Bool) ((short) var_12));
    }
    for (signed char i_33 = 0; i_33 < 13; i_33 += 2) 
    {
        var_106 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 7031881565954087429LL)) ? ((-(arr_86 [i_33] [i_33]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_33])) & (((/* implicit */int) arr_10 [i_33] [i_33]))))))), (((/* implicit */long long int) ((arr_2 [i_33]) ? (((/* implicit */int) arr_7 [i_33])) : (((/* implicit */int) ((short) -1817849127))))))));
        var_107 = ((/* implicit */unsigned long long int) arr_86 [i_33] [i_33]);
    }
}
