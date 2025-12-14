/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51451
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((_Bool) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_2] [i_1] [(_Bool)1] [(_Bool)1]))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))) : (((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0])))))))));
                    arr_7 [i_0] [i_2] [i_0] [(_Bool)0] = arr_1 [i_0 - 1] [i_0];
                }
            } 
        } 
    } 
    var_17 = var_9;
    var_18 = ((/* implicit */_Bool) (+(max((((/* implicit */int) var_5)), ((-(((/* implicit */int) var_13))))))));
    var_19 &= (_Bool)1;
}
