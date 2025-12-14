/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24859
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
    var_14 = (unsigned short)59327;
    var_15 = ((/* implicit */signed char) (~(((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_10);
                    arr_9 [i_0] [(unsigned short)4] = var_4;
                }
            } 
        } 
    } 
}
