/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46789
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
    var_15 = ((/* implicit */short) (((-((-(((/* implicit */int) (signed char)59)))))) / (var_1)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                var_16 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))));
                var_17 = ((/* implicit */short) var_11);
            }
        } 
    } 
}
