/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36289
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
    var_16 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [(_Bool)1] = ((unsigned int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))));
                arr_6 [i_1] = ((/* implicit */_Bool) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) ((var_13) || (var_15)))))))));
            }
        } 
    } 
    var_17 = max((((unsigned int) (~(((/* implicit */int) var_10))))), (var_9));
    var_18 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (var_14))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_9))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_6), (var_11))))))) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_15))) >= (((/* implicit */int) (!(var_13))))))) : (((/* implicit */int) var_2))));
}
