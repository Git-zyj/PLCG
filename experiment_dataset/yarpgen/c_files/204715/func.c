/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204715
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
    var_17 = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(var_14)))))) : (((var_10) ? (((/* implicit */int) var_15)) : ((((_Bool)0) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9))))))));
    var_18 = ((/* implicit */_Bool) (((-(((var_16) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) var_15))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 += (!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
        var_20 += arr_0 [i_0];
        arr_2 [i_0] = (_Bool)1;
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (var_11)));
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((arr_0 [i_1]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
            var_23 &= ((/* implicit */_Bool) ((((arr_7 [i_2] [i_2]) && (((_Bool) var_10)))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1))));
            var_24 = (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((arr_10 [i_1] [i_3 + 1]) ? ((+(((/* implicit */int) arr_8 [i_1] [i_3])))) : ((-(((/* implicit */int) var_13)))))))));
            arr_12 [i_3 + 1] [(_Bool)1] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_3 + 1]))));
        }
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_24 [i_4] [(_Bool)1] [i_4] [i_4] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                        arr_25 [i_4] [i_4] [i_6 + 1] = (_Bool)1;
                        arr_26 [(_Bool)1] [(_Bool)1] [i_7] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        var_26 -= ((/* implicit */_Bool) ((arr_21 [i_4] [i_4] [i_4]) ? (((/* implicit */int) arr_17 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_0))));
        var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [(_Bool)1]))))) ? ((-(((/* implicit */int) arr_19 [i_4] [i_4])))) : (((arr_17 [i_4] [i_4] [i_4]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_4] [(_Bool)1] [i_4]))))));
        arr_27 [i_4] = (!(((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) arr_17 [i_4] [i_4] [i_4])) : (((/* implicit */int) (_Bool)1))))));
    }
    var_28 = ((/* implicit */_Bool) min((var_28), (var_15)));
}
