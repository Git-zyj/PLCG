/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27305
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
    var_19 = ((_Bool) max((((_Bool) (_Bool)1)), (min((var_10), (var_2)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) ((max((arr_7 [i_2] [i_3]), ((!(arr_8 [i_0] [i_1] [i_2] [i_3] [(_Bool)1] [i_3]))))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((/* implicit */int) (!(arr_3 [i_3] [i_2] [i_0]))))));
                        arr_10 [i_0] [i_1] [i_0] [i_1] = arr_5 [i_0] [i_0] [i_0];
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_1] [i_0] [i_4] [i_0] = arr_2 [i_1];
                        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 -= var_2;
                            var_23 = ((/* implicit */_Bool) max((var_23), (((_Bool) (~(((/* implicit */int) arr_3 [i_5] [i_0] [i_0])))))));
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_7] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] &= arr_13 [i_0];
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (_Bool)1))))))));
                            arr_24 [i_0] [i_6] [i_2] [i_0] [i_0] = (!((_Bool)1));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_25 -= ((/* implicit */_Bool) ((min(((_Bool)1), ((_Bool)1))) ? ((-(((/* implicit */int) arr_22 [(_Bool)0] [i_1])))) : (((/* implicit */int) ((_Bool) arr_22 [(_Bool)0] [(_Bool)0])))));
                            arr_28 [i_8] [i_0] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [(_Bool)0]))))) ? (((/* implicit */int) ((_Bool) arr_25 [(_Bool)1] [i_6] [i_0] [i_1] [i_0]))) : (((/* implicit */int) arr_17 [i_8] [i_1] [i_0]))))));
                            var_26 = ((/* implicit */_Bool) (+(((min((arr_2 [(_Bool)1]), (var_1))) ? (((/* implicit */int) min(((_Bool)1), (arr_15 [i_0] [i_1] [i_1] [i_8] [i_0] [(_Bool)1])))) : (((/* implicit */int) max(((_Bool)1), (arr_0 [i_0] [i_0]))))))));
                        }
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_27 = max((arr_11 [i_1]), (arr_19 [(_Bool)1] [(_Bool)1] [i_0] [i_6] [i_9]));
                            var_28 = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_18 [i_0] [i_1] [i_2] [(_Bool)1] [i_9]), (arr_9 [i_9 - 1] [(_Bool)1] [i_9 - 1] [i_6] [i_9] [i_9])))), ((~(((/* implicit */int) var_14))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_36 [i_0] [i_1] [i_2] [i_0] [(_Bool)1] [i_0] = arr_26 [i_0] [i_1] [i_2];
                            var_29 += arr_19 [i_0] [i_0] [(_Bool)1] [i_0] [i_0];
                        }
                        var_30 = arr_17 [(_Bool)1] [(_Bool)1] [(_Bool)1];
                        arr_37 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) max((var_4), (max((arr_8 [i_0] [i_1] [i_2] [(_Bool)1] [i_1] [i_6]), (arr_1 [(_Bool)1])))))) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_2]))));
                        var_31 = ((/* implicit */_Bool) ((arr_0 [i_0] [i_1]) ? (((/* implicit */int) var_12)) : (min(((((_Bool)1) ? (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [(_Bool)1]))))));
                        var_32 = arr_17 [i_1] [i_1] [(_Bool)1];
                    }
                    var_33 = ((/* implicit */_Bool) max((var_33), (min((arr_0 [i_1] [i_1]), (max((arr_0 [i_0] [i_1]), (arr_0 [i_1] [i_2])))))));
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_34 &= arr_39 [i_11];
                        arr_40 [i_0] = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_18 [(_Bool)1] [i_1] [i_0] [i_1] [i_1])))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_20 [i_0] [i_0]))))));
                        var_35 = arr_25 [i_0] [i_0] [i_1] [i_2] [(_Bool)0];
                        var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                        var_37 &= ((/* implicit */_Bool) ((var_16) ? ((+(((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_18 [i_11] [i_2] [i_1] [i_0] [i_0]))))))) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [(_Bool)1] [i_1] [i_0])) - (((arr_9 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_17 [i_12] [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_12] [i_0]))))));
                        var_39 = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_41 [i_0] [i_1] [i_2] [i_12]), (var_8)))), ((-(((/* implicit */int) var_13))))));
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_40 = arr_18 [i_13] [i_0] [i_0] [i_0] [i_0];
            var_41 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0]))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_42 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) var_4))), ((~(((/* implicit */int) (_Bool)1))))));
                var_43 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))));
            }
            var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) max((((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_14])))), ((+(((/* implicit */int) arr_31 [i_0] [i_14] [i_14] [i_0] [i_14] [i_14])))))))));
            var_45 = (!(((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_42 [i_14] [i_0] [i_14] [i_14] [i_0]))))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            var_46 = arr_26 [i_0] [(_Bool)1] [i_0];
            var_47 *= ((/* implicit */_Bool) ((min((var_14), (arr_5 [i_0] [(_Bool)1] [(_Bool)1]))) ? (((((_Bool) arr_26 [i_0] [i_16] [(_Bool)1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) (_Bool)1))))) : (((/* implicit */int) min((max((var_14), ((_Bool)1))), (arr_1 [i_16]))))));
            var_48 = ((_Bool) min(((_Bool)1), ((_Bool)1)));
            var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
        }
        var_50 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
        var_51 *= ((/* implicit */_Bool) max((max(((~(((/* implicit */int) arr_5 [i_0] [i_0] [(_Bool)1])))), (((/* implicit */int) var_15)))), (((/* implicit */int) var_7))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_52 -= max(((_Bool)1), ((_Bool)0));
        var_53 -= (_Bool)1;
        var_54 = var_3;
        arr_59 [i_17] = ((/* implicit */_Bool) max((min((((/* implicit */int) var_11)), ((-(((/* implicit */int) arr_0 [i_17] [i_17])))))), (((/* implicit */int) var_3))));
    }
}
