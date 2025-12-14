/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222045
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
    var_11 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [2LL] = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) (short)-12127)))));
                var_12 += ((/* implicit */short) (-(((/* implicit */int) (unsigned short)63093))));
            }
        } 
    } 
    var_13 = -9147034120303880291LL;
}
