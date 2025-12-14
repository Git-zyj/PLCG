/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249770
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) var_3)) + (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_11))))) ? (((((((/* implicit */int) var_12)) * (((/* implicit */int) var_6)))) / (((var_0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) max((var_10), (var_3)))))))));
    var_16 = var_9;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 += ((/* implicit */_Bool) ((max((max((var_5), ((_Bool)1))), (min(((_Bool)0), (var_9))))) ? (max((((/* implicit */int) var_0)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [(_Bool)1]))))));
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((max(((_Bool)1), ((_Bool)0))) ? (((/* implicit */int) arr_0 [i_0])) : (((arr_0 [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_18 |= (_Bool)1;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) var_8)) >> (((/* implicit */int) (_Bool)1)))) & (((arr_0 [(_Bool)1]) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) arr_0 [(_Bool)1]))))));
        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 &= ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */int) arr_4 [i_2] [i_2])) ^ (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))) ? (((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))) : (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_1)))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
        var_22 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((arr_3 [i_2]) ? (((/* implicit */int) arr_3 [(_Bool)1])) : (((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1]))))));
    }
}
