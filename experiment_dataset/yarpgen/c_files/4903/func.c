/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4903
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
    var_18 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_15)), (arr_1 [i_0]))), (((/* implicit */unsigned int) (~(var_0))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((var_15), (((/* implicit */int) min((arr_3 [i_0] [(_Bool)0]), (((/* implicit */unsigned short) min((var_4), (((/* implicit */short) (unsigned char)48)))))))))))));
            var_21 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_2 [i_1])) ? (max((((/* implicit */unsigned int) arr_3 [2U] [i_1])), (339650391U))) : (arr_4 [i_1] [(unsigned char)2] [i_0]))), (((/* implicit */unsigned int) min((((/* implicit */short) ((_Bool) arr_1 [i_1 + 1]))), (var_9))))));
            arr_5 [7] [i_0] [i_0] = arr_0 [i_0] [i_1];
        }
        for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (short i_3 = 2; i_3 < 17; i_3 += 2) 
            {
                for (long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                {
                    {
                        arr_12 [i_0] [i_3] [6] [2LL] &= min((arr_4 [i_0] [(unsigned short)3] [i_3]), (((/* implicit */unsigned int) arr_8 [i_0] [i_2 + 4] [i_3] [i_4 - 2])));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_9))));
                    }
                } 
            } 
            var_23 = ((/* implicit */long long int) arr_6 [i_0] [i_2] [i_2]);
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_6 = 1; i_6 < 15; i_6 += 2) 
            {
                arr_19 [i_6] [i_6] = ((/* implicit */unsigned int) arr_17 [i_6] [i_6] [i_6] [i_0]);
                arr_20 [i_0] [14LL] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6 + 1] [i_6] [i_6 - 1] [i_6])) ? (((arr_14 [i_5] [i_5] [(unsigned short)3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_5] [i_6]))))) : (((var_7) ? (arr_6 [i_6] [i_5] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
            }
            for (unsigned char i_7 = 2; i_7 < 16; i_7 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */int) arr_13 [i_0] [i_0] [(_Bool)1]);
                arr_24 [13] [(unsigned short)12] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */unsigned long long int) arr_4 [15U] [i_5] [2LL])) : (arr_14 [i_7 - 1] [i_7 + 2] [i_7 - 1])));
                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_5] [i_7 + 2] [i_0]))));
                var_26 = ((/* implicit */unsigned short) arr_18 [(unsigned short)4] [i_5] [i_5]);
                arr_25 [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned short)12])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_5] [(signed char)11] [i_7 + 1])))));
            }
            for (unsigned char i_8 = 2; i_8 < 16; i_8 += 3) /* same iter space */
            {
                var_27 = arr_3 [i_0] [i_0];
                var_28 &= ((/* implicit */long long int) arr_18 [i_8 + 1] [(signed char)5] [i_0]);
                /* LoopSeq 3 */
                for (short i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_10 = 2; i_10 < 16; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) (+((-(arr_14 [4U] [i_5] [i_8])))));
                        var_30 = ((/* implicit */short) var_16);
                        arr_33 [i_0] [i_5] [i_8] [i_9] [i_0] [i_10] = ((/* implicit */long long int) arr_10 [i_9] [i_10 - 1] [i_9]);
                    }
                    for (int i_11 = 1; i_11 < 17; i_11 += 3) 
                    {
                        arr_38 [i_11] [i_5] [6] [i_9] [i_11 - 1] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_11] [(unsigned short)7] [(unsigned short)14] [i_5] [i_0])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1144221019))))));
                        arr_39 [i_11] [i_5] [i_11] = ((/* implicit */unsigned int) arr_35 [i_0] [(unsigned short)14] [i_5] [i_8 - 1] [i_9] [i_11] [i_11]);
                    }
                    arr_40 [i_0] [(unsigned short)15] [(unsigned short)15] [12U] = ((/* implicit */short) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_9] [i_0] [i_9]))) : (arr_6 [i_9] [6] [i_9])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned short) arr_4 [i_0] [i_5] [i_8 + 2]);
                        var_32 += ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [15])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_10 [i_9] [14ULL] [i_8 + 2])));
                        var_33 += ((/* implicit */signed char) arr_41 [i_12] [11LL] [13ULL] [i_5] [i_0]);
                        var_34 = (!(((/* implicit */_Bool) arr_30 [i_12] [i_9] [i_8 - 2] [i_5] [i_0] [i_0])));
                        var_35 = ((/* implicit */signed char) ((int) arr_22 [12]));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        var_36 += ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)124))));
                        arr_46 [16ULL] [i_5] [i_8] [i_0] [16ULL] = ((/* implicit */int) arr_29 [i_5] [i_13]);
                        var_37 += ((/* implicit */unsigned int) arr_27 [(_Bool)1] [i_5]);
                        arr_47 [i_13] [(short)9] [i_9] [i_8] [i_5] [i_0] &= arr_16 [i_8 - 2];
                    }
                    var_38 = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0]);
                }
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    var_39 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_27 [i_8] [i_0])))) ? ((+(arr_14 [i_14] [i_5] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23157)))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    arr_54 [8U] [i_8] = ((/* implicit */unsigned short) var_15);
                    /* LoopSeq 4 */
                    for (long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [i_0] [i_0]);
                        arr_59 [i_0] [i_0] [(short)4] [(short)4] [(short)16] = ((/* implicit */unsigned char) arr_31 [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_0]);
                        var_42 = arr_9 [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_8 + 1];
                        arr_60 [14LL] &= ((/* implicit */unsigned int) var_0);
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_0] [i_0]))) : (-8050619329406855877LL)));
                        arr_65 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((long long int) arr_55 [i_8 + 1] [i_8 - 2] [i_8] [i_8] [i_8 + 1]));
                        var_44 = ((/* implicit */int) arr_42 [i_0] [i_5] [i_17]);
                    }
                    for (unsigned short i_18 = 0; i_18 < 18; i_18 += 2) 
                    {
                        var_45 = ((/* implicit */_Bool) arr_32 [i_18] [i_15] [i_8] [10] [i_0]);
                        var_46 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_15] [i_15] [i_8] [i_8 + 2] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8 + 2] [i_8 - 1] [i_8 - 1] [i_8 - 1]))) : (arr_48 [16LL] [i_18] [i_0] [i_0] [i_8 + 2])));
                    }
                    for (short i_19 = 3; i_19 < 16; i_19 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned short) var_1);
                        arr_72 [i_0] [i_0] [9LL] [(unsigned char)9] = ((/* implicit */short) ((unsigned int) arr_11 [i_19] [i_15] [i_8 + 1] [13] [(unsigned char)0]));
                        arr_73 [i_0] [i_5] [i_8] [9U] [i_19] = ((/* implicit */short) ((signed char) arr_36 [i_8 - 2] [i_15] [i_19 - 2] [i_19] [i_19] [i_19] [i_19]));
                        var_48 = ((/* implicit */short) 0);
                        var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) (+(arr_48 [i_5] [12LL] [i_5] [i_8 + 2] [i_19 - 1]))))));
                    }
                    arr_74 [i_8] [i_5] [i_8] [i_8] = ((/* implicit */unsigned int) var_10);
                }
            }
            /* LoopSeq 1 */
            for (unsigned short i_20 = 3; i_20 < 17; i_20 += 3) 
            {
                arr_78 [i_20] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_20] [i_20 - 1] [i_5] [i_0]))) : (arr_6 [(unsigned short)4] [i_5] [i_20]));
                arr_79 [i_0] [(signed char)14] [i_20] = ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_50 [i_0] [i_0] [15ULL])))));
            }
            /* LoopSeq 3 */
            for (unsigned int i_21 = 2; i_21 < 17; i_21 += 2) 
            {
                /* LoopNest 2 */
                for (int i_22 = 4; i_22 < 16; i_22 += 2) 
                {
                    for (long long int i_23 = 0; i_23 < 18; i_23 += 2) 
                    {
                        {
                            arr_88 [i_5] [1] [i_22] [i_23] = arr_2 [(unsigned char)3];
                            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_22 - 1] [i_22 + 2] [i_22 - 2] [i_22 - 3])) ? (((/* implicit */int) arr_21 [i_22 - 1] [i_22 + 2] [i_22 - 2] [i_22 - 3])) : (((/* implicit */int) var_10))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_24 = 2; i_24 < 14; i_24 += 3) 
                {
                    for (short i_25 = 0; i_25 < 18; i_25 += 3) 
                    {
                        {
                            arr_94 [i_25] [i_25] [i_21] [8LL] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_25] [i_21 - 2] [i_21 - 2])) ? (((/* implicit */int) arr_7 [i_25] [i_21 + 1] [i_21 + 1])) : (((/* implicit */int) arr_7 [i_25] [i_21 - 2] [i_21 - 2]))));
                            arr_95 [i_0] [i_25] [i_21] [i_24] [(short)3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 8050619329406855872LL))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_87 [i_21] [i_21 - 1] [i_21] [i_24 + 4] [i_25]))));
                            var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) arr_76 [i_0] [i_0]))));
                            var_52 = ((((/* implicit */_Bool) arr_17 [i_25] [i_25] [i_24 + 1] [i_21 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_17 [11LL] [i_25] [i_24 - 1] [i_21 + 1])));
                        }
                    } 
                } 
            }
            for (long long int i_26 = 0; i_26 < 18; i_26 += 3) 
            {
                var_53 &= ((/* implicit */unsigned char) arr_34 [i_0] [9] [i_0] [i_5] [i_26]);
                arr_98 [i_26] [i_5] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) (+(var_11)));
                var_54 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_61 [i_26] [(unsigned char)16])) ? (((((/* implicit */_Bool) arr_7 [(short)12] [i_5] [(short)12])) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_26] [i_0] [(short)0] [i_0])) : (((/* implicit */int) arr_89 [(unsigned char)4] [i_26] [i_5] [i_0])))) : (((/* implicit */int) var_12))));
                /* LoopSeq 1 */
                for (unsigned short i_27 = 1; i_27 < 15; i_27 += 3) 
                {
                    var_55 = ((/* implicit */unsigned short) 8050619329406855877LL);
                    /* LoopSeq 4 */
                    for (int i_28 = 2; i_28 < 17; i_28 += 3) 
                    {
                        arr_103 [(short)1] [(unsigned short)2] [i_5] &= ((/* implicit */short) arr_30 [i_27] [i_5] [i_26] [i_27 + 1] [i_28 + 1] [i_26]);
                        arr_104 [i_26] [i_26] [i_26] [i_5] [i_0] = ((/* implicit */unsigned short) var_1);
                        var_56 = (~(arr_92 [i_0] [i_5] [i_26] [i_26] [1U]));
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_102 [i_27 + 1] [i_27] [i_27 - 1] [i_27 + 2] [i_27 + 1] [i_27 + 1])) ? (((/* implicit */int) arr_102 [i_27 - 1] [i_27] [i_27 + 2] [i_27 + 1] [i_27 - 1] [i_27 + 2])) : (((/* implicit */int) arr_102 [i_27 + 3] [i_27] [i_27 + 3] [i_27 + 1] [i_27 - 1] [i_27])))))));
                        var_58 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [9U] [i_29] [i_27 + 3] [i_27] [i_27])) ? (((/* implicit */int) arr_45 [5] [i_27] [i_27 + 1] [5] [i_0])) : (((/* implicit */int) arr_45 [i_29] [i_29] [i_27 + 1] [i_27] [i_27]))));
                        var_59 += ((/* implicit */_Bool) ((int) (+(-8944831579925472435LL))));
                        var_60 = var_6;
                    }
                    for (unsigned char i_30 = 0; i_30 < 18; i_30 += 3) /* same iter space */
                    {
                        var_61 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_27 - 1] [i_5] [i_27] [i_27 - 1] [i_27])) ? (arr_4 [(_Bool)1] [i_27] [i_26]) : (((/* implicit */unsigned int) var_0))));
                        var_62 = ((/* implicit */int) min((var_62), (((/* implicit */int) 3955316888U))));
                        var_63 = ((/* implicit */int) min((var_63), (((/* implicit */int) arr_66 [i_5] [i_5] [i_27] [i_27 + 1] [i_27]))));
                        arr_110 [i_26] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8050619329406855888LL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                    }
                    for (unsigned char i_31 = 0; i_31 < 18; i_31 += 3) /* same iter space */
                    {
                        arr_114 [i_31] [i_5] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_31] [(unsigned short)2])) ? (arr_80 [i_0]) : (var_6)));
                        arr_115 [i_31] = ((/* implicit */unsigned short) arr_21 [i_0] [(_Bool)1] [i_0] [i_0]);
                    }
                    arr_116 [i_0] [i_5] [i_0] [i_26] [i_27] = ((/* implicit */_Bool) ((arr_108 [i_27] [i_26] [(unsigned char)3]) ^ (((/* implicit */int) arr_77 [10U] [10U]))));
                }
            }
            for (long long int i_32 = 0; i_32 < 18; i_32 += 3) 
            {
                var_64 = arr_89 [i_5] [i_5] [i_5] [i_5];
                arr_120 [i_0] [i_5] [(unsigned short)13] [i_32] = ((/* implicit */short) ((var_2) ? (((/* implicit */unsigned long long int) arr_27 [i_0] [i_32])) : (4503599627370240ULL)));
                var_65 = arr_43 [i_32] [i_5] [i_0];
            }
        }
        var_66 = ((/* implicit */long long int) max((var_66), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2075197231)) ? (((/* implicit */int) (unsigned char)198)) : ((-2147483647 - 1))))))))));
    }
}
