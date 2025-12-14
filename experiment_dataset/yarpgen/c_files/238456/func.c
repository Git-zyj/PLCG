/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238456
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
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), (max((((/* implicit */int) ((signed char) (unsigned short)1))), (((((/* implicit */int) (unsigned char)22)) % (((/* implicit */int) (short)-32758))))))));
    var_21 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (unsigned short)65524))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (arr_0 [i_0] [i_0]))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_24 *= ((/* implicit */_Bool) ((unsigned short) var_11));
                        var_25 = ((/* implicit */_Bool) ((short) arr_5 [i_0] [i_0] [i_0] [i_0]));
                    }
                } 
            } 
            var_26 = ((/* implicit */short) ((signed char) arr_2 [i_0] [i_1]));
        }
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                {
                    arr_17 [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((arr_7 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) | (((/* implicit */unsigned int) ((int) arr_3 [i_0])))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_5] [i_7] [i_0] [i_0] = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_5] [i_0] [i_0]);
                                arr_23 [i_7] [i_6] [i_5] [i_7] [i_7] = ((/* implicit */unsigned char) arr_2 [i_7] [i_4 - 1]);
                                arr_24 [i_4 - 1] [i_4 - 1] [i_5] [i_7] [i_0] = ((/* implicit */signed char) ((arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1]) - (((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_11 [i_5] [i_4 - 1] [i_4 - 1]) : (-1576382908)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            for (long long int i_9 = 3; i_9 < 16; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_8] [i_8])))))) | (arr_9 [i_9 - 1])));
                        arr_34 [i_9] [i_9] [i_9] [i_9] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_9 - 2]))) + (((arr_5 [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_10])))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_28 += ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_11]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_14 [i_11] [i_11]) + (((/* implicit */long long int) 7))))) ? (((/* implicit */int) arr_27 [i_11] [i_11])) : (((/* implicit */int) arr_28 [i_11] [i_11] [i_11] [i_11]))))) : (((((/* implicit */_Bool) arr_31 [i_11] [i_11])) ? ((+(17458919531821703574ULL))) : (((/* implicit */unsigned long long int) arr_36 [i_11] [i_11])))));
        /* LoopSeq 1 */
        for (unsigned int i_12 = 1; i_12 < 7; i_12 += 2) 
        {
            arr_40 [i_11] [i_11] = ((/* implicit */unsigned int) max((((/* implicit */int) min(((signed char)8), ((signed char)59)))), ((~(arr_0 [i_11] [i_12 + 2])))));
            /* LoopNest 2 */
            for (unsigned int i_13 = 2; i_13 < 9; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned int) var_14);
                            var_30 = ((/* implicit */long long int) min((((/* implicit */int) ((short) arr_28 [i_12 + 3] [i_12 + 2] [i_12 + 2] [i_12 + 2]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_12 + 2] [i_12 - 1])) : (((/* implicit */int) (signed char)-8))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            arr_50 [i_11] [i_12 + 2] [i_12 - 1] [i_11] [i_11] = min((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_16] [i_16] [i_16] [i_16] [i_16])) ? (arr_8 [i_16] [i_11] [i_11] [i_11]) : (((/* implicit */int) arr_28 [i_11] [i_12 + 3] [i_12 + 3] [i_13 + 1]))))), (((long long int) arr_12 [i_12 - 1] [i_12 - 1] [i_12 - 1])))), (((/* implicit */long long int) (!(((arr_18 [i_11] [i_12 + 2] [i_13 - 2]) < (((/* implicit */long long int) arr_15 [i_11] [i_12 - 1] [i_16]))))))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((unsigned short) var_4)))));
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((((/* implicit */int) arr_26 [i_13] [i_13])) >> (((/* implicit */int) (unsigned short)11))))))) >= (((((/* implicit */_Bool) (signed char)84)) ? (2176922715U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23)))))));
                            arr_53 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_11] [i_13 - 1] [i_13 - 1] [i_13 - 1])) != (max((-107488427), (((/* implicit */int) (short)9142)))))))) >= (max((arr_25 [i_12 + 1] [i_12 + 1]), (((/* implicit */long long int) ((arr_42 [i_14] [i_14] [i_14] [i_14]) <= (((/* implicit */long long int) arr_10 [i_13] [i_17])))))))));
                            arr_54 [i_11] [i_11] [i_12 - 1] = ((/* implicit */_Bool) arr_9 [i_17]);
                        }
                        for (int i_18 = 3; i_18 < 6; i_18 += 1) 
                        {
                            arr_58 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_12 + 2] [i_13 - 1])) ? ((+(arr_37 [i_11]))) : (arr_37 [i_11])));
                            arr_59 [i_11] [i_11] [i_13 - 2] [i_13 - 2] [i_18 + 2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((signed char) arr_25 [i_11] [i_12 + 3]))), (var_8)));
                            var_33 = (!((_Bool)1));
                            var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (arr_7 [i_18] [i_12 - 1] [i_13 - 2] [i_14] [i_12 - 1])));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (~(max((max((var_11), (((/* implicit */unsigned int) (short)32755)))), (((/* implicit */unsigned int) arr_39 [i_12] [i_12 + 2])))))))));
                        }
                        arr_60 [i_13] [i_13] [i_11] = ((/* implicit */short) max(((+(arr_57 [i_11] [i_11] [i_12 + 1] [i_12 + 1] [i_13 - 1] [i_11]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((-2069429733) - (((/* implicit */int) arr_39 [i_12] [i_12 + 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_11]), (((/* implicit */short) var_13)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_49 [i_11] [i_12 + 1] [i_13 + 1] [i_14] [i_14] [i_14])) : (2551993617U))))))));
                    }
                } 
            } 
        }
        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_51 [i_11] [(unsigned char)4] [i_11]))))) ? (((((/* implicit */_Bool) 2069429712)) ? (arr_36 [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 18446744073709551585ULL))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_13))))))) : (((max((((/* implicit */long long int) (short)-10314)), (var_10))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_11] [i_11])))))))))))));
        /* LoopSeq 2 */
        for (unsigned char i_19 = 0; i_19 < 10; i_19 += 1) /* same iter space */
        {
            var_37 = ((/* implicit */long long int) arr_3 [i_11]);
            var_38 = ((/* implicit */signed char) arr_8 [i_11] [i_19] [i_19] [i_19]);
            arr_65 [i_19] [i_11] [i_19] = ((/* implicit */signed char) ((unsigned short) min((max((((/* implicit */unsigned int) arr_46 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_19])), (arr_10 [i_19] [i_11]))), (((/* implicit */unsigned int) var_3)))));
        }
        /* vectorizable */
        for (unsigned char i_20 = 0; i_20 < 10; i_20 += 1) /* same iter space */
        {
            arr_68 [i_11] = ((/* implicit */unsigned short) ((229967943) < (((((/* implicit */_Bool) -999521615)) ? (arr_12 [i_11] [i_20] [i_20]) : (((/* implicit */int) arr_66 [i_11] [i_20] [i_20]))))));
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_16 [i_11] [i_11] [i_11] [i_11]))));
            /* LoopSeq 2 */
            for (int i_21 = 0; i_21 < 10; i_21 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (unsigned char i_23 = 0; i_23 < 10; i_23 += 1) 
                    {
                        {
                            arr_77 [i_11] [i_11] = ((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_11] [i_23]))) != (arr_18 [i_20] [i_21] [i_21])))));
                            arr_78 [i_23] [i_11] [i_20] [i_11] [i_11] = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned int) arr_11 [i_11] [i_20] [i_20])) & (arr_76 [i_11] [i_11] [i_11] [i_11] [i_23]))));
                            arr_79 [i_21] [i_11] = ((/* implicit */short) ((((/* implicit */int) arr_32 [i_23] [i_23] [i_22] [i_22] [i_23])) * (((/* implicit */int) arr_4 [i_11]))));
                            arr_80 [i_20] [i_21] [i_11] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_22] [i_20] [i_21] [i_21])) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (1897714346U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32751))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_11] [i_11] [i_11] [i_11])))));
                            arr_81 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_11])) ? (((-1142447143) + (((/* implicit */int) (signed char)15)))) : (arr_61 [i_11])));
                        }
                    } 
                } 
                var_40 = ((/* implicit */signed char) ((long long int) arr_66 [i_11] [i_11] [i_11]));
                var_41 = ((/* implicit */signed char) ((var_6) / (arr_57 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
                var_42 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_11] [i_11] [i_11])) ? (arr_61 [i_11]) : (((/* implicit */int) (short)-32747))))) ? (((/* implicit */int) ((short) arr_29 [i_11]))) : (((/* implicit */int) arr_19 [i_21] [i_21])));
            }
            for (unsigned int i_24 = 0; i_24 < 10; i_24 += 1) 
            {
                arr_84 [i_11] [(short)0] [i_11] &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_11] [i_20]))));
                arr_85 [i_11] [i_11] [i_24] = ((/* implicit */unsigned short) arr_41 [i_11] [i_11] [i_11]);
                var_43 = ((/* implicit */_Bool) ((short) arr_83 [i_11] [i_11] [i_24]));
            }
        }
    }
    /* LoopNest 2 */
    for (signed char i_25 = 2; i_25 < 22; i_25 += 2) 
    {
        for (unsigned int i_26 = 3; i_26 < 23; i_26 += 2) 
        {
            {
                arr_93 [i_26 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_89 [i_25])) ? ((~(((/* implicit */int) var_19)))) : (((/* implicit */int) arr_90 [i_26 - 1] [i_26 + 1] [i_26 + 1]))))) ? (min((((long long int) arr_89 [i_25 + 1])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_87 [i_25] [i_25])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_90 [i_25 - 1] [i_25 + 1] [i_25 + 1]))) : (arr_89 [i_25 - 2])))))) : (((((var_16) ? (arr_86 [i_26]) : (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_25 + 1] [i_25 - 2] [i_26 - 1]))))) - (arr_86 [i_25 + 3])))));
                var_44 = ((/* implicit */int) ((min((max((((/* implicit */int) arr_87 [i_25] [i_25 + 2])), (-3))), (((((/* implicit */_Bool) arr_88 [i_25] [i_25])) ? (((/* implicit */int) arr_90 [i_26 + 2] [i_25 + 2] [i_25 + 2])) : (((/* implicit */int) var_13)))))) == (((/* implicit */int) ((max((((/* implicit */unsigned int) var_19)), (arr_92 [i_25 + 1]))) == (((/* implicit */unsigned int) (-(((/* implicit */int) arr_90 [i_26 + 1] [i_25] [i_25]))))))))));
                var_45 = ((/* implicit */unsigned char) max((arr_91 [i_25] [i_26 - 3]), ((~(min((((/* implicit */int) (unsigned char)248)), (6)))))));
            }
        } 
    } 
}
