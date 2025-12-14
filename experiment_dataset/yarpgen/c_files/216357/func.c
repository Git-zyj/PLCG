/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216357
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
    var_18 = ((/* implicit */unsigned int) min((var_2), (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 = (+(((/* implicit */int) var_5)));
                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)39434))));
            }
        } 
    } 
}
