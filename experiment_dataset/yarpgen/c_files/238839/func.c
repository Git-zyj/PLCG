/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238839
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
    var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 *= ((_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_0]) ? (max((((/* implicit */int) arr_4 [i_0] [i_3] [i_4])), (((arr_12 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_3] [i_2] [i_0])))))) : (((((arr_3 [i_4]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [(_Bool)1] [i_1])))) >> (((((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1])) >> (((/* implicit */int) arr_5 [i_4] [i_1] [i_0]))))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) ((_Bool) max((var_0), (var_0))))) : ((-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))))));
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((((/* implicit */int) max((var_9), (var_1)))) & (((((/* implicit */int) arr_6 [i_4] [i_1])) >> (((/* implicit */int) var_1)))))), ((~(((/* implicit */int) min((var_9), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                                var_15 = ((/* implicit */_Bool) min((((max((arr_7 [i_0] [i_1] [i_2]), (arr_5 [(_Bool)1] [i_2] [i_4]))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) min((var_4), (var_10)))))), ((+((-(((/* implicit */int) var_6))))))));
                            }
                        } 
                    } 
                    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_1] [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((arr_2 [i_0] [(_Bool)1]) || (var_4)))) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) (-(((var_10) ? (((/* implicit */int) arr_6 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))))));
                    var_17 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) min((var_18), (((((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_2 [(_Bool)1] [i_0]))))) ? (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) >> (((/* implicit */int) arr_6 [i_0] [i_0])))) : (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))))) == (((arr_2 [i_0] [i_0]) ? (((((/* implicit */int) var_9)) << (((/* implicit */int) arr_5 [(_Bool)1] [i_0] [i_0])))) : (((/* implicit */int) var_10))))))));
        arr_16 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((arr_12 [i_0] [i_0] [i_0] [(_Bool)0] [i_0] [i_0]) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [(_Bool)1])))) : (((/* implicit */int) min((var_10), (arr_4 [i_0] [i_0] [(_Bool)1])))))) : (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_0]))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_19 = var_7;
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_20 += ((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_5 - 1] [i_5 - 1] [i_5 - 1])) + (((/* implicit */int) arr_17 [i_5 - 1])))) << (((/* implicit */int) min((arr_7 [i_6] [i_5 - 1] [i_5 - 1]), (arr_17 [i_5 - 1]))))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) max((var_2), (arr_8 [i_5] [i_5] [i_6])))), (((arr_8 [i_5] [i_6] [i_5]) ? (((/* implicit */int) arr_4 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_7 [i_6] [i_5 - 1] [i_5]))))))) ? (max((((/* implicit */int) var_1)), ((-(((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) ((arr_18 [(_Bool)1] [i_5]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) max((var_1), (var_1)))) : ((+(((/* implicit */int) arr_19 [i_6])))))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (((~((~(((/* implicit */int) arr_13 [(_Bool)1] [i_10] [i_10] [i_10] [i_10] [i_10])))))) & (((/* implicit */int) min(((!(var_10))), (min((var_8), (arr_25 [i_5])))))))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_5 - 1] [i_10 + 1] [i_9 + 1])) * (((/* implicit */int) var_10))))) ? (max((((var_1) ? (((/* implicit */int) arr_18 [i_5] [i_7])) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_19 [i_5 - 1])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(var_5)))) : (((var_5) ? (((/* implicit */int) arr_19 [i_5 - 1])) : (((/* implicit */int) arr_18 [i_5 - 1] [(_Bool)1]))))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) max(((!(arr_23 [i_5]))), (((_Bool) arr_27 [i_7] [i_7] [i_7] [i_7]))))) << (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
            var_25 = arr_8 [i_7] [i_7] [i_7];
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) arr_28 [i_5 - 1] [i_5 - 1])) & (((/* implicit */int) arr_28 [i_5 - 1] [i_5 - 1])))) : (((max((var_8), (arr_0 [i_5 - 1]))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((var_6), (var_4)))))))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_35 [i_11] [i_11] [i_5] = arr_19 [i_5];
            /* LoopSeq 2 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_6) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))), (((/* implicit */int) min((var_8), (var_1))))))) ? (((((var_4) ? (((/* implicit */int) arr_33 [i_5] [i_11] [i_12])) : (((/* implicit */int) arr_27 [i_5 - 1] [i_11] [i_11] [i_11])))) + (((((/* implicit */int) var_6)) * (((/* implicit */int) arr_6 [i_5 - 1] [i_11])))))) : (((((/* implicit */_Bool) ((arr_17 [i_11]) ? (((/* implicit */int) arr_4 [i_11] [i_11] [i_12 - 1])) : (((/* implicit */int) arr_2 [i_5 - 1] [i_5 - 1]))))) ? (((arr_3 [i_12]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))) : ((+(((/* implicit */int) arr_0 [i_5]))))))));
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_41 [(_Bool)0] [i_13] [i_13] [i_13] [i_13] = ((_Bool) ((((/* implicit */_Bool) ((arr_38 [i_12]) ? (((/* implicit */int) arr_18 [i_5] [i_13])) : (((/* implicit */int) arr_2 [i_12 - 1] [i_12 - 1]))))) ? (((var_6) ? (((/* implicit */int) arr_1 [i_5] [i_5])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) max((arr_9 [i_5] [i_11] [i_12]), (arr_34 [i_5] [i_5]))))));
                    var_28 = ((/* implicit */_Bool) min((var_28), (min((max((max((var_10), (arr_1 [(_Bool)1] [i_13]))), (min((var_5), (var_8))))), (((_Bool) max(((_Bool)1), ((_Bool)1))))))));
                }
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                arr_46 [i_5 - 1] [i_11] = arr_6 [i_11] [i_5];
                arr_47 [i_14] [(_Bool)1] [(_Bool)1] [i_5] = ((/* implicit */_Bool) min(((~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_5 - 1] [(_Bool)1])) >= (((/* implicit */int) arr_24 [(_Bool)1] [i_11] [i_14]))))))), (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_36 [i_14 - 1] [i_11] [i_11] [i_5])) >= (((/* implicit */int) arr_19 [i_5]))))))));
                var_29 = ((/* implicit */_Bool) max((((var_4) ? (((arr_42 [i_14]) ? (((/* implicit */int) arr_25 [i_14])) : (((/* implicit */int) var_2)))) : (((arr_29 [i_14 - 1] [i_11] [i_5] [i_5]) ? (((/* implicit */int) arr_42 [i_14])) : (((/* implicit */int) arr_26 [i_14 - 1] [i_14] [i_11] [(_Bool)1])))))), ((-(((var_1) ? (((/* implicit */int) arr_28 [i_5] [i_5])) : (((/* implicit */int) var_5))))))));
            }
            arr_48 [i_5] [i_11] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_5]))))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) max((max((var_6), (var_3))), (((var_6) || (var_1))))))));
        }
        var_30 = (!(((/* implicit */_Bool) min(((~(((/* implicit */int) arr_7 [i_5] [i_5] [i_5])))), ((+(((/* implicit */int) var_9))))))));
    }
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) max((var_8), (var_1)))) : (((((/* implicit */int) var_5)) & (((/* implicit */int) var_3))))))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) (!(var_5))))))));
}
