/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248627
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_13 -= ((/* implicit */unsigned long long int) var_8);
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) var_12);
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) var_8);
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) var_6);
                        arr_13 [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) var_11);
                        var_15 = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_3]);
                    }
                } 
            } 
            var_16 -= ((/* implicit */unsigned long long int) var_12);
        }
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_1))));
                /* LoopSeq 2 */
                for (long long int i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_7))));
                    var_19 ^= ((/* implicit */unsigned char) arr_17 [i_5] [i_5]);
                }
                for (long long int i_8 = 2; i_8 < 9; i_8 += 4) /* same iter space */
                {
                    var_20 ^= ((/* implicit */unsigned long long int) arr_22 [i_8 + 2] [i_8] [i_5] [i_8] [i_1]);
                    var_21 = ((/* implicit */unsigned char) var_7);
                    arr_25 [i_8] [i_6] [i_5] [i_5] [i_1] = ((/* implicit */long long int) var_3);
                }
                var_22 = ((/* implicit */_Bool) var_5);
            }
            var_23 += ((/* implicit */unsigned char) var_11);
            arr_26 [i_1] [i_1] [i_5] = ((/* implicit */unsigned short) var_0);
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            for (signed char i_10 = 2; i_10 < 10; i_10 += 2) 
            {
                {
                    arr_31 [i_1] [i_9] [i_1] [i_1] = max((((/* implicit */unsigned char) (signed char)1)), ((unsigned char)128));
                    var_24 = ((/* implicit */signed char) var_2);
                    arr_32 [i_9] [i_9] [i_10 - 2] = ((/* implicit */unsigned char) var_12);
                }
            } 
        } 
    }
    for (int i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_11))));
        var_26 = ((/* implicit */_Bool) var_12);
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_12 = 4; i_12 < 9; i_12 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
        {
            var_27 = ((/* implicit */unsigned int) var_10);
            var_28 = ((/* implicit */short) -1830651829);
            arr_42 [(signed char)7] [i_12] [i_12 - 1] = ((/* implicit */unsigned long long int) 1906321619U);
            arr_43 [i_13] [i_12] [i_12 - 1] = ((((/* implicit */_Bool) arr_1 [i_12])) || (((/* implicit */_Bool) var_5)));
            /* LoopSeq 1 */
            for (unsigned char i_14 = 2; i_14 < 11; i_14 += 1) 
            {
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_10))));
                arr_48 [i_12] [i_12] [(_Bool)0] [(unsigned char)8] = ((/* implicit */_Bool) var_1);
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 919807814))))) <= (((/* implicit */int) var_2))));
            }
        }
        for (signed char i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            var_31 -= (signed char)-2;
            var_32 -= ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-39)) + (2147483647))) << (((((((/* implicit */int) (short)-1)) + (11))) - (10)))));
            var_33 = ((/* implicit */long long int) (short)-4156);
        }
        for (signed char i_16 = 0; i_16 < 13; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_17 = 1; i_17 < 12; i_17 += 3) 
            {
                for (int i_18 = 1; i_18 < 11; i_18 += 2) 
                {
                    {
                        arr_60 [i_12 - 2] [(unsigned char)8] [i_16] [i_12] = ((/* implicit */unsigned short) var_10);
                        var_34 = ((/* implicit */signed char) 1408653016);
                        arr_61 [2] &= ((/* implicit */_Bool) var_10);
                        arr_62 [i_12] [i_12] [i_12] [12U] [i_12] [10ULL] &= var_4;
                        /* LoopSeq 1 */
                        for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) 
                        {
                            arr_65 [i_12] [i_12] = ((/* implicit */_Bool) var_10);
                            arr_66 [i_12 - 4] [i_12 - 4] [i_17 + 1] [i_19] [i_19] |= ((/* implicit */unsigned long long int) var_10);
                            arr_67 [i_12] [i_16] [i_17] [i_19] = ((/* implicit */_Bool) var_2);
                            var_35 = ((/* implicit */signed char) arr_64 [i_12] [i_12] [i_16] [i_17] [i_18 + 1] [i_19]);
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        var_36 = ((/* implicit */signed char) min((var_36), (var_3)));
                        arr_72 [i_12 - 3] [i_12 - 3] [i_12 - 3] [i_20] [(unsigned char)6] [i_21] |= ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                        var_37 = ((/* implicit */unsigned char) min((var_37), (var_0)));
                        arr_73 [i_12] [i_12] [i_12] = ((1495259515U) % (111938293U));
                    }
                } 
            } 
            arr_74 [i_12] [i_12] [i_12] = ((/* implicit */short) arr_51 [i_12] [i_12] [(signed char)9]);
        }
        arr_75 [i_12] = ((/* implicit */short) var_2);
        var_38 = var_5;
        var_39 = ((/* implicit */short) (signed char)-114);
    }
    for (unsigned long long int i_22 = 4; i_22 < 9; i_22 += 3) /* same iter space */
    {
        var_40 = ((/* implicit */int) (unsigned char)134);
        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) var_1))));
        /* LoopSeq 2 */
        for (unsigned int i_23 = 0; i_23 < 13; i_23 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_24 = 0; i_24 < 13; i_24 += 4) 
            {
                for (long long int i_25 = 1; i_25 < 11; i_25 += 3) 
                {
                    {
                        arr_86 [i_23] [i_23] [i_23] [i_24] [i_24] [i_23] = ((/* implicit */unsigned int) min((max((var_12), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) var_10))));
                        /* LoopSeq 4 */
                        for (short i_26 = 0; i_26 < 13; i_26 += 2) 
                        {
                            var_42 &= ((/* implicit */short) var_12);
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) var_2))));
                        }
                        for (signed char i_27 = 0; i_27 < 13; i_27 += 3) /* same iter space */
                        {
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) var_3))));
                            arr_91 [i_23] [i_23] [i_23] [12LL] [i_23] = max((((/* implicit */unsigned long long int) arr_36 [i_25] [16])), (3543881782276011006ULL));
                        }
                        for (signed char i_28 = 0; i_28 < 13; i_28 += 3) /* same iter space */
                        {
                            arr_95 [i_22 + 4] [(signed char)3] [i_23] [i_22 + 4] [i_28] = ((/* implicit */signed char) arr_83 [i_22] [i_23] [i_25] [i_22]);
                            arr_96 [i_22 + 4] [i_24] [5LL] [i_25] [i_23] = ((/* implicit */long long int) arr_57 [i_24]);
                            var_45 -= ((/* implicit */unsigned char) var_9);
                            arr_97 [i_22] [i_28] [i_24] [i_23] [i_22] = (signed char)(-127 - 1);
                        }
                        for (unsigned int i_29 = 0; i_29 < 13; i_29 += 3) 
                        {
                            var_46 ^= var_6;
                            var_47 = ((/* implicit */long long int) max((var_47), (arr_93 [i_29] [i_25] [i_24] [i_23] [(_Bool)1])));
                            var_48 ^= ((/* implicit */_Bool) var_11);
                            var_49 = ((/* implicit */int) arr_71 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]);
                        }
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned int i_30 = 4; i_30 < 10; i_30 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_31 = 0; i_31 < 13; i_31 += 1) 
                {
                    var_50 = ((/* implicit */unsigned char) var_7);
                    var_51 = ((/* implicit */short) var_12);
                    var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) var_11))));
                }
                var_53 &= ((/* implicit */unsigned int) var_9);
            }
            for (unsigned int i_32 = 4; i_32 < 10; i_32 += 2) /* same iter space */
            {
                var_54 = ((/* implicit */unsigned int) max((var_54), (((/* implicit */unsigned int) (signed char)16))));
                arr_108 [i_23] = ((/* implicit */signed char) var_11);
            }
            /* vectorizable */
            for (signed char i_33 = 3; i_33 < 12; i_33 += 2) 
            {
                arr_112 [i_23] [i_33] = ((/* implicit */unsigned int) var_4);
                var_55 = var_6;
                var_56 = ((/* implicit */unsigned short) var_3);
                var_57 = arr_1 [i_22];
            }
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) var_2))));
                arr_115 [i_23] = ((/* implicit */unsigned int) var_1);
            }
            /* LoopNest 2 */
            for (short i_35 = 0; i_35 < 13; i_35 += 3) 
            {
                for (unsigned short i_36 = 0; i_36 < 13; i_36 += 2) 
                {
                    {
                        var_59 = ((/* implicit */signed char) var_9);
                        arr_123 [i_22 + 4] [i_23] [i_23] [(signed char)10] [(signed char)3] = ((/* implicit */unsigned int) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_2))))))));
                        /* LoopSeq 4 */
                        for (long long int i_37 = 0; i_37 < 13; i_37 += 3) 
                        {
                            arr_127 [i_22] [i_23] [i_35] [i_36] [i_37] = ((/* implicit */unsigned int) arr_40 [i_23]);
                            var_60 = var_8;
                        }
                        for (long long int i_38 = 0; i_38 < 13; i_38 += 3) 
                        {
                            var_61 *= var_3;
                            arr_132 [i_22] [i_38] [i_35] [i_23] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (var_5)));
                            var_62 = ((/* implicit */int) min((var_62), (((/* implicit */int) var_1))));
                            var_63 = ((/* implicit */long long int) arr_80 [i_36] [i_23]);
                        }
                        for (long long int i_39 = 0; i_39 < 13; i_39 += 1) 
                        {
                            var_64 = ((/* implicit */long long int) (unsigned char)3);
                            var_65 = ((/* implicit */short) var_10);
                        }
                        for (unsigned long long int i_40 = 0; i_40 < 13; i_40 += 3) 
                        {
                            var_66 = ((/* implicit */long long int) min((var_3), (var_3)));
                            arr_138 [i_22] [(_Bool)1] [i_35] [i_23] [i_40] = ((/* implicit */_Bool) (signed char)-1);
                            var_67 = ((/* implicit */unsigned long long int) var_3);
                        }
                    }
                } 
            } 
            var_68 = ((/* implicit */signed char) min((var_68), (var_3)));
        }
        for (unsigned int i_41 = 0; i_41 < 13; i_41 += 1) /* same iter space */
        {
            var_69 = ((/* implicit */unsigned long long int) (signed char)-28);
            var_70 = ((/* implicit */_Bool) arr_101 [i_22]);
            /* LoopNest 2 */
            for (unsigned long long int i_42 = 1; i_42 < 10; i_42 += 3) 
            {
                for (unsigned short i_43 = 0; i_43 < 13; i_43 += 3) 
                {
                    {
                        arr_147 [i_43] [i_43] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_6)), (var_5)));
                        var_71 &= ((/* implicit */signed char) var_2);
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_44 = 4; i_44 < 9; i_44 += 3) /* same iter space */
    {
        var_72 = ((/* implicit */unsigned int) var_10);
        var_73 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_80 [i_44 + 3] [i_44]))) ^ (var_5)));
        /* LoopSeq 1 */
        for (signed char i_45 = 0; i_45 < 13; i_45 += 2) 
        {
            arr_152 [(unsigned char)2] [i_45] [(unsigned char)2] = ((/* implicit */unsigned int) var_2);
            var_74 |= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)17298))) + (4293918720U))) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        }
    }
    for (unsigned long long int i_46 = 4; i_46 < 9; i_46 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_47 = 1; i_47 < 12; i_47 += 3) 
        {
            var_75 = ((/* implicit */signed char) min((var_75), (((/* implicit */signed char) var_8))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned int i_48 = 3; i_48 < 10; i_48 += 1) 
            {
                var_76 = ((/* implicit */int) var_6);
                /* LoopNest 2 */
                for (signed char i_49 = 0; i_49 < 13; i_49 += 4) 
                {
                    for (unsigned short i_50 = 4; i_50 < 11; i_50 += 2) 
                    {
                        {
                            var_77 = ((/* implicit */_Bool) max((var_77), (((/* implicit */_Bool) var_0))));
                            arr_166 [i_47] [i_47] [i_50] [(signed char)12] [(signed char)12] = ((/* implicit */int) (unsigned char)0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_51 = 1; i_51 < 12; i_51 += 1) 
                {
                    for (unsigned short i_52 = 4; i_52 < 12; i_52 += 3) 
                    {
                        {
                            var_78 = var_3;
                            var_79 = ((/* implicit */unsigned int) 13028753103127535436ULL);
                            arr_175 [i_46 + 1] [i_46 + 1] [i_47] = ((/* implicit */_Bool) var_10);
                            var_80 = (unsigned char)254;
                        }
                    } 
                } 
            }
            for (unsigned long long int i_53 = 1; i_53 < 11; i_53 += 4) 
            {
                var_81 = ((/* implicit */signed char) (unsigned char)100);
                arr_178 [i_46] [(short)11] [i_47] [i_46] = ((/* implicit */short) var_0);
                var_82 = ((/* implicit */signed char) var_2);
            }
            for (signed char i_54 = 0; i_54 < 13; i_54 += 3) /* same iter space */
            {
                arr_181 [i_46] [i_46] [i_46] [i_47] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) + (var_5)));
                arr_182 [i_46] [i_47 + 1] [i_47] = ((/* implicit */unsigned char) arr_143 [i_54]);
                var_83 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) % (var_12)));
            }
            /* vectorizable */
            for (signed char i_55 = 0; i_55 < 13; i_55 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_56 = 0; i_56 < 13; i_56 += 3) 
                {
                    for (int i_57 = 0; i_57 < 13; i_57 += 1) 
                    {
                        {
                            var_84 = ((/* implicit */int) var_10);
                            var_85 = ((/* implicit */unsigned long long int) var_8);
                        }
                    } 
                } 
                arr_189 [i_47] [i_47 + 1] = ((/* implicit */unsigned char) var_5);
                arr_190 [i_46] [i_47] [i_47] [i_47] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) % (18446744073709551615ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
            }
            var_86 = ((/* implicit */_Bool) var_1);
        }
        var_87 ^= ((/* implicit */long long int) var_11);
        var_88 = ((/* implicit */short) var_4);
        arr_191 [i_46] = ((/* implicit */short) var_10);
    }
    var_89 = ((/* implicit */long long int) var_9);
}
