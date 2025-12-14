/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37842
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 *= ((((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_5 [i_0]))))) && (((/* implicit */_Bool) min((((/* implicit */int) arr_6 [(_Bool)1])), ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_11 [i_2] [(_Bool)1] [i_0] &= (!((_Bool)1));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_4 [i_2]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_10))));
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3])) | (((/* implicit */int) (_Bool)0))))));
                        var_15 -= (_Bool)0;
                    }
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_18 [i_4] [(_Bool)1] [(_Bool)1] [i_0] |= ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) == (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_0 [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] = (_Bool)1;
                                var_16 |= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((_Bool) var_3))) == (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1)))))))) >> (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            {
                                var_17 *= ((/* implicit */_Bool) min(((+((+(((/* implicit */int) var_0)))))), (((/* implicit */int) ((((/* implicit */int) arr_31 [i_8] [i_7 + 1] [i_4] [(_Bool)1] [(_Bool)1] [(_Bool)1])) > (((/* implicit */int) arr_22 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1])))))));
                                var_18 = ((/* implicit */_Bool) ((min((((_Bool) (_Bool)1)), (((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)1)))))) ? (max((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_0)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) max((var_6), (var_3)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_19 |= ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_21 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0])));
                        arr_35 [i_0] [(_Bool)1] [i_4] [i_9] |= ((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_1)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_20 -= ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1)));
                        arr_38 [i_0] [i_1] [i_0] [i_10] [i_4] [(_Bool)1] = (_Bool)1;
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_41 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((var_9) ? (((((/* implicit */int) (!((_Bool)0)))) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((var_4), (((((/* implicit */int) arr_6 [i_1])) != (((/* implicit */int) arr_21 [i_0] [i_1] [i_0] [i_1] [i_4] [i_1])))))))));
                        arr_42 [i_0] [(_Bool)1] &= ((max((arr_17 [i_11] [i_4] [i_1]), ((_Bool)1))) && ((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))));
                        arr_43 [(_Bool)1] [(_Bool)1] [i_4] [i_1] = (((-(((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) > (((/* implicit */int) ((((/* implicit */int) arr_2 [i_4])) <= (((/* implicit */int) arr_7 [i_1]))))));
                    }
                    var_21 *= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) min((arr_22 [i_4] [i_1] [i_0] [i_0] [i_0]), (arr_6 [(_Bool)1])))) : (((/* implicit */int) (_Bool)0))));
                }
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_22 -= ((_Bool) (_Bool)0);
                        var_23 = arr_6 [i_1];
                        var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (_Bool)1))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_25 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))));
                        var_26 = var_4;
                        arr_52 [i_0] [i_12] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_8 [(_Bool)1] [i_14]))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_27 ^= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_53 [(_Bool)1] [(_Bool)1] [i_15] [i_16]))));
                                var_28 = ((_Bool) (_Bool)0);
                                arr_58 [i_1] [i_1] [i_16] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) (_Bool)1)) : (((var_8) ? (((/* implicit */int) arr_13 [i_1])) : (((/* implicit */int) arr_48 [i_0] [i_0] [i_1]))))));
                    var_30 = ((_Bool) arr_44 [i_12] [i_1]);
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (_Bool)1))));
                        var_32 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [(_Bool)1]))));
                        /* LoopSeq 2 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            arr_67 [i_1] [i_18] [i_0] [i_1] [(_Bool)1] [i_1] = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)));
                            arr_68 [(_Bool)1] |= (_Bool)1;
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                        {
                            arr_71 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_17] [(_Bool)1] [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_7))));
                            var_33 = ((/* implicit */_Bool) min((var_33), ((!((_Bool)1)))));
                            var_34 |= ((/* implicit */_Bool) (~(((/* implicit */int) (((_Bool)0) && (arr_24 [i_0] [(_Bool)1] [i_17] [(_Bool)1] [i_20]))))));
                            var_35 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        }
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_36 |= ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_30 [i_0] [i_1] [i_1] [i_17] [i_0])))))))), ((+(((/* implicit */int) ((_Bool) (_Bool)1)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_37 = (_Bool)1;
                            var_38 = ((((_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_0])) % ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                            arr_76 [i_1] [i_1] = ((_Bool) ((((((/* implicit */int) arr_60 [i_1] [i_1] [i_1])) % (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) arr_15 [i_1] [i_17] [i_21] [i_22]))));
                            arr_77 [i_0] [i_1] [(_Bool)1] [i_21] [(_Bool)1] |= var_1;
                        }
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_39 &= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            var_40 = ((/* implicit */_Bool) (~(min((((/* implicit */int) min(((_Bool)1), (arr_36 [i_23])))), (((var_4) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                            var_41 = ((/* implicit */_Bool) min((var_41), (min((((((/* implicit */int) arr_3 [i_0] [i_17])) > (((/* implicit */int) var_10)))), (((((/* implicit */int) arr_3 [i_1] [i_17])) == (((/* implicit */int) (_Bool)1))))))));
                            arr_82 [i_0] [i_0] [i_0] [(_Bool)0] [i_23] |= (_Bool)0;
                            var_42 = arr_44 [i_23] [i_0];
                        }
                        arr_83 [i_1] [(_Bool)1] [i_1] [(_Bool)1] [i_21] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) && (max(((_Bool)0), ((_Bool)1)))))) | (((/* implicit */int) (_Bool)1))));
                        var_43 = ((/* implicit */_Bool) min((var_43), (var_9)));
                        var_44 *= ((/* implicit */_Bool) max((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))), (((((/* implicit */int) arr_4 [i_0])) >> (((/* implicit */int) arr_4 [i_1]))))));
                    }
                    var_45 = ((/* implicit */_Bool) min((var_45), (var_8)));
                }
                arr_84 [(_Bool)1] |= ((/* implicit */_Bool) max((((/* implicit */int) arr_61 [i_0] [(_Bool)1] [i_1] [i_1])), (((max(((_Bool)0), ((_Bool)0))) ? (((/* implicit */int) var_4)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
            }
        } 
    } 
    var_46 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) ? ((+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */int) ((var_9) && ((_Bool)1)))) | (((/* implicit */int) (!((_Bool)1))))))));
    /* LoopNest 2 */
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
        {
            {
                var_47 = ((/* implicit */_Bool) min((var_47), ((_Bool)1)));
                arr_90 [(_Bool)1] |= ((_Bool) (~(((/* implicit */int) ((_Bool) (_Bool)0)))));
            }
        } 
    } 
}
