/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48442
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
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_6 [i_2] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) max(((-(67108863))), ((~(((/* implicit */int) ((((/* implicit */int) (signed char)-61)) >= (arr_0 [i_0] [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((4467570830351532032ULL) ^ (((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)1)) ^ (arr_0 [i_0 - 2] [i_0 - 2]))), (((/* implicit */int) ((unsigned char) 1507506158U))))))));
                                arr_12 [i_4] [i_1] [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) (short)3147)), (((int) arr_8 [i_4] [i_4] [i_4] [i_4]))));
                                var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3147))) == (0ULL)));
                                arr_13 [i_0 + 1] [(unsigned short)4] [i_1] [i_4] [i_3 + 1] [i_0 + 1] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_2]);
                                arr_14 [i_4] [i_4] [i_4] = ((/* implicit */int) ((unsigned int) ((int) arr_9 [i_0 - 2] [i_0 - 1])));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) arr_17 [i_1]));
                    arr_19 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */long long int) (~(arr_3 [i_0 - 2] [i_0 + 1])));
                }
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    arr_22 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (~(((var_2) | (((/* implicit */int) (short)3147))))))) ? (((max((arr_17 [i_6]), ((_Bool)1))) ? (((((/* implicit */_Bool) -9223372036854775800LL)) ? (arr_15 [i_0] [i_6] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)135))))), (((2733805804U) | (1052362908U)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        var_17 |= ((((/* implicit */int) arr_11 [i_0] [7] [7] [i_0] [i_0] [i_1] [i_0])) % (((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) < (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                        arr_26 [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((arr_2 [i_0 + 1]) / (arr_2 [i_0 - 1])))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_0 - 2] = ((/* implicit */unsigned char) ((max((9223372036854775799LL), (((/* implicit */long long int) (short)-3147)))) | (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                        arr_30 [i_0] [i_1] [i_1] [i_8] [8] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(5699696548194956178LL)))), (18446744073709551599ULL)));
                        arr_31 [i_1] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -7461813020752869893LL)), (18446744073709551615ULL)));
                    }
                }
                arr_32 [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((unsigned int) 1))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) 1391355424)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 9; i_9 += 3) 
    {
        for (short i_10 = 1; i_10 < 6; i_10 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((int) 2083194669))) ^ (((((/* implicit */_Bool) arr_4 [i_10] [i_10] [i_10])) ? (2263323196474036081LL) : (((/* implicit */long long int) arr_33 [i_9 + 1] [i_10]))))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    for (int i_12 = 3; i_12 < 9; i_12 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_13 = 1; i_13 < 9; i_13 += 1) 
                            {
                                var_19 += ((/* implicit */unsigned long long int) (unsigned char)156);
                                arr_46 [6LL] [6LL] |= ((/* implicit */short) min((max(((~(((/* implicit */int) arr_11 [i_9] [i_9] [(unsigned char)8] [6ULL] [(unsigned char)8] [i_12] [6ULL])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-5337)))))), ((-(arr_41 [i_9 - 2] [i_10 - 1] [i_11 + 1] [i_11] [i_10 - 1])))));
                                arr_47 [6LL] |= ((/* implicit */int) (!(((/* implicit */_Bool) min((((2787461147U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_10] [(signed char)12] [i_10]))))))))));
                            }
                            arr_48 [i_12] [i_9] [1] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) 390201990579057633ULL)) ? (((/* implicit */long long int) 863188998)) : (-205696861516660286LL))))), (((/* implicit */long long int) (short)15))));
                            var_20 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-1)), (arr_33 [i_9 - 2] [i_9 - 2])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9] [(_Bool)1] [i_10] [i_9] [i_11] [i_12]))) - (var_4))) : (((/* implicit */unsigned long long int) -863189014)))), (((/* implicit */unsigned long long int) arr_0 [i_12 - 2] [i_10 + 1]))));
                        }
                    } 
                } 
                arr_49 [i_9] = min((((((/* implicit */_Bool) arr_42 [i_9] [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9])) ? (arr_0 [6LL] [6LL]) : (((/* implicit */int) arr_40 [i_9] [i_9] [i_9] [i_9 - 2] [i_9])))), ((+(((/* implicit */int) min((((/* implicit */unsigned char) arr_36 [i_9])), ((unsigned char)96)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 22; i_14 += 3) 
    {
        for (unsigned long long int i_15 = 3; i_15 < 21; i_15 += 3) 
        {
            {
                arr_54 [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_53 [i_15 + 1] [i_15 - 2] [i_15 + 1]))))));
                /* LoopSeq 1 */
                for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (arr_50 [i_16])));
                    /* LoopSeq 2 */
                    for (int i_17 = 0; i_17 < 22; i_17 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */int) (!((_Bool)1)))), (min((arr_61 [i_15 - 1] [i_15 - 2]), (arr_61 [i_15 - 2] [i_15 - 1]))))))));
                        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -863189014)))) - (((((/* implicit */_Bool) arr_51 [i_16] [i_16])) ? (min((((/* implicit */long long int) (unsigned char)156)), (7461813020752869893LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))));
                        arr_62 [i_14] [i_14] [i_14] [i_14] = ((int) max((17045974936766264370ULL), (((/* implicit */unsigned long long int) (unsigned char)164))));
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 1; i_18 < 21; i_18 += 4) 
                        {
                            arr_65 [i_14] [(unsigned char)11] [(short)1] [i_14] [i_14] [0U] [i_18] = ((/* implicit */long long int) 878191627U);
                            var_24 = ((/* implicit */int) 1225669533U);
                        }
                        for (short i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            var_25 -= ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_14] [i_14] [i_14]))) : (10447374474894429846ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1)), (0U)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)177))) : (-7461813020752869880LL))) != (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_19] [i_19])))))))));
                            arr_68 [i_14] [i_14] [i_16] [i_14] [i_19] = ((/* implicit */unsigned long long int) 7461813020752869893LL);
                        }
                    }
                    for (unsigned int i_20 = 1; i_20 < 18; i_20 += 3) 
                    {
                        arr_71 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) arr_58 [i_15 - 1] [i_14] [i_14] [i_14] [i_14])))));
                        var_26 ^= ((/* implicit */signed char) 1400769136943287245ULL);
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_21 = 3; i_21 < 18; i_21 += 3) 
                    {
                        var_27 = (~(arr_61 [i_14] [i_14]));
                        arr_74 [i_16] |= ((/* implicit */int) 11781434365621746785ULL);
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_16] [i_14] [i_15 - 1])) ? (((/* implicit */int) arr_57 [i_16] [i_14] [i_15 + 1])) : (((/* implicit */int) var_0))));
                    }
                    for (unsigned long long int i_22 = 2; i_22 < 18; i_22 += 2) 
                    {
                        var_29 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)203))));
                        var_30 = ((/* implicit */int) arr_77 [i_14]);
                        arr_78 [i_14] [i_14] [i_14] [i_14] [i_22] [i_22] = ((/* implicit */unsigned long long int) arr_63 [i_14] [i_15 + 1] [i_16] [i_14]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_23 = 1; i_23 < 19; i_23 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_77 [i_14]), (((/* implicit */unsigned char) var_7))))) >> ((((+(arr_69 [i_14] [i_14] [i_14] [i_14]))) - (506645994))))))));
                        arr_81 [i_14] [i_14] = ((/* implicit */_Bool) arr_80 [i_14] [i_15] [i_14]);
                    }
                    /* vectorizable */
                    for (short i_24 = 0; i_24 < 22; i_24 += 3) 
                    {
                        var_32 = ((/* implicit */short) 29);
                        /* LoopSeq 1 */
                        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                        {
                            arr_87 [i_14] [i_16] [i_16] [i_24] [i_24] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_63 [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_16])) != (((/* implicit */int) (unsigned char)0))));
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_14] [i_14] [i_16] [i_24] [i_25 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))) : (arr_86 [i_14] [i_14] [i_14] [i_14] [i_25] [i_16])))) ? ((~(((/* implicit */int) arr_63 [i_14] [(short)8] [i_16] [i_14])))) : (((/* implicit */int) arr_51 [i_14] [i_14]))));
                            var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_15] [i_24] [i_24] [i_16] [i_25 - 1])) ? (arr_53 [7] [(unsigned char)12] [0]) : (14517732487569371983ULL)));
                        }
                    }
                    var_35 = max((((/* implicit */unsigned int) min((arr_57 [i_15 + 1] [i_14] [i_15 - 2]), (arr_57 [i_15 - 1] [i_14] [i_15 - 1])))), (((((/* implicit */_Bool) arr_57 [i_15 - 2] [i_14] [i_15 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2482))) : (2914289968U))));
                }
            }
        } 
    } 
}
