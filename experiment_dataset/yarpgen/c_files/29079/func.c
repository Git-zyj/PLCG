/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29079
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((max(((_Bool)0), ((_Bool)0))) ? (((/* implicit */int) max((min((var_4), (((/* implicit */signed char) var_2)))), (((/* implicit */signed char) max((var_6), (var_14))))))) : (((/* implicit */int) min((((_Bool) (_Bool)1)), ((_Bool)0)))))))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((_Bool) (_Bool)0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_4 [(signed char)6]))))) || (((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))))) >= (((/* implicit */int) max((var_1), (arr_4 [i_0]))))))));
                var_21 |= var_17;
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) ((signed char) (signed char)122))))))));
}
