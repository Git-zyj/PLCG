/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236857
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
    var_11 = ((/* implicit */int) var_1);
    var_12 = ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0 + 2] = ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((long long int) var_1)) : (((/* implicit */long long int) arr_1 [i_0 - 2])));
        arr_3 [(short)10] [(short)10] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-3807228925764238331LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            arr_6 [i_0] [i_1 - 1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_10)) ? (-2005275284399442394LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0 + 2])))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 3; i_3 < 10; i_3 += 4) 
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 - 3] [i_3 + 1] [i_3])) ? (5931142966399184495ULL) : (var_0)));
                    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [9] [i_3] [(unsigned short)4] [i_3 - 2] [i_3] [i_3]))))) > (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_0] [i_1] [i_2 + 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                }
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                {
                    for (int i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        {
                            arr_16 [i_4] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) -2005275284399442394LL))))));
                            arr_17 [i_0] [4] [i_2] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5931142966399184495ULL)) ? (((/* implicit */int) arr_12 [i_1 + 1] [i_2 + 1] [i_4 + 1])) : (((/* implicit */int) arr_12 [i_1 - 2] [i_2 + 1] [i_4 + 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 9; i_6 += 3) 
                {
                    for (long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        {
                            var_15 &= ((/* implicit */unsigned int) arr_7 [i_2] [i_2 + 1] [i_2]);
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(0U)))) % ((+(-3807228925764238331LL))))))));
                        }
                    } 
                } 
            }
            for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_8 [i_8]);
                var_17 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_14 [i_0] [i_1 + 2] [i_0] [i_0 + 1] [i_1] [i_0] [i_8])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_8] [i_0 + 2] [i_1 + 2] [i_8] [i_1 - 1]))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                arr_30 [i_1] = ((/* implicit */unsigned char) arr_13 [i_0] [i_9] [i_0] [(signed char)6]);
                var_18 &= ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
                arr_31 [(short)9] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_0 [3LL])) ? (arr_4 [i_9] [(unsigned short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))) : (((/* implicit */unsigned long long int) 2147483647))));
                /* LoopSeq 1 */
                for (int i_10 = 4; i_10 < 9; i_10 += 1) 
                {
                    arr_36 [(_Bool)1] [i_0] [i_1 - 2] [i_9] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 8864700075029377022LL))));
                    var_19 = (signed char)0;
                    arr_37 [i_0 - 1] = arr_11 [10] [i_0] [i_9] [(_Bool)1];
                    var_20 = ((/* implicit */long long int) (unsigned char)242);
                }
            }
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                arr_40 [(_Bool)1] [4ULL] [i_11] = ((/* implicit */unsigned long long int) (short)9240);
                /* LoopSeq 2 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    var_21 -= ((/* implicit */signed char) (~(((arr_23 [i_11] [i_11] [i_11]) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_12] [i_12 - 1] [i_12 - 1] [i_0] [i_0] [i_0] [i_0]))) : (3179780893778018749LL)))));
                    var_22 = ((/* implicit */unsigned char) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [8LL])))));
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 4; i_13 < 9; i_13 += 4) 
                    {
                        arr_47 [8ULL] [i_1 + 3] [i_11 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)50)) ? (arr_7 [(_Bool)1] [i_1] [i_11]) : (((/* implicit */long long int) arr_11 [i_13 + 2] [i_12] [i_11] [i_1])))))));
                        arr_48 [i_0] [i_1] [(signed char)3] [i_12 - 1] [i_13] = ((/* implicit */signed char) (+((+(((/* implicit */int) (signed char)127))))));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_13 - 1] [i_1 + 2])) ? (arr_7 [i_0] [i_13 - 4] [i_1 + 3]) : (9223372036854775807LL))))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 + 3] [i_12 - 1] [i_13 - 3]))))))));
                        arr_49 [(_Bool)1] [i_1] [i_11] [i_12] [i_13 - 4] = ((/* implicit */_Bool) -1095839097778042220LL);
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ ((+(((/* implicit */int) arr_9 [i_14] [i_1] [i_11] [i_11] [i_1] [i_0]))))));
                        arr_52 [i_14] [(unsigned short)8] = ((/* implicit */signed char) arr_14 [i_0] [i_0] [i_1] [i_11] [i_12] [i_12] [(unsigned char)8]);
                        var_26 = ((/* implicit */unsigned char) var_9);
                    }
                }
                for (int i_15 = 2; i_15 < 10; i_15 += 4) 
                {
                    arr_57 [i_15 - 2] [(unsigned char)0] [(signed char)9] [i_0 - 2] = ((/* implicit */_Bool) ((arr_43 [i_15 + 1] [i_11 + 1]) / (arr_43 [i_15 + 1] [i_11 + 1])));
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_60 [3ULL] = ((/* implicit */unsigned short) (signed char)-47);
                        var_27 = ((((/* implicit */_Bool) arr_27 [i_1 + 2])) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_19 [i_0 + 2] [(signed char)10])));
                        var_28 = ((arr_1 [(short)2]) / ((~(((/* implicit */int) (_Bool)1)))));
                        arr_61 [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_11] [i_15] [i_15])) || (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_13 [i_1 + 3] [i_15] [i_15] [i_16]))))));
                        arr_62 [1] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) & (320823152U)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))) : ((+(-2005275284399442394LL)))));
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        arr_65 [i_17] [3U] [0LL] [i_11 + 1] [0LL] [i_1] [(signed char)8] &= ((/* implicit */signed char) 12515601107310367120ULL);
                        arr_66 [i_0 - 2] [i_0 - 2] = ((/* implicit */signed char) ((short) (short)19724));
                        arr_67 [(signed char)6] [i_1] [(signed char)6] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_19 [i_1 - 2] [i_1 - 1])) : (((/* implicit */int) arr_19 [i_1 - 2] [i_1 - 1]))));
                        var_29 = ((/* implicit */unsigned char) 6656913862387950126LL);
                    }
                }
                /* LoopSeq 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_30 = ((/* implicit */unsigned long long int) (~((-(-1473702474)))));
                    arr_70 [i_0] [i_1] [i_11] [i_18] = ((/* implicit */unsigned long long int) arr_18 [(signed char)1] [i_1 - 1] [i_18] [i_18]);
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (var_0)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) : (var_0)));
                }
                for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    arr_74 [(short)8] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_8);
                    arr_75 [i_0] [10U] [(_Bool)1] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (signed char)-55))) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_44 [i_11 + 1] [i_1 - 2] [i_0 - 2] [i_0 - 1]))));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_0 + 1])) ? (arr_24 [i_0 - 2]) : (((/* implicit */unsigned long long int) arr_59 [i_1 + 2] [i_11 + 1] [i_11 + 1] [i_11 + 1]))));
                }
            }
            /* LoopSeq 1 */
            for (short i_20 = 3; i_20 < 8; i_20 += 3) 
            {
                arr_78 [6] [6] [i_1] [i_0] = var_5;
                var_33 &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_41 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) var_2)))) % (((/* implicit */unsigned long long int) arr_32 [i_0] [i_1 - 2] [i_20 + 1] [i_0 - 1]))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_21 = 0; i_21 < 11; i_21 += 4) 
            {
                arr_82 [(unsigned char)5] [i_0] [8U] [i_0] = ((/* implicit */signed char) var_8);
                /* LoopSeq 1 */
                for (signed char i_22 = 1; i_22 < 9; i_22 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) arr_44 [i_0] [i_22 + 1] [i_21] [i_1 + 1]))));
                        var_35 = ((/* implicit */int) arr_11 [i_0 + 1] [i_1] [i_21] [i_22]);
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((_Bool) (signed char)-44)))));
                    }
                    for (unsigned int i_24 = 3; i_24 < 9; i_24 += 4) /* same iter space */
                    {
                        arr_91 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-106)) + (2147483647))) << (((((((((/* implicit */_Bool) 3580225144U)) ? (((/* implicit */int) arr_41 [i_24 - 1])) : (((/* implicit */int) arr_45 [10] [i_1] [i_1])))) + (60))) - (17)))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_59 [i_24 + 1] [i_22 + 2] [i_21] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */long long int) 2961125245U)) != (arr_80 [i_0] [1] [i_0] [(_Bool)0]))))));
                        arr_92 [(short)8] [i_24 - 3] [i_21] [i_22 + 1] [i_24] [i_22 + 1] [4] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned int i_25 = 3; i_25 < 9; i_25 += 4) /* same iter space */
                    {
                        arr_95 [i_0] = (_Bool)1;
                        arr_96 [i_25] [(signed char)10] [i_21] [i_1] [i_0] = (!(((/* implicit */_Bool) arr_84 [i_1 + 2] [i_25 - 2] [i_1 + 2] [i_0])));
                    }
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (~((~(16257633115329909619ULL))))))));
                    arr_97 [i_21] [i_21] = ((/* implicit */int) arr_14 [(short)6] [i_1] [i_21] [i_22] [i_1] [i_22 + 1] [i_0]);
                    /* LoopSeq 4 */
                    for (long long int i_26 = 4; i_26 < 9; i_26 += 4) 
                    {
                        arr_101 [i_1] [i_1] [i_1] [i_1] [i_26] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_0] [i_22] [i_22 + 2] [i_22] [i_26 + 1])) ? (arr_10 [i_0 + 1] [i_26 + 1] [i_26] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_26 - 3] [i_22 + 1] [i_21] [i_22])))));
                        arr_102 [i_0] [i_1] = (~(((/* implicit */int) arr_99 [i_22 - 1])));
                        var_39 = ((/* implicit */_Bool) ((arr_93 [4LL] [i_1 + 3] [i_1 - 2] [i_1 + 3]) - (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_0 - 1] [i_0 - 1] [i_1 + 3] [i_22] [i_0 - 1] [i_26 - 1])))));
                    }
                    for (int i_27 = 1; i_27 < 9; i_27 += 3) 
                    {
                        var_40 = ((/* implicit */long long int) (short)32767);
                        arr_107 [i_1] [i_1] [i_21] [i_22 - 1] [i_27 + 1] = ((signed char) 6372096151011231188ULL);
                    }
                    for (unsigned int i_28 = 3; i_28 < 9; i_28 += 1) 
                    {
                        var_41 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (signed char)121)) != (((/* implicit */int) (unsigned short)65535)))));
                        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [(short)0] [i_21] [i_22 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_32 [i_0] [(unsigned char)1] [i_21] [i_22 + 1])));
                        var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24714)) ? (((/* implicit */int) (short)12405)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2993508610U))))));
                    }
                    for (short i_29 = 2; i_29 < 10; i_29 += 2) 
                    {
                        var_44 = ((((/* implicit */_Bool) arr_35 [i_0 + 1] [i_1 + 1] [i_29 - 1] [i_22 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6));
                        var_45 = ((arr_56 [(short)5] [5LL] [i_21] [i_22 + 1]) ? (((/* implicit */int) arr_94 [i_29 - 2] [i_22 - 1] [(short)7] [i_22] [i_0] [i_0 + 2])) : ((-(((/* implicit */int) var_3)))));
                    }
                    var_46 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) arr_77 [i_0] [i_22 + 2] [(_Bool)1] [i_0]))));
                }
            }
        }
    }
    for (short i_30 = 0; i_30 < 25; i_30 += 2) 
    {
        var_47 = ((/* implicit */_Bool) ((((((/* implicit */int) var_4)) <= (((/* implicit */int) ((((/* implicit */int) arr_113 [i_30])) < (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24713)))))) ? (((/* implicit */unsigned long long int) (-(arr_115 [i_30])))) : (var_6))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (var_7)))), ((-(var_1))))))));
        /* LoopNest 3 */
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            for (unsigned long long int i_32 = 1; i_32 < 24; i_32 += 4) 
            {
                for (unsigned char i_33 = 0; i_33 < 25; i_33 += 4) 
                {
                    {
                        var_48 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_114 [i_30]) != (((/* implicit */unsigned long long int) (~(3580225144U))))))) * (((/* implicit */int) arr_122 [i_32 - 1] [(unsigned short)21] [i_32 + 1] [i_32 + 1] [i_33]))));
                        /* LoopSeq 1 */
                        for (short i_34 = 0; i_34 < 25; i_34 += 1) 
                        {
                            arr_127 [i_30] [i_31] [i_32] [(_Bool)1] = ((/* implicit */unsigned short) 2104529333686081309ULL);
                            arr_128 [14U] [i_30] [i_30] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_120 [i_30] [i_31] [i_32 + 1] [i_33])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_125 [i_30] [i_31] [i_32] [i_34])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78)))))) ? (var_6) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-100)), (613808022)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_121 [i_32 - 1] [i_32 + 1] [i_32] [i_32 + 1])) : (arr_120 [i_33] [i_32 + 1] [4] [i_30]))))));
                            arr_129 [i_31] [i_31] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 268402688)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (454007968U)))))) ? ((-(((/* implicit */int) (unsigned char)17)))) : (min(((-(((/* implicit */int) var_5)))), (((/* implicit */int) var_4))))));
                        }
                        var_49 = ((/* implicit */unsigned short) (unsigned char)187);
                    }
                } 
            } 
        } 
    }
}
