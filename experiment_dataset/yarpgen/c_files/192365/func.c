/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192365
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
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 = ((((/* implicit */_Bool) min((((unsigned int) var_13)), (((/* implicit */unsigned int) ((_Bool) var_1)))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (2462403609313285325ULL));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_10)))))) >> ((((~(min((var_13), (((/* implicit */unsigned long long int) 2865887415U)))))) - (18446744070843664174ULL)))));
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned int) max(((-(min((6180886281825209140ULL), (1976768595211062311ULL))))), (((/* implicit */unsigned long long int) ((unsigned int) 4253436175U)))));
    var_19 = ((/* implicit */_Bool) (((+(((/* implicit */int) var_4)))) + (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 8; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        arr_15 [i_4] [i_4] [i_4 - 1] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) arr_1 [i_2 - 3] [i_2])) : (15984340464396266275ULL)))));
                        arr_16 [i_2] [i_4] [i_2] [i_2] [i_2 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_12 [i_2] [i_4] [i_4] [i_5])))) ? (2462403609313285325ULL) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_4]))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) var_1)))) + (2147483647))) >> (((var_6) >> (((3218428674U) - (3218428646U)))))));
                            var_21 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_12)) | (arr_9 [i_2 + 1] [i_3] [i_5] [i_6])));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) arr_22 [i_4] [3U] [3U]);
                            arr_23 [i_2] [i_4] [i_3] [i_4] [i_5] [i_5 - 1] [i_7 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 943526156569464246ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (41531111U)));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 1) /* same iter space */
                        {
                            var_23 -= ((/* implicit */unsigned long long int) ((unsigned int) ((arr_10 [i_2] [i_2] [i_5 + 1] [i_2]) ? (arr_2 [9U]) : (var_12))));
                            var_24 = ((((/* implicit */_Bool) arr_9 [i_5 - 1] [i_5 - 1] [i_2 - 1] [i_5 - 1])) || (((/* implicit */_Bool) arr_9 [i_5 - 1] [i_5 - 1] [i_2 - 1] [i_5])));
                            var_25 = (~(((var_15) & (0U))));
                            arr_26 [i_2] [5U] [5U] [i_5 + 1] [i_4] [i_8] = ((/* implicit */unsigned int) arr_10 [i_2] [i_2] [i_5 - 1] [i_8]);
                        }
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_25 [i_2] [i_3] [i_3] [2ULL] [i_4]))) : (((/* implicit */unsigned long long int) arr_18 [i_2 - 1] [i_4] [i_4 + 1] [i_5 + 1]))));
                            var_27 = ((/* implicit */_Bool) ((arr_18 [(_Bool)1] [i_4] [i_4] [i_2]) * (arr_18 [i_2 + 2] [i_4] [i_2 + 2] [(_Bool)1])));
                            arr_31 [i_4] = ((/* implicit */_Bool) var_3);
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_6))));
                        }
                    }
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        var_29 -= arr_7 [i_4 + 1] [i_2 + 2];
                        var_30 = ((/* implicit */_Bool) 1933762912U);
                        arr_35 [i_4] [i_4] [i_4] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2946179808U)) ? (arr_5 [i_10]) : (((2462403609313285341ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                        var_31 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1076538621U)) ? (((/* implicit */unsigned long long int) 0U)) : (943526156569464245ULL)));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 9; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (var_2)));
                        arr_38 [i_2] [i_2] [i_2] [i_4] [8U] [i_4] = arr_22 [i_4] [4U] [4U];
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((unsigned long long int) var_11));
                            arr_43 [i_4] = ((/* implicit */unsigned long long int) var_15);
                            var_34 = var_8;
                        }
                        arr_44 [i_2] [i_4] [4U] [i_2] [i_3] = ((/* implicit */unsigned int) var_1);
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (((((/* implicit */_Bool) 2865887415U)) ? (1234051919U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_45 [i_4] = ((/* implicit */unsigned long long int) arr_27 [i_2] [i_2]);
                    arr_46 [3U] [i_4 + 1] [i_4] = ((/* implicit */unsigned int) var_0);
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_9)))));
                                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [2U] [i_3] [i_3] [6U] [1ULL] [i_14] [i_13])) ? (arr_39 [i_2] [i_3] [9U] [i_13] [i_13] [i_13] [9U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                                var_38 = 2462403609313285332ULL;
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((unsigned int) 317924454U))));
                }
                arr_52 [i_2] [i_2] = (!(((/* implicit */_Bool) max((var_3), (arr_18 [i_2 + 1] [i_3] [i_2 + 1] [i_3])))));
                arr_53 [i_2 - 3] [i_2 - 3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_2] [i_2] [i_3] [i_2] [i_2]))) | (arr_30 [i_2] [(_Bool)1] [i_3] [i_3] [i_3]))) : ((+(arr_19 [4ULL] [i_3] [(_Bool)1] [i_3] [0U])))))) ? (arr_39 [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_3] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                var_40 = (((-(var_6))) << (((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) var_10)), (var_9))) : ((-(var_11))))));
                var_41 = ((/* implicit */unsigned int) (-((-(((var_0) ? (((/* implicit */unsigned long long int) 2865887415U)) : (arr_24 [i_3] [i_3])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        for (unsigned int i_19 = 2; i_19 < 21; i_19 += 2) 
                        {
                            {
                                var_42 += max(((((-(2950810333U))) & (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))));
                                var_43 = ((/* implicit */unsigned int) min((var_43), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_19 + 2] [i_18] [i_19 - 1] [i_18] [i_17])) ? (arr_64 [i_19 + 2] [i_18] [i_19 + 1] [i_18] [(_Bool)1]) : (arr_64 [i_19 - 1] [i_17] [i_19 + 3] [i_17] [i_19])))) ? (((unsigned int) 9223372036854775808ULL)) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_19] [i_18] [i_18] [i_19] [i_19]))))) % (((/* implicit */int) ((((/* implicit */_Bool) 4294967288U)) || (((/* implicit */_Bool) 3284311313U))))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 3; i_20 < 20; i_20 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_21 = 1; i_21 < 21; i_21 += 1) 
                        {
                            var_44 += ((unsigned long long int) 15984340464396266267ULL);
                            var_45 -= ((/* implicit */unsigned long long int) var_8);
                            var_46 = ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_10)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_20]))) & (var_15))))))));
                            arr_75 [i_15] [2ULL] [i_17] [2ULL] [i_17] = ((/* implicit */unsigned long long int) var_3);
                        }
                        for (unsigned int i_22 = 0; i_22 < 24; i_22 += 2) 
                        {
                            var_47 -= ((/* implicit */_Bool) max((var_11), (((((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_16] [i_16] [i_16]))) / (var_11)))));
                            var_48 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1429079881U)) && (((((/* implicit */_Bool) arr_54 [i_17] [i_20 + 3])) || (((/* implicit */_Bool) 2865887415U))))))), (((((/* implicit */_Bool) arr_69 [21U] [i_15] [i_15] [i_15] [i_15] [i_15])) ? ((+(432608173U))) : (((var_12) * (var_7)))))));
                            arr_79 [i_15] [i_15] [i_16] [8U] [i_16] [i_22] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((9734856682452286833ULL), (17397742206733055996ULL)))) && (((/* implicit */_Bool) 1976768595211062311ULL)))) ? (4294967289U) : (2716538148U)));
                        }
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                        {
                            var_49 = ((/* implicit */unsigned long long int) arr_74 [i_15] [i_15] [(_Bool)1] [i_15] [i_15]);
                            arr_82 [i_15] = ((/* implicit */unsigned long long int) (!(var_4)));
                        }
                        /* vectorizable */
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                        {
                            var_50 = ((/* implicit */unsigned long long int) ((arr_84 [i_24] [i_16] [i_15]) ? (((/* implicit */int) arr_66 [i_15] [i_20] [i_24])) : (((/* implicit */int) arr_77 [i_15] [i_15]))));
                            arr_85 [i_15] [i_15] [i_17] [i_15] [i_15] = ((/* implicit */unsigned long long int) var_4);
                            var_51 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_68 [i_17] [i_16] [i_17] [i_20] [i_24])) ? (arr_69 [i_15] [i_16] [i_15] [i_17] [i_17] [i_15]) : (arr_69 [i_15] [i_16] [i_16] [i_16] [i_17] [i_24])));
                            var_52 = arr_69 [i_16] [i_16] [i_16] [i_16] [i_15] [i_16];
                            arr_86 [i_15] = ((/* implicit */_Bool) 263104318U);
                        }
                        arr_87 [i_15] [i_16] [i_15] = ((/* implicit */unsigned long long int) arr_74 [i_16] [19U] [19U] [19U] [i_15]);
                        var_53 = ((/* implicit */unsigned long long int) arr_84 [i_15] [i_15] [i_15]);
                    }
                    /* vectorizable */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_54 = ((/* implicit */unsigned int) max((var_54), (((((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_16] [12ULL] [i_25]))) % (var_15)))));
                        var_55 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [i_15] [i_15] [i_15] [i_15] [5U])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_81 [i_15] [i_15] [21U] [i_15] [i_15])));
                        var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) (+(((3218428661U) << (((var_6) - (860188153U))))))))));
                    }
                }
                for (unsigned long long int i_26 = 2; i_26 < 21; i_26 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_27 = 0; i_27 < 24; i_27 += 1) 
                    {
                        for (unsigned int i_28 = 0; i_28 < 24; i_28 += 4) 
                        {
                            {
                                arr_100 [i_27] [i_26] [i_15] [i_27] [i_26] = (_Bool)0;
                                arr_101 [i_15] [i_16] [i_26] [i_26] [i_26] [i_15] [i_15] = (_Bool)1;
                                arr_102 [i_15] [i_15] [i_15] [i_15] [i_28] [i_28] = ((/* implicit */unsigned int) max((min((arr_63 [i_26 - 1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))))), (((/* implicit */unsigned long long int) min((((arr_65 [i_15] [i_15] [i_15] [i_15] [i_15]) ^ (arr_68 [i_15] [i_16] [i_26] [i_26] [i_16]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != (1417273588U)))))))));
                            }
                        } 
                    } 
                    var_57 = ((/* implicit */unsigned int) var_10);
                }
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    arr_107 [i_15] [i_16] [i_29] = ((/* implicit */unsigned long long int) ((((unsigned int) 4031862977U)) >= ((-(263104306U)))));
                    var_58 -= ((/* implicit */unsigned int) min((var_14), (((((((/* implicit */_Bool) var_3)) ? (8U) : (1578429117U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_62 [15U] [i_16] [15U] [15U]) || (((/* implicit */_Bool) arr_71 [i_15] [i_15] [i_15]))))))))));
                    var_59 -= ((/* implicit */unsigned long long int) arr_72 [6ULL] [16U] [6ULL] [6ULL] [6ULL]);
                }
                var_60 = ((((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_103 [i_15] [i_16]))), (arr_96 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))) >= (arr_55 [i_15]));
                arr_108 [i_15] [i_16] = ((/* implicit */unsigned int) arr_56 [i_15]);
            }
        } 
    } 
}
