/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202584
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
        var_16 = ((_Bool) (_Bool)1);
        var_17 = ((_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_14))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] = arr_3 [i_0] [i_0];
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
            arr_7 [i_0] = (_Bool)0;
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((-((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
        var_18 ^= ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (max(((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_19 = (_Bool)0;
        arr_15 [i_3] [i_3] = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : ((((_Bool)0) ? (((/* implicit */int) arr_14 [i_3] [i_3])) : (((/* implicit */int) arr_14 [i_3] [i_3]))))));
    }
    var_20 += var_2;
    var_21 = (_Bool)1;
    var_22 = ((/* implicit */_Bool) ((var_6) ? (((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) min(((_Bool)1), (var_15)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_11))))) ? ((((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (!((_Bool)1))))))));
}
