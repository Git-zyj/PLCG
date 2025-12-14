/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202445
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((_Bool)0) || ((_Bool)0))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [(signed char)15] [i_2] &= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32599))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)24268))));
                }
            } 
        } 
    } 
}
