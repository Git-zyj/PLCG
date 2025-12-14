/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48881
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((var_9) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))), (((arr_3 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((_Bool) min((var_3), (var_11))))) : ((-(((/* implicit */int) arr_4 [i_0] [i_1]))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << ((+(((/* implicit */int) ((_Bool) (_Bool)0)))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min(((~(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) var_6)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))));
                    arr_7 [i_2] [i_2] [i_0] = ((_Bool) (_Bool)1);
                    var_18 = min(((_Bool)1), ((_Bool)1));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_10 [i_0] = arr_0 [i_0] [i_1];
                    var_19 -= arr_5 [i_0] [(_Bool)1] [i_0 + 1];
                }
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0 + 1])) <= (((/* implicit */int) (_Bool)1))))), (min((((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_14 [i_0] [i_1])) ^ (((/* implicit */int) arr_9 [i_1]))))))));
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_19 [i_6] [i_4] [i_4] [i_0] [i_0] [i_1] [i_0] = var_0;
                            var_20 &= ((/* implicit */_Bool) min((((min((var_13), (var_0))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_3)))), (((max(((_Bool)1), (var_12))) ? (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))) : (((/* implicit */int) min(((_Bool)1), (var_12))))))));
                            arr_20 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((((_Bool) (_Bool)1)) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */int) arr_9 [i_6])) + (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) ((_Bool) var_14)))))));
                            arr_21 [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) min(((_Bool)1), (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_4))))))) ^ ((((_Bool)0) ? (((((/* implicit */int) arr_17 [i_0] [i_5] [(_Bool)1])) >> (((/* implicit */int) var_3)))) : (((/* implicit */int) var_0))))));
                            arr_22 [i_6] [i_6] [i_0] [i_0] [i_1] [i_0] = ((_Bool) (_Bool)0);
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_1] [i_4] [i_0] [i_7] = ((var_12) || (var_2));
                            var_21 = var_3;
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [i_0] [i_1] [i_0] [(_Bool)1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) - ((((_Bool)1) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) (_Bool)0))))))));
                            arr_30 [i_0] [i_4] [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) min((var_6), (arr_28 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0 + 1]))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_33 [i_0] [i_0] [i_1] [i_5] = ((((/* implicit */int) min((arr_12 [i_0] [i_0] [i_0]), (var_3)))) != ((((_Bool)0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))));
                            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */_Bool) ((arr_6 [(_Bool)1] [i_4] [(_Bool)1]) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [i_5] [i_5]))))) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_4] [i_5] [(_Bool)1])) : (((/* implicit */int) min((var_14), ((_Bool)1)))))) : (max((((/* implicit */int) var_13)), (((((/* implicit */int) arr_4 [i_0] [i_1])) << (((/* implicit */int) (_Bool)1))))))));
                            var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((((_Bool)0) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_1])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) min((var_5), (arr_1 [(_Bool)1])))))), (((/* implicit */int) var_12))));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) min((max((((/* implicit */int) arr_16 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1])), ((((_Bool)1) ? (((/* implicit */int) arr_27 [i_0] [i_4] [i_5] [i_10])) : (((/* implicit */int) var_6)))))), (((((/* implicit */int) arr_35 [i_0 + 1] [(_Bool)1] [i_4] [i_10 + 1] [i_0])) - (((/* implicit */int) (_Bool)1))))));
                            arr_36 [i_1] [i_1] [i_0] [i_0] [i_5] = (_Bool)0;
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            var_27 = arr_1 [i_1];
                            var_28 -= ((_Bool) (_Bool)0);
                            var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            var_30 = var_8;
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_31 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            arr_41 [i_0] [i_1] [i_0] [i_0] [i_12] = ((_Bool) (_Bool)1);
                            arr_42 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min(((((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) var_12)))), (((/* implicit */int) arr_17 [i_0] [i_0 + 1] [i_0 + 1]))));
                        }
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_32 = ((arr_16 [i_13] [i_0] [i_4] [i_0] [i_0]) && (((/* implicit */_Bool) min((((arr_3 [i_0]) ? (((/* implicit */int) arr_27 [i_0] [i_0] [i_4] [i_13])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((var_4), (var_6))))))));
                        arr_46 [i_0] [i_0] [i_4] [(_Bool)1] = ((/* implicit */_Bool) max((((((var_11) ? (((/* implicit */int) arr_34 [i_0] [(_Bool)1] [i_4] [i_13])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_13])))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_12 [i_0] [i_0] [i_13]))))))), (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_1 [i_0 + 1])))))));
                        var_33 += ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                        arr_47 [(_Bool)1] [(_Bool)1] [i_4] &= (_Bool)0;
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((((arr_8 [i_0] [(_Bool)1] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) << ((((~(((/* implicit */int) (_Bool)1)))) + (11))))) : (((min(((_Bool)0), (var_14))) ? (((/* implicit */int) min((arr_8 [i_0] [i_1] [i_4]), (var_6)))) : (((((/* implicit */int) arr_48 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1])) + (((/* implicit */int) var_6))))))));
                        var_35 = ((/* implicit */_Bool) max((var_35), (min(((_Bool)1), ((!((_Bool)1)))))));
                        arr_50 [(_Bool)1] [i_1] [i_0] = ((_Bool) (_Bool)1);
                    }
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                            arr_57 [i_0] [i_1] = (_Bool)1;
                            arr_58 [(_Bool)1] [(_Bool)1] [i_0] [i_15] [i_16] = ((/* implicit */_Bool) (-(((/* implicit */int) min((((_Bool) (_Bool)1)), (min(((_Bool)0), (var_1))))))));
                        }
                        arr_59 [i_0] [i_15 - 1] = ((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) var_5))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_64 [i_0] [i_1] = arr_63 [i_0] [i_0] [i_0] [i_0] [i_0];
                        arr_65 [i_0] [i_0] [i_0] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((_Bool) ((var_3) || (arr_18 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) : (((/* implicit */int) max(((_Bool)0), ((_Bool)1))))));
                    }
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                {
                    var_37 = ((_Bool) (((((~(((/* implicit */int) var_10)))) + (2147483647))) << (((((/* implicit */int) min((var_2), ((_Bool)1)))) - (1)))));
                    var_38 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((_Bool)1), (arr_3 [i_18])))))), (((((/* implicit */int) ((_Bool) (_Bool)1))) * (((/* implicit */int) var_11))))));
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) (_Bool)0)))))))));
                        arr_70 [i_0] [i_1] [i_0] [i_19 + 1] = var_4;
                        var_40 = ((/* implicit */_Bool) max((var_40), (arr_69 [i_0] [i_0] [i_0] [(_Bool)1])));
                        var_41 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_23 [(_Bool)1] [i_0 + 1] [i_0] [(_Bool)1] [(_Bool)1])) + (((/* implicit */int) var_4)))), (((/* implicit */int) min((arr_35 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]), (var_10))))));
                    }
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        var_42 |= ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_62 [i_0 + 1] [(_Bool)1] [i_0 + 1] [i_0] [i_0 + 1])))), (((arr_62 [i_0 + 1] [(_Bool)0] [i_0 + 1] [i_0] [i_0 + 1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_62 [i_0 + 1] [(_Bool)1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                        var_43 ^= (_Bool)1;
                        var_44 = ((/* implicit */_Bool) min((var_44), (arr_8 [(_Bool)1] [(_Bool)1] [i_18])));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_45 = ((_Bool) min((((arr_13 [i_0 + 1] [(_Bool)1] [i_0] [i_22]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [i_18] [i_0])))), (((/* implicit */int) var_3))));
                                arr_77 [i_0] [i_0] [i_0] [i_0] [i_22] [i_22] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (max((((((/* implicit */int) var_11)) * (((/* implicit */int) arr_71 [i_0] [i_1] [i_18] [i_0] [i_18])))), (((var_10) ? (((/* implicit */int) arr_0 [i_18] [i_18])) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_46 = arr_8 [i_0] [i_0] [i_0];
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            arr_86 [i_0] = arr_63 [i_0 + 1] [i_1] [i_23] [i_1] [i_25];
                            var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((var_9) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) /* same iter space */
                        {
                            var_48 &= (_Bool)1;
                            var_49 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) /* same iter space */
                        {
                            var_50 -= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
                            var_51 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_90 [i_27 - 1] [i_1] [(_Bool)1] [i_24] [i_27]), (arr_90 [i_27 - 1] [i_1] [i_27 - 1] [i_27 - 1] [i_27]))))));
                            var_52 = arr_83 [i_0] [i_1] [i_1];
                        }
                        for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) /* same iter space */
                        {
                            arr_93 [(_Bool)1] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_82 [i_0] [i_0 + 1] [i_23] [i_28 - 1] [i_28] [i_28]))))) ? ((+(((/* implicit */int) arr_82 [i_0] [i_0 + 1] [i_28] [i_28 - 1] [i_0 + 1] [(_Bool)1])))) : ((((_Bool)0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_82 [i_0] [i_0 + 1] [i_0] [i_28 - 1] [i_0] [i_28]))))));
                            var_53 |= ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)));
                            var_54 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        var_55 = (!(arr_0 [i_0 + 1] [i_0 + 1]));
                        var_56 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_14))))));
                    }
                    arr_97 [i_0] [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % ((~((~(((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_0]))))))));
                    arr_98 [i_0 + 1] [(_Bool)0] [i_0 + 1] [i_0] = var_9;
                    arr_99 [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((max((var_4), (var_8))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_79 [i_0] [i_0 + 1] [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            {
                                var_57 = ((/* implicit */_Bool) min((var_57), (((/* implicit */_Bool) ((var_11) ? (min((((/* implicit */int) min((var_4), ((_Bool)1)))), (((var_14) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)0)))))) : ((+(((/* implicit */int) var_3)))))))));
                                var_58 = arr_72 [i_0 + 1] [i_30] [i_31];
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_59 = var_5;
    var_60 = ((_Bool) var_6);
    var_61 ^= var_0;
}
