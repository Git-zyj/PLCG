/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215269
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
    var_15 = ((((/* implicit */_Bool) max(((~(643956750))), (((/* implicit */int) (unsigned short)23578))))) ? (min((1265981076U), (1265981076U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_16 &= ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)23600)));
                var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) (+((+(arr_1 [3])))))) ? (min((((/* implicit */unsigned int) (unsigned short)47429)), (2686407976U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                var_18 += ((/* implicit */signed char) 1265981076U);
            }
        } 
    } 
}
