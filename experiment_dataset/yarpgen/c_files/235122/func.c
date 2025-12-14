/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235122
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
    var_11 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) ((int) 1201558508))) ? (((arr_5 [i_2 + 3] [i_2 + 3] [i_2] [i_2 + 1]) ? (((/* implicit */unsigned int) var_1)) : (arr_6 [i_1] [i_2 + 1] [i_2] [i_2]))) : (((/* implicit */unsigned int) ((int) arr_6 [i_1] [i_2 + 2] [i_2 + 2] [i_2]))));
                    var_13 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 4223702841444556080LL)) ? (arr_6 [i_0] [i_0 + 1] [i_2 - 1] [i_2]) : (arr_6 [i_0] [i_0 + 1] [i_2 + 2] [i_2]))));
                }
            } 
        } 
    } 
}
