/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192378
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
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) min(((_Bool)1), (var_1)))) : (((/* implicit */int) (!(((((/* implicit */int) var_2)) == (((/* implicit */int) (_Bool)1)))))))));
                var_11 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) max((var_3), (arr_5 [i_1])))) : (((/* implicit */int) arr_4 [i_0] [i_1 + 1])))) - (((((/* implicit */int) var_8)) >> (((/* implicit */int) max((var_8), (arr_3 [i_0]))))))));
                var_12 *= ((/* implicit */_Bool) ((((((((/* implicit */int) var_0)) + (((/* implicit */int) arr_1 [(_Bool)1])))) + (((var_8) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))));
                var_13 = arr_4 [i_0] [i_1 + 1];
            }
        } 
    } 
    var_14 *= ((/* implicit */_Bool) ((((((/* implicit */int) (!(var_6)))) >= (((/* implicit */int) var_9)))) ? (((/* implicit */int) ((_Bool) max((var_5), (var_6))))) : (((((/* implicit */int) ((_Bool) var_10))) << (((/* implicit */int) ((_Bool) (_Bool)0)))))));
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
}
