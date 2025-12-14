/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200511
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 ^= (!((_Bool)1));
                var_17 = ((_Bool) var_7);
                var_18 ^= var_4;
            }
        } 
    } 
    var_19 -= ((/* implicit */_Bool) ((min((var_13), (var_12))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))));
    var_20 -= ((_Bool) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
}
