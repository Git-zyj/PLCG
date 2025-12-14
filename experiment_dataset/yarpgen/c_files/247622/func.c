/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247622
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_11 = ((/* implicit */short) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)23037)));
            arr_5 [i_1] = var_4;
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            var_12 = var_4;
                            arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) var_8);
                        }
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            var_13 -= ((/* implicit */short) min((((/* implicit */int) var_8)), (min((max((var_0), (var_2))), (var_2)))));
                            var_14 &= ((/* implicit */signed char) max((((/* implicit */int) var_6)), (max((((/* implicit */int) var_6)), (var_1)))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_7))));
                            arr_23 [i_0] [i_0] [(short)5] [i_1] [(short)5] = ((/* implicit */signed char) var_3);
                        }
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_2))));
                            var_17 = max(((signed char)127), ((signed char)(-127 - 1)));
                        }
                        var_18 = ((/* implicit */long long int) var_8);
                        var_19 = ((/* implicit */short) var_1);
                        var_20 = max((var_7), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_5)), (var_3)))));
                    }
                } 
            } 
            var_21 &= ((/* implicit */long long int) min((((/* implicit */int) var_9)), (var_1)));
        }
        for (long long int i_8 = 1; i_8 < 20; i_8 += 2) 
        {
            var_22 ^= ((/* implicit */unsigned char) min((var_7), (var_7)));
            var_23 = ((/* implicit */short) var_0);
        }
        arr_29 [i_0] = ((/* implicit */long long int) var_0);
        var_24 = ((/* implicit */unsigned char) var_2);
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            arr_35 [i_9] &= ((/* implicit */unsigned char) var_7);
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                for (int i_12 = 3; i_12 < 18; i_12 += 2) 
                {
                    for (int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_1))));
                            var_26 = ((/* implicit */long long int) var_3);
                            var_27 = ((/* implicit */int) var_9);
                            var_28 = ((/* implicit */unsigned char) var_2);
                        }
                    } 
                } 
            } 
        }
        for (short i_14 = 0; i_14 < 21; i_14 += 4) 
        {
            /* LoopSeq 4 */
            for (signed char i_15 = 1; i_15 < 20; i_15 += 4) 
            {
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_5))));
                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) var_9))));
                arr_53 [i_9] = var_10;
            }
            for (int i_16 = 4; i_16 < 20; i_16 += 4) 
            {
                var_31 = var_6;
                var_32 = ((/* implicit */long long int) var_0);
                /* LoopNest 2 */
                for (long long int i_17 = 2; i_17 < 18; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) var_4))));
                            var_34 = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
            }
            for (short i_19 = 2; i_19 < 20; i_19 += 2) /* same iter space */
            {
                var_35 = var_10;
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) var_9))));
            }
            for (short i_20 = 2; i_20 < 20; i_20 += 2) /* same iter space */
            {
                arr_68 [i_9] [i_14] [i_14] [i_9] = ((/* implicit */signed char) var_1);
                /* LoopSeq 3 */
                for (short i_21 = 3; i_21 < 19; i_21 += 4) 
                {
                    var_37 = ((/* implicit */unsigned short) var_9);
                    arr_72 [i_21] = ((/* implicit */short) var_10);
                }
                for (unsigned char i_22 = 2; i_22 < 18; i_22 += 2) 
                {
                    var_38 = ((/* implicit */short) var_0);
                    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) var_1))));
                }
                for (unsigned char i_23 = 0; i_23 < 21; i_23 += 2) 
                {
                    var_40 -= ((/* implicit */unsigned char) var_3);
                    arr_78 [i_9] [i_9] [i_20] [(unsigned char)20] [i_23] [i_9] = ((/* implicit */int) var_4);
                }
                arr_79 [i_9] [i_14] [i_14] [i_20] &= ((/* implicit */short) var_3);
                var_41 &= ((/* implicit */short) var_0);
            }
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 21; i_24 += 3) 
            {
                for (unsigned char i_25 = 0; i_25 < 21; i_25 += 2) 
                {
                    {
                        var_42 *= ((/* implicit */unsigned short) var_2);
                        arr_86 [i_9] [3LL] [0LL] [i_24] [i_25] [i_25] &= ((/* implicit */unsigned short) var_0);
                        var_43 = ((/* implicit */signed char) var_6);
                    }
                } 
            } 
            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) var_10))));
            arr_87 [i_9] [i_14] = ((/* implicit */unsigned short) var_8);
        }
        var_45 = ((/* implicit */int) var_3);
        var_46 = ((/* implicit */signed char) var_9);
        var_47 ^= ((/* implicit */long long int) var_6);
        arr_88 [i_9] [i_9] = ((/* implicit */short) var_3);
    }
    /* vectorizable */
    for (unsigned char i_26 = 4; i_26 < 20; i_26 += 3) 
    {
        var_48 = var_1;
        /* LoopNest 3 */
        for (signed char i_27 = 2; i_27 < 20; i_27 += 4) 
        {
            for (int i_28 = 0; i_28 < 23; i_28 += 2) 
            {
                for (signed char i_29 = 0; i_29 < 23; i_29 += 3) 
                {
                    {
                        arr_99 [i_26 - 1] [i_26] = ((/* implicit */signed char) var_0);
                        var_49 = ((/* implicit */unsigned short) max((var_49), (var_3)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_30 = 1; i_30 < 22; i_30 += 3) 
        {
            var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) var_1))));
            var_51 &= ((/* implicit */unsigned short) var_4);
            arr_103 [i_26] = ((/* implicit */signed char) var_1);
            /* LoopSeq 1 */
            for (short i_31 = 0; i_31 < 23; i_31 += 4) 
            {
                arr_108 [(signed char)8] [i_26] [(signed char)13] [(unsigned short)3] = ((/* implicit */unsigned char) var_4);
                var_52 = ((/* implicit */unsigned char) var_2);
            }
            var_53 = ((/* implicit */long long int) max((var_53), (var_7)));
        }
        /* LoopSeq 1 */
        for (int i_32 = 1; i_32 < 22; i_32 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_33 = 2; i_33 < 20; i_33 += 2) 
            {
                var_54 ^= ((/* implicit */unsigned short) var_7);
                var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) var_0))));
            }
            /* LoopSeq 1 */
            for (int i_34 = 2; i_34 < 21; i_34 += 4) 
            {
                /* LoopNest 2 */
                for (int i_35 = 0; i_35 < 23; i_35 += 1) 
                {
                    for (int i_36 = 0; i_36 < 23; i_36 += 4) 
                    {
                        {
                            arr_124 [i_26] [(unsigned short)11] [i_26] [10LL] = ((/* implicit */unsigned char) var_0);
                            var_56 = ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_37 = 0; i_37 < 23; i_37 += 1) 
                {
                    var_57 = ((/* implicit */short) var_0);
                    var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) var_5))));
                    arr_128 [i_34] [4] [i_34] [i_37] [(unsigned short)0] |= ((/* implicit */long long int) var_0);
                }
            }
            arr_129 [i_26] = ((/* implicit */unsigned short) var_2);
            arr_130 [i_26] = ((/* implicit */unsigned short) var_0);
            var_59 = var_6;
        }
        /* LoopSeq 2 */
        for (unsigned short i_38 = 1; i_38 < 22; i_38 += 4) /* same iter space */
        {
            arr_133 [i_26] [i_38 + 1] = ((/* implicit */unsigned short) var_7);
            /* LoopNest 2 */
            for (signed char i_39 = 0; i_39 < 23; i_39 += 4) 
            {
                for (short i_40 = 0; i_40 < 23; i_40 += 2) 
                {
                    {
                        var_60 ^= var_6;
                        arr_140 [i_26] = ((/* implicit */unsigned char) var_6);
                        var_61 = ((/* implicit */unsigned char) min((var_61), (var_9)));
                        var_62 -= ((/* implicit */short) var_6);
                    }
                } 
            } 
        }
        for (unsigned short i_41 = 1; i_41 < 22; i_41 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_42 = 0; i_42 < 23; i_42 += 1) 
            {
                var_63 = ((/* implicit */signed char) var_3);
                /* LoopSeq 4 */
                for (unsigned char i_43 = 0; i_43 < 23; i_43 += 4) /* same iter space */
                {
                    var_64 = ((/* implicit */int) var_5);
                    arr_147 [i_43] [i_26] [i_26] [i_43] &= ((/* implicit */unsigned short) var_5);
                }
                for (unsigned char i_44 = 0; i_44 < 23; i_44 += 4) /* same iter space */
                {
                    var_65 &= ((/* implicit */short) var_3);
                    /* LoopSeq 1 */
                    for (short i_45 = 0; i_45 < 23; i_45 += 3) 
                    {
                        var_66 = ((/* implicit */short) max((var_66), (((/* implicit */short) var_6))));
                        arr_152 [i_41] [i_41] [i_26] = ((/* implicit */short) var_8);
                        var_67 ^= var_6;
                        var_68 += ((/* implicit */long long int) var_9);
                        var_69 = ((/* implicit */unsigned short) var_7);
                    }
                }
                for (unsigned char i_46 = 0; i_46 < 23; i_46 += 4) /* same iter space */
                {
                    var_70 = ((/* implicit */unsigned char) var_10);
                    var_71 = ((/* implicit */int) max((var_71), (((/* implicit */int) var_9))));
                    arr_157 [i_26] = ((/* implicit */int) var_3);
                    var_72 &= ((/* implicit */short) var_2);
                    var_73 -= ((/* implicit */short) var_5);
                }
                for (unsigned short i_47 = 0; i_47 < 23; i_47 += 3) 
                {
                    var_74 = ((/* implicit */int) min((var_74), (((/* implicit */int) var_6))));
                    arr_161 [i_41] [i_42] [i_26] = var_2;
                }
                var_75 -= ((/* implicit */signed char) var_6);
                /* LoopNest 2 */
                for (unsigned char i_48 = 0; i_48 < 23; i_48 += 2) 
                {
                    for (signed char i_49 = 3; i_49 < 21; i_49 += 3) 
                    {
                        {
                            var_76 ^= ((/* implicit */int) var_9);
                            arr_167 [i_26] [i_26] = ((/* implicit */int) var_3);
                            var_77 = ((/* implicit */short) max((var_77), (((/* implicit */short) var_3))));
                        }
                    } 
                } 
            }
            for (unsigned char i_50 = 0; i_50 < 23; i_50 += 4) 
            {
                var_78 = ((/* implicit */int) min((var_78), (((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (int i_51 = 1; i_51 < 22; i_51 += 2) 
                {
                    for (long long int i_52 = 1; i_52 < 20; i_52 += 2) 
                    {
                        {
                            var_79 = ((/* implicit */unsigned short) var_4);
                            arr_175 [i_26] [i_26] [i_51] [i_51] = ((/* implicit */unsigned char) var_6);
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (unsigned short i_53 = 0; i_53 < 23; i_53 += 2) /* same iter space */
            {
                var_80 = var_0;
                var_81 &= ((/* implicit */signed char) var_10);
                /* LoopNest 2 */
                for (short i_54 = 0; i_54 < 23; i_54 += 3) 
                {
                    for (unsigned char i_55 = 0; i_55 < 23; i_55 += 4) 
                    {
                        {
                            var_82 = ((/* implicit */long long int) var_5);
                            var_83 = ((/* implicit */unsigned char) max((var_83), (var_9)));
                        }
                    } 
                } 
            }
            for (unsigned short i_56 = 0; i_56 < 23; i_56 += 2) /* same iter space */
            {
                var_84 ^= ((/* implicit */unsigned char) var_5);
                var_85 = ((/* implicit */short) var_8);
                var_86 = ((/* implicit */int) var_10);
                var_87 = ((/* implicit */int) min((var_87), (((/* implicit */int) var_6))));
            }
            arr_187 [i_26 + 2] [i_26] = ((/* implicit */signed char) var_3);
            /* LoopNest 3 */
            for (int i_57 = 0; i_57 < 23; i_57 += 3) 
            {
                for (signed char i_58 = 0; i_58 < 23; i_58 += 2) 
                {
                    for (unsigned char i_59 = 0; i_59 < 23; i_59 += 2) 
                    {
                        {
                            arr_194 [i_26] = ((/* implicit */signed char) var_9);
                            var_88 = ((/* implicit */long long int) max((var_88), (((/* implicit */long long int) var_3))));
                            var_89 = ((/* implicit */unsigned short) min((var_89), (((/* implicit */unsigned short) var_5))));
                        }
                    } 
                } 
            } 
        }
    }
    var_90 = ((/* implicit */int) var_10);
    var_91 = ((/* implicit */int) min((var_7), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_5)), (min((((/* implicit */unsigned char) var_5)), (var_8))))))));
    var_92 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) var_2)), (var_10)));
    var_93 = ((/* implicit */signed char) max((var_93), (((/* implicit */signed char) min((((/* implicit */long long int) var_6)), (max((max((((/* implicit */long long int) var_8)), (var_7))), (((/* implicit */long long int) var_9)))))))));
}
