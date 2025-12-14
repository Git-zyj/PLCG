/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36841
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = var_6;
        arr_5 [i_0] = arr_3 [i_0];
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_13 = var_3;
            arr_9 [i_0] [(_Bool)1] &= var_11;
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_0] [(_Bool)1] [i_0] [i_3] &= (!((_Bool)0));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_14 *= (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_11 [(_Bool)1] [(_Bool)1] [(_Bool)0]))))));
                        var_15 = ((/* implicit */_Bool) (((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_16 = ((_Bool) ((_Bool) (_Bool)1));
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((_Bool) var_5);
                        var_17 = arr_12 [i_1] [i_1];
                    }
                    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_7)))));
                    var_19 *= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    arr_21 [(_Bool)1] [i_1 - 1] [(_Bool)0] [(_Bool)1] [i_3] [i_3] &= (!(arr_16 [i_0] [i_1] [i_1 - 1] [(_Bool)1] [(_Bool)1]));
                }
                var_20 = ((/* implicit */_Bool) max((var_20), (((_Bool) ((arr_6 [(_Bool)1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_19 [i_0] [(_Bool)1])))))));
                var_21 = ((_Bool) var_9);
                var_22 = var_4;
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_23 = ((/* implicit */_Bool) ((arr_11 [i_1 - 1] [i_1 - 1] [i_0]) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_0]))));
                var_24 = var_4;
                /* LoopSeq 4 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_26 [i_6] [i_0] [i_0] = ((((/* implicit */int) ((_Bool) arr_3 [i_0]))) < (((/* implicit */int) arr_14 [i_0] [i_0] [(_Bool)1] [i_1 - 1])));
                    var_25 = ((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_22 [i_6] [i_1])) : (((/* implicit */int) arr_16 [i_1 - 1] [i_1] [i_6] [(_Bool)1] [i_7]))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */_Bool) ((arr_27 [i_6] [i_6] [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_0]))));
                    var_27 ^= var_7;
                    var_28 = ((_Bool) arr_25 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                    var_29 = arr_24 [i_0] [i_6];
                    var_30 = arr_16 [i_6] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1];
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_32 [i_0] [i_0] [i_9] = arr_22 [i_1 - 1] [i_1];
                    arr_33 [i_0] [i_1] [i_6] [i_9] = ((/* implicit */_Bool) ((arr_17 [i_0] [i_1] [i_6] [i_6] [i_9]) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_12)))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                    var_31 = ((/* implicit */_Bool) ((arr_16 [i_1 - 1] [i_1 - 1] [(_Bool)1] [i_9] [(_Bool)0]) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_0])) : (((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_0]))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_32 = ((arr_19 [i_0] [i_0]) && (((_Bool) arr_22 [i_1] [(_Bool)1])));
                        arr_39 [(_Bool)0] [i_1] [i_1] [i_6] [i_10] [i_11] [i_11] &= var_9;
                        arr_40 [i_0] [(_Bool)1] [i_6] [i_11] &= var_8;
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_34 += ((((/* implicit */int) arr_37 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) <= (((/* implicit */int) arr_37 [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                        var_35 = arr_24 [i_6] [i_10];
                        arr_43 [i_0] [i_6] [i_0] = arr_22 [i_12] [i_10];
                        arr_44 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((_Bool) arr_41 [(_Bool)1] [i_1 - 1]);
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_36 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_37 = (!(arr_28 [i_0] [i_1] [i_6] [i_10]));
                    }
                    var_38 |= arr_12 [i_0] [(_Bool)1];
                }
                var_39 = var_8;
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((arr_11 [i_0] [i_1 - 1] [(_Bool)1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_11)))))));
                    arr_49 [i_0] = (!(var_5));
                }
            }
        }
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        arr_52 [i_15] = ((/* implicit */_Bool) ((arr_17 [i_15] [(_Bool)1] [i_15] [i_15] [(_Bool)1]) ? (((/* implicit */int) arr_8 [i_15])) : (((/* implicit */int) arr_17 [(_Bool)1] [(_Bool)1] [i_15] [i_15] [i_15]))));
        var_41 ^= arr_47 [i_15] [i_15];
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        arr_55 [(_Bool)1] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_18 [i_16] [i_16] [i_16] [i_16] [(_Bool)1])) - (((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1] [i_16] [i_16] [(_Bool)1])))), (((/* implicit */int) max((var_0), (arr_18 [i_16] [i_16] [i_16] [i_16] [i_16]))))));
        arr_56 [i_16] = min((min((arr_19 [i_16] [(_Bool)1]), (arr_19 [(_Bool)1] [(_Bool)1]))), (max(((_Bool)1), ((_Bool)1))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_71 [i_20] = var_5;
                            var_42 ^= (!(((_Bool) arr_60 [(_Bool)1] [(_Bool)1] [(_Bool)1])));
                            arr_72 [i_16] [i_17] [i_18] [i_20] [i_18] [i_20] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_5))))));
                            var_43 = ((/* implicit */_Bool) ((arr_51 [(_Bool)1] [i_17]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_20]))));
                            var_44 = ((_Bool) arr_66 [i_16] [(_Bool)1]);
                        }
                    } 
                } 
                var_45 = ((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_8 [i_18])) : (((/* implicit */int) arr_54 [i_16]))));
                var_46 = (!(((_Bool) var_2)));
                arr_73 [i_16] [i_17] [i_18] = var_11;
            }
            /* LoopNest 3 */
            for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
            {
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */_Bool) ((arr_42 [i_16] [(_Bool)1] [i_21] [i_21] [(_Bool)1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(arr_76 [i_21]))))));
                            arr_84 [i_16] [i_16] [i_16] [(_Bool)1] |= arr_18 [i_16] [i_16] [i_16] [i_17] [i_23];
                            var_48 = var_11;
                            var_49 = ((/* implicit */_Bool) ((arr_63 [i_22 - 1] [i_21 + 1] [i_21]) ? (((/* implicit */int) arr_63 [i_22 - 1] [(_Bool)1] [i_21])) : (((/* implicit */int) arr_63 [i_22 - 1] [(_Bool)1] [i_21 + 1]))));
                        }
                    } 
                } 
            } 
            var_50 = arr_69 [i_16] [i_17] [i_17];
            var_51 = arr_57 [i_17] [i_16];
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        var_52 = arr_65 [i_16] [i_24] [i_25] [i_26] [i_16] [i_25];
                        /* LoopSeq 4 */
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            arr_97 [(_Bool)1] [i_24] [i_25] [(_Bool)0] [i_25] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((arr_85 [i_16] [i_16]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))) > (((/* implicit */int) min((arr_36 [i_16] [i_24] [i_25] [i_25]), (var_10)))))))));
                            var_53 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) var_3))), (((((/* implicit */_Bool) ((arr_89 [i_16]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_88 [i_16] [(_Bool)1] [i_16] [i_16]))))) ? (((/* implicit */int) arr_96 [i_16] [i_16] [i_16] [i_25] [i_16])) : (((/* implicit */int) arr_66 [(_Bool)1] [i_24]))))));
                        }
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            var_54 = var_7;
                            var_55 = arr_10 [i_25];
                            var_56 = ((/* implicit */_Bool) ((min((((_Bool) (_Bool)1)), (arr_42 [i_16] [i_24] [i_25] [i_25] [i_28]))) ? (max((((/* implicit */int) min((arr_48 [i_16] [i_24] [i_26]), (arr_62 [i_26] [i_24])))), (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_54 [(_Bool)1])))))) : (max((((((/* implicit */int) arr_74 [(_Bool)1] [(_Bool)1])) - (((/* implicit */int) arr_14 [i_25] [i_26] [i_25] [i_16])))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                        }
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            arr_104 [i_16] [i_24] [i_25] [i_25] [i_25] = ((/* implicit */_Bool) ((((var_7) ? (((/* implicit */int) max((arr_100 [i_16] [i_24] [i_24] [i_26] [i_16]), (arr_95 [i_26])))) : (((var_6) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_25 [i_29] [i_26] [i_25] [i_24])))))) | (((/* implicit */int) max(((!((_Bool)1))), (min((arr_6 [i_25]), (var_1))))))));
                            var_57 = ((/* implicit */_Bool) max((((/* implicit */int) (!(arr_36 [i_16] [i_16] [i_16] [i_25])))), (max((((arr_89 [(_Bool)1]) ? (((/* implicit */int) arr_58 [i_29])) : (((/* implicit */int) arr_93 [i_16] [i_16] [i_25] [(_Bool)1] [i_16])))), (((/* implicit */int) arr_47 [(_Bool)1] [i_24]))))));
                        }
                        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                        {
                            var_58 = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_99 [i_30] [i_25] [i_24]), (min((arr_90 [i_30] [i_26] [i_25] [i_25] [i_16] [i_16]), (arr_62 [(_Bool)1] [(_Bool)1])))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            var_59 = max((min(((_Bool)1), ((_Bool)1))), (min((((_Bool) var_12)), (min((arr_77 [i_16] [i_25] [i_26] [i_30]), (var_6))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_31 = 0; i_31 < 0; i_31 += 1) 
                        {
                            var_60 = min((arr_10 [i_25]), (((_Bool) ((arr_83 [i_16] [i_25] [(_Bool)1] [i_26] [i_31] [i_16] [i_26]) ? (((/* implicit */int) arr_99 [i_31] [i_25] [i_24])) : (((/* implicit */int) var_9))))));
                            var_61 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                {
                    for (_Bool i_34 = 0; i_34 < 0; i_34 += 1) 
                    {
                        {
                            var_62 = var_11;
                            var_63 = ((/* implicit */_Bool) min((min((((arr_78 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)0]) ? (((/* implicit */int) arr_109 [(_Bool)1] [(_Bool)1] [i_32] [i_24] [i_16])) : (((/* implicit */int) arr_77 [i_16] [(_Bool)0] [i_33] [i_34])))), (((/* implicit */int) arr_112 [i_33] [i_24] [i_33])))), (((((/* implicit */int) var_2)) * (((/* implicit */int) var_9))))));
                            var_64 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_113 [i_16] [i_16] [i_32] [i_33]))))) ? (((var_12) ? (((/* implicit */int) arr_53 [i_34])) : (((/* implicit */int) arr_85 [i_33] [(_Bool)0])))) : ((~(((/* implicit */int) (_Bool)1)))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
        }
        var_65 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_16] [i_16])) << (((/* implicit */int) arr_51 [i_16] [(_Bool)1]))))) ? (((/* implicit */int) ((_Bool) arr_51 [i_16] [(_Bool)1]))) : (((/* implicit */int) min((arr_51 [i_16] [i_16]), (arr_51 [i_16] [i_16]))))));
    }
    var_66 -= var_12;
    var_67 &= ((_Bool) ((max((var_5), (var_6))) ? (((/* implicit */int) min((var_10), (var_11)))) : (((/* implicit */int) var_9))));
}
