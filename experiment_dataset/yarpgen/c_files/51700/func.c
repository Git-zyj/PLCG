/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51700
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
    var_15 = var_2;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 += ((_Bool) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(_Bool)1])) ^ (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_2 [i_1])))) : (((arr_4 [i_1] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
        var_17 = ((_Bool) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
    }
    var_18 = ((/* implicit */_Bool) ((((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_14)))) == (((/* implicit */int) var_14)))) ? (((/* implicit */int) ((((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) == ((~(((/* implicit */int) (_Bool)1))))))) : (((min((var_12), ((_Bool)1))) ? (((var_5) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) : (((var_8) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))));
    var_19 ^= ((_Bool) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))));
    var_20 = ((/* implicit */_Bool) min((((((_Bool) var_9)) ? (((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) max((min(((_Bool)1), ((_Bool)1))), (var_10))))));
}
