/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247100
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) -1133271647))) ? (((((/* implicit */int) var_9)) << (((((/* implicit */int) (short)-7620)) + (7644))))) : (arr_0 [i_0])));
        var_21 = ((/* implicit */unsigned long long int) (short)7619);
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [12U]);
                            var_22 = ((/* implicit */int) arr_11 [i_2]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
            {
                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [i_5] [i_5] [i_5])) : (var_0)));
                var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_5])) == (((/* implicit */int) arr_17 [i_0]))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
                            var_24 ^= ((/* implicit */int) var_7);
                        }
                    } 
                } 
                arr_24 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1] [i_1]);
            }
            for (long long int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
            {
                arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_8] [i_0] [i_8])) ? (((/* implicit */int) (short)7602)) : (((/* implicit */int) (short)-7601))));
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                    {
                        arr_35 [i_8] [i_0] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) arr_5 [i_9 + 1] [i_8]);
                        arr_36 [i_0] [i_0] [i_0] [i_1] [i_0] = ((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) arr_28 [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_1])));
                        arr_37 [i_0] [i_1] [i_0] [i_8] [i_9 + 2] [i_9 - 2] [i_10] = var_7;
                    }
                    for (short i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                    {
                        arr_41 [i_0] [i_1] [i_0] [i_9 - 1] [i_11] [i_1] [i_8] = ((unsigned short) (short)7616);
                        arr_42 [22U] [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_6);
                        var_25 |= ((/* implicit */long long int) (short)7620);
                    }
                    for (short i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)7619))) & (arr_12 [i_12] [i_12] [i_9] [i_8] [i_1] [i_0]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_8])))));
                        arr_45 [i_9] [i_0] [i_8] [i_9] [i_12] [i_0] [i_1] = ((/* implicit */_Bool) ((((1922549004U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38013))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_4 [i_0])))))));
                    }
                    arr_46 [i_1] [i_1] [i_8] [i_0] = ((/* implicit */int) arr_28 [i_9] [i_9 + 1] [i_9] [i_0]);
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_38 [i_9] [i_8] [i_8] [i_8] [i_1] [i_0])) - (16)))))) ? (var_18) : (((/* implicit */int) var_1)))))));
                }
                for (long long int i_13 = 1; i_13 < 20; i_13 += 2) 
                {
                    var_28 = ((/* implicit */unsigned int) ((long long int) var_3));
                    var_29 ^= ((/* implicit */int) ((arr_39 [i_13] [i_13] [i_13 - 1] [i_13 + 1] [i_13 + 3]) - (arr_39 [i_13] [i_13] [i_13] [i_13 - 1] [i_13 + 4])));
                    var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_13 + 2] [i_8] [i_1] [i_13 + 2] [i_0] [i_0])) && (((/* implicit */_Bool) var_19))));
                }
                for (short i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    var_31 = ((/* implicit */unsigned short) ((32767) >= (((/* implicit */int) (short)-7633))));
                    arr_51 [i_0] [i_0] [i_14] = ((/* implicit */unsigned char) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_52 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)7613))) & (arr_40 [i_14] [i_1] [i_1] [i_0])));
                    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) var_0))));
                }
            }
        }
        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 2) 
        {
            arr_56 [i_0] = ((((/* implicit */_Bool) var_4)) ? (4306346701391210657LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))));
            /* LoopSeq 2 */
            for (unsigned short i_16 = 2; i_16 < 21; i_16 += 2) 
            {
                var_33 ^= ((/* implicit */long long int) ((signed char) ((arr_34 [i_0] [i_0] [i_0] [i_15] [i_15] [i_0] [i_16]) / (((/* implicit */long long int) 4294967295U)))));
                var_34 += ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_16] [i_16 + 2] [i_16])) ? (arr_15 [i_16] [i_16 + 1] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
            }
            for (unsigned short i_17 = 0; i_17 < 24; i_17 += 2) 
            {
                arr_63 [i_0] [i_0] = ((/* implicit */int) var_1);
                /* LoopNest 2 */
                for (long long int i_18 = 2; i_18 < 23; i_18 += 3) 
                {
                    for (short i_19 = 1; i_19 < 23; i_19 += 2) 
                    {
                        {
                            var_35 ^= ((/* implicit */int) var_6);
                            arr_69 [i_18] [i_18 + 1] [i_18] [i_0] [i_18 - 2] [i_18 - 2] = ((/* implicit */int) var_6);
                            arr_70 [i_0] [i_15] [i_17] [i_18 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_18] [i_18 - 2])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0])))))) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) arr_8 [i_18 - 2] [i_18 - 1] [i_18 - 1]))));
                        }
                    } 
                } 
                arr_71 [i_0] [i_15] [i_17] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_26 [i_17])) || (((/* implicit */_Bool) 1978969092)))) && (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7))))));
                var_36 &= ((((/* implicit */int) (short)31)) * (((/* implicit */int) (short)-7620)));
                arr_72 [i_0] [i_15] [i_0] = ((/* implicit */int) arr_67 [i_0] [i_0] [i_17] [i_0] [i_17] [i_0]);
            }
            var_37 ^= ((/* implicit */long long int) 1765159036);
        }
        for (int i_20 = 0; i_20 < 24; i_20 += 4) 
        {
            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) > (4306346701391210657LL))))));
            /* LoopSeq 4 */
            for (unsigned short i_21 = 0; i_21 < 24; i_21 += 4) 
            {
                var_39 = ((/* implicit */int) (short)-7617);
                arr_78 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_21] [i_21] [i_21] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
            }
            for (unsigned short i_22 = 4; i_22 < 23; i_22 += 1) 
            {
                var_40 = ((/* implicit */int) min((var_40), (1765159036)));
                /* LoopNest 2 */
                for (unsigned long long int i_23 = 1; i_23 < 22; i_23 += 3) 
                {
                    for (signed char i_24 = 0; i_24 < 24; i_24 += 2) 
                    {
                        {
                            arr_87 [i_23 + 1] [i_0] [i_23] [i_23 + 1] [i_23] = ((/* implicit */short) arr_31 [i_0]);
                            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_86 [i_20])) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) ((3923443654172886652ULL) != (((/* implicit */unsigned long long int) arr_61 [i_24] [i_23] [i_22 - 4] [i_24]))))))))));
                            var_42 = ((/* implicit */unsigned int) arr_28 [i_0] [i_20] [i_22] [i_24]);
                            arr_88 [i_0] [i_0] [i_0] [i_22] [i_23] [i_0] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_74 [i_0] [i_20])) ? (((/* implicit */int) arr_74 [i_0] [i_23 + 2])) : (((/* implicit */int) arr_55 [i_23 - 1] [i_22 + 1] [i_0]))));
                            var_43 ^= ((/* implicit */int) arr_54 [i_24] [i_0]);
                        }
                    } 
                } 
                var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (signed char)-55))));
                var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_20] [i_20] [i_20]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_77 [i_22 - 4] [i_22 + 1] [i_20]))))))));
            }
            for (signed char i_25 = 2; i_25 < 22; i_25 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_26 = 3; i_26 < 23; i_26 += 4) 
                {
                    for (unsigned short i_27 = 4; i_27 < 21; i_27 += 2) 
                    {
                        {
                            arr_96 [i_0] [i_0] = ((/* implicit */unsigned char) arr_86 [i_0]);
                            arr_97 [i_0] [i_26] [i_26] = ((/* implicit */unsigned int) -4306346701391210630LL);
                            arr_98 [i_0] [i_26 + 1] [i_25] [i_20] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_25] [i_20])) >> (((((/* implicit */int) (short)7624)) - (7594)))))) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_20] [i_20] [i_26 - 3] [i_25] [i_27 - 4])) : (((((/* implicit */_Bool) var_4)) ? (var_17) : (((/* implicit */unsigned long long int) 1765159036))))));
                        }
                    } 
                } 
                arr_99 [i_0] [i_0] [i_25] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                arr_100 [i_25] [i_20] &= ((/* implicit */signed char) ((((/* implicit */int) var_13)) == (((/* implicit */int) arr_33 [6U] [i_25] [i_25 + 2] [i_25 + 2] [i_25 - 1]))));
            }
            for (short i_28 = 2; i_28 < 23; i_28 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_29 = 0; i_29 < 24; i_29 += 2) 
                {
                    var_46 = ((/* implicit */long long int) arr_60 [i_0] [i_20] [(short)0]);
                    arr_106 [i_0] [i_0] [i_28] [i_29] = ((/* implicit */int) var_5);
                }
                arr_107 [i_0] [i_0] [i_20] = ((((/* implicit */long long int) ((/* implicit */int) arr_84 [i_0] [i_0] [i_0] [i_0] [i_0]))) < (-6650340440920033494LL));
                var_47 ^= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_65 [i_0] [i_28])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)7631))))));
                /* LoopNest 2 */
                for (unsigned short i_30 = 0; i_30 < 24; i_30 += 3) 
                {
                    for (signed char i_31 = 3; i_31 < 21; i_31 += 4) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))));
                            var_49 |= ((((/* implicit */_Bool) (short)-8918)) ? (((/* implicit */int) arr_20 [i_20] [i_31 + 1] [i_31 + 2] [i_31 + 2])) : (((/* implicit */int) var_5)));
                        }
                    } 
                } 
            }
        }
        for (long long int i_32 = 0; i_32 < 24; i_32 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_33 = 0; i_33 < 24; i_33 += 3) 
            {
                arr_117 [i_0] = ((/* implicit */signed char) var_18);
                arr_118 [i_32] [i_0] [i_32] = ((/* implicit */long long int) arr_68 [i_0] [i_33] [i_32] [i_32] [i_0] [i_0] [i_0]);
            }
            for (_Bool i_34 = 0; i_34 < 0; i_34 += 1) 
            {
                var_50 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (short)-7616)))) == (((/* implicit */int) arr_53 [i_34 + 1] [i_34 + 1] [i_0]))));
                var_51 &= ((/* implicit */unsigned short) var_10);
                var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (arr_54 [22] [22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7618)))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_34 + 1] [i_34 + 1] [(short)3]))))))));
                arr_121 [i_32] [i_32] [i_0] [i_32] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_108 [i_34] [i_0])) ? (arr_57 [i_0] [i_32] [i_34 + 1] [i_34]) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_34 + 1] [i_34 + 1] [i_34 + 1]))) : (((arr_110 [i_0] [i_0]) << (((var_7) - (423872377075170783LL)))))));
                arr_122 [(_Bool)1] [i_32] [i_0] [i_32] = ((((/* implicit */_Bool) arr_27 [i_34 + 1] [i_0] [i_34 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_34 + 1] [i_34 + 1] [i_0]))) : (arr_10 [i_34 + 1] [i_32] [i_0]));
            }
            var_53 += ((/* implicit */unsigned short) ((arr_6 [20LL]) != (((/* implicit */long long int) ((((/* implicit */int) arr_115 [i_0] [i_0] [18LL])) - (((/* implicit */int) arr_90 [(_Bool)1] [i_0] [i_0])))))));
        }
    }
    for (long long int i_35 = 0; i_35 < 24; i_35 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_36 = 0; i_36 < 24; i_36 += 4) 
        {
            for (long long int i_37 = 0; i_37 < 24; i_37 += 1) 
            {
                {
                    var_54 = ((unsigned long long int) (_Bool)1);
                    arr_129 [i_35] [i_35] [i_35] [i_35] = ((/* implicit */unsigned short) ((2149547833881060733LL) % (((/* implicit */long long int) ((/* implicit */int) max((arr_50 [i_35] [i_35]), (arr_50 [i_36] [i_35])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_38 = 2; i_38 < 22; i_38 += 4) 
        {
            for (unsigned int i_39 = 0; i_39 < 24; i_39 += 2) 
            {
                {
                    arr_136 [i_35] [i_38] [i_38] [i_38] = ((/* implicit */unsigned short) 4294967295U);
                    /* LoopNest 2 */
                    for (unsigned char i_40 = 0; i_40 < 24; i_40 += 2) 
                    {
                        for (unsigned short i_41 = 2; i_41 < 21; i_41 += 4) 
                        {
                            {
                                var_55 += ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_38 [i_41] [i_40] [i_39] [i_38 + 2] [i_35] [i_35])) >> (((arr_133 [i_38 - 2] [i_41 + 2] [i_41 - 1]) - (17264156892799428684ULL))))));
                                arr_143 [i_41] [i_40] [(signed char)2] [i_39] [i_38] [i_35] [i_35] = ((/* implicit */unsigned short) ((unsigned long long int) min(((signed char)91), (((/* implicit */signed char) arr_76 [i_41 + 2] [i_39])))));
                                var_56 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_21 [i_41] [i_41] [i_41 - 1] [i_41] [i_41 + 1]) : (((/* implicit */unsigned int) min((min((((/* implicit */int) (signed char)77)), (-590624917))), (((/* implicit */int) (short)13559)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_42 = 0; i_42 < 24; i_42 += 2) 
        {
            for (short i_43 = 0; i_43 < 24; i_43 += 2) 
            {
                for (short i_44 = 0; i_44 < 24; i_44 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_45 = 1; i_45 < 21; i_45 += 2) 
                        {
                            var_57 = ((/* implicit */long long int) min((var_57), (((((/* implicit */_Bool) arr_62 [i_43] [i_45 - 1] [i_45] [i_43])) ? (arr_152 [i_43]) : (((/* implicit */long long int) arr_140 [i_42] [i_45] [i_43] [i_43] [(signed char)19] [i_45 + 2]))))));
                            arr_154 [i_35] [i_42] [i_43] [i_44] [i_45] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_67 [i_43] [i_45 + 1] [i_45 - 1] [i_45 + 3] [i_45 + 1] [i_43])))))) & (2362621417U)));
                            arr_155 [i_35] [i_35] [i_35] [i_35] [i_35] [i_35] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((short) var_17))) ? (arr_152 [i_35]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_35] [i_43] [i_35]))))), (((/* implicit */long long int) arr_31 [i_42]))));
                        }
                        var_58 = ((/* implicit */unsigned int) (signed char)40);
                        arr_156 [i_35] [i_42] [i_43] [i_44] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_49 [i_42] [i_43])), (var_6)))), (min((var_11), (((/* implicit */unsigned long long int) var_18))))));
                    }
                } 
            } 
        } 
    }
    var_59 = ((/* implicit */int) min((var_59), (((/* implicit */int) max((((/* implicit */long long int) (unsigned char)223)), (var_10))))));
    var_60 = ((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_14) > (((/* implicit */long long int) var_15)))))) - (var_8))))));
    var_61 = ((/* implicit */short) -998280585);
    var_62 = ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) << (((var_18) - (1419753557)))))) / (min((var_11), (((/* implicit */unsigned long long int) var_10)))))));
}
