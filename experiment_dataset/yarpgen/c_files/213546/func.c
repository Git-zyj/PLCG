/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213546
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
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((var_8) ? (((/* implicit */int) arr_7 [(_Bool)1])) : (((/* implicit */int) arr_7 [(_Bool)1])))), (((/* implicit */int) var_2)))))));
                        arr_10 [(_Bool)1] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) (((((-(((/* implicit */int) arr_8 [i_0] [i_2 - 1] [i_2 - 1])))) + (2147483647))) >> (((/* implicit */int) arr_4 [i_1] [i_0]))));
                        var_17 = var_9;
                        var_18 = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_6))))));
                        var_19 = arr_9 [(_Bool)0] [i_0] [(_Bool)0] [i_2] [i_3];
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_20 *= (!(var_6));
                        var_21 = (!((_Bool)1));
                    }
                    arr_13 [i_0] [i_0] [i_2] = min(((!(arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))), ((((_Bool)1) || ((_Bool)0))));
                    arr_14 [i_0] [i_1] [i_0] = ((_Bool) (_Bool)1);
                    var_22 ^= ((/* implicit */_Bool) max((min((((((/* implicit */int) var_8)) >> (((/* implicit */int) var_6)))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))), (((/* implicit */int) ((_Bool) min((arr_4 [i_2] [(_Bool)1]), (arr_7 [(_Bool)1])))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_17 [i_0] [i_0] [i_0] [i_5] = arr_15 [i_0] [(_Bool)1] [i_5];
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max(((-(((arr_15 [i_0] [i_1] [i_0]) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_0] [i_1] [i_1] [i_5]))))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_20 [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_3 [i_1]), (arr_12 [i_0] [i_0] [(_Bool)1] [i_1]))))));
                    var_24 = max((((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((((var_9) ? (((/* implicit */int) arr_2 [(_Bool)0] [i_6])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_6] [i_6])))) == (((/* implicit */int) arr_3 [i_6])))));
                    var_25 = max((max((arr_3 [i_1]), (arr_15 [(_Bool)1] [i_1] [i_6]))), (((_Bool) arr_15 [i_0] [i_6] [i_6])));
                    var_26 = (_Bool)0;
                }
                arr_21 [i_0] [i_0] = max(((_Bool)1), ((_Bool)0));
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_27 *= ((/* implicit */_Bool) (+(max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_3))))));
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_23 [i_0] [i_1] [i_0]))))) ? ((+(((/* implicit */int) (!(arr_2 [i_0] [i_7])))))) : ((+(((var_7) ? (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [(_Bool)1] [i_7])) : (((/* implicit */int) arr_7 [i_0]))))))));
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_0] [i_1] [(_Bool)1])))))));
                    arr_27 [i_7] [i_7] [i_0] = ((_Bool) ((((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_1] [i_7])) + (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_7]))));
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */int) arr_16 [i_0])) : (((arr_25 [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_29 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))), (((arr_18 [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((arr_31 [i_0] [i_1] [i_8] [i_0]), ((_Bool)1))))))));
                    var_30 = ((/* implicit */_Bool) (+((+(((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(_Bool)1])) + (((/* implicit */int) arr_22 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1]))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_35 [i_0] [i_0] [i_9] = (_Bool)1;
                        var_31 = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_1 [i_0]))))));
                        arr_36 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_31 [i_0] [i_1] [i_8] [i_9]))) / (((/* implicit */int) max((arr_7 [i_0]), ((_Bool)1))))));
                        var_32 = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_4 [i_0] [i_0])))), (((/* implicit */int) ((_Bool) var_0)))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_33 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
                        arr_39 [i_0] [i_1] [i_8] [i_10] = ((_Bool) (-(((/* implicit */int) min((arr_16 [i_0]), (arr_38 [i_0]))))));
                        arr_40 [i_10] [i_10] [i_0] [i_10] [i_10] = ((/* implicit */_Bool) (-(((arr_23 [i_0] [i_8] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_34 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))));
        var_35 = min((((_Bool) (_Bool)1)), (arr_42 [i_11]));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_47 [i_12] [i_12] = max((((_Bool) max(((_Bool)1), ((_Bool)0)))), (arr_41 [(_Bool)1] [i_12]));
        /* LoopSeq 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_36 *= (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) <= (((var_8) ? ((~(((/* implicit */int) arr_53 [i_15 - 1])))) : (((/* implicit */int) ((_Bool) var_13))))));
                        arr_54 [i_12] [i_14] [i_14] [i_14] [i_12] [i_13] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_51 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_14]))))));
                        var_37 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_53 [i_15 - 1])))));
                        var_38 = ((/* implicit */_Bool) ((arr_49 [i_13] [(_Bool)1] [i_15 - 1]) ? (((/* implicit */int) ((_Bool) var_11))) : (((arr_49 [i_15] [i_15 - 1] [i_15 - 1]) ? (((/* implicit */int) arr_49 [i_15] [i_15] [i_15 - 1])) : (((/* implicit */int) arr_52 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1]))))));
                        var_39 = ((_Bool) arr_42 [i_15]);
                    }
                } 
            } 
            arr_55 [(_Bool)1] = ((/* implicit */_Bool) max((((arr_46 [i_13]) ? (((/* implicit */int) arr_53 [i_12])) : (((((/* implicit */int) arr_41 [i_12] [i_13])) - (((/* implicit */int) arr_44 [i_13])))))), (((/* implicit */int) min((arr_42 [i_12]), (arr_42 [i_13]))))));
            var_40 = ((/* implicit */_Bool) ((max((arr_44 [i_12]), (arr_44 [i_13]))) ? (((/* implicit */int) arr_46 [i_13])) : (((/* implicit */int) ((_Bool) arr_49 [i_12] [i_12] [i_12])))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            arr_59 [i_16] [i_16] [i_16] = arr_44 [i_16];
            arr_60 [i_12] [i_16] = var_7;
            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        {
                            arr_68 [i_19] = ((_Bool) ((((/* implicit */int) min((arr_52 [i_12] [(_Bool)1] [(_Bool)1] [i_17] [i_17] [i_17]), (var_13)))) != (((/* implicit */int) arr_66 [i_19] [i_19 + 1] [i_19] [i_19] [i_19 + 1] [i_19 + 1] [i_19]))));
                            var_42 = ((/* implicit */_Bool) max((var_42), (((_Bool) ((_Bool) var_11)))));
                            var_43 ^= arr_50 [i_16] [(_Bool)1] [i_19 + 1];
                            arr_69 [i_12] [i_18] [i_19] = ((/* implicit */_Bool) ((max((arr_50 [i_16] [(_Bool)1] [i_18]), (arr_50 [i_12] [(_Bool)1] [i_19]))) ? (((/* implicit */int) max((var_14), (var_0)))) : (((/* implicit */int) (!(arr_50 [i_12] [(_Bool)1] [i_17]))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                var_44 = ((/* implicit */_Bool) min((var_44), ((!(arr_42 [i_12])))));
                var_45 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_62 [i_12] [i_20 - 1] [(_Bool)1]))));
                var_46 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_47 += ((/* implicit */_Bool) min((((((/* implicit */int) ((_Bool) var_12))) - (((/* implicit */int) var_11)))), (min((((((/* implicit */int) arr_64 [i_12] [i_16] [i_12] [i_16])) / (((/* implicit */int) var_10)))), (((/* implicit */int) (_Bool)1))))));
                arr_75 [i_16] [i_21] = var_0;
                var_48 = ((/* implicit */_Bool) ((((var_4) ? (((/* implicit */int) arr_72 [i_12] [i_16] [i_21])) : (((/* implicit */int) arr_53 [i_12])))) + ((-(((/* implicit */int) var_8))))));
            }
        }
        var_49 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
    }
    var_50 = ((/* implicit */_Bool) max((((/* implicit */int) var_2)), ((-(((((/* implicit */int) var_13)) - (((/* implicit */int) var_9))))))));
}
