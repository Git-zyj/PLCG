/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48205
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)1] = ((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_12)) : (min((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_10)))), (((/* implicit */int) arr_1 [i_1 + 1]))))));
                arr_6 [i_0] [i_1 + 1] = ((/* implicit */_Bool) ((((arr_3 [i_1 + 1] [i_1]) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_0])) : (((/* implicit */int) var_0)))) & (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
}
