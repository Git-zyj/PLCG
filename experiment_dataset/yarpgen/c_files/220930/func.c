/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220930
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
    var_11 = var_4;
    var_12 = ((((/* implicit */unsigned long long int) var_9)) ^ (var_5));
    var_13 = ((/* implicit */unsigned long long int) (((~(-599968197621117589LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-660)) + (2147483647))) >> (((((/* implicit */int) (signed char)-100)) + (107)))));
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            var_15 = ((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) arr_3 [i_0])));
            var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)43))) ^ (((var_3) ? (2405896730U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (unsigned short i_4 = 2; i_4 < 23; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 1])))));
                            var_18 = ((/* implicit */short) ((arr_12 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4]) - (arr_12 [i_4 + 1] [i_4] [i_4 - 2] [i_4 + 1] [20ULL] [(short)3])));
                            var_19 = ((/* implicit */short) (~(arr_7 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])));
                            var_20 += ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_3] [i_0])) == (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3] [i_3])) || (((/* implicit */_Bool) arr_1 [i_3] [i_1 + 1])))))));
                            var_21 = ((/* implicit */signed char) (~(arr_8 [i_0 - 1] [i_0] [i_0 - 1])));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_15 [i_0] [(signed char)13] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_5])))))));
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                arr_18 [i_0] [i_5] [i_0] = ((((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0])) ^ (((/* implicit */int) arr_10 [i_0 - 1] [(short)3] [i_0] [i_0] [i_0 - 1] [i_0])));
                var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_5] [i_0] [i_5] [i_0] [i_0 - 1]))) + (var_1));
                var_23 -= ((/* implicit */unsigned long long int) arr_3 [i_6]);
                var_24 ^= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
            }
            for (unsigned char i_7 = 1; i_7 < 23; i_7 += 2) 
            {
                /* LoopSeq 4 */
                for (int i_8 = 2; i_8 < 20; i_8 += 1) 
                {
                    var_25 = ((/* implicit */int) ((((/* implicit */int) arr_19 [i_7] [i_0])) > ((-(((/* implicit */int) arr_3 [i_0]))))));
                    var_26 |= ((/* implicit */signed char) ((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_11 [i_0] [i_5] [i_7 - 1] [i_7] [i_7 + 1] [i_8]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        arr_26 [i_0] [(signed char)3] [i_0] [i_8] [i_9] = ((/* implicit */unsigned char) arr_9 [i_9] [i_7] [i_5]);
                        var_27 = ((/* implicit */unsigned long long int) ((unsigned char) var_0));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_8] [i_0])) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_7 + 1] [i_8 + 3]))));
                        var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_1)))));
                    }
                    arr_27 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [17] = ((/* implicit */unsigned int) ((unsigned short) 599968197621117589LL));
                }
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 1; i_11 < 23; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */signed char) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                        var_31 |= ((/* implicit */unsigned short) ((arr_33 [i_11 + 1] [i_11 - 1] [i_11] [i_11 + 1] [i_11]) > (arr_33 [i_11 - 1] [i_11] [i_11] [i_11] [i_11])));
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_11 [i_0 - 1] [i_5] [i_0 - 1] [i_7] [i_10] [i_11]))));
                        var_33 = ((/* implicit */unsigned long long int) var_8);
                    }
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        var_34 |= ((/* implicit */int) arr_10 [4] [i_5] [i_5] [i_10] [12U] [i_0]);
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0 - 1])) / (((/* implicit */int) arr_4 [(unsigned char)13] [i_0] [i_10]))));
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((var_8) ? (((/* implicit */unsigned int) arr_12 [(unsigned short)22] [19ULL] [(unsigned short)22] [i_10] [i_12] [i_12])) : (arr_31 [i_7] [i_7] [i_7] [i_7] [(unsigned short)12] [(short)21]))) + (((/* implicit */unsigned int) arr_2 [i_7 + 1] [i_0 - 1])))))));
                        var_37 -= ((/* implicit */unsigned short) ((int) (signed char)-100));
                        var_38 = ((/* implicit */signed char) var_10);
                    }
                    var_39 *= ((/* implicit */unsigned long long int) ((arr_34 [i_10] [i_7 - 1] [i_0] [i_7 - 1] [i_0 - 1] [i_0]) / (arr_34 [i_7] [i_7] [23U] [i_7 - 1] [i_0 - 1] [i_0])));
                }
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    arr_42 [i_0] [i_0] [i_7] [i_7] [i_13] = ((/* implicit */unsigned int) var_3);
                    var_40 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_0] [(short)7] [(signed char)3])) << (((((/* implicit */int) arr_6 [i_7] [i_7] [i_7])) - (1129)))))) == (arr_31 [(_Bool)1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0])));
                    arr_43 [i_0] [i_13] = ((/* implicit */long long int) ((unsigned int) arr_16 [i_7 - 1] [i_7] [i_7] [i_7]));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_47 [i_0] [i_0] = (!(((/* implicit */_Bool) arr_28 [i_7 - 1] [i_7] [i_7 + 1] [i_0 - 1])));
                        arr_48 [i_0] [i_7 - 1] [i_13] [i_7 - 1] = ((/* implicit */_Bool) ((long long int) arr_44 [i_0] [(short)20] [i_7 - 1] [i_5] [17] [i_0 - 1]));
                    }
                }
                for (short i_15 = 1; i_15 < 22; i_15 += 4) 
                {
                    var_41 = ((/* implicit */short) arr_19 [i_7] [i_0]);
                    var_42 += ((/* implicit */short) arr_1 [2LL] [i_15 + 2]);
                }
                /* LoopSeq 1 */
                for (signed char i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    var_43 = ((/* implicit */unsigned int) arr_46 [i_0] [i_0] [i_0 - 1] [i_7 - 1] [i_7 - 1]);
                    var_44 += ((/* implicit */int) arr_16 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]);
                    var_45 -= ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1]));
                }
            }
            var_46 = ((/* implicit */unsigned short) var_2);
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
            {
                for (short i_18 = 1; i_18 < 22; i_18 += 2) 
                {
                    {
                        arr_61 [(_Bool)1] [i_0] [i_0] = ((long long int) ((((/* implicit */_Bool) arr_54 [i_0 - 1] [i_0 - 1] [i_0] [(signed char)10] [(_Bool)1])) ? (arr_9 [i_0] [i_5] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        /* LoopSeq 1 */
                        for (short i_19 = 1; i_19 < 21; i_19 += 3) 
                        {
                            var_47 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_62 [i_17] [i_17] [i_17] [i_17] [i_19 - 1])) ? ((-(var_9))) : (((arr_23 [i_0] [i_0]) & (((/* implicit */int) var_4))))));
                            var_48 ^= ((/* implicit */short) ((var_5) + (((/* implicit */unsigned long long int) arr_17 [i_19 + 1] [i_19 - 1] [i_18 - 1] [i_0 - 1]))));
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_20 = 0; i_20 < 24; i_20 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_21 = 0; i_21 < 24; i_21 += 1) /* same iter space */
            {
                var_49 = ((/* implicit */unsigned int) arr_10 [i_20] [i_20] [i_21] [i_0] [(signed char)21] [i_21]);
                /* LoopNest 2 */
                for (unsigned short i_22 = 3; i_22 < 21; i_22 += 1) 
                {
                    for (unsigned char i_23 = 0; i_23 < 24; i_23 += 3) 
                    {
                        {
                            var_50 -= ((/* implicit */unsigned int) ((((long long int) var_0)) < (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) var_7))));
                        }
                    } 
                } 
            }
            for (unsigned int i_24 = 0; i_24 < 24; i_24 += 1) /* same iter space */
            {
                var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_0 - 1] [i_0] [(short)20] [(short)20])) || (((/* implicit */_Bool) arr_17 [i_0] [i_20] [i_20] [i_24]))));
                arr_75 [i_0] [i_20] [i_20] |= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)103))));
                var_53 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_13 [i_0 - 1]))));
                var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) var_2))));
            }
            for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 2) 
            {
                var_55 -= ((/* implicit */unsigned short) ((_Bool) arr_60 [i_0 - 1] [i_25]));
                var_56 = ((/* implicit */int) min((var_56), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                /* LoopSeq 2 */
                for (unsigned short i_26 = 0; i_26 < 24; i_26 += 1) 
                {
                    var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_54 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_8 [i_26] [i_0] [(signed char)0])) : (((var_5) * (((/* implicit */unsigned long long int) var_9))))));
                    var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_25] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
                }
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    var_59 = ((/* implicit */unsigned short) ((unsigned char) var_7));
                    var_60 = ((/* implicit */unsigned short) max((var_60), (((/* implicit */unsigned short) arr_37 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0]))));
                }
                var_61 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_44 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0])) / (((/* implicit */int) arr_64 [i_20] [i_20])))));
            }
            var_62 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [(unsigned char)23] [i_0] [i_0] [i_0 - 1] [i_0 - 1])) ? (arr_71 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_71 [(unsigned char)7] [i_0] [i_0] [i_0] [i_0])));
            /* LoopSeq 4 */
            for (unsigned int i_28 = 0; i_28 < 24; i_28 += 2) 
            {
                var_63 = ((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_0 - 1]);
                var_64 |= ((((long long int) var_7)) >> (((/* implicit */int) arr_51 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0])));
                /* LoopNest 2 */
                for (unsigned int i_29 = 0; i_29 < 24; i_29 += 2) 
                {
                    for (unsigned long long int i_30 = 0; i_30 < 24; i_30 += 1) 
                    {
                        {
                            var_65 = ((/* implicit */unsigned char) ((14419262595216342037ULL) / (13243481067704125952ULL)));
                            var_66 += ((/* implicit */short) ((((/* implicit */int) arr_85 [15ULL] [13ULL] [i_28] [i_28])) - (((/* implicit */int) ((signed char) arr_23 [i_28] [i_0])))));
                            arr_90 [i_0] = ((arr_31 [21LL] [i_0] [i_0 - 1] [i_20] [i_20] [i_20]) >> (((arr_31 [(short)23] [(short)23] [i_0 - 1] [i_30] [i_30] [i_30]) - (1852290516U))));
                        }
                    } 
                } 
            }
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                var_67 = ((/* implicit */_Bool) min((var_67), (((/* implicit */_Bool) ((short) arr_57 [i_20] [i_0 - 1] [i_20])))));
                /* LoopNest 2 */
                for (short i_32 = 0; i_32 < 24; i_32 += 1) 
                {
                    for (long long int i_33 = 2; i_33 < 22; i_33 += 4) 
                    {
                        {
                            arr_97 [i_0 - 1] [i_20] [i_31] [i_0] [i_33 - 1] [i_33] [i_32] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (599968197621117589LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11720)))));
                            var_68 *= ((/* implicit */_Bool) arr_41 [16] [i_20] [i_20] [6U] [i_32] [i_33]);
                            var_69 = ((/* implicit */signed char) (~(arr_32 [i_0 - 1] [i_33 - 1] [i_33 - 2] [i_33] [i_33 - 1])));
                            var_70 = ((/* implicit */unsigned int) ((arr_21 [i_0]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_23 [20] [i_33]) : (arr_63 [(unsigned char)13] [i_0] [(_Bool)1] [i_32] [i_33]))))));
                            var_71 = ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_34 = 1; i_34 < 23; i_34 += 4) 
                {
                    for (signed char i_35 = 3; i_35 < 21; i_35 += 4) 
                    {
                        {
                            var_72 -= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_20] [i_20])) >> (((long long int) var_8))));
                            var_73 ^= ((/* implicit */_Bool) ((long long int) arr_20 [i_35 + 3] [i_34 + 1] [i_20]));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_36 = 1; i_36 < 23; i_36 += 4) 
            {
                var_74 = ((/* implicit */signed char) min((var_74), (((/* implicit */signed char) var_8))));
                /* LoopSeq 4 */
                for (unsigned char i_37 = 0; i_37 < 24; i_37 += 4) 
                {
                    var_75 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_37] [i_36 - 1] [i_37]))) * (arr_8 [(unsigned char)10] [i_20] [i_0 - 1])));
                    var_76 *= ((/* implicit */long long int) ((_Bool) arr_12 [i_0] [(_Bool)1] [i_0] [i_0 - 1] [i_36 + 1] [i_36 + 1]));
                }
                for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                {
                    arr_110 [i_0] [i_20] [i_36] [i_0] = ((/* implicit */short) arr_66 [i_0 - 1] [i_0] [i_36 + 1] [(short)17]);
                    var_77 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_80 [i_0] [i_0 - 1] [9] [i_0 - 1] [i_0] [i_36]))) == (arr_108 [i_20] [i_0 - 1])));
                    var_78 = ((/* implicit */_Bool) var_9);
                }
                for (signed char i_39 = 2; i_39 < 21; i_39 += 4) 
                {
                    var_79 = ((/* implicit */signed char) ((int) arr_64 [(unsigned char)20] [i_0]));
                    var_80 = ((/* implicit */signed char) min((var_80), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)0)) ? (13243481067704125952ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46))))) != (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(_Bool)1] [i_36] [i_20] [i_39 - 1] [i_36 - 1]))) & (arr_8 [i_20] [i_39] [i_39])))))))));
                }
                for (_Bool i_40 = 1; i_40 < 1; i_40 += 1) 
                {
                    arr_117 [i_0] [i_0] [i_0] [i_0] [i_20] [i_20] = ((/* implicit */int) var_1);
                    var_81 = ((/* implicit */_Bool) arr_0 [i_36 + 1] [i_20]);
                    /* LoopSeq 1 */
                    for (short i_41 = 0; i_41 < 24; i_41 += 4) 
                    {
                        var_82 = ((/* implicit */unsigned long long int) ((short) arr_91 [i_0 - 1] [i_0 - 1]));
                        var_83 -= ((/* implicit */unsigned long long int) var_9);
                        arr_120 [i_41] [i_0] [i_0] [i_36] [i_41] = arr_114 [20] [(signed char)19] [i_0] [i_0];
                    }
                    arr_121 [(short)2] [i_20] [i_36 - 1] [i_0] [i_40 - 1] = ((/* implicit */unsigned char) (-(arr_98 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0])));
                    var_84 = ((/* implicit */int) ((unsigned long long int) ((arr_9 [i_0] [i_20] [i_40]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                }
            }
            for (signed char i_42 = 0; i_42 < 24; i_42 += 1) 
            {
                arr_124 [i_0] [i_20] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_72 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_20] [i_20] [i_20] [i_42]) && (((/* implicit */_Bool) var_6))))) << (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) << (((/* implicit */int) arr_72 [i_42] [i_42] [i_20] [i_20] [i_20] [i_0 - 1] [i_0]))))));
                /* LoopNest 2 */
                for (int i_43 = 0; i_43 < 24; i_43 += 1) 
                {
                    for (unsigned char i_44 = 3; i_44 < 23; i_44 += 4) 
                    {
                        {
                            var_85 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1] [i_44 + 1])) || (((/* implicit */_Bool) arr_41 [i_0 - 1] [i_20] [i_42] [i_42] [i_44] [i_42]))));
                            var_86 |= ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_0)))));
                            arr_130 [i_0] [i_0] [i_42] [i_43] = ((/* implicit */long long int) arr_66 [i_20] [i_0] [i_43] [i_44]);
                            arr_131 [(signed char)3] [(_Bool)0] [(short)12] [i_0] = ((/* implicit */long long int) ((var_5) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_44])) ? (((/* implicit */long long int) var_9)) : (arr_53 [20] [i_43] [i_42] [i_20] [i_0]))))));
                        }
                    } 
                } 
            }
        }
    }
}
