/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220566
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
    var_18 = ((max((((18ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))) < (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_12))), (((/* implicit */unsigned int) var_11))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~((((~(8388607U))) - (((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))));
        var_19 = ((/* implicit */signed char) (+((~(((/* implicit */int) (unsigned char)254))))));
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_20 -= ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_1 [i_0]), (max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_21 = ((/* implicit */unsigned char) ((var_12) | (var_4)));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) != (arr_6 [i_1] [i_1])))) + (((/* implicit */int) arr_4 [i_1])))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_22 = 3417788629U;
            var_23 -= ((/* implicit */unsigned long long int) ((short) (-((~(((/* implicit */int) var_14)))))));
        }
        arr_10 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 4286578688U)) ? (4095U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 2 */
        for (int i_3 = 2; i_3 < 17; i_3 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_3]))));
            var_25 = ((/* implicit */unsigned int) arr_5 [i_1]);
        }
        for (int i_4 = 2; i_4 < 17; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned int) max((var_26), ((-(((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */unsigned int) arr_11 [i_5] [i_5] [19])) : (arr_8 [i_1] [i_1])))))));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [11] [i_5] [i_4 + 1] [i_4 + 2])) != (((/* implicit */int) var_9))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 1) /* same iter space */
                    {
                        var_28 |= ((/* implicit */_Bool) ((short) arr_20 [i_1] [i_7 - 1] [i_4 - 2] [i_4]));
                        arr_25 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65522)) % (((/* implicit */int) arr_5 [i_7 - 1])))))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        var_29 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [8U] [i_4] [i_4] [i_4])) ? (4294963201U) : (arr_16 [i_4] [i_5] [i_1] [i_4]))))));
                        arr_28 [i_5] [12ULL] [(signed char)17] [i_6] [i_8 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_17) : (((/* implicit */unsigned int) 7)))))));
                    }
                    for (short i_9 = 2; i_9 < 18; i_9 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((signed char) (+(-1))));
                        var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_17 [i_4 - 2] [i_5] [i_9 + 2] [i_9 + 1]))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_13 [i_4 - 2] [i_4 - 2]) : (arr_13 [i_4 - 1] [i_4 - 1])));
                        var_33 *= ((/* implicit */_Bool) arr_18 [i_1]);
                    }
                    var_34 = ((/* implicit */unsigned int) ((_Bool) arr_8 [i_1] [i_4 - 1]));
                    /* LoopSeq 2 */
                    for (signed char i_11 = 1; i_11 < 19; i_11 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_14 [i_6] [i_6])) ? (((/* implicit */int) arr_30 [i_11 + 1] [i_4] [i_5])) : (((/* implicit */int) arr_33 [i_5]))))));
                        var_36 &= ((/* implicit */signed char) arr_11 [i_1] [i_1] [i_5]);
                        var_37 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_32 [i_11] [i_11] [i_11] [i_11 - 1] [i_11 + 1]))));
                    }
                    for (signed char i_12 = 1; i_12 < 19; i_12 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (short)-23038))));
                        var_39 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_34 [i_12] [i_12 + 1] [i_6] [i_6] [i_12 - 1]))));
                        arr_40 [i_5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_5])) ? (((/* implicit */int) arr_1 [i_4 + 3])) : ((-(((/* implicit */int) var_1))))));
                        arr_41 [i_12] [i_6] [i_5] [i_4] [i_1] = ((/* implicit */int) ((arr_14 [i_4 - 1] [i_12 + 1]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_22 [i_5])) : (((/* implicit */int) arr_9 [i_4] [i_6] [i_12 - 1])))))));
                    }
                    var_40 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)3173)))))));
                }
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (short)32726)))) + (2147483647))) >> (((((arr_13 [i_1] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))) - (326272317U)))));
                    var_42 = (!((_Bool)1));
                }
            }
            /* vectorizable */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                arr_48 [i_1] [i_1] [(unsigned short)13] [(unsigned short)13] = ((/* implicit */unsigned int) arr_35 [i_1] [i_1] [i_14] [i_1] [i_4 + 1] [i_1] [i_4 + 3]);
                var_43 = ((/* implicit */_Bool) ((arr_37 [i_4 + 2] [i_4] [i_14]) ? (((/* implicit */int) arr_37 [i_4 - 2] [i_14] [i_14])) : (((/* implicit */int) arr_37 [i_4 - 2] [i_4 + 3] [i_14]))));
            }
            /* LoopSeq 2 */
            for (long long int i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) /* same iter space */
                    {
                        arr_58 [(short)3] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_15] [i_15] [i_15] [i_15] [i_15]))) : (8388623U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_16] [i_4 - 2])) ? (arr_0 [i_1] [i_1]) : (14561257483151878464ULL)))));
                        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) (+(((arr_37 [i_1] [i_4 + 2] [i_15]) ? (arr_11 [i_4] [i_4] [i_15]) : (((/* implicit */int) arr_44 [i_1] [i_16] [i_15])))))))));
                    }
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_4 + 3] [i_18 + 1] [i_15] [i_18]))) ? (((/* implicit */int) arr_23 [i_18] [i_18] [i_1] [i_4] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_18] [i_1] [i_1] [i_1] [i_4 + 3] [i_15])) && (((/* implicit */_Bool) arr_16 [i_4 + 3] [i_18 + 1] [i_15] [i_18])))))));
                        arr_62 [i_16] [i_4] [i_15] [i_15] [i_18] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_2)) ? (var_0) : (arr_16 [i_1] [(short)6] [i_15] [i_18]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)247)))))) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) ((short) 1736058197)))));
                        var_46 = ((/* implicit */unsigned int) ((int) var_10));
                        arr_63 [i_18] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_1] [i_1] [i_1] [i_1] [i_1])) ? ((-(((((/* implicit */_Bool) arr_20 [i_1] [i_4] [i_15] [i_18])) ? (arr_6 [i_18] [i_4]) : (((/* implicit */int) arr_47 [i_1])))))) : (((/* implicit */int) (unsigned short)38072))));
                    }
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_19] [i_19 + 1] [i_19 + 1] [i_19] [i_4 + 1]))) : (arr_53 [i_19 + 1] [i_19 + 1] [i_4 - 2] [i_19 + 1] [i_4 - 2])))) ? (max((((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */int) (signed char)57)))), (((int) (unsigned char)8)))) : ((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_50 [i_1] [i_1] [i_1] [i_1])), ((unsigned short)65522)))))))))));
                        arr_66 [i_15] = ((/* implicit */unsigned char) ((unsigned long long int) min((arr_6 [i_1] [i_1]), (arr_24 [i_4] [i_4]))));
                    }
                    for (short i_20 = 0; i_20 < 20; i_20 += 2) 
                    {
                        arr_69 [i_1] [i_4 - 1] [i_1] [i_16] [i_20] = ((/* implicit */unsigned char) var_13);
                        arr_70 [i_15] [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_1] [i_1] [i_1]))) ? (min((((/* implicit */unsigned int) var_11)), (2520186306U))) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_56 [i_1] [i_15] [(_Bool)1] [i_15] [i_16] [(_Bool)1])))))))))));
                    }
                    arr_71 [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) ((arr_19 [i_4 + 3] [i_4 - 1] [i_4 + 2] [i_16] [i_16]) == (arr_42 [i_4] [i_4 - 1])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4 + 3] [i_4 - 1])))))));
                }
                /* vectorizable */
                for (unsigned int i_21 = 0; i_21 < 20; i_21 += 4) 
                {
                    var_48 += arr_75 [i_1] [i_4];
                    var_49 = ((/* implicit */short) (-((-(arr_64 [i_1] [i_1] [i_4] [(short)0] [15U] [i_21])))));
                }
                var_50 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                var_51 *= ((/* implicit */unsigned char) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_4] [i_15]))))), (((((/* implicit */int) var_14)) & (((/* implicit */int) var_14))))))));
                var_52 = ((/* implicit */short) (!(((/* implicit */_Bool) min(((+(var_17))), (((/* implicit */unsigned int) (~(-1)))))))));
            }
            for (int i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                arr_78 [i_1] [i_4 + 2] [i_4 + 2] [i_22] |= ((/* implicit */signed char) (~(min((((/* implicit */long long int) (+(((/* implicit */int) arr_30 [(_Bool)0] [i_4] [i_4]))))), (max((((/* implicit */long long int) arr_13 [i_4] [i_4 - 1])), (arr_77 [i_4] [i_1])))))));
                var_53 = ((/* implicit */unsigned char) (-(arr_68 [i_1] [i_1] [i_1] [i_1] [i_22] [i_1])));
                arr_79 [i_1] [i_1] [i_1] [i_22] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_38 [i_4] [i_22] [i_4] [(short)1] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_1] [i_1] [i_22] [i_4 + 3] [i_22] [i_1])) ? (arr_65 [(_Bool)1] [i_4] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_4] [i_4])))))))));
            }
            var_54 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)9)) < (((/* implicit */int) arr_43 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1])))))));
        }
        var_55 = ((/* implicit */unsigned long long int) min((var_55), (((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)192)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_21 [18ULL] [i_1])) : (((/* implicit */int) arr_1 [i_1])))))))))));
    }
    /* LoopNest 2 */
    for (long long int i_23 = 2; i_23 < 20; i_23 += 3) 
    {
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_25 = 0; i_25 < 21; i_25 += 1) 
                {
                    var_56 = ((/* implicit */_Bool) max((((/* implicit */int) var_11)), (((((/* implicit */int) arr_85 [i_23 + 1] [i_23 + 1] [i_23 + 1] [(unsigned short)12])) & (((/* implicit */int) (!(arr_82 [(short)3]))))))));
                    var_57 = ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned long long int) 2097151U)) | (((arr_82 [i_23]) ? (arr_83 [i_23] [i_24]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_26 = 0; i_26 < 21; i_26 += 3) 
                {
                    var_58 = ((/* implicit */short) (-(((/* implicit */int) ((arr_83 [i_23] [i_23]) < (((/* implicit */unsigned long long int) var_4)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_27 = 0; i_27 < 21; i_27 += 1) 
                    {
                        var_59 = ((/* implicit */unsigned long long int) min((var_59), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)4095))))))))));
                        var_60 = ((/* implicit */_Bool) (-(arr_83 [i_23] [i_23 - 2])));
                        var_61 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_90 [i_27] [i_23] [i_23 - 1]))));
                        /* LoopSeq 4 */
                        for (unsigned int i_28 = 3; i_28 < 19; i_28 += 3) 
                        {
                            var_62 = ((/* implicit */_Bool) ((unsigned char) arr_87 [i_23 - 1] [i_26] [i_28 - 3]));
                            arr_94 [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (signed char)-16))));
                        }
                        for (int i_29 = 2; i_29 < 20; i_29 += 3) /* same iter space */
                        {
                            var_63 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_82 [i_26])) : (((/* implicit */int) arr_84 [i_23] [(short)13] [i_26])))) * (((/* implicit */int) arr_87 [i_23 - 1] [i_23] [i_23]))));
                            var_64 = ((/* implicit */_Bool) ((unsigned char) arr_81 [i_23 - 2] [i_23 - 2]));
                        }
                        for (int i_30 = 2; i_30 < 20; i_30 += 3) /* same iter space */
                        {
                            var_65 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (var_12) : (((/* implicit */unsigned int) arr_99 [i_23] [i_26] [i_27] [i_26] [i_27] [i_23]))))) ? (14312267457019379631ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_89 [i_23])) || (((/* implicit */_Bool) arr_96 [i_27] [i_27] [i_27] [i_27] [(unsigned char)18] [(signed char)19]))))))));
                            var_66 = (-(((((/* implicit */_Bool) arr_80 [i_23] [i_23])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
                        }
                        for (short i_31 = 0; i_31 < 21; i_31 += 3) 
                        {
                            var_67 = ((/* implicit */short) ((((/* implicit */_Bool) arr_97 [i_27])) ? (((/* implicit */unsigned int) arr_89 [i_23 + 1])) : (var_4)));
                            arr_102 [i_23] [i_27] [i_26] [i_27] [i_31] = (-(arr_89 [i_23 + 1]));
                        }
                        arr_103 [i_23] [i_27] [3ULL] [i_26] [i_27] = ((/* implicit */signed char) ((long long int) (_Bool)1));
                    }
                    for (unsigned long long int i_32 = 2; i_32 < 19; i_32 += 4) /* same iter space */
                    {
                        var_68 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))) + (3978381750U)));
                        var_69 *= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_89 [i_23])) || (arr_88 [i_32] [i_32] [i_26]))));
                        arr_107 [i_23] [i_24] [i_26] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3202925989U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_80 [i_24] [i_24]))) : (var_2))) ^ (((((/* implicit */unsigned long long int) var_12)) & (arr_105 [i_32] [i_32])))));
                    }
                    for (unsigned long long int i_33 = 2; i_33 < 19; i_33 += 4) /* same iter space */
                    {
                        arr_110 [i_23 + 1] [i_24] [i_24] [i_26] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & ((~(((/* implicit */int) var_9))))));
                        var_70 = ((/* implicit */int) (-(3984848859U)));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        arr_113 [i_23] [i_24] [i_24] [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_89 [i_24])))) ? ((+(2456882161681681360ULL))) : (((/* implicit */unsigned long long int) arr_95 [10U]))));
                        arr_114 [i_23 - 2] [i_24] [i_26] [i_23 - 2] = ((/* implicit */unsigned char) (~(arr_105 [16ULL] [i_23 + 1])));
                    }
                }
                arr_115 [i_23] = ((/* implicit */unsigned int) ((min((((((/* implicit */int) var_14)) >= (((/* implicit */int) (unsigned short)63)))), (arr_88 [(_Bool)1] [i_24] [i_24]))) ? (((unsigned long long int) arr_100 [(signed char)2] [(short)14] [i_23 - 1] [(short)14] [i_23 - 1])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_99 [i_23] [i_24] [i_24] [i_23] [i_24] [i_23 + 1]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
            }
        } 
    } 
}
