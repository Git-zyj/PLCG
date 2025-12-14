/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231821
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_3))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))) : (var_17)));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) (short)0);
            var_21 = ((/* implicit */unsigned int) (+(var_2)));
            arr_4 [i_0] [i_1] = (~(18014398475927552LL));
            var_22 = arr_2 [i_1] [i_1] [i_0];
            arr_5 [i_1] = ((/* implicit */short) var_0);
        }
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967295U)) ? (var_17) : (var_17))) & (((/* implicit */unsigned long long int) ((-2099394672) % (((/* implicit */int) (unsigned short)50642)))))));
            arr_8 [i_0 - 1] [i_0 - 4] [i_0] = ((/* implicit */unsigned short) ((short) (unsigned short)50642));
        }
        for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            var_24 = ((arr_3 [i_0 + 2]) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [i_0 - 2] [5LL]))));
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)50642)) ^ (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))))));
            arr_11 [i_3] = 2099394660;
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_26 |= ((((/* implicit */long long int) ((arr_9 [i_0]) << (((((((/* implicit */int) var_14)) + (12607))) - (12)))))) ^ (((var_7) << (((2099394656) - (2099394656))))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) arr_16 [i_0] [i_3] [i_4] [i_5]))))))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15U)) ? (((((var_11) + (9223372036854775807LL))) << (((18446744073709551615ULL) - (18446744073709551615ULL))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)24)))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        var_29 = ((/* implicit */long long int) ((_Bool) arr_18 [i_6]));
        var_30 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_19 [i_6] [i_6])) ? (7855657016470219188LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139)))))));
    }
    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) (-((~(arr_21 [i_7])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            var_32 = ((/* implicit */int) var_17);
            /* LoopSeq 1 */
            for (unsigned int i_9 = 2; i_9 < 15; i_9 += 1) 
            {
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    var_33 = ((/* implicit */unsigned long long int) (+(-7855657016470219189LL)));
                    var_34 = ((/* implicit */unsigned int) arr_27 [i_7] [i_7] [i_7] [i_7]);
                    var_35 = ((/* implicit */long long int) 36028797018931200ULL);
                    arr_29 [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) arr_26 [i_7] [i_8] [i_9 - 2] [i_10]);
                }
                for (int i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    arr_34 [i_7] [i_9] [(unsigned char)6] [i_7] = ((/* implicit */unsigned int) (unsigned char)168);
                    var_36 |= (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_27 [i_7] [i_8] [i_9] [i_11]))));
                    var_37 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_9 + 1]))) / (4324059237521303730LL)));
                }
                for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 1; i_13 < 15; i_13 += 2) 
                    {
                        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((18446744073709551615ULL) << (((((/* implicit */int) arr_32 [i_8] [i_9] [i_8] [i_8])) - (24430))))))));
                        arr_40 [i_9] = ((/* implicit */short) ((signed char) ((arr_26 [i_7] [i_7] [i_7] [i_7]) | (((/* implicit */int) arr_32 [i_9] [i_9 - 2] [i_12] [i_13 + 1])))));
                        arr_41 [i_9] [i_9] = ((/* implicit */signed char) (((-(var_13))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9] [i_9 + 1] [i_13 + 1] [i_9])))));
                        var_39 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (-1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5582588722891791170ULL)));
                        arr_42 [i_7] [i_8] [i_9] [i_13] = (+(((/* implicit */int) arr_24 [i_13 + 1])));
                    }
                    for (int i_14 = 2; i_14 < 15; i_14 += 1) 
                    {
                        var_40 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_33 [i_12] [i_12] [i_12] [i_12])))));
                        var_41 &= ((/* implicit */signed char) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_8] [i_9] [i_9 + 1] [i_8])))));
                        var_42 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 12864155350817760446ULL)))))));
                        var_43 ^= ((/* implicit */unsigned long long int) ((arr_27 [i_14 - 1] [i_14 - 1] [i_9 - 1] [i_9]) <= (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_9] [i_9 - 2] [i_9 - 1] [i_8])))));
                    }
                    var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((var_12) ^ (((/* implicit */int) arr_35 [i_7] [i_7] [i_7] [i_7])))) + (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (var_12))))))));
                }
                var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_7] [i_8] [i_9] [8] [i_8] [i_7] [i_9 + 1])) ? (arr_45 [i_7] [i_8] [i_7] [i_7] [i_7] [i_7] [i_9 + 1]) : (arr_45 [(_Bool)1] [i_8] [i_9] [i_9] [i_9] [i_9] [i_9 + 1]))))));
                var_46 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (12864155350817760458ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_9] [i_8] [i_8] [i_8])) * (((/* implicit */int) (_Bool)1))))) : ((+(arr_45 [i_7] [i_9] [i_7] [(unsigned short)8] [i_7] [i_7] [i_9]))));
            }
            var_47 -= ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_39 [i_8] [i_7])));
            /* LoopSeq 4 */
            for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                var_48 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) var_11))));
                var_50 |= ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_38 [i_7])) : (var_2))));
            }
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                arr_51 [i_16] = var_11;
                var_51 ^= ((/* implicit */unsigned int) arr_33 [i_16 - 1] [i_8] [i_16] [i_8]);
                var_52 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_36 [i_7] [i_8] [i_8] [i_16]))));
                arr_52 [i_7] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4467570830351532032LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) arr_21 [i_7])) + (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))));
                arr_53 [i_7] [(unsigned short)11] [i_16] [i_7] = ((/* implicit */signed char) 281474976710144LL);
            }
            for (long long int i_17 = 0; i_17 < 16; i_17 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_53 -= ((/* implicit */signed char) ((((/* implicit */int) arr_54 [i_18])) + (((/* implicit */int) arr_54 [i_17]))));
                    /* LoopSeq 3 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_54 = ((/* implicit */_Bool) var_9);
                        arr_62 [11LL] [11LL] [i_18] [i_19] = ((/* implicit */short) ((((/* implicit */int) arr_36 [i_7] [i_7] [i_7] [i_18])) ^ (((/* implicit */int) arr_25 [(short)4] [i_18]))));
                        arr_63 [i_8] [i_18] = ((/* implicit */long long int) var_9);
                        arr_64 [i_7] [i_18] [i_18] [i_7] [i_7] = ((((unsigned long long int) (_Bool)1)) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                        var_55 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_69 [i_7] [i_18] [9] [4U] [9] = ((/* implicit */int) 2601401488167868073ULL);
                        arr_70 [i_7] [i_7] [i_7] [i_7] [i_18] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (5582588722891791170ULL));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 1) 
                    {
                        var_56 = ((/* implicit */unsigned short) (+(-18014398475927548LL)));
                        arr_75 [i_7] [i_7] [i_17] [(signed char)11] [i_18] [i_18] = ((/* implicit */unsigned short) 5582588722891791169ULL);
                    }
                    var_57 |= ((/* implicit */long long int) (((-(var_13))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 112202674)) <= (0ULL)))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 1) 
                    {
                        var_58 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) var_4)))));
                        arr_78 [i_8] [i_18] [i_8] [i_8] |= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_8] [i_8]))) * (var_13))));
                    }
                    for (unsigned short i_23 = 0; i_23 < 16; i_23 += 4) 
                    {
                        var_59 = ((/* implicit */signed char) (-(arr_66 [i_8] [i_18])));
                        var_60 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_7] [i_8]))) ^ (18446744073709551600ULL)));
                        arr_81 [i_18] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_27 [(short)13] [(short)13] [(unsigned short)7] [i_18]))) ? (((/* implicit */int) arr_20 [i_7])) : (((/* implicit */int) var_14))));
                        var_61 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (short)-1)) <= (((/* implicit */int) arr_49 [i_7] [(signed char)9] [i_17] [i_18])))))));
                        arr_82 [(short)11] [i_8] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_20 [i_17]))) < (((((/* implicit */int) var_1)) << (((/* implicit */int) arr_47 [i_18]))))));
                    }
                    for (unsigned int i_24 = 0; i_24 < 16; i_24 += 2) 
                    {
                        arr_85 [i_7] [i_18] = ((/* implicit */unsigned long long int) arr_26 [i_7] [i_7] [i_7] [1LL]);
                        arr_86 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (10508195671613455138ULL))) : ((-(12864155350817760446ULL)))));
                    }
                    for (signed char i_25 = 3; i_25 < 14; i_25 += 1) 
                    {
                        arr_89 [i_7] [i_8] [i_17] [9LL] [i_18] = ((/* implicit */signed char) ((unsigned short) var_3));
                        var_62 = ((/* implicit */short) 12864155350817760446ULL);
                    }
                }
                for (unsigned short i_26 = 2; i_26 < 15; i_26 += 1) 
                {
                    arr_94 [i_26] [i_8] [(_Bool)1] [i_26] = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                    var_63 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-9)))) ? (((/* implicit */int) ((((/* implicit */long long int) var_12)) <= (var_11)))) : (((/* implicit */int) (unsigned short)47042))));
                    var_64 = ((/* implicit */long long int) var_8);
                    arr_95 [i_26] [i_8] [i_17] = (i_26 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_83 [i_26])) << (((arr_30 [10ULL] [i_17] [i_17]) + (3421986749084332323LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))) : (((((/* implicit */_Bool) var_14)) ? (2729880446801788753LL) : (((/* implicit */long long int) ((/* implicit */int) arr_90 [(unsigned char)14] [i_8] [i_8] [(unsigned char)14])))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_83 [i_26])) + (2147483647))) << (((((arr_30 [10ULL] [i_17] [i_17]) + (3421986749084332323LL))) - (2LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))) : (((((/* implicit */_Bool) var_14)) ? (2729880446801788753LL) : (((/* implicit */long long int) ((/* implicit */int) arr_90 [(unsigned char)14] [i_8] [i_8] [(unsigned char)14]))))))));
                    arr_96 [i_7] [i_7] [i_8] [i_17] [i_17] [i_26] = ((/* implicit */unsigned int) var_8);
                }
                for (short i_27 = 0; i_27 < 16; i_27 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_28 = 2; i_28 < 13; i_28 += 1) 
                    {
                        var_65 = ((/* implicit */int) min((var_65), (((/* implicit */int) arr_44 [i_7] [i_8] [i_17] [i_27] [i_28 + 1]))));
                        var_66 = ((/* implicit */unsigned long long int) var_4);
                        var_67 ^= (~(arr_56 [i_27] [i_17] [(signed char)2] [(short)8]));
                    }
                    for (signed char i_29 = 0; i_29 < 16; i_29 += 2) 
                    {
                        arr_108 [i_8] [i_27] [i_29] = ((/* implicit */unsigned int) var_15);
                        arr_109 [i_17] [i_17] [(short)12] [(short)12] [9ULL] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((12864155350817760446ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_68 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) arr_61 [i_27] [i_27] [i_17] [i_8] [i_7]))) / (var_17)));
                    }
                    var_69 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)42078)))))));
                }
                arr_110 [i_7] [i_7] [i_7] |= ((/* implicit */int) (-(arr_84 [i_7] [i_8] [(short)12] [i_17])));
                arr_111 [i_7] [i_7] [i_8] [9LL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_77 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) | (((((/* implicit */int) (unsigned short)18471)) % (((/* implicit */int) var_4))))));
                var_70 = ((/* implicit */_Bool) min((var_70), (((/* implicit */_Bool) ((var_2) / (((/* implicit */long long int) arr_23 [i_7] [i_8])))))));
            }
            for (unsigned long long int i_30 = 1; i_30 < 14; i_30 += 3) 
            {
                arr_114 [(unsigned char)3] [7] [i_30] [i_30] = ((/* implicit */unsigned long long int) arr_84 [i_7] [i_8] [i_7] [i_7]);
                var_71 = ((/* implicit */short) 5582588722891791170ULL);
            }
            var_72 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_21 [i_7])) ^ (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_93 [(unsigned short)1] [(unsigned short)1] [i_7] [i_7] [i_8] [i_8])))))));
        }
    }
    for (long long int i_31 = 0; i_31 < 14; i_31 += 1) 
    {
        arr_117 [5] = ((/* implicit */int) min(((-(((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31] [i_31]))) : (arr_92 [(short)4] [i_31] [10] [i_31] [i_31] [(short)4]))))), (((/* implicit */unsigned long long int) var_7))));
        arr_118 [i_31] = ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65524))) | (var_8)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_15)))), (max((3006130178U), (((/* implicit */unsigned int) var_10)))))))));
        var_73 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_31] [(signed char)14] [i_31] [10] [i_31] [(_Bool)1])) ? (arr_43 [i_31] [(unsigned short)0] [(unsigned short)0] [i_31] [i_31] [i_31]) : (var_6)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)12)) + (((/* implicit */int) (unsigned short)1))))) : ((-(arr_43 [(unsigned short)7] [i_31] [(signed char)1] [i_31] [i_31] [i_31])))));
        var_74 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_99 [i_31] [i_31] [i_31] [(unsigned short)8] [i_31]), (((/* implicit */long long int) (_Bool)1)))), (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15383))) : (8523933201537474586LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (min((((/* implicit */long long int) arr_77 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31] [i_31])), (((arr_73 [(signed char)14] [(unsigned char)10] [i_31] [(unsigned char)10] [i_31]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33682)))))))));
        arr_119 [i_31] [i_31] = ((/* implicit */short) min((max((((/* implicit */long long int) arr_60 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31] [i_31])), (var_15))), (-8887646284801956626LL)));
    }
}
