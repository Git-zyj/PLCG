/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219976
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
    var_16 ^= var_12;
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [(_Bool)1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */_Bool) min((var_17), (arr_0 [i_0])));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = (((((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))) << ((((~(((/* implicit */int) (_Bool)1)))) + (8))))) > (((/* implicit */int) ((var_14) || ((_Bool)1)))));
        arr_9 [i_1] [i_1] = var_15;
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_14 [i_2] = ((_Bool) ((_Bool) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_5)))));
        arr_15 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2 + 1])) - (((/* implicit */int) arr_0 [i_2 + 1]))))) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((((arr_1 [i_2] [i_2]) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) arr_12 [i_2 + 1])))) * (((/* implicit */int) arr_13 [i_2]))))));
        var_18 = ((_Bool) ((arr_1 [i_2] [i_2]) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(var_3))))));
    }
}
