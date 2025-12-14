/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240290
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_14 ^= arr_4 [i_0] [i_0] [i_0];
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_6))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((637222308077249943LL), (-4360442447809542772LL)))))))));
}
