/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214221
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(short)6] [i_2] [i_2] = ((/* implicit */_Bool) (~((+(((((/* implicit */int) arr_6 [i_0] [i_2] [i_1] [i_2])) & (((/* implicit */int) (_Bool)1))))))));
                    arr_9 [i_2] = ((/* implicit */short) (+((-(((/* implicit */int) (short)-17754))))));
                    arr_10 [i_0] [(short)12] [(short)16] [i_2] &= ((/* implicit */short) arr_6 [(short)12] [(_Bool)1] [i_2] [i_1]);
                }
            } 
        } 
    } 
    var_18 = max(((short)-1430), (min(((short)-1444), (((/* implicit */short) (_Bool)1)))));
}
