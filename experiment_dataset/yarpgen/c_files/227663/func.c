/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227663
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_13 = ((unsigned long long int) (unsigned char)237);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((long long int) (unsigned short)56491)))));
                            arr_11 [i_0] [i_1] [i_2] [i_3 + 3] [5U] [i_0] = ((int) (+(((3354987360U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_0])))))));
                            arr_12 [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-((+(((/* implicit */int) var_1))))))) - ((+(((long long int) var_3))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) arr_4 [i_1]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_6 - 1] [i_0])) ? (((/* implicit */int) arr_0 [i_6 + 1] [i_6])) : (((/* implicit */int) arr_7 [i_6 - 2] [i_6 + 1] [i_6] [i_6]))));
                                arr_21 [i_0] [i_6 + 1] [i_4] [3LL] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_6 + 1] [i_6 - 2] [i_6] [i_6 - 2] [i_6] [i_6]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) >> (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) - (1240449336U)))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 3; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_8] [i_7 + 1] [i_7 - 3] [i_4] [i_1] [i_0])) ? (((var_7) | (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 2365596393802946996ULL))))));
                                var_19 ^= ((/* implicit */signed char) arr_22 [i_0] [i_1] [i_4] [i_7] [i_8]);
                                arr_28 [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_7 - 2] [i_7 + 3] [i_7] [i_7 + 3] [i_7 + 4]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_9 = 2; i_9 < 14; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            {
                                arr_38 [i_11] [i_0] [i_9] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_34 [6LL] [i_11] [i_9] [i_9])) : (((/* implicit */int) (unsigned short)9044))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)9047)) & (((/* implicit */int) (unsigned short)9044))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 4; i_12 < 12; i_12 += 4) 
                    {
                        for (short i_13 = 1; i_13 < 14; i_13 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [i_0] [i_13 + 1]))));
                                var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)9044)) ? (((((/* implicit */int) arr_13 [i_9 + 1] [i_9 + 1] [i_9 + 1])) >> (((arr_25 [i_0] [(short)13] [i_9]) - (12366385528808023822ULL))))) : (arr_24 [i_13 - 1] [i_12 - 2] [i_9 - 2] [i_0] [i_0])));
                                var_23 = ((unsigned int) arr_36 [i_1] [i_1] [i_12 + 3] [2U] [i_13 - 1]);
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */int) var_5);
                }
                for (unsigned short i_14 = 0; i_14 < 15; i_14 += 4) /* same iter space */
                {
                    var_25 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_29 [i_0] [6U] [i_1] [i_14])) ? (arr_29 [i_0] [i_1] [i_14] [i_0]) : (((/* implicit */unsigned long long int) 16383U))))));
                    /* LoopNest 2 */
                    for (long long int i_15 = 2; i_15 < 14; i_15 += 4) 
                    {
                        for (int i_16 = 0; i_16 < 15; i_16 += 4) 
                        {
                            {
                                var_26 = ((unsigned int) ((short) (unsigned char)127));
                                var_27 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_2 [i_15] [i_15 - 1]))))));
                                arr_51 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(-1)));
                                var_28 = ((/* implicit */unsigned long long int) arr_32 [i_15 + 1] [i_15 - 2] [i_15 + 1] [i_15 - 2] [i_15 + 1] [i_15]);
                            }
                        } 
                    } 
                }
                for (unsigned short i_17 = 0; i_17 < 15; i_17 += 4) /* same iter space */
                {
                    var_29 = ((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned char)97)));
                    var_30 = ((/* implicit */signed char) (+((-(((16383U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_17] [i_1] [i_17])))))))));
                }
                /* LoopNest 3 */
                for (unsigned short i_18 = 0; i_18 < 15; i_18 += 4) 
                {
                    for (signed char i_19 = 2; i_19 < 14; i_19 += 4) 
                    {
                        for (long long int i_20 = 1; i_20 < 13; i_20 += 4) 
                        {
                            {
                                var_31 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_46 [i_0] [i_1])))) ^ (max((((/* implicit */long long int) (+(arr_37 [i_1] [i_20 + 2] [(unsigned char)5] [i_19] [i_1])))), (min((arr_4 [i_0]), (var_2)))))));
                                arr_62 [i_0] [(short)10] [i_20] [(unsigned short)7] [i_0] [i_20] = ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) arr_18 [i_19] [i_19])) ? (arr_29 [i_1] [i_18] [i_19 - 1] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11237))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-11257)) / ((-(arr_1 [i_0]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_21 = 1; i_21 < 11; i_21 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 4) 
        {
            arr_68 [i_21] [i_22] = ((/* implicit */unsigned char) arr_65 [(short)7] [i_22] [i_21]);
            /* LoopNest 3 */
            for (unsigned int i_23 = 0; i_23 < 12; i_23 += 4) 
            {
                for (unsigned short i_24 = 0; i_24 < 12; i_24 += 4) 
                {
                    for (long long int i_25 = 0; i_25 < 12; i_25 += 4) 
                    {
                        {
                            var_33 -= ((/* implicit */unsigned int) (+((((+(16081147679906604619ULL))) / (((/* implicit */unsigned long long int) ((-780486290) / (((/* implicit */int) arr_43 [i_21] [3U] [i_23] [i_24])))))))));
                            var_34 = ((/* implicit */unsigned short) ((_Bool) ((arr_76 [i_21 + 1] [i_21 - 1]) / (((/* implicit */long long int) arr_57 [i_21 + 1])))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_26 = 0; i_26 < 12; i_26 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_27 = 3; i_27 < 11; i_27 += 4) 
                {
                    for (int i_28 = 0; i_28 < 12; i_28 += 4) 
                    {
                        {
                            arr_87 [i_21] [i_22] [i_27] [i_26] [i_27] [i_28] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_27 - 1] [i_26] [i_21]))));
                            var_35 = ((/* implicit */unsigned char) var_2);
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_54 [i_21 - 1] [i_21 - 1] [i_21] [i_21 - 1])), ((~(((/* implicit */int) arr_54 [i_21 - 1] [i_21 - 1] [i_21] [i_21 - 1]))))));
                /* LoopNest 2 */
                for (signed char i_29 = 2; i_29 < 9; i_29 += 4) 
                {
                    for (unsigned char i_30 = 0; i_30 < 12; i_30 += 4) 
                    {
                        {
                            var_37 += ((/* implicit */unsigned char) 16081147679906604619ULL);
                            var_38 = ((/* implicit */unsigned long long int) var_3);
                        }
                    } 
                } 
            }
            var_39 = ((((/* implicit */int) arr_61 [i_22] [i_22] [i_21 + 1] [i_21 + 1] [4LL])) <= (((/* implicit */int) arr_47 [i_21] [i_21] [(unsigned char)5] [(short)13] [i_22] [i_22])));
            arr_94 [i_22] [i_21 + 1] = (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)30659)) ? (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_21 + 1] [i_21 + 1] [i_21 - 1] [i_22]))) : (var_2))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_31 = 0; i_31 < 12; i_31 += 4) 
        {
            var_40 = (-(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_21 + 1] [(signed char)6]))) - (var_8))));
            arr_97 [i_21] [i_31] [i_31] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)30659))))));
        }
    }
    for (long long int i_32 = 0; i_32 < 21; i_32 += 4) 
    {
        arr_100 [i_32] = ((/* implicit */unsigned int) min(((+(536870911))), (((/* implicit */int) ((((/* implicit */_Bool) arr_99 [i_32])) || (((/* implicit */_Bool) arr_99 [i_32])))))));
        var_41 = ((/* implicit */unsigned int) var_7);
        arr_101 [i_32] = ((/* implicit */long long int) ((unsigned long long int) (-(min((arr_99 [i_32]), (((/* implicit */unsigned int) arr_98 [i_32])))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_33 = 2; i_33 < 10; i_33 += 4) 
    {
        for (unsigned short i_34 = 0; i_34 < 11; i_34 += 4) 
        {
            for (short i_35 = 0; i_35 < 11; i_35 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_36 = 0; i_36 < 11; i_36 += 4) 
                    {
                        for (unsigned long long int i_37 = 0; i_37 < 11; i_37 += 4) 
                        {
                            {
                                var_42 += ((/* implicit */unsigned char) min((arr_66 [i_33 - 2]), (((/* implicit */unsigned long long int) (signed char)84))));
                                var_43 = ((/* implicit */int) (((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_93 [i_37] [i_34] [i_34] [i_37] [i_37] [i_34]))) <= (arr_74 [(unsigned char)10] [i_34] [i_35] [i_36] [i_36] [i_36])))))) != (max((((/* implicit */int) arr_23 [i_33] [i_33] [i_33 - 1] [i_33 - 2] [i_33] [i_33])), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_39 [i_34] [i_33])) : (((/* implicit */int) (signed char)-85))))))));
                                arr_114 [(unsigned short)9] [9] [i_35] [i_36] [i_37] = ((unsigned char) ((((/* implicit */int) arr_3 [i_33 + 1])) / (((/* implicit */int) arr_3 [i_33 + 1]))));
                                var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [i_33] [i_33] [i_36])) ? (((/* implicit */int) (unsigned short)51213)) : (((/* implicit */int) (unsigned short)56491))))) ? (arr_26 [10U] [i_37]) : ((~(((/* implicit */int) var_3))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_38 = 0; i_38 < 11; i_38 += 4) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((1278386543U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_96 [i_33])))))))))));
                        var_46 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) var_11)) + (arr_50 [i_33 - 1] [i_33 - 1] [9U] [i_33 - 1] [i_33 - 2]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3))))));
                        arr_117 [(unsigned char)5] [(unsigned char)5] [(unsigned short)3] [i_38] = ((/* implicit */unsigned char) ((int) ((int) ((unsigned int) var_8))));
                        var_47 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_33 + 1] [i_33 - 1] [i_33 + 1] [i_38])) == (((/* implicit */int) arr_7 [i_33] [i_33 - 1] [i_33 + 1] [i_38])))) || (((/* implicit */_Bool) arr_7 [i_33 + 1] [i_33 - 2] [i_33 + 1] [i_38]))));
                    }
                    arr_118 [4ULL] [i_34] [4ULL] = ((/* implicit */long long int) ((unsigned char) arr_10 [i_33] [i_33] [i_33] [i_33] [i_33]));
                    /* LoopNest 2 */
                    for (long long int i_39 = 3; i_39 < 9; i_39 += 4) 
                    {
                        for (long long int i_40 = 3; i_40 < 9; i_40 += 4) 
                        {
                            {
                                var_48 += ((/* implicit */signed char) (+(max((arr_70 [i_33 + 1] [i_39]), (arr_70 [i_33 + 1] [i_34])))));
                                arr_123 [i_33 - 2] [i_34] [i_35] [i_39] [i_40] = ((/* implicit */signed char) var_6);
                            }
                        } 
                    } 
                    arr_124 [i_33] [i_34] [i_34] [i_33] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)9044)), (min((arr_1 [i_33]), (((/* implicit */int) arr_0 [i_34] [i_34]))))))) ^ (((((arr_77 [i_33] [i_33] [i_34] [i_35] [i_35]) ^ (((/* implicit */unsigned long long int) 1697085828121262805LL)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_93 [i_33 - 2] [7ULL] [i_33 - 2] [i_33] [(unsigned char)2] [0ULL])))))));
                }
            } 
        } 
    } 
}
