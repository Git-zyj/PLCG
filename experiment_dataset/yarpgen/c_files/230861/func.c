/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230861
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                arr_8 [i_2] [i_1 - 1] [i_2] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) var_2)))) : (234881024)))) == (((((((/* implicit */int) var_8)) != (((/* implicit */int) arr_1 [i_1 + 1])))) ? (arr_5 [i_1 - 1] [i_1 + 1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 2) 
                {
                    arr_11 [i_0] [i_1 + 1] [i_2] [i_3] = ((/* implicit */unsigned short) ((long long int) arr_5 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1]));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 3; i_4 < 19; i_4 += 3) 
                    {
                        arr_16 [i_4] = ((arr_10 [i_1 - 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_4 - 3] [i_3] [i_2] [i_0])));
                        arr_17 [i_2] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
                        var_19 = ((/* implicit */_Bool) ((unsigned char) var_5));
                        var_20 = ((/* implicit */signed char) ((arr_5 [i_1 + 1] [i_1 - 1] [i_1] [i_1]) == (arr_5 [i_1] [i_1] [i_1] [i_1 + 1])));
                        var_21 *= ((arr_3 [5] [i_1 + 1] [i_4 + 1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1] [i_4 + 1])));
                    }
                    arr_18 [(_Bool)1] [i_2] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-64)) ^ (((/* implicit */int) var_7))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-77)) / (((234881032) >> (((((/* implicit */int) (signed char)63)) - (63)))))));
                }
            }
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                var_23 = ((/* implicit */int) (((((_Bool)1) || (((/* implicit */_Bool) -234881024)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [17ULL]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) - (19ULL)))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        {
                            arr_26 [i_1 + 1] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_18);
                            var_24 *= ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_27 [i_0] [9] [i_0] [6] [i_6] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) -793770558)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)188)) ? (var_13) : (((/* implicit */int) arr_10 [i_0]))))) || (((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) -234881009)))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        {
                            arr_37 [(signed char)4] [(signed char)4] [i_10] [i_8] [i_10] = ((/* implicit */long long int) ((arr_33 [i_8] [i_1 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))) : (var_14)));
                            var_25 = ((((arr_13 [i_0] [i_1 + 1] [i_8] [i_9] [i_9] [i_8] [(unsigned char)0]) / (((/* implicit */int) var_12)))) > ((+(((/* implicit */int) var_8)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    arr_40 [i_8] [i_1] [i_8] = ((/* implicit */long long int) ((arr_23 [i_8] [i_1 + 1]) ? (((/* implicit */int) arr_23 [i_8] [i_1 - 1])) : (((/* implicit */int) var_5))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 2; i_12 < 19; i_12 += 4) 
                    {
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) 11219568159096955135ULL))));
                        var_27 = ((/* implicit */long long int) var_0);
                        arr_44 [i_0] [i_1] [i_8] [i_11] [i_8] [i_12] = ((/* implicit */unsigned long long int) ((unsigned short) (-9223372036854775807LL - 1LL)));
                    }
                    var_28 *= ((/* implicit */long long int) arr_29 [i_0] [i_1] [i_11] [(unsigned short)16]);
                }
                for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((arr_21 [i_1 + 1] [(signed char)15] [i_8]) != (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_1])))))));
                        arr_50 [i_8] = ((/* implicit */_Bool) ((arr_3 [i_1 - 1] [i_1] [i_1 - 1]) ? (arr_47 [i_8] [(unsigned short)1] [i_1 - 1] [i_1]) : ((-(((/* implicit */int) arr_46 [i_13]))))));
                        arr_51 [i_0] [i_1 + 1] [i_0] [i_8] [10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_1 - 1] [i_8] [i_13] [i_14] [i_14])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        var_30 = ((/* implicit */unsigned long long int) var_8);
                        arr_52 [i_8] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_18)) && (arr_3 [i_0] [i_1 + 1] [i_8])))));
                    }
                    for (int i_15 = 1; i_15 < 16; i_15 += 3) 
                    {
                        arr_56 [i_8] [i_13] [i_13] [9] [i_1 - 1] [i_8] = ((/* implicit */unsigned short) (!(arr_24 [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1 - 1])));
                        arr_57 [i_0] [i_1] [17] [i_8] [i_13] [i_15] = ((/* implicit */unsigned short) var_0);
                        var_31 -= ((/* implicit */unsigned int) (-(1879048192)));
                        arr_58 [13ULL] [i_1] [i_8] [i_8] [2LL] = ((/* implicit */unsigned long long int) var_12);
                        var_32 = ((/* implicit */unsigned short) 234881010);
                    }
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_8] [19ULL] [i_0] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_45 [i_0] [i_1])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(unsigned char)12] [i_1 - 1] [i_8] [i_1 - 1] [i_8] [0ULL] [i_8])))));
                    arr_59 [i_0] [i_8] = ((/* implicit */long long int) arr_29 [i_0] [i_1] [i_8] [i_13]);
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [i_8] [i_1 - 1] [i_1] [(unsigned char)19] [i_1 + 1] [i_1])) ? (arr_42 [i_8] [(_Bool)1] [(_Bool)1] [10] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 3) /* same iter space */
                {
                    var_35 ^= ((/* implicit */unsigned long long int) (((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-44)))) != (((/* implicit */int) arr_29 [i_8] [i_8] [i_8] [i_8]))));
                    var_36 = ((/* implicit */long long int) arr_60 [i_0] [i_1 + 1] [i_1 - 1] [14ULL] [i_0]);
                }
            }
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 1; i_18 < 18; i_18 += 4) 
                {
                    for (signed char i_19 = 1; i_19 < 17; i_19 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 234881029)) ? (234881023) : (-234881041))))));
                            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) var_6))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_20 = 0; i_20 < 20; i_20 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_21 = 1; i_21 < 18; i_21 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 2; i_22 < 19; i_22 += 2) 
                {
                    for (unsigned long long int i_23 = 1; i_23 < 18; i_23 += 1) 
                    {
                        {
                            arr_77 [i_0] [i_23] [i_23] [(unsigned char)16] = ((/* implicit */long long int) ((arr_4 [i_22 - 2] [i_21 - 1] [i_20]) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)112)) != (((/* implicit */int) arr_53 [i_23] [i_23] [i_23] [i_20] [i_0]))))))));
                            arr_78 [i_0] [9LL] [i_21] [i_23] [i_22] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_21 + 2] [i_22 - 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_48 [(unsigned short)18] [i_20] [i_20] [i_20] [i_20] [i_20] [(_Bool)1])))))));
                            var_39 = (~(((/* implicit */int) var_7)));
                            arr_79 [i_0] [i_20] [i_23] [i_20] [i_23] [i_23] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_48 [i_21 - 1] [10U] [i_21 - 1] [i_21] [i_22] [i_22 + 1] [i_23 + 1]))));
                            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) (unsigned char)153))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_24 = 0; i_24 < 20; i_24 += 4) 
                {
                    for (unsigned char i_25 = 1; i_25 < 18; i_25 += 1) 
                    {
                        {
                            arr_87 [i_0] [i_20] [i_21 - 1] [i_25] = ((((/* implicit */_Bool) arr_71 [i_21] [i_21 - 1] [i_25 + 1])) ? (((/* implicit */int) arr_32 [i_24] [i_21] [i_20] [i_0])) : (-234881041));
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) >= (((/* implicit */int) arr_29 [i_20] [i_25 + 1] [i_21 + 2] [12U]))));
                            arr_88 [i_0] [i_20] [i_21] [i_20] [i_24] [i_25] [i_25] = ((((-234881028) + (2147483647))) >> (((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
                var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (~(((((-907617792) + (2147483647))) << (((arr_45 [i_0] [i_0]) - (2361830675U))))))))));
                /* LoopSeq 2 */
                for (long long int i_26 = 3; i_26 < 16; i_26 += 4) 
                {
                    var_43 = ((/* implicit */long long int) var_17);
                    arr_91 [i_26] [i_20] = ((/* implicit */unsigned int) 7227175914612596481ULL);
                    var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_65 [i_0] [i_0] [i_20] [i_21] [i_26 + 1])) : (var_13))))));
                }
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    arr_94 [i_0] [i_20] [i_21 - 1] [i_27] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_90 [i_21] [i_21 + 2] [i_21 + 2] [i_21 - 1]))));
                    arr_95 [9] [i_20] [i_20] [15LL] [i_27] [i_27] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)13)) || (((/* implicit */_Bool) 234881021))));
                }
            }
            for (unsigned short i_28 = 0; i_28 < 20; i_28 += 4) 
            {
                var_45 = ((/* implicit */_Bool) (+(arr_31 [i_0] [i_20] [i_20] [i_0])));
                /* LoopNest 2 */
                for (int i_29 = 1; i_29 < 19; i_29 += 2) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            var_46 ^= ((/* implicit */_Bool) arr_14 [i_0] [i_29 + 1] [i_20] [i_29 + 1] [i_0] [i_29 + 1] [(unsigned short)4]);
                            var_47 = ((/* implicit */long long int) ((arr_33 [i_30] [i_30]) ? (((unsigned int) (unsigned char)238)) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) & (((/* implicit */int) arr_65 [i_0] [i_20] [i_28] [i_29] [i_20])))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (unsigned int i_31 = 2; i_31 < 19; i_31 += 4) 
            {
                arr_105 [19] [i_20] [i_0] = ((/* implicit */int) ((arr_49 [(_Bool)1] [i_31] [i_31 - 2] [i_31] [i_0]) != (((/* implicit */unsigned long long int) (+(var_18))))));
                arr_106 [i_0] [i_0] [i_31] [i_31] = ((/* implicit */int) var_11);
                var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_31] [i_31 + 1] [i_31 + 1] [i_31 + 1] [i_31 - 1] [i_31 + 1])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_31 + 1] [i_31] [i_31 - 1] [i_31 - 1])))));
                arr_107 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_31]);
            }
            for (unsigned int i_32 = 0; i_32 < 20; i_32 += 2) 
            {
                var_49 = var_5;
                arr_111 [i_0] = ((/* implicit */unsigned int) arr_3 [i_32] [i_20] [i_0]);
            }
            var_50 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_20] [i_20] [i_20] [i_0])) || (((/* implicit */_Bool) var_10)))))));
            var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) (unsigned short)65534))));
            var_52 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_49 [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_0])))) ? (arr_83 [i_0] [i_0] [i_20] [i_20] [i_20]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_0] [i_20])))))));
        }
        var_53 = ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0]);
    }
    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
    {
        arr_114 [i_33] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_43 [i_33] [i_33] [i_33] [i_33] [i_33])), (12ULL)));
        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_93 [i_33] [i_33] [i_33])) : (arr_103 [15LL] [15LL] [i_33])))) ? (((/* implicit */unsigned long long int) ((((((-234881031) / (((/* implicit */int) (unsigned char)248)))) + (2147483647))) << (((((arr_110 [i_33]) + (8294835430571764466LL))) - (28LL)))))) : (max((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))))));
        var_55 = ((/* implicit */unsigned char) -234881033);
        var_56 = max((-234881041), (((/* implicit */int) (_Bool)1)));
    }
    var_57 -= ((/* implicit */_Bool) var_10);
    var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)36289)))))));
}
