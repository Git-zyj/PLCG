/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201276
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
    var_20 = var_8;
    var_21 = ((/* implicit */_Bool) ((max((max((var_15), (var_1))), (var_11))) ? ((-(((((/* implicit */int) var_5)) - (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_3))));
    var_22 ^= var_11;
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_9 [(_Bool)1] [(_Bool)1] [i_2] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((arr_8 [i_2] [i_2] [i_2] [i_2]), (var_3)))))) + ((+(((((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0] [i_3])) * (((/* implicit */int) (_Bool)1))))))));
                            var_24 -= arr_7 [i_0] [i_2] [(_Bool)1];
                            var_25 = ((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                            {
                                var_26 = ((/* implicit */_Bool) max(((-(((/* implicit */int) max((arr_0 [i_0]), (arr_11 [i_1] [i_2])))))), (((max(((_Bool)1), (arr_0 [i_0]))) ? (((/* implicit */int) arr_3 [i_1] [i_4])) : (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))))));
                                var_27 = ((/* implicit */_Bool) ((arr_5 [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) ((_Bool) arr_5 [i_0 - 1] [i_0 - 1]))) : ((~(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]))))));
                                var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                                var_29 = var_15;
                                var_30 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])) * ((-(((((/* implicit */int) var_11)) - (((/* implicit */int) arr_0 [i_2]))))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) ((var_16) ? (((/* implicit */int) arr_15 [i_0] [i_1] [(_Bool)1] [i_3] [i_5])) : (((/* implicit */int) var_18))))))));
                                var_32 = max((var_13), (arr_3 [i_1] [i_1]));
                            }
                            /* LoopSeq 2 */
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                            {
                                var_33 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) min((min((arr_11 [i_1] [i_1]), (var_12))), ((!((_Bool)0))))))));
                                var_34 = arr_14 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0];
                                var_35 = ((/* implicit */_Bool) min((var_35), (var_0)));
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_36 = ((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [(_Bool)1])), ((-(((arr_4 [i_1]) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_6))))))));
                                var_37 |= arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [i_0 - 1];
                            }
                        }
                    } 
                } 
                var_38 = ((max(((_Bool)1), (max((arr_2 [(_Bool)1]), ((_Bool)0))))) && (((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
}
