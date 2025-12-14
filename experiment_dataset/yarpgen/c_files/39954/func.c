/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39954
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
    var_11 ^= ((/* implicit */int) var_2);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */signed char) var_5);
        var_13 = ((/* implicit */unsigned int) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (arr_3 [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((arr_4 [i_1] [i_1]), ((_Bool)0)))))) * ((((-(2404292188U))) * (((/* implicit */unsigned int) 1426860102)))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 21; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_19 [i_1] [i_1] [i_3 + 2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned int) max(((unsigned short)23629), (((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])) > (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)13)))))))));
                        /* LoopSeq 1 */
                        for (int i_5 = 2; i_5 < 23; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((signed char) ((unsigned int) (unsigned short)57869))))));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_5] [i_1] [i_2] = ((/* implicit */signed char) ((((arr_14 [i_3 - 2] [3U] [i_3 + 2] [i_3 + 3]) ^ (arr_14 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2]))) & (((int) (signed char)3))));
                            var_16 = ((/* implicit */unsigned short) arr_16 [i_5 - 1] [i_5] [i_5 - 2] [i_5]);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 23; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */signed char) arr_20 [i_6] [i_1] [i_6 - 1] [i_1] [i_2]);
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_4))) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                        }
                        arr_26 [i_1] [i_3 + 1] [10] [i_1] = ((/* implicit */_Bool) (~(((unsigned int) arr_17 [i_3 - 1] [(_Bool)1] [i_3 - 1]))));
                        arr_27 [i_1] [i_1] [3] [i_4] = ((/* implicit */int) arr_15 [i_1] [i_1] [i_3] [i_4]);
                    }
                } 
            } 
            arr_28 [i_1] = 4048434530U;
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7])) ? (max((arr_17 [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) arr_6 [i_7])))) : (((arr_17 [i_7] [i_7] [14U]) | (arr_17 [i_7] [i_7] [i_7]))));
        var_19 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) ((arr_4 [i_7] [18]) ? (((/* implicit */int) arr_21 [i_7] [(signed char)2] [i_7] [(_Bool)0] [i_7] [i_7])) : (((/* implicit */int) arr_24 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */signed char) arr_4 [i_7] [12U]))))))))));
    }
    for (unsigned int i_8 = 1; i_8 < 9; i_8 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) arr_4 [i_8] [8]);
        /* LoopSeq 4 */
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 1; i_10 < 12; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_21 ^= ((/* implicit */unsigned int) ((signed char) min((max((45634761U), (((/* implicit */unsigned int) arr_40 [i_10] [i_10])))), (arr_20 [i_8] [i_9] [i_9] [i_8] [i_9]))));
                        var_22 = ((/* implicit */unsigned int) arr_41 [i_8] [i_9] [i_10] [i_10]);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((71199123U) > (3999519653U))) ? (arr_34 [i_8] [3U]) : (max((min((((/* implicit */int) var_7)), (var_1))), (((/* implicit */int) ((((/* implicit */int) arr_40 [i_8 + 2] [i_9])) != (((/* implicit */int) arr_4 [i_8 + 3] [i_9]))))))))))));
            arr_44 [(unsigned short)11] [(unsigned short)11] [i_9] = 1411505072U;
            var_24 ^= ((/* implicit */signed char) (~(((int) arr_34 [i_8 - 1] [i_8 - 1]))));
        }
        /* vectorizable */
        for (signed char i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            var_25 ^= (((~(((/* implicit */int) arr_16 [i_8] [i_8] [i_8] [16U])))) >= (((/* implicit */int) (signed char)-21)));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((1629137632) - (((/* implicit */int) arr_43 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 2])))))));
            /* LoopSeq 3 */
            for (unsigned short i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) arr_16 [i_14] [i_13] [i_12] [i_8]);
                    var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_8 + 3])) * (((/* implicit */int) arr_6 [i_8 + 2]))));
                }
                for (unsigned int i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) arr_56 [i_8] [i_8] [i_8] [i_8]))));
                    var_30 = ((/* implicit */signed char) (unsigned short)62334);
                    var_31 = ((signed char) 623043985);
                    var_32 = arr_11 [i_15];
                    var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_56 [i_13] [i_12] [i_13] [i_8 + 4]))));
                }
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    for (unsigned int i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        {
                            var_34 ^= ((unsigned int) arr_18 [i_8 + 3] [i_8 + 3] [i_8 + 3] [i_8 + 3] [i_13]);
                            var_35 = ((unsigned short) (~(((/* implicit */int) arr_61 [i_8] [i_12] [i_13] [i_12] [i_17]))));
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_8 + 4] [i_8 + 4] [i_8 + 2] [i_8 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_8])))) : (((unsigned int) 3122776086U))));
                        }
                    } 
                } 
            }
            for (signed char i_18 = 0; i_18 < 13; i_18 += 4) /* same iter space */
            {
                var_37 = ((((/* implicit */_Bool) arr_54 [i_18] [i_8] [i_8] [i_8] [i_18])) ? (((((/* implicit */_Bool) 4205679959U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_8]))) : (2685776331U))) : (arr_0 [i_12] [i_8]));
                var_38 = ((/* implicit */unsigned short) ((int) arr_41 [i_8] [i_8] [i_8] [i_8 + 4]));
            }
            for (signed char i_19 = 0; i_19 < 13; i_19 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_20 = 0; i_20 < 13; i_20 += 4) 
                {
                    var_39 = arr_49 [i_8 - 1] [i_19] [i_12] [i_8 - 1];
                    var_40 ^= ((/* implicit */unsigned short) ((arr_31 [i_8 + 4]) < (arr_31 [i_8 + 1])));
                }
                /* LoopSeq 1 */
                for (unsigned int i_21 = 0; i_21 < 13; i_21 += 1) 
                {
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2415055224U)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) arr_4 [i_8] [i_21]))))) - (arr_67 [i_8] [i_12] [i_8] [i_21] [i_8])));
                    arr_71 [i_8 + 2] [i_21] [i_19] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_8 + 1])) ? (var_5) : (((/* implicit */int) arr_32 [i_8 - 1]))));
                    var_42 = ((signed char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_3))));
                    arr_72 [i_21] [i_12] [i_12] [i_12] = arr_42 [i_21] [i_19] [5U] [i_8];
                }
                /* LoopSeq 1 */
                for (unsigned short i_22 = 0; i_22 < 13; i_22 += 4) 
                {
                    arr_77 [i_8] [i_12] [i_19] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_75 [i_8])) % (((/* implicit */int) arr_57 [i_8] [i_8 + 2]))));
                    var_43 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_61 [i_22] [(_Bool)1] [i_12] [i_12] [i_8])) ? (arr_49 [i_22] [i_19] [i_12] [i_8]) : (((/* implicit */int) arr_7 [i_12])))));
                    var_44 = ((/* implicit */unsigned int) ((arr_33 [i_8 + 1]) < (arr_33 [i_8 - 1])));
                    /* LoopSeq 1 */
                    for (unsigned int i_23 = 0; i_23 < 13; i_23 += 2) 
                    {
                        arr_82 [i_8] [i_22] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1273126917)))) ? (((((var_5) + (2147483647))) >> (((var_1) - (1704940504))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 19934047U)))))));
                        var_45 = ((((/* implicit */_Bool) (unsigned short)60944)) ? (arr_76 [i_8 + 3] [(signed char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_8 + 2]))));
                        var_46 = ((/* implicit */unsigned int) -1809308442);
                        var_47 = ((/* implicit */unsigned short) ((int) arr_56 [i_8 + 1] [i_12] [i_19] [8U]));
                    }
                }
                var_48 = ((/* implicit */unsigned short) (((!(arr_47 [i_8] [i_12] [i_19]))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)55225)) >> (((var_4) - (3295213439U))))))));
                /* LoopSeq 1 */
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_25 = 0; i_25 < 13; i_25 += 1) 
                    {
                        arr_89 [i_19] [i_19] [i_12] [i_8 + 3] = ((unsigned short) arr_15 [i_8] [i_19] [i_24 - 1] [i_24 - 1]);
                        var_49 = ((((/* implicit */_Bool) arr_68 [i_25] [i_24 - 1] [i_8 + 4] [0])) ? (arr_86 [i_12] [10U] [i_24 - 1] [i_24] [i_25] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8 + 3] [i_8 + 3] [i_24 - 1] [i_24 - 1] [i_8 + 3]))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_26 = 0; i_26 < 13; i_26 += 2) 
                    {
                        arr_92 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_47 [i_8] [i_8] [i_8]))))) ? (((arr_33 [i_19]) & (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_26] [i_26] [i_26]))) * (arr_55 [i_26] [i_12] [i_8])))));
                        var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_75 [i_12]))) ? (((/* implicit */int) ((arr_69 [i_8] [i_8] [i_8 + 1] [12U]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1))));
                        var_51 = arr_51 [i_8] [i_26] [i_19] [i_24] [i_24] [i_26];
                        var_52 = ((/* implicit */signed char) (((_Bool)1) ? (arr_38 [i_8 - 1]) : (349482309U)));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
                    {
                        arr_95 [i_8] [i_12] [i_8] [(unsigned short)4] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (3636858916U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_41 [i_8] [i_19] [i_24 - 1] [i_27])))))));
                        var_53 = ((/* implicit */unsigned short) arr_1 [(unsigned short)4]);
                        var_54 = (+(((unsigned int) var_6)));
                    }
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
                    {
                        arr_99 [i_24 - 1] [i_12] [i_12] [i_8 - 1] = (~(((int) 2109072751)));
                        var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) var_8))));
                        var_56 = (+(((/* implicit */int) arr_18 [i_8 + 2] [i_8 + 2] [i_24 - 1] [i_24] [i_24])));
                        var_57 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        var_58 = ((((/* implicit */_Bool) arr_53 [i_12] [5U])) ? (arr_46 [(unsigned short)1] [i_12] [i_8 + 2]) : (((/* implicit */int) arr_60 [i_8] [i_8] [i_19] [i_24] [2U])));
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
                    {
                        var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) arr_94 [i_29] [i_8] [i_24] [i_19] [i_12] [i_12] [i_8]))));
                        var_60 = ((/* implicit */_Bool) arr_15 [i_8] [i_29] [i_8] [i_8]);
                        var_61 = ((((3427854333U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_91 [(signed char)12] [i_12] [i_12] [(signed char)12]))))) * (((/* implicit */unsigned int) (~(-399219156)))));
                        var_62 = ((((/* implicit */_Bool) 2969215143U)) ? (((/* implicit */unsigned int) -677549379)) : (2431068442U));
                        arr_102 [i_8] [(unsigned short)6] [i_8] [i_19] [i_29] [i_29] = ((/* implicit */_Bool) ((unsigned int) arr_37 [i_8 + 4] [i_8 + 4] [i_19] [i_8 + 4]));
                    }
                    for (unsigned short i_30 = 0; i_30 < 13; i_30 += 1) 
                    {
                        var_63 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1378935245U)) ? (arr_38 [i_8]) : (var_0))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_30])))));
                        var_64 = ((/* implicit */unsigned short) ((arr_96 [i_30] [i_24 - 1] [i_30] [i_24] [i_24 - 1] [8] [i_24 - 1]) ? (arr_83 [7U] [i_8 + 3] [i_8 + 3] [i_24]) : (((unsigned int) arr_83 [i_30] [i_12] [i_19] [i_12]))));
                        var_65 = ((/* implicit */unsigned short) min((var_65), (((/* implicit */unsigned short) 774350775))));
                        var_66 = ((/* implicit */int) ((((((/* implicit */unsigned int) 1223806363)) / (arr_23 [i_8] [i_12] [i_19] [i_24 - 1] [i_12] [i_30]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_8 + 1] [i_24 - 1])))));
                    }
                }
            }
            var_67 ^= ((/* implicit */unsigned short) ((arr_103 [i_8 + 3] [i_8 + 2] [i_8]) << (((3790236651U) - (3790236641U)))));
        }
        /* vectorizable */
        for (unsigned short i_31 = 3; i_31 < 12; i_31 += 3) /* same iter space */
        {
            var_68 ^= ((signed char) arr_40 [i_31] [i_8]);
            var_69 = ((/* implicit */_Bool) min((var_69), (((/* implicit */_Bool) (~(((int) 2846869614U)))))));
            var_70 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1683290455U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3802)))))) || (((/* implicit */_Bool) var_2)));
        }
        /* vectorizable */
        for (unsigned short i_32 = 3; i_32 < 12; i_32 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                for (unsigned short i_34 = 0; i_34 < 13; i_34 += 3) 
                {
                    {
                        var_71 = (i_32 % 2 == zero) ? (((((/* implicit */int) arr_13 [i_8 - 1] [i_8 - 1] [i_32 - 1] [i_32])) << (((var_1) - (1704940531))))) : (((((((/* implicit */int) arr_13 [i_8 - 1] [i_8 - 1] [i_32 - 1] [i_32])) + (2147483647))) << (((((var_1) - (1704940531))) - (1)))));
                        /* LoopSeq 4 */
                        for (unsigned int i_35 = 1; i_35 < 12; i_35 += 4) 
                        {
                            var_72 = ((/* implicit */unsigned short) min((var_72), (((/* implicit */unsigned short) (_Bool)1))));
                            var_73 = ((/* implicit */unsigned int) max((var_73), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_32 + 1] [(unsigned short)10])) != (((/* implicit */int) arr_4 [i_32 - 1] [(unsigned short)6])))))));
                            var_74 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_63 [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 1])) << (((((/* implicit */int) arr_63 [i_8] [2] [2] [i_8 + 3])) - (52647)))));
                        }
                        for (unsigned short i_36 = 0; i_36 < 13; i_36 += 3) 
                        {
                            arr_119 [i_8] [i_32] = ((/* implicit */_Bool) (~(848830064U)));
                            var_75 = ((/* implicit */_Bool) max((var_75), (((((/* implicit */_Bool) arr_94 [i_8 + 1] [i_32] [i_34] [i_34] [i_34] [i_34] [i_36])) || (((/* implicit */_Bool) arr_40 [i_8 + 4] [i_8 + 2]))))));
                            var_76 = ((((/* implicit */_Bool) (-(arr_0 [i_34] [i_8])))) ? (((/* implicit */unsigned int) ((int) (_Bool)1))) : (arr_31 [i_8 + 1]));
                            var_77 = ((/* implicit */unsigned int) min((var_77), ((~(((((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_8] [i_8])) ? (arr_118 [0] [i_36] [i_33] [i_34] [i_36]) : (arr_76 [i_32] [i_8])))))));
                        }
                        for (unsigned short i_37 = 1; i_37 < 11; i_37 += 3) 
                        {
                            var_78 = ((/* implicit */signed char) (~(arr_108 [i_8 + 1])));
                            var_79 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_37 - 1] [i_32] [(unsigned short)16] [i_32] [i_8])) ? (((/* implicit */int) arr_81 [i_8] [i_8] [i_33] [i_34] [i_37])) : (((/* implicit */int) arr_116 [i_37 + 1]))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_98 [i_8] [6U] [6U])) + (2147483647))) >> (((/* implicit */int) arr_2 [i_8 - 1])))))));
                            var_80 = ((/* implicit */unsigned int) ((int) arr_110 [i_8] [i_8] [i_32]));
                            arr_123 [i_32] [i_32] [i_33] [i_32] [i_37 + 1] = ((((/* implicit */int) arr_47 [i_8 + 2] [(unsigned short)3] [i_32 + 1])) >= (((/* implicit */int) arr_47 [i_8 + 3] [i_8] [i_32 + 1])));
                        }
                        for (unsigned short i_38 = 0; i_38 < 13; i_38 += 4) 
                        {
                            var_81 = ((/* implicit */_Bool) -846650364);
                            arr_126 [i_8] [i_8 + 3] [i_32] [i_32 - 2] [10] [i_32] [i_38] = ((/* implicit */unsigned short) 864044614);
                            var_82 = ((/* implicit */signed char) ((arr_67 [i_8 + 4] [i_8 - 1] [i_8 + 2] [i_8] [i_8 + 4]) | (((/* implicit */unsigned int) ((/* implicit */int) ((arr_104 [i_38] [i_38] [(signed char)8] [i_33] [i_32] [7]) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                            var_83 ^= var_6;
                        }
                    }
                } 
            } 
            var_84 = ((unsigned int) arr_87 [i_8 + 3] [i_32 + 1]);
            arr_127 [i_8 + 1] [i_32] = ((/* implicit */unsigned int) var_10);
        }
    }
}
