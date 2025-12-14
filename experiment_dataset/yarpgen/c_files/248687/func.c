/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248687
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) arr_1 [i_0])) ? ((~(((/* implicit */int) var_0)))) : (((arr_0 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_0]))))))) ? (((/* implicit */int) var_14)) : (((arr_2 [i_0] [i_0] [i_0 - 1]) ? (((var_5) ? (((/* implicit */int) arr_3 [i_0 - 1] [(_Bool)1])) : (((/* implicit */int) arr_1 [i_1 - 1])))) : ((+(((/* implicit */int) var_17)))))))))));
                var_21 = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) min((arr_2 [i_0] [i_0] [i_0 - 1]), (arr_4 [i_0] [(_Bool)1] [i_0 - 1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_22 += max(((_Bool)1), (var_8));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_13 [i_2] [i_4] [i_4] [i_5] = arr_4 [i_2] [(_Bool)1] [(_Bool)1];
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), ((_Bool)1)));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_1 [i_3 + 1])) : (((/* implicit */int) (_Bool)1)))))));
                            var_25 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
                            var_26 = arr_8 [i_3 + 1] [i_3 + 1];
                        }
                        var_27 = arr_1 [i_2];
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) min((var_28), (var_6)));
                        var_29 = ((_Bool) ((var_18) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_22 [i_2] [i_2] [i_4] [i_8] [i_8] = (_Bool)1;
                        arr_23 [(_Bool)1] [i_4] [(_Bool)1] = arr_16 [i_2] [i_2] [(_Bool)0] [(_Bool)1] [i_2] [i_2];
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */_Bool) min((var_30), ((!((_Bool)1)))));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 1])) * (((/* implicit */int) arr_2 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))) ? (((/* implicit */int) arr_14 [(_Bool)1] [i_2] [i_3 + 1] [i_3 + 1] [(_Bool)1])) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_32 = max(((!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))), ((!(arr_0 [i_2] [i_3]))));
                            var_33 = var_9;
                            var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_35 -= var_18;
                            arr_33 [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_11] [i_11] [i_4] [i_3 + 1]))));
                            arr_34 [i_2] [i_2] [i_4] [i_9] [i_2] [i_11] = arr_1 [i_4];
                        }
                    }
                    var_36 = ((/* implicit */_Bool) min((var_36), (var_5)));
                }
            } 
        } 
        var_37 = var_1;
        var_38 *= max((((_Bool) arr_17 [i_2] [i_2] [(_Bool)1] [i_2] [i_2])), (arr_11 [i_2] [(_Bool)1] [i_2] [i_2]));
    }
}
