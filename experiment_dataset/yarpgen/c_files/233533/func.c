/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233533
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
    var_19 = ((/* implicit */unsigned short) ((signed char) var_1));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [14U] [14U] [i_2] [14U] = ((/* implicit */_Bool) ((unsigned int) (signed char)-114));
                    var_20 = ((/* implicit */_Bool) (short)-7883);
                }
            } 
        } 
    } 
}
