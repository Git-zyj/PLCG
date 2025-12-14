/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19207
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
    var_13 = ((/* implicit */unsigned int) ((short) var_8));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_14 *= ((((/* implicit */int) arr_2 [8ULL])) % (((/* implicit */int) arr_2 [(unsigned short)12])));
        arr_3 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_15 = ((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            arr_7 [i_0] = ((/* implicit */signed char) ((var_11) || (((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 - 1] [i_0]))));
            arr_8 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
            var_16 = arr_0 [i_0];
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((long long int) arr_0 [i_1 - 1])))));
        }
        for (short i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 3; i_4 < 15; i_4 += 3) 
                {
                    var_18 = ((/* implicit */short) arr_4 [i_0]);
                    var_19 = ((/* implicit */short) arr_9 [i_0] [i_0]);
                    var_20 = ((/* implicit */signed char) arr_1 [i_0] [i_3]);
                    arr_17 [i_0] [i_2 - 2] [i_3] [i_3] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_4 - 1])) ? (arr_9 [i_2 - 2] [i_4 - 1]) : (((/* implicit */int) arr_11 [i_3] [i_3]))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 |= ((/* implicit */unsigned short) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_0])) + (((/* implicit */int) arr_1 [i_2 - 2] [i_4 - 3]))));
                    }
                }
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) arr_19 [i_0]));
                            var_23 += ((/* implicit */signed char) arr_21 [i_0] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 1; i_8 < 13; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */int) (+(var_10)));
                            var_25 = ((/* implicit */_Bool) var_6);
                            var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_2] [i_0]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 15; i_10 += 4) 
                {
                    for (short i_11 = 1; i_11 < 15; i_11 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_16 [i_0]))));
                            var_28 = ((/* implicit */signed char) ((_Bool) var_3));
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_2 - 1])) ? (((/* implicit */long long int) var_2)) : (arr_29 [i_0] [i_0] [i_0] [i_0])));
            var_30 ^= ((/* implicit */unsigned long long int) arr_34 [i_0] [i_2 + 2]);
            /* LoopSeq 3 */
            for (signed char i_12 = 1; i_12 < 15; i_12 += 4) 
            {
                var_31 = ((/* implicit */short) arr_10 [i_0] [i_0]);
                var_32 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (arr_6 [i_12] [i_12 - 1] [i_0])));
            }
            for (unsigned short i_13 = 2; i_13 < 14; i_13 += 1) 
            {
                arr_43 [(short)2] &= ((/* implicit */unsigned char) arr_31 [(_Bool)1]);
                var_33 = ((/* implicit */unsigned long long int) ((_Bool) var_4));
            }
            for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_15 = 3; i_15 < 12; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_53 [i_0] [i_2] [i_15] [i_15] [i_16] [i_14] [i_16] |= ((/* implicit */long long int) arr_2 [i_14]);
                            var_34 &= ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
                            var_35 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((-(arr_46 [i_14] [i_2] [i_14]))) : (((/* implicit */int) arr_51 [i_2] [i_2 - 1] [i_15] [i_15] [i_15 + 1] [i_15 + 2] [i_16]))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */signed char) arr_34 [i_0] [i_0]);
            }
        }
        for (long long int i_17 = 0; i_17 < 16; i_17 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_18 = 0; i_18 < 16; i_18 += 4) 
            {
                var_37 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                var_38 |= ((/* implicit */long long int) ((_Bool) arr_15 [i_0] [i_0] [i_17] [i_18]));
                var_39 = ((((/* implicit */_Bool) arr_59 [i_0] [i_0] [i_18])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [i_0]))))) : ((~(((/* implicit */int) var_3)))));
            }
            arr_61 [i_0] = ((/* implicit */unsigned char) ((signed char) arr_27 [i_0] [i_0]));
            var_40 = ((/* implicit */int) arr_14 [i_0] [i_0]);
        }
    }
    for (unsigned long long int i_19 = 3; i_19 < 20; i_19 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 4) 
        {
            for (int i_21 = 0; i_21 < 23; i_21 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_22 = 1; i_22 < 21; i_22 += 4) 
                    {
                        for (signed char i_23 = 0; i_23 < 23; i_23 += 4) 
                        {
                            {
                                arr_74 [i_19] [i_23] [i_22 + 2] [i_21] [i_20] [i_19] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_70 [i_20] [i_20] [i_20] [i_20] [i_20]))))) + (max((max((arr_67 [i_19 - 1] [i_20] [i_22] [i_23]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_68 [i_20] [i_21])) <= (((/* implicit */int) arr_72 [i_19 - 2] [i_20] [i_19 - 2] [i_22] [i_23])))))))));
                                arr_75 [i_19] = ((/* implicit */int) ((long long int) min((arr_69 [i_22]), (((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_70 [i_19 + 3] [i_19] [i_21] [i_20] [i_23]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_24 = 0; i_24 < 23; i_24 += 4) 
                    {
                        var_41 = ((/* implicit */int) var_3);
                        var_42 = ((/* implicit */signed char) arr_67 [i_19] [i_20] [i_21] [i_24]);
                    }
                    var_43 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) min((arr_73 [i_19 + 3] [i_20] [i_21] [i_21]), (arr_65 [i_19])))))));
                    /* LoopNest 2 */
                    for (signed char i_25 = 0; i_25 < 23; i_25 += 4) 
                    {
                        for (signed char i_26 = 1; i_26 < 21; i_26 += 3) 
                        {
                            {
                                arr_84 [i_19] [i_26] = ((/* implicit */int) min(((-(arr_80 [i_19]))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned short) arr_72 [i_19] [i_20] [i_21] [i_25] [i_26])))))));
                                arr_85 [i_19] [i_20] [i_20] [i_20] [i_21] [i_21] [i_19] = ((/* implicit */long long int) arr_80 [i_19]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_86 [i_19 + 1] [i_19] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_77 [i_19] [i_19 + 3] [i_19] [i_19 + 2] [i_19])) ? (((/* implicit */int) arr_68 [i_19 - 3] [i_19 + 1])) : (((/* implicit */int) min((var_0), (((/* implicit */signed char) arr_68 [i_19 + 2] [i_19 - 2]))))))));
        var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((int) arr_69 [i_19 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_5)), (var_0))))) : (min((arr_69 [i_19 - 1]), (((/* implicit */long long int) arr_83 [i_19 + 3] [(signed char)18] [i_19 + 3] [(signed char)18] [i_19 - 3])))))))));
        /* LoopSeq 2 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_28 = 0; i_28 < 23; i_28 += 3) 
            {
                var_45 = ((/* implicit */unsigned int) arr_87 [i_19]);
                /* LoopSeq 1 */
                for (signed char i_29 = 1; i_29 < 20; i_29 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_30 = 2; i_30 < 19; i_30 += 2) 
                    {
                        arr_97 [i_19] [i_27] [i_27] [i_29 + 1] [i_30] = (+(((/* implicit */int) var_12)));
                        var_46 = ((unsigned char) (-(min((arr_63 [i_28]), (((/* implicit */int) arr_77 [i_30 + 2] [i_28] [i_28] [i_27] [i_19 - 3]))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_31 = 0; i_31 < 23; i_31 += 1) 
                    {
                        var_47 = ((/* implicit */long long int) (~(((unsigned long long int) arr_82 [i_19 - 3] [i_19] [i_27] [i_27] [i_29 - 1] [i_29 + 3]))));
                        arr_102 [i_19] [i_27] [i_28] [i_29] [i_19] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_81 [i_19] [i_27] [i_28] [i_28] [i_19] [i_31] [i_31]))))) < (arr_64 [i_19]))))));
                        var_48 -= ((/* implicit */short) arr_67 [i_31] [i_29] [i_27] [i_19]);
                        arr_103 [i_19] = arr_66 [i_19];
                    }
                    /* vectorizable */
                    for (unsigned short i_32 = 3; i_32 < 21; i_32 += 2) 
                    {
                        var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((int) arr_91 [i_29] [i_32 - 2] [i_19 - 2] [i_29])))));
                        arr_106 [22ULL] [i_27] [i_28] [i_29 + 3] [i_28] |= ((/* implicit */unsigned char) arr_98 [i_19] [8LL] [i_28] [i_29] [i_29 + 3] [i_32 + 1]);
                    }
                    var_50 = ((/* implicit */_Bool) ((unsigned long long int) ((arr_96 [i_29 + 3] [i_29] [i_29 + 3] [i_29] [i_29 + 3] [i_29 - 1] [i_29]) | (arr_96 [i_29 - 1] [i_29] [i_29 - 1] [i_29] [i_29] [i_29] [i_29]))));
                }
                /* LoopSeq 4 */
                for (signed char i_33 = 0; i_33 < 23; i_33 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_34 = 0; i_34 < 23; i_34 += 1) 
                    {
                        arr_113 [i_27] [i_28] [i_19] [i_19] [i_27] [i_19] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_77 [i_19] [i_27] [i_19] [i_33] [i_34]))));
                        var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((unsigned int) ((unsigned int) arr_73 [i_19] [i_33] [i_28] [i_33]))))));
                        var_52 = ((/* implicit */unsigned long long int) max((arr_87 [i_19]), (((/* implicit */signed char) arr_98 [i_27] [i_19] [i_28] [i_28] [i_34] [i_19]))));
                        arr_114 [i_19] [i_27] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) arr_93 [i_19 - 3] [i_19 + 3] [i_19] [i_19 - 1] [i_19])))) : (max(((~(((/* implicit */int) arr_77 [i_19] [i_27] [i_28] [i_33] [i_34])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [i_19] [i_27] [i_28] [i_33] [i_34])))))))));
                        var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_83 [i_19 + 1] [i_33] [i_19 - 3] [i_33] [i_19 - 2])), (arr_67 [i_19 + 2] [i_27] [i_28] [i_27]))))));
                    }
                    var_54 ^= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_80 [i_33])))))));
                    var_55 = ((/* implicit */short) ((min((((/* implicit */unsigned int) var_3)), (arr_71 [i_19] [i_19 - 3] [i_27] [i_33]))) % (((/* implicit */unsigned int) (~(arr_63 [i_19 - 3]))))));
                }
                for (signed char i_35 = 0; i_35 < 23; i_35 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_36 = 3; i_36 < 20; i_36 += 4) 
                    {
                        var_56 = ((/* implicit */signed char) ((((/* implicit */int) arr_107 [i_19 + 3] [i_19 + 1] [i_19] [i_19 - 1])) * (((/* implicit */int) arr_98 [i_19 - 1] [i_19] [i_19 + 3] [i_19 + 2] [i_19 + 3] [i_36]))));
                        arr_122 [i_19] [i_19] [i_28] [i_35] [i_19] = ((/* implicit */unsigned long long int) var_6);
                    }
                    var_57 *= ((/* implicit */unsigned long long int) var_3);
                    arr_123 [i_19] = ((/* implicit */int) arr_66 [i_19]);
                    arr_124 [i_19] [i_27] [i_19] = ((/* implicit */long long int) (-(arr_112 [i_19] [i_27] [i_27] [i_28] [i_27] [i_35])));
                }
                /* vectorizable */
                for (signed char i_37 = 2; i_37 < 20; i_37 += 2) 
                {
                    arr_128 [i_19] [i_27] [i_19] [i_19] = ((/* implicit */unsigned int) arr_67 [i_19] [i_27] [i_28] [i_37]);
                    var_58 *= ((/* implicit */unsigned short) (+(((unsigned int) arr_108 [i_37] [i_28] [i_27] [i_19]))));
                }
                for (unsigned int i_38 = 1; i_38 < 22; i_38 += 1) 
                {
                    arr_132 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */signed char) min((arr_91 [i_19] [i_27] [i_28] [i_38]), (((/* implicit */unsigned int) ((short) min((((/* implicit */int) var_11)), (var_2)))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_39 = 1; i_39 < 22; i_39 += 2) 
                    {
                        var_59 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((unsigned char) arr_94 [i_19] [i_27] [i_27] [i_39 + 1]))) - (max((((/* implicit */int) arr_104 [i_19 - 2] [i_27] [i_39 - 1] [i_38])), (var_4)))))));
                        var_60 -= ((/* implicit */unsigned long long int) var_8);
                        arr_135 [i_19 + 2] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (((unsigned long long int) var_1))))));
                    }
                    for (signed char i_40 = 0; i_40 < 23; i_40 += 4) 
                    {
                        arr_139 [i_19] [i_28] [i_40] [i_19] [i_40] = ((/* implicit */short) (-(arr_116 [i_38 - 1] [i_19] [i_19] [i_19])));
                        arr_140 [i_19] [i_27] = ((/* implicit */int) arr_73 [i_19 - 2] [i_19] [i_19 - 2] [i_19 + 2]);
                    }
                    for (unsigned long long int i_41 = 1; i_41 < 22; i_41 += 3) 
                    {
                        var_61 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_120 [i_19 - 1] [14] [i_19 + 1] [i_38 - 1])))))));
                        var_62 += var_6;
                    }
                    var_63 = ((long long int) ((arr_134 [i_38 + 1] [i_38] [i_38 - 1] [i_38 - 1] [i_27]) & (arr_134 [i_38] [i_38] [i_38] [i_38 + 1] [i_27])));
                }
                var_64 += ((/* implicit */unsigned long long int) arr_110 [i_19 + 3] [i_27] [i_28] [i_28]);
                var_65 = arr_116 [i_19 + 2] [i_19] [i_19] [i_19 - 3];
            }
            var_66 = ((/* implicit */short) max((var_66), (((/* implicit */short) ((min((var_8), (((/* implicit */long long int) arr_71 [i_19] [i_19 - 3] [i_27] [i_19 - 3])))) >= (((/* implicit */long long int) ((int) arr_71 [i_19] [i_19 + 1] [i_27] [i_27]))))))));
            /* LoopSeq 1 */
            for (_Bool i_42 = 0; i_42 < 0; i_42 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_43 = 2; i_43 < 22; i_43 += 1) 
                {
                    for (unsigned int i_44 = 0; i_44 < 23; i_44 += 3) 
                    {
                        {
                            var_67 = ((/* implicit */unsigned char) max((((unsigned int) arr_100 [i_27] [i_44] [i_27] [i_42 + 1] [i_27])), (((/* implicit */unsigned int) arr_87 [i_19]))));
                            arr_153 [i_19 - 2] [i_27] [i_42] [i_42] [i_19] [i_44] = ((/* implicit */_Bool) arr_94 [i_19] [i_19] [i_43] [i_44]);
                            var_68 = ((/* implicit */long long int) min((var_68), (arr_130 [i_44] [8LL] [i_19])));
                        }
                    } 
                } 
                var_69 -= ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((signed char) arr_66 [i_27])))))));
            }
        }
        /* vectorizable */
        for (unsigned short i_45 = 0; i_45 < 23; i_45 += 3) 
        {
            var_70 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(arr_78 [i_45] [i_19] [i_19 - 3] [i_19 - 1] [i_19 + 2]))))));
            var_71 = ((/* implicit */long long int) min((var_71), (((/* implicit */long long int) (+(((/* implicit */int) arr_90 [i_19 + 1] [i_19 - 2] [i_19])))))));
        }
    }
    var_72 = var_0;
}
