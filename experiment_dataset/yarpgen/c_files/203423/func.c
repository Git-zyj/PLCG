/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203423
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */signed char) (_Bool)0);
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0]))));
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))));
}
