/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46479
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((arr_1 [i_0]) ? (((/* implicit */long long int) arr_0 [i_0])) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) - (arr_2 [i_0]))))) : (((/* implicit */long long int) ((arr_0 [i_0]) << (((16252928) - (16252923))))))));
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((8444249301319680LL) != (8444249301319672LL)))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 3; i_2 < 9; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 4; i_4 < 7; i_4 += 4) 
                {
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (arr_2 [i_2 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) != (((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) (_Bool)0))))))))));
                        var_23 = ((/* implicit */unsigned int) arr_11 [i_4] [i_4] [i_4 + 2] [i_4]);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_5 = 2; i_5 < 7; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_24 = ((/* implicit */signed char) arr_0 [i_5]);
                var_25 |= ((/* implicit */unsigned char) arr_3 [i_5]);
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_7 [i_5] [i_5 - 2]))))) ? (arr_12 [i_1] [0U]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_8 [i_1])))))));
                var_27 *= ((/* implicit */_Bool) ((unsigned int) arr_3 [i_1]));
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_12 [i_5 + 1] [i_1]))));
            }
            for (unsigned char i_7 = 2; i_7 < 9; i_7 += 4) 
            {
                var_29 += ((/* implicit */unsigned char) arr_3 [i_7]);
                var_30 |= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_19 [i_1] [i_1] [i_1] [i_1])), (arr_12 [i_5 + 3] [i_5 - 1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */unsigned short) arr_1 [i_5]))))))));
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_5 [i_1]))));
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) arr_11 [i_8] [i_1] [i_1] [i_1]))));
                    var_33 = ((/* implicit */signed char) min((var_33), ((signed char)0)));
                    /* LoopSeq 4 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
                        var_35 |= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((signed char) arr_10 [i_1] [(_Bool)0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_22 [i_9] [i_8] [i_8] [i_7] [i_5] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (arr_22 [i_8] [0U] [i_8] [i_8] [(signed char)1] [i_8]))));
                        var_36 = ((/* implicit */signed char) min((var_36), (var_13)));
                        var_37 = ((/* implicit */unsigned char) arr_16 [i_7] [i_5] [i_1]);
                        var_38 -= ((/* implicit */int) arr_4 [i_1]);
                    }
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (-(min((((/* implicit */long long int) arr_15 [i_8])), (min((((/* implicit */long long int) arr_0 [i_1])), (arr_2 [(signed char)9]))))))))));
                        var_40 = ((/* implicit */int) arr_7 [i_1] [(unsigned char)9]);
                        var_41 = ((/* implicit */_Bool) ((signed char) arr_30 [i_10] [i_10] [i_10] [i_10] [i_5 - 2]));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        var_42 = ((/* implicit */signed char) arr_8 [i_7]);
                        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) (_Bool)1))));
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_1])), (-3564420796141332032LL)))) ? (((/* implicit */int) max((arr_23 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 2]), (((/* implicit */unsigned char) arr_8 [i_8]))))) : (((/* implicit */int) arr_23 [i_11] [i_7] [i_5 + 3] [i_1]))));
                        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) var_14))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned short) arr_0 [i_1]);
                        var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) arr_18 [i_12] [i_8] [i_7] [i_5]))));
                    }
                    var_48 = ((/* implicit */int) (_Bool)1);
                }
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_49 *= ((/* implicit */int) 474545455U);
                            var_50 = ((/* implicit */int) ((signed char) var_8));
                            var_51 = ((/* implicit */_Bool) ((arr_24 [i_14] [i_14] [i_13] [i_1] [i_5] [i_1] [i_1]) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) ((unsigned char) arr_1 [i_1]))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1])))))))));
                            var_52 = ((/* implicit */_Bool) arr_13 [i_5 + 1]);
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        var_53 = arr_14 [i_1];
                        var_54 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_5 + 1] [i_5 + 1])) * (((/* implicit */int) arr_7 [i_5 + 1] [i_5 - 2]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        var_55 = ((/* implicit */unsigned int) var_0);
                        var_56 = ((signed char) arr_19 [i_18] [i_16] [i_5 - 1] [i_1]);
                        var_57 = ((/* implicit */unsigned int) arr_9 [i_5 + 1]);
                    }
                    var_58 = ((/* implicit */int) arr_40 [i_16] [i_15] [i_1] [i_1]);
                }
                for (signed char i_19 = 0; i_19 < 10; i_19 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_20 = 0; i_20 < 10; i_20 += 4) 
                    {
                        var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_20] [i_20] [i_19] [i_5 + 1] [i_1] [i_1])) ? (arr_26 [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [i_5]) : (arr_26 [i_19] [i_5 - 2] [i_15] [i_5 + 1] [i_5] [i_5 - 2])));
                        var_60 = arr_47 [i_5 - 1] [i_5 - 2] [i_5] [i_5 + 3] [i_5];
                    }
                    var_61 = ((/* implicit */_Bool) arr_54 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                }
                var_62 = ((/* implicit */int) min((var_62), (((((/* implicit */_Bool) arr_48 [i_5 + 3] [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 - 2])) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (signed char)108))))));
                var_63 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-127)) && (((/* implicit */_Bool) arr_12 [i_5 + 3] [i_5 - 1]))));
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_64 &= ((/* implicit */long long int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                var_65 = ((/* implicit */long long int) max((var_65), (((/* implicit */long long int) arr_1 [i_1]))));
                var_66 ^= ((/* implicit */unsigned char) ((_Bool) ((long long int) arr_13 [i_5 + 2])));
                var_67 = ((/* implicit */long long int) ((signed char) (-(474545430U))));
            }
            for (unsigned int i_22 = 0; i_22 < 10; i_22 += 4) 
            {
                var_68 = ((((/* implicit */int) (!((_Bool)1)))) <= (((((/* implicit */_Bool) arr_61 [i_5] [i_5 - 1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_61 [i_5] [i_5 - 1])))));
                var_69 = ((/* implicit */_Bool) min((var_69), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((~(((/* implicit */int) arr_55 [i_5 + 2] [i_5 - 2] [i_5] [i_5 + 2] [2ULL])))) : (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_18)))), ((((_Bool)0) ? (((/* implicit */int) (unsigned short)13844)) : (((/* implicit */int) (unsigned char)86)))))))))));
            }
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_24 = 0; i_24 < 10; i_24 += 4) 
            {
                var_70 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_24] [i_23])) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) arr_65 [i_24] [i_1] [1] [i_1]))))) & (arr_2 [i_23])));
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 10; i_25 += 4) 
                {
                    for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                    {
                        {
                            var_71 = ((/* implicit */unsigned int) min((var_71), (min((((((/* implicit */_Bool) arr_22 [i_26 + 1] [i_26] [i_26 + 1] [i_26] [i_26] [i_26 + 1])) ? (arr_22 [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_26] [i_26] [i_26 + 1]) : (arr_22 [i_26 + 1] [i_26] [i_26 + 1] [i_26 + 1] [i_26] [i_26 + 1]))), (arr_25 [i_1])))));
                            var_72 = ((/* implicit */int) max((var_72), (((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_27 = 1; i_27 < 7; i_27 += 4) /* same iter space */
            {
                var_73 = ((/* implicit */_Bool) max((var_73), (((/* implicit */_Bool) ((unsigned long long int) arr_66 [i_27 + 2] [i_27 + 2] [i_1])))));
                /* LoopNest 2 */
                for (signed char i_28 = 0; i_28 < 10; i_28 += 4) 
                {
                    for (unsigned int i_29 = 0; i_29 < 10; i_29 += 4) 
                    {
                        {
                            var_74 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) * (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_23] [i_1]))) : (((((/* implicit */unsigned int) 0)) & (4044261437U)))));
                            var_75 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_27 + 2] [i_27 + 1]))));
                            var_76 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_27 + 2] [i_27 + 2] [i_27 + 2] [i_27] [i_27 + 3])) ? (arr_37 [(unsigned char)4] [i_27] [i_27 + 1] [i_27] [i_27 + 2]) : (arr_37 [i_29] [i_28] [i_27 + 2] [i_27] [i_27 + 1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_30 = 0; i_30 < 10; i_30 += 4) 
                {
                    for (int i_31 = 4; i_31 < 9; i_31 += 4) 
                    {
                        {
                            var_77 = ((/* implicit */unsigned short) max((var_77), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_31 - 2] [i_31 - 2] [i_31 - 1] [i_27 + 1])) || (((/* implicit */_Bool) arr_26 [i_31] [i_31] [(unsigned char)1] [i_31 - 3] [i_27 + 2] [i_27 - 1])))))));
                            var_78 = ((/* implicit */_Bool) min((var_78), (((/* implicit */_Bool) arr_15 [i_1]))));
                            var_79 = ((/* implicit */unsigned char) ((_Bool) ((unsigned short) 3820421891U)));
                        }
                    } 
                } 
            }
            for (signed char i_32 = 1; i_32 < 7; i_32 += 4) /* same iter space */
            {
                var_80 = ((/* implicit */_Bool) min((var_80), (((/* implicit */_Bool) ((arr_12 [i_1] [i_1]) << (((/* implicit */int) arr_75 [i_32] [4U] [i_32] [i_32] [i_32 + 3] [i_32 + 3] [i_32 + 3])))))));
                var_81 = ((/* implicit */_Bool) arr_23 [i_32 + 1] [i_32 - 1] [i_32 - 1] [i_32 + 3]);
                var_82 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1]))) : (474545431U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_29 [i_32 + 2] [i_32 + 2] [i_32 + 3] [i_32 + 3] [i_32 - 1] [i_32])))) : (arr_44 [i_32 + 2] [i_32] [i_32] [i_32 + 2])));
            }
            var_83 = ((/* implicit */signed char) max((var_83), (((/* implicit */signed char) var_4))));
        }
        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) /* same iter space */
        {
            var_84 -= ((/* implicit */signed char) arr_14 [i_1]);
            var_85 = (~(((/* implicit */int) var_7)));
            var_86 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1216349209U)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_33 [i_33] [i_33] [i_33] [i_33] [i_33] [i_33] [i_33]))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_33]))) & (var_2))))) : (min((((((/* implicit */_Bool) var_16)) ? (arr_12 [i_33] [4U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_42 [i_33] [i_1] [i_1] [i_1])), (1073479680))))))));
        }
    }
    var_87 |= ((/* implicit */unsigned long long int) var_8);
}
