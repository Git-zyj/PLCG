/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226418
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
    var_15 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (unsigned char)239))));
                var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-77)), (arr_3 [i_1] [i_0])))), ((~(((/* implicit */int) (unsigned char)43))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_1);
}
