/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43333
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
    var_15 = ((_Bool) ((((/* implicit */int) var_2)) / ((-(((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_6 [i_0] [i_1 + 1] = ((/* implicit */_Bool) min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (((max((var_12), (var_3))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5))))));
            arr_7 [i_0] [i_1] [(_Bool)1] = ((_Bool) var_13);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_0] [i_2] = ((/* implicit */_Bool) max((min((((/* implicit */int) var_4)), ((+(((/* implicit */int) (_Bool)0)))))), ((-(((/* implicit */int) (_Bool)0))))));
            arr_11 [i_2] [i_2] = max((var_11), (var_11));
            var_16 *= ((/* implicit */_Bool) max((((/* implicit */int) (!(arr_4 [(_Bool)1] [i_2])))), ((-(((/* implicit */int) var_0))))));
        }
        arr_12 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (max((((/* implicit */int) max(((_Bool)0), (var_4)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_19 [i_4] = (!((_Bool)1));
            arr_20 [i_4] [i_4] [i_3] = var_2;
        }
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_23 [i_3] [i_5] = var_4;
            arr_24 [i_3] = ((/* implicit */_Bool) ((((max((var_0), (var_8))) ? (((/* implicit */int) arr_22 [(_Bool)1])) : ((+(((/* implicit */int) (_Bool)1)))))) & (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_28 [i_6 - 1] [i_3] = ((/* implicit */_Bool) ((((max(((_Bool)1), (var_1))) ? (((/* implicit */int) max((arr_16 [i_3]), (var_1)))) : (((/* implicit */int) max(((_Bool)1), (arr_25 [i_6 - 1] [i_6])))))) - (((/* implicit */int) (_Bool)1))));
            arr_29 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))))))) : (((/* implicit */int) min((max(((_Bool)1), ((_Bool)0))), (arr_26 [i_3 + 1] [i_6 - 1] [(_Bool)1]))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_34 [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)1), (max((arr_18 [(_Bool)1] [i_7] [i_7]), (var_2))))))));
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_39 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((_Bool)1), (var_6))))))) ? (((/* implicit */int) ((_Bool) ((var_0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))) : (max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
                var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_35 [i_3 + 1] [i_3 + 1] [i_8]) ? (((/* implicit */int) arr_35 [i_3] [i_3 + 1] [(_Bool)0])) : (((/* implicit */int) var_7))))) ? (((var_7) ? (((/* implicit */int) arr_35 [i_3] [i_3 + 1] [i_8])) : (((/* implicit */int) arr_35 [i_3 + 1] [i_3 + 1] [i_7])))) : (((/* implicit */int) min((var_3), (arr_35 [i_3] [i_3 + 1] [i_3]))))));
                arr_40 [i_8] = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) max(((_Bool)1), (var_13))))), ((+(((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_44 [i_3] [i_3] [i_8] [i_8] = ((_Bool) (!((_Bool)1)));
                    arr_45 [i_3] [i_3] [i_7] [i_8] [i_7] [i_7] = (_Bool)1;
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
                    {
                        arr_48 [i_3] [i_7] [i_8] [i_9] [i_10] = ((_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) (_Bool)1))));
                        arr_49 [i_3 + 1] [i_3 + 1] [i_8] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_17 [i_9] [i_7]))))) : (((/* implicit */int) var_6))));
                    }
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
                    {
                        arr_52 [(_Bool)1] [i_9] [i_8] [i_7] [i_7] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
                        arr_53 [i_3] [(_Bool)1] [i_8] [i_9] [(_Bool)1] [(_Bool)1] [i_11] = (_Bool)1;
                        var_18 *= arr_15 [i_11 + 1];
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_56 [i_3] [i_7] [i_8] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((var_3) ? (((var_8) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) (!(var_0))))));
                        arr_57 [i_12] [i_7] = (!((!(arr_33 [i_3 + 1]))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_12))))));
                        var_20 = ((/* implicit */_Bool) (+(((arr_38 [i_7] [i_13]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))));
                        var_21 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : ((+(((/* implicit */int) (_Bool)1))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_62 [i_3] [i_14] [i_14] [i_14] = (!(((_Bool) (_Bool)1)));
                        arr_63 [i_7] [(_Bool)1] [i_14] [i_7] [(_Bool)1] [i_7] [i_7] = (_Bool)1;
                    }
                }
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_72 [i_3] [i_16] [(_Bool)1] [i_3] = ((/* implicit */_Bool) (+((~(((/* implicit */int) ((_Bool) arr_14 [i_3])))))));
                            arr_73 [(_Bool)1] [i_16] [i_8] [i_16] [i_16] [i_3 + 1] = ((_Bool) var_2);
                            arr_74 [(_Bool)1] [(_Bool)1] [i_16] |= ((/* implicit */_Bool) ((((_Bool) ((_Bool) var_0))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) ((_Bool) (_Bool)1)))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 4 */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                arr_78 [i_3] = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? ((+(((((/* implicit */int) var_3)) * (((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_14), (var_10))))))));
                /* LoopSeq 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_83 [i_3] [i_7] [i_3] [i_18] [i_18] = min(((_Bool)1), ((_Bool)1));
                    arr_84 [i_18] [i_17 - 1] [i_7] = ((/* implicit */_Bool) max((((/* implicit */int) var_10)), (min(((+(((/* implicit */int) var_4)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))));
                    arr_85 [i_3] [i_3 + 1] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), ((~(((/* implicit */int) var_14))))))));
                    arr_86 [i_3 + 1] [i_7] [i_17 - 1] [i_18] [i_3 + 1] = ((_Bool) (+(((/* implicit */int) max((var_1), ((_Bool)1))))));
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        arr_94 [i_20] [i_20] [i_20] [i_7] [i_20] [i_20] [i_19] = ((_Bool) ((_Bool) ((arr_67 [(_Bool)1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))));
                        arr_95 [i_17] [i_19] [i_20] = ((/* implicit */_Bool) min((((arr_15 [i_3]) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) (_Bool)0))))), (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        arr_96 [i_3] [i_20] [i_20] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) (~(((min((var_3), ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(var_3))))))));
                    }
                    arr_97 [i_3] [i_7] [i_7] [i_7] [i_17 - 1] = ((/* implicit */_Bool) ((max((((_Bool) var_8)), (max(((_Bool)1), ((_Bool)1))))) ? ((+(((/* implicit */int) min(((_Bool)1), ((_Bool)0)))))) : ((+(((/* implicit */int) max((var_4), ((_Bool)0))))))));
                }
                var_22 = ((/* implicit */_Bool) ((((((_Bool) var_1)) || ((_Bool)1))) ? (((/* implicit */int) max((min(((_Bool)1), ((_Bool)1))), ((_Bool)1)))) : (((((/* implicit */int) min((var_1), (var_14)))) - ((~(((/* implicit */int) (_Bool)1))))))));
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)0)))))))), ((-(((/* implicit */int) var_12)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    arr_104 [i_21] [i_21] [i_22] = ((/* implicit */_Bool) ((((var_7) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))) | ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))));
                    arr_105 [i_3] [i_22] [i_3] [i_3] = var_12;
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_24 += var_1;
                    arr_108 [i_3] [i_7] [i_21] [i_23] = ((((max(((_Bool)1), ((_Bool)1))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) (!(var_10)))))) <= (((/* implicit */int) ((((/* implicit */int) (!(var_8)))) >= (((/* implicit */int) var_4))))));
                }
                arr_109 [i_3] [i_3] [(_Bool)1] = var_0;
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                arr_112 [i_24] [i_7] [(_Bool)1] = max(((_Bool)1), (max(((_Bool)1), ((_Bool)1))));
                arr_113 [i_7] [i_7] [i_3 + 1] = (_Bool)0;
                arr_114 [i_7] [(_Bool)1] = ((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) min((var_13), (var_7)))))), (((/* implicit */int) var_14))));
                arr_115 [i_3] [(_Bool)1] [i_7] [(_Bool)1] = ((_Bool) max((((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((_Bool) (_Bool)1)))));
            }
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                arr_119 [i_7] [i_25] = (!(max(((_Bool)1), (min((arr_18 [(_Bool)1] [(_Bool)1] [i_25]), (var_6))))));
                arr_120 [i_3 + 1] [i_25] = (((!(max(((_Bool)0), (arr_42 [i_3 + 1] [i_3 + 1] [i_7] [i_25] [i_7]))))) && (((/* implicit */_Bool) ((min((arr_35 [i_25] [i_7] [i_3]), (var_2))) ? (((/* implicit */int) (!(arr_106 [(_Bool)1])))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
            }
        }
        var_25 ^= (_Bool)1;
        var_26 = ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), ((+(((/* implicit */int) (_Bool)1))))))) || (min((max((var_1), (arr_106 [(_Bool)1]))), (min(((_Bool)1), ((_Bool)1))))));
        arr_121 [i_3] [i_3 + 1] = ((/* implicit */_Bool) max((((min((var_7), (var_1))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_32 [i_3 + 1]))))))), (((/* implicit */int) var_2))));
    }
    /* vectorizable */
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        var_27 -= ((_Bool) (_Bool)1);
        arr_124 [i_26] [i_26] = ((((var_10) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))) >= (((/* implicit */int) arr_87 [(_Bool)1] [i_26] [(_Bool)1] [i_26] [i_26])));
        arr_125 [i_26] [i_26] = ((/* implicit */_Bool) (-(((var_12) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_99 [i_26] [(_Bool)1] [(_Bool)1] [i_26]))))));
    }
}
