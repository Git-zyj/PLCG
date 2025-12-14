/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24865
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
    var_17 = ((/* implicit */_Bool) max((((/* implicit */int) var_14)), (((max((var_13), (var_8))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) : (((var_8) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = var_14;
        arr_3 [(_Bool)1] = (_Bool)1;
        var_18 = (_Bool)1;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 = var_16;
                        var_20 *= max((max((max(((_Bool)1), ((_Bool)1))), ((_Bool)1))), ((_Bool)1));
                    }
                } 
            } 
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? ((-((-(((/* implicit */int) arr_4 [i_1])))))) : (((/* implicit */int) max((var_9), (var_15)))))))));
            var_22 = ((/* implicit */_Bool) ((max((arr_5 [i_1] [i_2]), (var_13))) ? (((arr_5 [i_1] [(_Bool)1]) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
        }
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13)))), (((/* implicit */int) var_11))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_24 = var_7;
                        var_25 = ((/* implicit */_Bool) max((var_25), (var_3)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_30 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_17 [i_1]), (var_3))))));
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_26 = ((((var_13) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_25 [i_8] [i_10])))) >= (((/* implicit */int) var_9)));
                        var_27 ^= ((/* implicit */_Bool) max((((/* implicit */int) arr_10 [(_Bool)0] [i_9] [(_Bool)0])), ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_1] [i_9] [(_Bool)1])) : (((/* implicit */int) arr_10 [i_1] [i_1] [(_Bool)1]))))));
                        arr_35 [i_1] [i_8] [i_9] [i_9] [i_10] = var_6;
                        var_28 = ((/* implicit */_Bool) min((var_28), ((_Bool)1)));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((/* implicit */int) (_Bool)1))));
                        arr_38 [i_1] [i_8] [(_Bool)1] [i_11] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                        arr_39 [i_1] [(_Bool)0] [i_11] [i_1] = (_Bool)1;
                        var_30 = ((arr_8 [i_1] [i_1]) || (var_14));
                        var_31 = var_16;
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_32 &= ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_42 [(_Bool)1] [(_Bool)1] [i_9])))) | (((/* implicit */int) arr_28 [i_8] [i_12 - 1] [i_12 - 1]))));
                        arr_43 [(_Bool)1] [i_8] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_15))))) ? (((arr_4 [i_1]) ? (((/* implicit */int) arr_8 [i_1] [i_9])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_19 [(_Bool)1] [i_9] [i_8]))));
                        var_33 = ((/* implicit */_Bool) ((arr_37 [i_1] [i_8] [i_12]) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) arr_32 [i_1] [i_8] [(_Bool)1] [i_8] [i_12])) * (((/* implicit */int) arr_29 [i_1] [i_1]))))));
                        arr_44 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                    }
                }
            } 
        } 
    }
}
