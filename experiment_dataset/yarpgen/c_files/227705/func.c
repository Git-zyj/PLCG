/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227705
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)63076)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35640))) : (var_5))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_1)), (var_0))))));
                arr_7 [i_0] = var_10;
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35647)) ? (6338295868749389173ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2460)))));
                arr_8 [(unsigned short)9] [i_0] [i_0] = var_0;
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_15 [i_3] [11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
            arr_16 [i_3] [(unsigned short)1] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9)))));
        }
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_5 = 2; i_5 < 16; i_5 += 3) 
            {
                var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_3)));
                arr_21 [i_2] [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) (+(var_9)));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_26 [(_Bool)1] [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29895)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))) : (18446744073709551615ULL))))));
                arr_27 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
                /* LoopSeq 1 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        arr_33 [8] [i_4] [i_7] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))));
                        var_13 = var_0;
                        arr_34 [i_2] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_5)))) ? (var_8) : (var_8)));
                        arr_35 [i_2] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_7] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)23177)) : (((/* implicit */int) (unsigned short)16779)))))));
                        arr_36 [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        var_14 -= var_4;
                        arr_39 [i_2] [i_7] [i_7] [i_9] = ((/* implicit */_Bool) (-(var_3)));
                        arr_40 [i_7] [i_7] [(unsigned short)9] [i_2] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))));
                    }
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8192)) ? (8753376160270081594LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21317)))));
                    arr_41 [i_7] [i_7] [(unsigned short)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_2))));
                    arr_42 [i_7] = ((/* implicit */unsigned short) (-(var_8)));
                    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                }
                var_17 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 3) 
                {
                    arr_48 [(unsigned short)17] [i_11] = ((/* implicit */_Bool) var_5);
                    arr_49 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_7))))));
                }
                arr_50 [i_2] [i_4] [i_10] = var_7;
                var_18 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
            }
            arr_51 [i_2] = ((/* implicit */unsigned short) var_8);
            var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))));
            arr_52 [(unsigned short)10] [i_2] [i_2] = (!(var_1));
            /* LoopSeq 2 */
            for (int i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                arr_56 [i_4] [i_4] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8)));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        {
                            arr_65 [i_2] [i_2] [10] [i_13] [i_2] [i_2] [10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8)));
                            arr_66 [i_13] [i_13] [i_13] [i_12] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) var_5);
                            arr_67 [i_2] [i_4] [i_12] [i_13] [i_13] = var_2;
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_20 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
                    arr_70 [i_15] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (signed char)12)) : (1675774075)));
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 3; i_16 < 17; i_16 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) var_0);
                        arr_73 [i_15] [i_15] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                    }
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        arr_77 [i_2] [i_2] [i_2] [i_4] [i_2] [i_2] &= ((/* implicit */_Bool) var_6);
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))));
                        arr_78 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))));
                    }
                }
                for (long long int i_18 = 0; i_18 < 19; i_18 += 4) 
                {
                    arr_83 [i_2] [i_2] [i_2] [i_2] = (-(var_8));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                    var_24 ^= ((/* implicit */signed char) var_8);
                    arr_84 [i_2] [(_Bool)1] [i_2] [i_12] [i_12] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_5) : (var_5)));
                }
                for (int i_19 = 0; i_19 < 19; i_19 += 4) 
                {
                    arr_87 [i_2] [14] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))));
                    arr_88 [i_2] = ((/* implicit */_Bool) var_7);
                    arr_89 [7LL] [i_4] [7LL] = ((/* implicit */unsigned short) ((var_1) ? (var_9) : (var_9)));
                }
                arr_90 [(unsigned char)6] [(unsigned char)6] [i_12] [i_12] = ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
            }
            for (signed char i_20 = 0; i_20 < 19; i_20 += 1) 
            {
                var_26 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5));
                arr_94 [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned short) var_8);
                arr_95 [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)7048))));
                arr_96 [i_20] = var_2;
            }
        }
        /* LoopSeq 4 */
        for (unsigned short i_21 = 3; i_21 < 15; i_21 += 1) /* same iter space */
        {
            arr_99 [i_2] [i_2] [i_21] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
            var_27 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)57355))));
            /* LoopSeq 1 */
            for (unsigned short i_22 = 0; i_22 < 19; i_22 += 4) 
            {
                arr_103 [i_2] [i_22] [i_22] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (var_3)));
                arr_104 [i_21] [(_Bool)1] [i_21] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5)))));
            }
        }
        for (unsigned short i_23 = 3; i_23 < 15; i_23 += 1) /* same iter space */
        {
            var_28 &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
            arr_107 [i_2] = ((/* implicit */_Bool) (+(var_5)));
        }
        for (unsigned short i_24 = 3; i_24 < 15; i_24 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))));
            var_30 = (!(((/* implicit */_Bool) (+(var_8)))));
        }
        for (unsigned long long int i_25 = 0; i_25 < 19; i_25 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_26 = 1; i_26 < 17; i_26 += 3) 
            {
                var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                arr_118 [i_25] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) : (var_9)));
                arr_119 [(unsigned short)14] [i_25] [(_Bool)1] = ((/* implicit */_Bool) var_5);
            }
            for (unsigned short i_27 = 0; i_27 < 19; i_27 += 3) /* same iter space */
            {
                arr_122 [i_25] = ((/* implicit */unsigned short) (~(var_8)));
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((var_1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                arr_123 [i_25] = ((/* implicit */unsigned short) var_8);
            }
            for (unsigned short i_28 = 0; i_28 < 19; i_28 += 3) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned short) var_5);
                /* LoopNest 2 */
                for (unsigned short i_29 = 0; i_29 < 19; i_29 += 1) 
                {
                    for (unsigned long long int i_30 = 0; i_30 < 19; i_30 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                            arr_133 [(unsigned short)14] [i_25] [i_25] [(unsigned short)14] [(unsigned short)14] [(unsigned short)14] [i_25] = ((/* implicit */_Bool) var_3);
                            arr_134 [i_25] [(unsigned short)11] [i_28] [(unsigned short)11] [6ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))));
                            arr_135 [i_25] [i_25] [i_25] [i_29] [(unsigned short)10] [i_29] = ((/* implicit */unsigned short) (~(var_8)));
                            arr_136 [i_2] [(signed char)4] [i_2] [13] [i_25] = (!(((/* implicit */_Bool) var_2)));
                        }
                    } 
                } 
                arr_137 [i_25] [i_25] [i_25] [i_25] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                arr_138 [i_25] [i_25] [i_2] [i_25] = ((/* implicit */unsigned short) var_5);
                arr_139 [i_2] [i_25] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
            }
            arr_140 [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
        }
        var_35 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (var_9)));
        arr_141 [i_2] = ((/* implicit */unsigned short) var_1);
    }
    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) /* same iter space */
    {
        arr_144 [(_Bool)1] [i_31] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((var_9), (((/* implicit */unsigned long long int) var_10)))), ((+(var_8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) : ((+(min((((/* implicit */unsigned long long int) var_2)), (var_9)))))));
        var_36 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (min((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) var_1)), (var_9))))) : (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_4)))))))));
    }
    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) /* same iter space */
    {
        arr_149 [i_32] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_2))))));
        arr_150 [i_32] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) var_5)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)35634)))))));
        arr_151 [i_32] [i_32] = min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_8)))) ? (max((((/* implicit */long long int) var_1)), (var_3))) : (((((/* implicit */_Bool) (unsigned short)2459)) ? (-166900425268533241LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) min((var_4), (max((var_6), (var_2)))))));
        arr_152 [i_32] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((var_2), (var_7))))));
        arr_153 [4LL] [i_32] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (var_6)))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) var_1))))));
    }
}
