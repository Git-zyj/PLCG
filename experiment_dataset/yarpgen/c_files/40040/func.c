/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40040
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
    var_17 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)89)))))));
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) 9007199254740991ULL);
            }
        } 
    } 
    var_19 += ((/* implicit */short) var_15);
}
