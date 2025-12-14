/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33097
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16)))), (((/* implicit */int) (!(((/* implicit */_Bool) 462709885)))))))) && ((!(((/* implicit */_Bool) var_0))))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                var_21 = ((/* implicit */_Bool) (+(462709884)));
            }
        } 
    } 
}
