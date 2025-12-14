/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226800
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                            var_19 += var_0;
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [(_Bool)1] [i_2] [i_0] [i_2 + 1]))));
                    var_20 *= ((_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_4))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [(_Bool)1] [(_Bool)0] [i_2] [(_Bool)0] [i_0] |= var_9;
                        var_21 = ((_Bool) (-(((/* implicit */int) arr_5 [i_6] [i_2 + 1] [i_0]))));
                    }
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) ((arr_3 [i_2 + 1] [i_1] [(_Bool)1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))));
                        arr_25 [(_Bool)1] [i_0] [(_Bool)1] [i_7] [i_8] = (_Bool)1;
                    }
                    arr_26 [i_0] [i_0] [i_2 + 1] [i_2 + 1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_2 + 1] [i_2] [i_0] [i_2 + 1] [i_2 + 1])) & (((/* implicit */int) arr_4 [i_2 + 1] [i_0]))));
                }
                arr_27 [i_0] [i_0] [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((_Bool) arr_23 [i_0] [i_0] [i_0] [i_1] [i_2] [(_Bool)0])))));
                var_23 = arr_1 [i_1];
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_30 [i_0] [i_0] [i_0] [i_9] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)0)))) ^ (((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_2 [i_0]))))));
                    arr_31 [(_Bool)1] [i_0] [(_Bool)0] [i_0] [i_0] = arr_29 [i_0] [i_0] [i_2] [(_Bool)1];
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_24 *= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                        var_25 = (_Bool)1;
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_40 [i_0] [i_9] [(_Bool)1] [i_0] [i_0] = ((/* implicit */_Bool) ((((_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0]))));
                        arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_2 + 1] [i_0] [i_2] [i_2] [i_0] [i_2 + 1]))));
                        arr_42 [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_11] = (((_Bool)1) || ((_Bool)0));
                        var_26 *= ((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_32 [i_0] [i_1] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1]))));
                    }
                    var_27 = (((-(((/* implicit */int) (_Bool)0)))) != (((arr_0 [i_2] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_8)))));
                }
            }
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                arr_45 [i_0] [i_1] [(_Bool)1] [i_0] = ((var_10) && (arr_4 [i_0] [i_0]));
                /* LoopSeq 1 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    var_28 ^= arr_47 [i_0] [(_Bool)1];
                    var_29 &= var_11;
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_1] [(_Bool)1] [i_12] [i_13 - 1])) > (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_12]))))) & (((/* implicit */int) arr_14 [(_Bool)1] [i_0] [i_12]))));
                    var_31 = arr_36 [i_12 + 1] [i_13 - 1] [i_0] [(_Bool)1] [(_Bool)1];
                    arr_49 [i_0] [i_0] [(_Bool)1] [i_13 - 1] = ((((/* implicit */int) arr_34 [i_0] [i_1] [(_Bool)1])) <= (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_13] [(_Bool)1] [i_0])) == (((/* implicit */int) arr_1 [i_0]))))));
                }
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_52 [i_0] [i_1] [i_0] = var_8;
                /* LoopSeq 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_32 ^= arr_21 [(_Bool)1] [i_0] [i_1] [i_14] [i_15];
                    var_33 = ((_Bool) ((((/* implicit */int) var_7)) << (((/* implicit */int) arr_44 [i_15] [(_Bool)1] [(_Bool)1] [i_0]))));
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_28 [(_Bool)1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [i_16]))));
                        arr_57 [i_0] [i_1] [(_Bool)1] [i_0] [i_16] = ((/* implicit */_Bool) (((+(((/* implicit */int) var_12)))) * ((+(((/* implicit */int) var_2))))));
                        var_35 = var_11;
                        arr_58 [i_0] [i_0] [i_14] [i_0] [i_16] = var_2;
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_36 = ((_Bool) ((arr_47 [i_14] [i_0]) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_15] [i_0] [i_1] [i_0])) : (((/* implicit */int) (_Bool)0))));
                        arr_61 [i_0] = arr_16 [i_15] [i_14] [i_1] [i_0];
                        var_37 *= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_21 [i_0] [i_1] [(_Bool)1] [i_15] [i_17])) : (((/* implicit */int) arr_9 [i_0] [i_0] [(_Bool)1]))));
                        arr_62 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) var_16))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_38 *= arr_19 [i_0] [i_0] [i_0] [i_0] [(_Bool)1];
                        arr_67 [i_0] = ((/* implicit */_Bool) ((((_Bool) arr_14 [i_15] [i_0] [(_Bool)1])) ? (((/* implicit */int) ((_Bool) arr_56 [(_Bool)1] [i_0] [(_Bool)1] [i_15] [(_Bool)1] [(_Bool)0] [i_15]))) : (((/* implicit */int) arr_44 [i_0] [i_0] [(_Bool)1] [i_0]))));
                        arr_68 [i_0] [i_1] [i_14] [(_Bool)1] = ((((/* implicit */int) arr_64 [i_18] [i_0] [(_Bool)1] [i_0] [i_0])) == (((/* implicit */int) (_Bool)1)));
                        var_39 = ((_Bool) var_11);
                        var_40 ^= ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_71 [(_Bool)1] [i_0] [(_Bool)1] [i_0] [(_Bool)1] = arr_32 [i_0] [i_1] [i_1] [i_1] [i_14] [i_15] [i_19];
                        arr_72 [i_0] [i_0] [i_15] [i_19] = arr_33 [i_1] [i_14];
                        var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) ((((/* implicit */int) var_15)) + (((/* implicit */int) arr_36 [i_19] [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1])))))));
                    }
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        arr_77 [i_0] [i_0] [i_1] [i_14] [i_15] [i_15] [i_20] = ((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0]))));
                        arr_78 [i_0] [i_1] [i_0] [i_15] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                        var_42 = ((_Bool) arr_38 [i_20] [i_0] [i_20 - 1] [(_Bool)0] [i_20] [i_20] [i_20 - 1]);
                    }
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_43 = var_9;
                    var_44 *= var_11;
                    var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((arr_48 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_19 [i_0] [(_Bool)1] [i_14] [i_14] [i_21]))));
                }
                var_46 = ((_Bool) arr_46 [(_Bool)1] [i_14] [i_1] [i_0]);
                var_47 *= (_Bool)1;
            }
            /* LoopNest 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        var_48 = ((_Bool) var_5);
                        arr_87 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        /* LoopSeq 3 */
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            arr_90 [i_0] [i_0] = (_Bool)1;
                            arr_91 [i_0] [i_0] [i_22] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_56 [i_0] [i_0] [i_22] [(_Bool)1] [i_22] [i_0] [(_Bool)1]) ? (((/* implicit */int) arr_21 [i_24] [(_Bool)1] [i_22] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_1)))))));
                            var_49 = ((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_75 [i_24] [i_24] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0]))))));
                            arr_92 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_64 [(_Bool)1] [i_0] [i_22] [(_Bool)1] [i_22])) % (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        }
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            var_50 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))));
                            arr_95 [i_0] [(_Bool)1] [i_0] [i_23] [i_0] = arr_86 [(_Bool)0] [i_1] [i_1] [i_23] [i_0];
                            arr_96 [i_23] [i_1] [i_0] [(_Bool)1] [i_25] [i_23] = ((_Bool) arr_23 [i_0] [i_0] [i_22] [(_Bool)0] [(_Bool)0] [i_23]);
                            var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) arr_19 [i_0] [i_1] [i_22] [i_23] [i_25])))) : ((+(((/* implicit */int) arr_18 [i_0] [i_0] [(_Bool)1] [i_23] [i_25])))))))));
                            var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_23 [i_25] [(_Bool)0] [i_22] [i_22] [(_Bool)0] [(_Bool)1]))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)0)))))))));
                        }
                        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                        {
                            arr_99 [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1] [i_1] &= ((_Bool) (_Bool)0);
                            arr_100 [i_0] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_53 = arr_75 [(_Bool)0] [i_26] [i_26] [i_26 - 1] [i_26 - 1] [i_0];
                        }
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            arr_103 [i_0] = ((/* implicit */_Bool) ((arr_50 [i_27] [i_0] [i_0]) ? (((/* implicit */int) arr_50 [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) arr_50 [i_0] [i_0] [i_0]))));
            var_54 = ((/* implicit */_Bool) min((var_54), (var_7)));
        }
        for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
        {
            var_55 = ((/* implicit */_Bool) ((arr_55 [i_28]) ? (((/* implicit */int) ((_Bool) arr_16 [i_0] [i_0] [i_28] [i_0]))) : (((/* implicit */int) (!(var_5))))));
            var_56 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) var_14))));
        }
    }
    var_57 = var_14;
    var_58 = var_3;
    var_59 = ((/* implicit */_Bool) max((var_59), (var_9)));
    /* LoopSeq 1 */
    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
    {
        arr_108 [i_29] [(_Bool)1] = ((_Bool) (_Bool)1);
        var_60 = ((/* implicit */_Bool) min((((((_Bool) arr_18 [i_29] [i_29] [i_29] [i_29] [i_29])) ? (((arr_75 [i_29] [(_Bool)1] [i_29] [i_29] [i_29] [i_29]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_29] [(_Bool)1] [i_29])))) : (((/* implicit */int) arr_19 [i_29] [(_Bool)1] [(_Bool)1] [i_29] [i_29])))), ((-(((((/* implicit */int) var_15)) + (((/* implicit */int) var_14))))))));
        arr_109 [i_29] = ((_Bool) ((((/* implicit */int) ((_Bool) var_16))) + (((/* implicit */int) min(((_Bool)1), (var_15))))));
    }
}
