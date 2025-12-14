/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203749
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) * ((+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))));
    var_21 = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) ((unsigned char) 1U)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (var_9)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */int) min((var_22), (var_7)));
                var_23 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
