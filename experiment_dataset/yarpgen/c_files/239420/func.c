/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239420
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_14 = var_12;
        var_15 = ((/* implicit */unsigned char) var_7);
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        arr_14 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) var_12);
                        arr_15 [i_4] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) var_13);
                        var_16 = ((/* implicit */unsigned long long int) var_9);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) 
        {
            arr_18 [i_1] [i_1] = ((/* implicit */signed char) var_0);
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                /* LoopSeq 3 */
                for (int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    arr_25 [i_1] [i_5 + 1] [i_6] [i_7] = ((/* implicit */unsigned long long int) var_10);
                    var_17 = ((/* implicit */unsigned char) var_9);
                    arr_26 [(_Bool)1] [i_6] [i_5 - 1] [i_5] [i_1] = ((/* implicit */unsigned int) var_9);
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_4))));
                }
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    arr_29 [i_1] = ((/* implicit */_Bool) var_9);
                    arr_30 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_2);
                }
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    var_19 = ((/* implicit */signed char) var_13);
                    var_20 = ((/* implicit */unsigned long long int) var_11);
                }
                /* LoopSeq 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) var_3);
                    var_22 = ((/* implicit */unsigned long long int) var_1);
                    var_23 |= ((/* implicit */unsigned short) var_5);
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_43 [i_1] [i_12] [i_5 - 1] [i_1] [i_5 - 1] = ((/* implicit */signed char) var_10);
                        var_24 = ((/* implicit */_Bool) var_13);
                        var_25 = ((/* implicit */unsigned char) var_7);
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
                    {
                        arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_7);
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_10))));
                        arr_48 [9] [i_5] [i_1] |= ((/* implicit */unsigned long long int) var_5);
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 3) /* same iter space */
                    {
                        arr_51 [i_1] [(short)22] [i_6] [i_14] [i_5] [i_11] [i_1] = var_8;
                        arr_52 [4U] [i_5] [4U] [i_5] [i_14] [i_14] [(unsigned char)17] = ((/* implicit */unsigned short) var_6);
                        arr_53 [i_14] [i_11] [i_14] [i_11] [i_14] [i_11] = ((/* implicit */short) var_3);
                        arr_54 [i_14] [i_1] [i_6] [i_1] [i_1] &= ((/* implicit */signed char) var_0);
                    }
                    var_27 = ((/* implicit */short) var_2);
                }
            }
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_1))));
                        var_29 = ((/* implicit */long long int) var_3);
                        arr_59 [i_1] [i_1] [i_15] [i_15] [i_16 - 1] = ((/* implicit */signed char) var_6);
                        arr_60 [8ULL] [(short)8] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */short) var_1);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    {
                        arr_69 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_7);
                        var_30 ^= var_11;
                        var_31 ^= ((/* implicit */unsigned long long int) var_13);
                        var_32 -= ((/* implicit */unsigned short) var_0);
                    }
                } 
            } 
        }
        arr_70 [i_1] = var_11;
    }
    for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 2) /* same iter space */
    {
        var_33 = var_7;
        /* LoopSeq 2 */
        for (int i_20 = 0; i_20 < 23; i_20 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 3) 
            {
                var_34 = ((/* implicit */short) var_9);
                arr_80 [i_19] [i_20] [i_21] |= ((/* implicit */unsigned short) var_3);
            }
            for (short i_22 = 0; i_22 < 23; i_22 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_35 -= var_7;
                    /* LoopSeq 2 */
                    for (unsigned char i_24 = 0; i_24 < 23; i_24 += 4) 
                    {
                        arr_89 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) var_12);
                        var_36 = ((/* implicit */unsigned int) var_6);
                        var_37 = ((/* implicit */unsigned long long int) var_9);
                    }
                    for (unsigned int i_25 = 2; i_25 < 22; i_25 += 4) 
                    {
                        var_38 = ((/* implicit */short) var_1);
                        arr_92 [18] [i_23] [i_22] [i_20] [i_19] = ((/* implicit */unsigned short) var_4);
                    }
                }
                arr_93 [i_19] [i_19] = var_7;
                var_39 = ((/* implicit */unsigned int) var_7);
                var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) var_7))));
                arr_94 [i_19] = ((/* implicit */long long int) var_8);
            }
            for (unsigned long long int i_26 = 0; i_26 < 23; i_26 += 1) 
            {
                arr_97 [2ULL] [i_19] [i_19] [2ULL] = ((/* implicit */signed char) var_1);
                arr_98 [i_19] = ((/* implicit */_Bool) var_6);
            }
            var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) var_11))));
            arr_99 [i_19] [i_19] [i_20] = ((/* implicit */unsigned long long int) var_10);
        }
        for (int i_27 = 4; i_27 < 19; i_27 += 1) 
        {
            arr_102 [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) var_4);
            var_42 += ((/* implicit */short) var_5);
            var_43 = ((/* implicit */signed char) var_7);
            var_44 = ((/* implicit */signed char) var_2);
        }
    }
    var_45 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    for (short i_28 = 2; i_28 < 22; i_28 += 1) 
    {
        var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) var_5))));
        var_47 += ((/* implicit */unsigned int) var_6);
        arr_105 [i_28] = ((/* implicit */unsigned int) var_7);
    }
    for (unsigned long long int i_29 = 0; i_29 < 14; i_29 += 1) 
    {
        var_48 -= ((/* implicit */int) var_2);
        /* LoopSeq 1 */
        for (long long int i_30 = 0; i_30 < 14; i_30 += 4) 
        {
            /* LoopSeq 3 */
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) /* same iter space */
            {
                var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) var_8))));
                arr_116 [i_30] [i_31] = ((/* implicit */signed char) var_13);
                var_50 *= ((/* implicit */unsigned short) var_1);
                arr_117 [i_29] [i_31] [i_29] = ((/* implicit */short) var_11);
            }
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) /* same iter space */
            {
                var_51 = ((/* implicit */unsigned char) var_5);
                /* LoopNest 2 */
                for (unsigned int i_33 = 1; i_33 < 11; i_33 += 1) 
                {
                    for (unsigned long long int i_34 = 0; i_34 < 14; i_34 += 3) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned long long int) var_5);
                            arr_127 [(short)4] [i_30] [i_32] = ((/* implicit */unsigned int) var_1);
                            var_53 = ((/* implicit */unsigned short) max((var_53), (((/* implicit */unsigned short) var_6))));
                            arr_128 [i_29] [i_32] [i_34] = ((/* implicit */unsigned int) var_7);
                        }
                    } 
                } 
            }
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                var_54 = ((/* implicit */_Bool) var_4);
                /* LoopSeq 3 */
                for (signed char i_36 = 0; i_36 < 14; i_36 += 4) 
                {
                    var_55 = var_11;
                    var_56 = ((/* implicit */int) var_10);
                    arr_135 [i_29] [3LL] [i_30] [i_35] [i_35] [i_36] = ((/* implicit */short) var_6);
                }
                for (unsigned char i_37 = 3; i_37 < 13; i_37 += 4) 
                {
                    arr_138 [i_29] [i_30] [12ULL] [i_37] = ((/* implicit */short) var_12);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_38 = 0; i_38 < 14; i_38 += 2) 
                    {
                        arr_141 [i_37 - 1] [i_37] [i_37] [i_37] [i_37] = ((/* implicit */unsigned long long int) var_10);
                        arr_142 [i_37] = ((/* implicit */unsigned long long int) var_3);
                        var_57 -= var_6;
                        var_58 = ((/* implicit */int) var_11);
                    }
                    for (unsigned long long int i_39 = 0; i_39 < 14; i_39 += 4) 
                    {
                        var_59 = ((/* implicit */unsigned long long int) var_9);
                        var_60 = ((/* implicit */unsigned int) var_11);
                        var_61 *= ((/* implicit */_Bool) var_6);
                    }
                    var_62 = ((/* implicit */signed char) var_0);
                }
                for (int i_40 = 0; i_40 < 14; i_40 += 4) 
                {
                    var_63 = var_9;
                    arr_149 [i_29] [i_29] = ((/* implicit */unsigned short) var_11);
                    var_64 -= ((/* implicit */unsigned char) var_8);
                    var_65 = ((/* implicit */short) var_5);
                }
                var_66 = ((/* implicit */signed char) var_7);
                arr_150 [i_29] [i_29] = ((/* implicit */unsigned char) var_8);
                arr_151 [i_29] [i_29] [i_29] [i_29] = ((/* implicit */unsigned long long int) var_11);
            }
            arr_152 [i_29] [i_29] [i_29] = ((/* implicit */unsigned char) var_13);
            var_67 = ((/* implicit */unsigned long long int) min((var_67), (((/* implicit */unsigned long long int) var_0))));
            arr_153 [i_29] [i_29] [7LL] = ((/* implicit */short) var_1);
            arr_154 [i_29] [i_30] |= ((/* implicit */short) var_3);
        }
    }
    /* LoopNest 2 */
    for (signed char i_41 = 2; i_41 < 21; i_41 += 4) 
    {
        for (long long int i_42 = 0; i_42 < 24; i_42 += 2) 
        {
            {
                arr_159 [i_41 + 2] [i_41] [i_41] = ((/* implicit */unsigned long long int) var_0);
                /* LoopNest 2 */
                for (unsigned char i_43 = 1; i_43 < 20; i_43 += 1) 
                {
                    for (unsigned int i_44 = 0; i_44 < 24; i_44 += 4) 
                    {
                        {
                            var_68 = ((/* implicit */unsigned long long int) min((var_68), (((/* implicit */unsigned long long int) var_13))));
                            var_69 -= ((/* implicit */unsigned long long int) var_3);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_45 = 0; i_45 < 24; i_45 += 2) 
                {
                    arr_167 [i_41] = ((/* implicit */short) var_8);
                    arr_168 [i_41 + 3] [i_42] [i_41 + 3] = ((/* implicit */unsigned int) var_12);
                    var_70 -= ((/* implicit */unsigned long long int) var_10);
                }
            }
        } 
    } 
}
