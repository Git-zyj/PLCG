/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240707
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1] [i_4])) ? (((/* implicit */int) arr_6 [i_0] [i_2 + 2] [i_4])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_4])))), (((((/* implicit */int) arr_8 [i_3])) * (((/* implicit */int) var_9))))));
                                arr_11 [(short)6] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */short) var_12);
                                var_16 -= ((/* implicit */int) min((((/* implicit */long long int) arr_8 [i_2 + 1])), (((((arr_0 [(_Bool)1]) > (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [5ULL] [(_Bool)1] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_4] [i_3] [i_2]), (arr_6 [i_0] [i_0] [i_0]))))) : (((var_5) * (((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)0] [(_Bool)0])))))))));
                                arr_12 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) arr_6 [4U] [i_1] [i_2])), (min((((/* implicit */int) arr_8 [i_4])), (arr_1 [i_0] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_16 [i_5] [i_5] [i_5] [i_5] [i_6])), (((((/* implicit */long long int) ((var_0) + (arr_7 [i_0])))) + (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) arr_1 [i_2] [i_2]))))))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_2 - 1] [1U] [i_6])), (arr_6 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) max((arr_13 [i_0] [i_2] [i_6]), (((/* implicit */signed char) arr_14 [i_0] [i_1] [(unsigned char)2] [i_5] [i_6])))))))) / (((arr_4 [i_1] [i_5 - 2] [i_6]) ? (((arr_8 [i_0]) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (var_12)));
                                var_20 += ((/* implicit */signed char) arr_18 [i_0]);
                                var_21 = ((/* implicit */_Bool) arr_17 [i_8] [i_1] [i_2 + 1] [i_7]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_22 = min((((/* implicit */long long int) ((arr_25 [i_2 + 2] [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]) && (((/* implicit */_Bool) arr_13 [i_10] [i_10 - 1] [i_10 - 1]))))), (((((/* implicit */_Bool) arr_7 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((arr_5 [i_0] [i_0]) ? (arr_18 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))))));
                                var_23 = ((/* implicit */short) var_7);
                            }
                        } 
                    } 
                    arr_27 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_9), (var_10)))), (min((((/* implicit */unsigned short) var_12)), (var_2)))))) ? (((((/* implicit */_Bool) ((arr_18 [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_26 [(short)0] [i_1] [i_2])))))) ? (((var_12) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) min((min((((/* implicit */unsigned short) arr_10 [9LL] [i_0] [i_1] [i_2] [0LL])), (arr_17 [i_0] [i_1] [i_2 - 1] [i_2 + 1]))), (((/* implicit */unsigned short) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_24 [i_0] [i_1] [(unsigned short)7] [i_2 + 2] [i_2 + 2]))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
    {
        arr_32 [i_11] = ((/* implicit */_Bool) arr_28 [i_11] [(unsigned short)8]);
        arr_33 [i_11] = ((/* implicit */unsigned char) arr_29 [i_11] [i_11]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        var_24 = ((((/* implicit */_Bool) arr_34 [i_12] [i_12])) && (((/* implicit */_Bool) arr_34 [i_12] [i_12])));
        /* LoopNest 2 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (unsigned short i_14 = 3; i_14 < 22; i_14 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_39 [i_12] [(signed char)20]))));
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_12] [i_13 - 1] [20LL])) ? (((/* implicit */long long int) ((var_0) >> (((((/* implicit */int) var_6)) + (80)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_12] [i_13 - 1] [i_14 - 2]))) : (arr_36 [i_12] [i_12])))));
                }
            } 
        } 
        var_27 = ((var_11) >= (arr_36 [i_12] [i_12]));
    }
    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 3) 
    {
        var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_40 [i_15])) ? (((/* implicit */int) arr_40 [i_15])) : (((/* implicit */int) arr_42 [i_15] [i_15])))), (((/* implicit */int) arr_40 [i_15]))));
        /* LoopSeq 1 */
        for (unsigned short i_16 = 0; i_16 < 25; i_16 += 2) 
        {
            var_29 ^= ((/* implicit */long long int) ((var_12) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_40 [i_15]))));
            var_30 += ((/* implicit */long long int) arr_44 [i_15]);
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_8))));
        }
        /* LoopSeq 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_47 [i_15] [i_17] = ((/* implicit */_Bool) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_45 [i_15] [i_17] [i_15])) ? (((/* implicit */int) arr_40 [i_15])) : (((/* implicit */int) var_2)))) >= (((/* implicit */int) arr_41 [i_15] [i_17]))))), (min((arr_45 [i_15] [i_17] [i_17]), (((arr_41 [i_15] [i_17]) ? (((/* implicit */int) var_10)) : (arr_45 [i_15] [i_15] [i_15])))))));
            var_32 = arr_46 [i_15] [i_17];
            var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_15])) ? (min((((var_4) ? (((/* implicit */int) arr_41 [i_17] [i_17])) : (((/* implicit */int) var_13)))), (((/* implicit */int) arr_43 [i_17])))) : (((/* implicit */int) max((arr_46 [i_15] [i_17]), (((var_3) && (((/* implicit */_Bool) arr_45 [(unsigned short)3] [(unsigned short)3] [(unsigned short)3])))))))));
            var_34 = arr_44 [i_17];
        }
        for (long long int i_18 = 2; i_18 < 24; i_18 += 3) 
        {
            var_35 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((((/* implicit */_Bool) arr_45 [i_18] [i_18] [i_18 - 1])) ? (((/* implicit */int) arr_51 [i_15])) : (((/* implicit */int) var_14))))));
            /* LoopSeq 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) var_13))));
                /* LoopSeq 2 */
                for (long long int i_20 = 3; i_20 < 22; i_20 += 3) 
                {
                    var_37 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_40 [i_18 + 1])) ? (((/* implicit */int) arr_46 [i_20 - 2] [i_18])) : (((/* implicit */int) arr_40 [i_20 - 3])))) - (((arr_46 [i_15] [i_19]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_53 [i_15] [i_18 - 2] [i_19] [i_20 - 3]))))));
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) arr_46 [i_15] [i_18 - 1]))));
                    arr_56 [i_15] [i_18 - 2] [i_19] [i_20] = ((/* implicit */short) var_3);
                }
                for (signed char i_21 = 1; i_21 < 24; i_21 += 3) 
                {
                    arr_59 [i_15] [i_18 - 2] [(unsigned char)5] [i_19] [i_21 - 1] = ((/* implicit */unsigned long long int) arr_58 [i_15] [i_18] [i_19] [i_21]);
                    var_39 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_15] [i_18] [i_15] [i_15] [i_19])) ? (arr_50 [i_21] [2LL] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_15])))));
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_40 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_49 [i_19] [i_21] [i_22])), (var_14)))) / (((/* implicit */int) arr_53 [(signed char)22] [i_19] [i_19] [i_18]))))) ? (((/* implicit */int) arr_51 [i_15])) : (((((/* implicit */_Bool) arr_58 [i_15] [i_15] [i_15] [i_18 - 1])) ? (((/* implicit */int) arr_40 [i_15])) : (((/* implicit */int) var_1))))));
                        var_41 = ((/* implicit */signed char) min((arr_50 [i_19] [i_21] [13LL]), (arr_50 [i_15] [(unsigned char)14] [i_22])));
                        var_42 &= ((((/* implicit */long long int) ((((/* implicit */int) arr_44 [i_15])) << (((min((((/* implicit */unsigned int) arr_58 [i_21] [i_21] [i_21] [i_21])), (var_0))) - (83U)))))) <= (((((arr_52 [i_19] [i_22]) ^ (((/* implicit */long long int) var_0)))) | (((/* implicit */long long int) arr_45 [i_15] [i_21] [i_22])))));
                        var_43 = ((/* implicit */unsigned short) max((var_43), (arr_57 [i_21 + 1] [i_18 - 2] [i_19] [i_21 - 1])));
                    }
                    for (unsigned int i_23 = 0; i_23 < 25; i_23 += 3) 
                    {
                        var_44 = ((/* implicit */signed char) var_5);
                        arr_66 [13ULL] [4U] [i_18] [i_19] [13ULL] [18LL] = ((/* implicit */long long int) arr_43 [i_23]);
                        var_45 = ((/* implicit */unsigned char) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_18 - 2] [(short)5])))));
                    }
                    arr_67 [i_15] [i_18 + 1] [i_19] [i_21] = ((/* implicit */long long int) ((((/* implicit */int) arr_53 [i_15] [i_15] [i_19] [(_Bool)1])) / (((/* implicit */int) arr_48 [i_21] [i_19] [i_15]))));
                    var_46 ^= ((/* implicit */unsigned long long int) min((((((arr_55 [i_21] [i_21] [i_19] [i_21] [i_21]) >> (((arr_60 [i_21]) + (3734005017274023973LL))))) >> (((/* implicit */int) var_10)))), (((/* implicit */long long int) var_6))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_24 = 0; i_24 < 25; i_24 += 2) 
                {
                    var_47 = ((/* implicit */long long int) arr_57 [i_15] [i_18] [i_15] [i_24]);
                    /* LoopSeq 1 */
                    for (short i_25 = 1; i_25 < 23; i_25 += 3) 
                    {
                        var_48 = ((/* implicit */unsigned short) arr_48 [i_18 + 1] [i_18] [i_18 + 1]);
                        var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_25 + 2])) ? (((/* implicit */int) arr_58 [i_15] [i_19] [i_24] [i_24])) : (((/* implicit */int) arr_63 [i_18 + 1] [i_18 + 1] [i_25 + 1]))));
                    }
                }
                var_50 = arr_46 [1U] [i_19];
            }
            for (long long int i_26 = 1; i_26 < 23; i_26 += 3) 
            {
                arr_76 [i_26] = ((/* implicit */unsigned int) arr_44 [i_18]);
                var_51 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_62 [i_15] [i_18 - 1] [i_15] [i_15] [i_18]) && (arr_46 [i_26 + 1] [i_18])))) != (((/* implicit */int) min((((/* implicit */unsigned short) arr_49 [i_26] [(_Bool)1] [(_Bool)1])), (arr_72 [2LL] [2LL]))))));
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 25; i_27 += 2) 
                {
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        {
                            var_52 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_28])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min((((/* implicit */short) var_9)), (arr_65 [i_15] [i_18] [i_26] [i_27] [i_28]))))));
                            arr_81 [i_15] [i_18 - 2] [i_26] [i_27] [i_27] [i_26] [i_28] = ((/* implicit */long long int) arr_61 [i_15] [i_15] [i_15] [i_15] [i_15]);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_29 = 0; i_29 < 25; i_29 += 2) 
            {
                arr_84 [i_15] [i_18] [i_15] [i_18 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_65 [i_15] [i_18] [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_51 [i_18 - 2]))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_57 [(_Bool)1] [i_18] [i_18] [i_29])) : (((/* implicit */int) arr_65 [i_15] [i_18] [i_29] [i_15] [i_15]))))));
                /* LoopSeq 1 */
                for (long long int i_30 = 0; i_30 < 25; i_30 += 2) 
                {
                    var_53 = ((/* implicit */long long int) arr_51 [i_15]);
                    arr_87 [i_15] [i_18 - 1] [i_29] [i_30] [i_15] [i_29] = ((/* implicit */long long int) var_14);
                }
                /* LoopSeq 3 */
                for (unsigned int i_31 = 1; i_31 < 21; i_31 += 3) 
                {
                    var_54 = var_4;
                    arr_91 [i_15] [i_15] [(unsigned char)3] [i_31] = ((/* implicit */long long int) var_14);
                }
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    arr_96 [i_15] [i_29] [i_29] [i_32] [i_15] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_83 [i_15] [i_15] [i_15] [i_15])) | (((/* implicit */int) var_1)))) & (((/* implicit */int) arr_46 [i_18] [i_29]))));
                    var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) arr_48 [6LL] [i_18 + 1] [(_Bool)0]))));
                }
                for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
                {
                    var_56 = ((/* implicit */_Bool) arr_53 [i_15] [i_15] [i_15] [i_15]);
                    var_57 = ((/* implicit */_Bool) max((var_57), (((/* implicit */_Bool) arr_88 [i_29] [i_29] [i_29] [i_18 + 1] [(unsigned short)8]))));
                    arr_99 [i_15] [i_18 - 1] [i_29] [i_33] = ((/* implicit */unsigned int) ((arr_69 [i_33 - 1] [i_18 - 1] [i_29]) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                }
                arr_100 [i_15] = ((/* implicit */unsigned long long int) arr_82 [i_18] [i_29]);
            }
        }
    }
    var_58 = ((/* implicit */long long int) var_1);
}
